#include <iostream>
#include <chrono>
#include <thread>
#include <memory>
#include <CommonAPI/CommonAPI.hpp>
#include "StubImplement.h"
using namespace std;

int main()
{

    cout << "Start to connect to Stub" << endl;
    std::shared_ptr<CommonAPI::Runtime> runtime = CommonAPI::Runtime::get();

    std::string domain = "local";
    std::string instance = "de.bmw.infotainment.telematic.simprofileselector.SimProfileSelector";

    std::shared_ptr<StubImplement> myService = std::make_shared<StubImplement>();
    bool successfullyRegistered = runtime->registerService(domain, instance, myService);

    while (!successfullyRegistered)
    {
        std::cout << "Register Service failed, trying again in 100 milliseconds..."<<endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
        successfullyRegistered = runtime->registerService(domain, instance, myService);
    }
    while(1)
    {

    }
    return 0;
}
