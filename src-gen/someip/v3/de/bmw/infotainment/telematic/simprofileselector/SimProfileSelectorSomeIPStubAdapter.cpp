/*
 * This file was generated by the CommonAPI Generators.
 * Used org.genivi.commonapi.someip 3.2.14.v202310241606.
 * Used org.franca.core 0.13.1.201807231814.
 *
 * This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
 * If a copy of the MPL was not distributed with this file, You can obtain one at
 * http://mozilla.org/MPL/2.0/.
 */
#include <v3/de/bmw/infotainment/telematic/simprofileselector/SimProfileSelectorSomeIPStubAdapter.hpp>
#include <v3/de/bmw/infotainment/telematic/simprofileselector/SimProfileSelector.hpp>

#if !defined (COMMONAPI_INTERNAL_COMPILATION)
#define COMMONAPI_INTERNAL_COMPILATION
#define HAS_DEFINED_COMMONAPI_INTERNAL_COMPILATION_HERE
#endif

#include <CommonAPI/SomeIP/AddressTranslator.hpp>

#if defined (HAS_DEFINED_COMMONAPI_INTERNAL_COMPILATION_HERE)
#undef COMMONAPI_INTERNAL_COMPILATION
#undef HAS_DEFINED_COMMONAPI_INTERNAL_COMPILATION_HERE
#endif

namespace v3 {
namespace de {
namespace bmw {
namespace infotainment {
namespace telematic {
namespace simprofileselector {

std::shared_ptr<CommonAPI::SomeIP::StubAdapter> createSimProfileSelectorSomeIPStubAdapter(
                   const CommonAPI::SomeIP::Address &_address,
                   const std::shared_ptr<CommonAPI::SomeIP::ProxyConnection> &_connection,
                   const std::shared_ptr<CommonAPI::StubBase> &_stub) {
    return std::make_shared< SimProfileSelectorSomeIPStubAdapter<::v3::de::bmw::infotainment::telematic::simprofileselector::SimProfileSelectorStub>>(_address, _connection, _stub);
}

void initializeSimProfileSelectorSomeIPStubAdapter() {
    CommonAPI::SomeIP::AddressTranslator::get()->insert(
        "local:de.bmw.infotainment.telematic.simprofileselector.SimProfileSelector:v3_0:1",
         0xb08e, 0x1, 3, 0);
    CommonAPI::SomeIP::Factory::get()->registerStubAdapterCreateMethod(
        "de.bmw.infotainment.telematic.simprofileselector.SimProfileSelector:v3_0",
        &createSimProfileSelectorSomeIPStubAdapter);
}

INITIALIZER(registerSimProfileSelectorSomeIPStubAdapter) {
    CommonAPI::SomeIP::Factory::get()->registerInterface(initializeSimProfileSelectorSomeIPStubAdapter);
}

} // namespace simprofileselector
} // namespace telematic
} // namespace infotainment
} // namespace bmw
} // namespace de
} // namespace v3
