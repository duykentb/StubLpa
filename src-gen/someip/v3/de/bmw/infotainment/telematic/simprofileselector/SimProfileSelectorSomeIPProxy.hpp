/*
 * This file was generated by the CommonAPI Generators.
 * Used org.genivi.commonapi.someip 3.2.14.v202310241606.
 * Used org.franca.core 0.13.1.201807231814.
 *
 * This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
 * If a copy of the MPL was not distributed with this file, You can obtain one at
 * http://mozilla.org/MPL/2.0/.
 */
#ifndef V3_DE_BMW_INFOTAINMENT_TELEMATIC_SIMPROFILESELECTOR_SIM_PROFILE_SELECTOR_SOMEIP_PROXY_HPP_
#define V3_DE_BMW_INFOTAINMENT_TELEMATIC_SIMPROFILESELECTOR_SIM_PROFILE_SELECTOR_SOMEIP_PROXY_HPP_

#include <v3/de/bmw/infotainment/telematic/simprofileselector/SimProfileSelectorProxyBase.hpp>
#include <de/bmw/infotainment/telematic/simprofileselectortypes/SimProfileSelectorTypesSomeIPDeployment.hpp>
#include <v3/de/bmw/infotainment/telematic/simprofileselector/SimProfileSelectorSomeIPDeployment.hpp>

#if !defined (COMMONAPI_INTERNAL_COMPILATION)
#define COMMONAPI_INTERNAL_COMPILATION
#define HAS_DEFINED_COMMONAPI_INTERNAL_COMPILATION_HERE
#endif

#include <CommonAPI/SomeIP/Factory.hpp>
#include <CommonAPI/SomeIP/Proxy.hpp>
#include <CommonAPI/SomeIP/Types.hpp>
#include <CommonAPI/SomeIP/Attribute.hpp>
#include <CommonAPI/SomeIP/Event.hpp>

#if defined (HAS_DEFINED_COMMONAPI_INTERNAL_COMPILATION_HERE)
#undef COMMONAPI_INTERNAL_COMPILATION
#undef HAS_DEFINED_COMMONAPI_INTERNAL_COMPILATION_HERE
#endif

#include <string>

# if defined(_MSC_VER)
#  if _MSC_VER >= 1300
/*
 * Diamond inheritance is used for the CommonAPI::Proxy base class.
 * The Microsoft compiler put warning (C4250) using a desired c++ feature: "Delegating to a sister class"
 * A powerful technique that arises from using virtual inheritance is to delegate a method from a class in another class
 * by using a common abstract base class. This is also called cross delegation.
 */
#    pragma warning( disable : 4250 )
#  endif
# endif

