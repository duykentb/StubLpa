cmake_minimum_required(VERSION 3.16)

project(StubLpa LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

option(COMMONAPI_INTERNAL_COMPILATION "Use internal SomeIP interface deployment or via shared lib" ON)

if(COMMONAPI_INTERNAL_COMPILATION)
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -DCOMMONAPI_INTERNAL_COMPILATION")
    message("add command")
endif()

find_package(CommonAPI 3.2.0 REQUIRED)
include_directories(${COMMONAPI_INCLUDE_DIRS})
list(APPEND USED_LIBS CommonAPI)

find_package (CommonAPI-SomeIP 3.2.0 REQUIRED)
include_directories(${CommonAPI-SomeIP_INCLUDE_DIRS})
if(COMMONAPI_INTERNAL_COMPILATION)
    list(APPEND USED_LIBS CommonAPI-SomeIP)
endif()


find_package (vsomeip3 3.1.0 REQUIRED)

list(APPEND SERVICE_COMMONAPI_GEN_SRCS
    src-gen/core/v3/de/bmw/infotainment/telematic/simprofileselector/SimProfileSelector.hpp
    src-gen/core/v3/de/bmw/infotainment/telematic/simprofileselector/SimProfileSelectorStubDefault.hpp
    src-gen/core/v3/de/bmw/infotainment/telematic/simprofileselector/SimProfileSelectorStub.hpp
    src-gen/core/de/bmw/infotainment/telematic/simprofileselectortypes/SimProfileSelectorTypes.hpp
)


list(APPEND COMMON_SOMEIP_GEN_SRCS
    src-gen/someip/v3/de/bmw/infotainment/telematic/simprofileselector/SimProfileSelectorSomeIPDeployment.hpp
    src-gen/someip/v3/de/bmw/infotainment/telematic/simprofileselector/SimProfileSelectorSomeIPDeployment.cpp
    src-gen/someip/de/bmw/infotainment/telematic/simprofileselectortypes/SimProfileSelectorTypesSomeIPDeployment.cpp
    src-gen/someip/de/bmw/infotainment/telematic/simprofileselectortypes/SimProfileSelectorTypesSomeIPDeployment.hpp
)

list(APPEND SERVICE_SOMEIP_GEN_SRCS
    src-gen/someip/v3/de/bmw/infotainment/telematic/simprofileselector/SimProfileSelectorSomeIPStubAdapter.cpp
    src-gen/someip/v3/de/bmw/infotainment/telematic/simprofileselector/SimProfileSelectorSomeIPStubAdapter.hpp
)
set(PROJECT_SOURCES
        main.cpp
        ${SERVICE_COMMONAPI_GEN_SRCS}
        ${COMMON_SOMEIP_GEN_SRCS}
        ${SERVICE_SOMEIP_GEN_SRCS}
)
include_directories(
    ${COMMONAPI_INCLUDE_DIRS}
    ${COMMONAPI_SOMEIP_INCLUDE_DIRS}
    ${VSOMEIP_INCLUDE_DIRS}
    src-gen/someip
    src-gen/core
)
add_executable(StubLpa ${PROJECT_SOURCES}
    StubImplement.h StubImplement.cpp)
target_link_libraries(StubLpa PRIVATE ${USED_LIBS})
include(GNUInstallDirs)
install(TARGETS StubLpa
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
