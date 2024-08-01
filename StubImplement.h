#ifndef STUBIMPLEMENT_H
#define STUBIMPLEMENT_H

#include "src-gen/core/v3/de/bmw/infotainment/telematic/simprofileselector/SimProfileSelectorStubDefault.hpp"
#include "src-gen/core/de/bmw/infotainment/telematic/simprofileselectortypes/SimProfileSelectorTypes.hpp"
#include "CommonAPI/CommonAPI.hpp"

using namespace v3::de::bmw::infotainment::telematic::simprofileselector;
using namespace de::bmw::infotainment::telematic::simprofileselectortypes;
class StubImplement: public SimProfileSelectorStubDefault
{
public:
    StubImplement() = default;

    virtual void requestEnableSimProfile(const std::shared_ptr<CommonAPI::ClientId> _client, ::de::bmw::infotainment::telematic::simprofileselectortypes::SimProfileSelectorTypes::Iccid _iccid,requestEnableSimProfileReply_t _reply) override;
};

#endif // STUBIMPLEMENT_H