namespace v3 {
namespace de {
namespace bmw {
namespace infotainment {
namespace telematic {
namespace simprofileselector {

class SimProfileSelectorSomeIPProxy
    : virtual public SimProfileSelectorProxyBase,
      virtual public CommonAPI::SomeIP::Proxy {
public:
    SimProfileSelectorSomeIPProxy(
        const CommonAPI::SomeIP::Address &_address,
        const std::shared_ptr<CommonAPI::SomeIP::ProxyConnection> &_connection);

    virtual ~SimProfileSelectorSomeIPProxy();

    virtual CsimMemorySpaceAttribute& getCsimMemorySpaceAttribute();

    virtual CsimNetworkAttribute& getCsimNetworkAttribute();

    virtual EidAttribute& getEidAttribute();

    virtual ImeiAttribute& getImeiAttribute();

    virtual ProfilesAttribute& getProfilesAttribute();

    virtual PsimNetworkAttribute& getPsimNetworkAttribute();

    virtual DownloadAndInstallResultEvent& getDownloadAndInstallResultEvent();

    /*
     * description: 
     * Standard[en]=WAVE provides an interface to MGU where it can send a request to modify the current PIN used to protect the cSIM profile
     */
    virtual void changePin(::de::bmw::infotainment::telematic::simprofileselectortypes::SimProfileSelectorTypes::Iccid _iccid, ::de::bmw::infotainment::telematic::simprofileselectortypes::SimProfileSelectorTypes::Pin _oldPin, ::de::bmw::infotainment::telematic::simprofileselectortypes::SimProfileSelectorTypes::Pin _newPin, CommonAPI::CallStatus &_internalCallStatus, ::de::bmw::infotainment::telematic::simprofileselectortypes::SimProfileSelectorTypes::ModifyPinResult &_modifypin, const CommonAPI::CallInfo *_info);

    virtual std::future<CommonAPI::CallStatus> changePinAsync(const ::de::bmw::infotainment::telematic::simprofileselectortypes::SimProfileSelectorTypes::Iccid &_iccid, const ::de::bmw::infotainment::telematic::simprofileselectortypes::SimProfileSelectorTypes::Pin &_oldPin, const ::de::bmw::infotainment::telematic::simprofileselectortypes::SimProfileSelectorTypes::Pin &_newPin, ChangePinAsyncCallback _callback, const CommonAPI::CallInfo *_info);

    /*
     * description: 
     * Standard[en]=WAVE provides an interface to MGU where it send the information of Hotspot (data connection) status for the currently enabled profile.
     */
    virtual void configureDataConnection(::de::bmw::infotainment::telematic::simprofileselectortypes::SimProfileSelectorTypes::Iccid _iccid, bool _hotspotActive, CommonAPI::CallStatus &_internalCallStatus, ::de::bmw::infotainment::telematic::simprofileselectortypes::SimProfileSelectorTypes::DataConnectionConfigResult &_dataConfig, const CommonAPI::CallInfo *_info);

    virtual std::future<CommonAPI::CallStatus> configureDataConnectionAsync(const ::de::bmw::infotainment::telematic::simprofileselectortypes::SimProfileSelectorTypes::Iccid &_iccid, const bool &_hotspotActive, ConfigureDataConnectionAsyncCallback _callback, const CommonAPI::CallInfo *_info);

    /*
     * description: 
     * Standard[en]=WAVE provides an interface to MGU where it send the information of Roaming status for the currently enabled profile
     */
    virtual void configureProfileRoaming(::de::bmw::infotainment::telematic::simprofileselectortypes::SimProfileSelectorTypes::Iccid _iccid, bool _roamingActive, CommonAPI::CallStatus &_internalCallStatus, ::de::bmw::infotainment::telematic::simprofileselectortypes::SimProfileSelectorTypes::RoamingConfigResult &_roamingconfig, const CommonAPI::CallInfo *_info);

    virtual std::future<CommonAPI::CallStatus> configureProfileRoamingAsync(const ::de::bmw::infotainment::telematic::simprofileselectortypes::SimProfileSelectorTypes::Iccid &_iccid, const bool &_roamingActive, ConfigureProfileRoamingAsyncCallback _callback, const CommonAPI::CallInfo *_info);

    /*
     * description: 
     * Standard[en]=WAVE provides an interface to MGU where it can send a request to disable the protection of the user's SIM profile via PIN
     */
    virtual void disablePin(::de::bmw::infotainment::telematic::simprofileselectortypes::SimProfileSelectorTypes::Iccid _iccid, ::de::bmw::infotainment::telematic::simprofileselectortypes::SimProfileSelectorTypes::Pin _pin, CommonAPI::CallStatus &_internalCallStatus, ::de::bmw::infotainment::telematic::simprofileselectortypes::SimProfileSelectorTypes::RemovePinResult &_removepin, const CommonAPI::CallInfo *_info);

    virtual std::future<CommonAPI::CallStatus> disablePinAsync(const ::de::bmw::infotainment::telematic::simprofileselectortypes::SimProfileSelectorTypes::Iccid &_iccid, const ::de::bmw::infotainment::telematic::simprofileselectortypes::SimProfileSelectorTypes::Pin &_pin, DisablePinAsyncCallback _callback, const CommonAPI::CallInfo *_info);

    /*
     * description: 
     * Standard[en]=WAVE provides an interface to MGU where it can send a request to enable the protection of the user's SIM profile via PIN
     */
    virtual void enablePin(::de::bmw::infotainment::telematic::simprofileselectortypes::SimProfileSelectorTypes::Iccid _iccid, ::de::bmw::infotainment::telematic::simprofileselectortypes::SimProfileSelectorTypes::Pin _pin, CommonAPI::CallStatus &_internalCallStatus, ::de::bmw::infotainment::telematic::simprofileselectortypes::SimProfileSelectorTypes::SetPinResult &_setpin, const CommonAPI::CallInfo *_info);

    virtual std::future<CommonAPI::CallStatus> enablePinAsync(const ::de::bmw::infotainment::telematic::simprofileselectortypes::SimProfileSelectorTypes::Iccid &_iccid, const ::de::bmw::infotainment::telematic::simprofileselectortypes::SimProfileSelectorTypes::Pin &_pin, EnablePinAsyncCallback _callback, const CommonAPI::CallInfo *_info);

    /*
     * description: 
     * Standard[en]=WAVE provides an interface to MGU where it can request the deletion of all profiles installed in the vehicle
     */
    virtual void requestDeleteAllProfiles(CommonAPI::CallStatus &_internalCallStatus, ::de::bmw::infotainment::telematic::simprofileselectortypes::SimProfileSelectorTypes::DeleteAllResult &_deleteall, std::vector< ::de::bmw::infotainment::telematic::simprofileselectortypes::SimProfileSelectorTypes::Iccid > &_iccid, const CommonAPI::CallInfo *_info);

    virtual std::future<CommonAPI::CallStatus> requestDeleteAllProfilesAsync(RequestDeleteAllProfilesAsyncCallback _callback, const CommonAPI::CallInfo *_info);

    /*
     * description: 
     * Standard[en]=WAVE provides an interface to MGU where it can request the deletion of a consumer SIM profile
     */
    virtual void requestDeleteSimProfile(::de::bmw::infotainment::telematic::simprofileselectortypes::SimProfileSelectorTypes::Iccid _iccid, CommonAPI::CallStatus &_internalCallStatus, ::de::bmw::infotainment::telematic::simprofileselectortypes::SimProfileSelectorTypes::DeleteResult &_deleteresult, const CommonAPI::CallInfo *_info);

    virtual std::future<CommonAPI::CallStatus> requestDeleteSimProfileAsync(const ::de::bmw::infotainment::telematic::simprofileselectortypes::SimProfileSelectorTypes::Iccid &_iccid, RequestDeleteSimProfileAsyncCallback _callback, const CommonAPI::CallInfo *_info);

    /*
     * description: 
     * Standard[en]=WAVE provides an interface to MGU where it can request the disable of a consumer SIM profile
     */
    virtual void requestDisableSimProfile(::de::bmw::infotainment::telematic::simprofileselectortypes::SimProfileSelectorTypes::Iccid _iccid, CommonAPI::CallStatus &_internalCallStatus, ::de::bmw::infotainment::telematic::simprofileselectortypes::SimProfileSelectorTypes::DisableResult &_disableResult, const CommonAPI::CallInfo *_info);

    virtual std::future<CommonAPI::CallStatus> requestDisableSimProfileAsync(const ::de::bmw::infotainment::telematic::simprofileselectortypes::SimProfileSelectorTypes::Iccid &_iccid, RequestDisableSimProfileAsyncCallback _callback, const CommonAPI::CallInfo *_info);

    /*
     * description: 
     * Standard[en]=WAVE provides an interface to MGU where it can request the enable of a
     * (asterisk) consumer SIM profile
     */
    virtual void requestEnableSimProfile(::de::bmw::infotainment::telematic::simprofileselectortypes::SimProfileSelectorTypes::Iccid _iccid, CommonAPI::CallStatus &_internalCallStatus, ::de::bmw::infotainment::telematic::simprofileselectortypes::SimProfileSelectorTypes::EnableResult &_enableResult, const CommonAPI::CallInfo *_info);

    virtual std::future<CommonAPI::CallStatus> requestEnableSimProfileAsync(const ::de::bmw::infotainment::telematic::simprofileselectortypes::SimProfileSelectorTypes::Iccid &_iccid, RequestEnableSimProfileAsyncCallback _callback, const CommonAPI::CallInfo *_info);

    /*
     * description: 
     * Standard[en]=WAVE provides an interface to MGU it can send the activation code to the SIM profile switch component
     */
    virtual void sendActivationCode(::de::bmw::infotainment::telematic::simprofileselectortypes::SimProfileSelectorTypes::ActivationCode _activation, ::de::bmw::infotainment::telematic::simprofileselectortypes::SimProfileSelectorTypes::ConfirmationCode _confirmationCode, CommonAPI::CallStatus &_internalCallStatus, ::de::bmw::infotainment::telematic::simprofileselectortypes::SimProfileSelectorTypes::ActivationCodeResult &_acresult, const CommonAPI::CallInfo *_info);

    virtual std::future<CommonAPI::CallStatus> sendActivationCodeAsync(const ::de::bmw::infotainment::telematic::simprofileselectortypes::SimProfileSelectorTypes::ActivationCode &_activation, const ::de::bmw::infotainment::telematic::simprofileselectortypes::SimProfileSelectorTypes::ConfirmationCode &_confirmationCode, SendActivationCodeAsyncCallback _callback, const CommonAPI::CallInfo *_info);

    /*
     * description: 
     * Standard[en]=WAVE provides an interface to MGU where it can check whether the PIN stored or introduced by the user for ICCID is correct
     */
    virtual void unblockPin(::de::bmw::infotainment::telematic::simprofileselectortypes::SimProfileSelectorTypes::Iccid _iccid, ::de::bmw::infotainment::telematic::simprofileselectortypes::SimProfileSelectorTypes::Puk _puk, ::de::bmw::infotainment::telematic::simprofileselectortypes::SimProfileSelectorTypes::Pin _newPin, CommonAPI::CallStatus &_internalCallStatus, ::de::bmw::infotainment::telematic::simprofileselectortypes::SimProfileSelectorTypes::CheckPukResult &_checkpuk, const CommonAPI::CallInfo *_info);

    virtual std::future<CommonAPI::CallStatus> unblockPinAsync(const ::de::bmw::infotainment::telematic::simprofileselectortypes::SimProfileSelectorTypes::Iccid &_iccid, const ::de::bmw::infotainment::telematic::simprofileselectortypes::SimProfileSelectorTypes::Puk &_puk, const ::de::bmw::infotainment::telematic::simprofileselectortypes::SimProfileSelectorTypes::Pin &_newPin, UnblockPinAsyncCallback _callback, const CommonAPI::CallInfo *_info);

    /*
     * description: 
     * Standard[en]=WAVE provides an interface to MGU where it can check whether the PIN
     */
    virtual void verifyPin(::de::bmw::infotainment::telematic::simprofileselectortypes::SimProfileSelectorTypes::Iccid _iccid, ::de::bmw::infotainment::telematic::simprofileselectortypes::SimProfileSelectorTypes::Pin _pin, CommonAPI::CallStatus &_internalCallStatus, ::de::bmw::infotainment::telematic::simprofileselectortypes::SimProfileSelectorTypes::CheckPinResult &_checkpin, const CommonAPI::CallInfo *_info);

    virtual std::future<CommonAPI::CallStatus> verifyPinAsync(const ::de::bmw::infotainment::telematic::simprofileselectortypes::SimProfileSelectorTypes::Iccid &_iccid, const ::de::bmw::infotainment::telematic::simprofileselectortypes::SimProfileSelectorTypes::Pin &_pin, VerifyPinAsyncCallback _callback, const CommonAPI::CallInfo *_info);

    virtual void getOwnVersion(uint16_t &_major, uint16_t &_minor) const;

    virtual std::future<void> getCompletionFuture();

private:
    CommonAPI::SomeIP::ObservableAttribute<CommonAPI::SomeIP::ReadonlyAttribute<CsimMemorySpaceAttribute, CommonAPI::SomeIP::IntegerDeployment<int64_t>>> csimMemorySpace_;
    CommonAPI::SomeIP::ObservableAttribute<CommonAPI::SomeIP::ReadonlyAttribute<CsimNetworkAttribute, CommonAPI::SomeIP::StringDeployment>> csimNetwork_;
    CommonAPI::SomeIP::ObservableAttribute<CommonAPI::SomeIP::ReadonlyAttribute<EidAttribute, CommonAPI::SomeIP::StringDeployment>> eid_;
    CommonAPI::SomeIP::ObservableAttribute<CommonAPI::SomeIP::ReadonlyAttribute<ImeiAttribute, CommonAPI::SomeIP::StringDeployment>> imei_;
    CommonAPI::SomeIP::ObservableAttribute<CommonAPI::SomeIP::ReadonlyAttribute<ProfilesAttribute, CommonAPI::SomeIP::ArrayDeployment< ::de::bmw::infotainment::telematic::simprofileselectortypes::SimProfileSelectorTypes_::CSimProfileDeployment_t >>> profiles_;
    CommonAPI::SomeIP::ObservableAttribute<CommonAPI::SomeIP::ReadonlyAttribute<PsimNetworkAttribute, CommonAPI::SomeIP::StringDeployment>> psimNetwork_;
    CommonAPI::SomeIP::Event<DownloadAndInstallResultEvent, CommonAPI::Deployable< ::de::bmw::infotainment::telematic::simprofileselectortypes::SimProfileSelectorTypes::Iccid, CommonAPI::SomeIP::StringDeployment >, CommonAPI::Deployable< ::de::bmw::infotainment::telematic::simprofileselectortypes::SimProfileSelectorTypes::ActivationCode, CommonAPI::SomeIP::StringDeployment >, CommonAPI::Deployable< ::de::bmw::infotainment::telematic::simprofileselectortypes::SimProfileSelectorTypes::InstallationResult, ::de::bmw::infotainment::telematic::simprofileselectortypes::SimProfileSelectorTypes_::InstallationResultDeployment_t >> downloadAndInstallResult_;

};

} // namespace simprofileselector
} // namespace telematic
} // namespace infotainment
} // namespace bmw
} // namespace de
} // namespace v3

#endif // V3_DE_BMW_INFOTAINMENT_TELEMATIC_SIMPROFILESELECTOR_Sim_Profile_Selector_SOMEIP_PROXY_HPP_
