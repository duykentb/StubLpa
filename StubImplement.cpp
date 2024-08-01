#include "StubImplement.h"

void StubImplement::requestEnableSimProfile(const std::shared_ptr<CommonAPI::ClientId> _client, ::de::bmw::infotainment::telematic::simprofileselectortypes::SimProfileSelectorTypes::Iccid _iccid,requestEnableSimProfileReply_t _reply)
{
    std::cout<<"Handle a new request enable profile iccid="<<_iccid<<std::endl;
    SimProfileSelectorTypes::EnableResult enableResult(SimProfileSelectorTypes::RequestEnableSimProfileResult::SUCCESS,0);
    (void)_client;
    _reply(enableResult);
}
