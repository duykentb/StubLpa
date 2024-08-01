/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.core 3.2.14.v202310241605.
* Used org.franca.core 0.13.1.201807231814.
*
* This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
* If a copy of the MPL was not distributed with this file, You can obtain one at
* http://mozilla.org/MPL/2.0/.
*/
#ifndef V2_DE_BMW_INFOTAINMENT_TELEMATIC_SIMPROFILESELECTOR_Sim_Profile_Selector_PROXY_BASE_HPP_
#define V2_DE_BMW_INFOTAINMENT_TELEMATIC_SIMPROFILESELECTOR_Sim_Profile_Selector_PROXY_BASE_HPP_

#include <v2/de/bmw/infotainment/telematic/simprofileselector/SimProfileSelector.hpp>


#include <de/bmw/infotainment/telematic/simprofileselectortypes/SimProfileSelectorTypes.hpp>

#if !defined (COMMONAPI_INTERNAL_COMPILATION)
#define COMMONAPI_INTERNAL_COMPILATION
#define HAS_DEFINED_COMMONAPI_INTERNAL_COMPILATION_HERE
#endif

#include <CommonAPI/Deployment.hpp>
#include <CommonAPI/InputStream.hpp>
#include <CommonAPI/OutputStream.hpp>
#include <CommonAPI/Struct.hpp>
#include <cstdint>
#include <string>
#include <vector>

#include <CommonAPI/Attribute.hpp>
#include <CommonAPI/Event.hpp>
#include <CommonAPI/Proxy.hpp>
#include <functional>
#include <future>

#if defined (HAS_DEFINED_COMMONAPI_INTERNAL_COMPILATION_HERE)
#undef COMMONAPI_INTERNAL_COMPILATION
#undef HAS_DEFINED_COMMONAPI_INTERNAL_COMPILATION_HERE
#endif

namespace v2 {
namespace de {
namespace bmw {
namespace infotainment {
namespace telematic {
namespace simprofileselector {

class SimProfileSelectorProxyBase
    : virtual public CommonAPI::Proxy {
public:
    typedef CommonAPI::Event<
        ::de::bmw::infotainment::telematic::simprofileselectortypes::SimProfileSelectorTypes::Iccid, ::de::bmw::infotainment::telematic::simprofileselectortypes::SimProfileSelectorTypes::InstallationResult
    > DownloadAndInstallResultEvent;
    typedef CommonAPI::ObservableReadonlyAttribute<int64_t> CsimMemorySpaceAttribute;
    typedef CommonAPI::ObservableReadonlyAttribute<std::string> CsimNetworkStatusAttribute;
    typedef CommonAPI::ObservableReadonlyAttribute<::de::bmw::infotainment::telematic::simprofileselectortypes::SimProfileSelectorTypes::Eid> EidAttribute;
    typedef CommonAPI::ObservableReadonlyAttribute<::de::bmw::infotainment::telematic::simprofileselectortypes::SimProfileSelectorTypes::Imei> ImeiAttribute;
    typedef CommonAPI::ObservableReadonlyAttribute<uint8_t> PinRetriesAttribute;
    typedef CommonAPI::ObservableReadonlyAttribute<std::vector< ::de::bmw::infotainment::telematic::simprofileselectortypes::SimProfileSelectorTypes::CSimProfile >> ProfilesAttribute;
    typedef CommonAPI::ObservableReadonlyAttribute<uint8_t> PukRetriesAttribute;

    typedef std::function<void(const CommonAPI::CallStatus&, const ::de::bmw::infotainment::telematic::simprofileselectortypes::SimProfileSelectorTypes::ModifyPinResult&)> ChangePinAsyncCallback;
    typedef std::function<void(const CommonAPI::CallStatus&, const ::de::bmw::infotainment::telematic::simprofileselectortypes::SimProfileSelectorTypes::HotspotConfigResult&)> ConfigureProfileHotspotAsyncCallback;
    typedef std::function<void(const CommonAPI::CallStatus&, const ::de::bmw::infotainment::telematic::simprofileselectortypes::SimProfileSelectorTypes::RoamingConfigResult&)> ConfigureProfileRoamingAsyncCallback;
    typedef std::function<void(const CommonAPI::CallStatus&, const ::de::bmw::infotainment::telematic::simprofileselectortypes::SimProfileSelectorTypes::RemovePinResult&)> DisablePinAsyncCallback;
    typedef std::function<void(const CommonAPI::CallStatus&, const ::de::bmw::infotainment::telematic::simprofileselectortypes::SimProfileSelectorTypes::SetPinResult&)> EnablePinAsyncCallback;
    typedef std::function<void(const CommonAPI::CallStatus&, const ::de::bmw::infotainment::telematic::simprofileselectortypes::SimProfileSelectorTypes::DeleteAllResult&, const std::vector< ::de::bmw::infotainment::telematic::simprofileselectortypes::SimProfileSelectorTypes::Iccid >&)> RequestDeleteAllProfilesAsyncCallback;
    typedef std::function<void(const CommonAPI::CallStatus&, const ::de::bmw::infotainment::telematic::simprofileselectortypes::SimProfileSelectorTypes::DeleteResult&)> RequestDeleteSimProfileAsyncCallback;
    typedef std::function<void(const CommonAPI::CallStatus&, const ::de::bmw::infotainment::telematic::simprofileselectortypes::SimProfileSelectorTypes::DisableResult&)> RequestDisableSimProfileAsyncCallback;
    typedef std::function<void(const CommonAPI::CallStatus&, const ::de::bmw::infotainment::telematic::simprofileselectortypes::SimProfileSelectorTypes::EnableResult&)> RequestEnableSimProfileAsyncCallback;
    typedef std::function<void(const CommonAPI::CallStatus&, const ::de::bmw::infotainment::telematic::simprofileselectortypes::SimProfileSelectorTypes::ActivationCodeResult&)> SendActivationCodeAsyncCallback;
    typedef std::function<void(const CommonAPI::CallStatus&, const ::de::bmw::infotainment::telematic::simprofileselectortypes::SimProfileSelectorTypes::CheckPukResult&)> UnblockPinAsyncCallback;
    typedef std::function<void(const CommonAPI::CallStatus&, const ::de::bmw::infotainment::telematic::simprofileselectortypes::SimProfileSelectorTypes::CheckPinResult&)> VerifyPinAsyncCallback;

    /*
     * description: 
     * Standard[en]=WAVE broadcasts the result of the download and installation the consumer SIM profile started with the sendActivationCode method
     * SPP subscribes to this broadcast after sending an activation code to start the download process
     */
    virtual DownloadAndInstallResultEvent& getDownloadAndInstallResultEvent() = 0;
    /*
     * description: 
     * Standard[en]=WAVE provides an interface to MGU where it can send a request to modify the current PIN used to protect the cSIM profile
     */
    virtual void changePin(::de::bmw::infotainment::telematic::simprofileselectortypes::SimProfileSelectorTypes::Iccid _iccid, ::de::bmw::infotainment::telematic::simprofileselectortypes::SimProfileSelectorTypes::Pin _oldPin, ::de::bmw::infotainment::telematic::simprofileselectortypes::SimProfileSelectorTypes::Pin _newPin, CommonAPI::CallStatus &_internalCallStatus, ::de::bmw::infotainment::telematic::simprofileselectortypes::SimProfileSelectorTypes::ModifyPinResult &_modifypin, const CommonAPI::CallInfo *_info = nullptr) = 0;
    virtual std::future<CommonAPI::CallStatus> changePinAsync(const ::de::bmw::infotainment::telematic::simprofileselectortypes::SimProfileSelectorTypes::Iccid &_iccid, const ::de::bmw::infotainment::telematic::simprofileselectortypes::SimProfileSelectorTypes::Pin &_oldPin, const ::de::bmw::infotainment::telematic::simprofileselectortypes::SimProfileSelectorTypes::Pin &_newPin, ChangePinAsyncCallback _callback = nullptr, const CommonAPI::CallInfo *_info = nullptr) = 0;
    /*
     * description: 
     * Standard[en]=WAVE provides an interface to MGU where it send the information of Hotspot (data connection) status for the currently enabled profile.
     */
    virtual void configureProfileHotspot(::de::bmw::infotainment::telematic::simprofileselectortypes::SimProfileSelectorTypes::Iccid _iccid, bool _hotspotActive, CommonAPI::CallStatus &_internalCallStatus, ::de::bmw::infotainment::telematic::simprofileselectortypes::SimProfileSelectorTypes::HotspotConfigResult &_hospotconfig, const CommonAPI::CallInfo *_info = nullptr) = 0;
    virtual std::future<CommonAPI::CallStatus> configureProfileHotspotAsync(const ::de::bmw::infotainment::telematic::simprofileselectortypes::SimProfileSelectorTypes::Iccid &_iccid, const bool &_hotspotActive, ConfigureProfileHotspotAsyncCallback _callback = nullptr, const CommonAPI::CallInfo *_info = nullptr) = 0;
    /*
     * description: 
     * Standard[en]=WAVE provides an interface to MGU where it send the information of Roaming status for the currently enabled profile
     */
    virtual void configureProfileRoaming(::de::bmw::infotainment::telematic::simprofileselectortypes::SimProfileSelectorTypes::Iccid _iccid, bool _roamingActive, CommonAPI::CallStatus &_internalCallStatus, ::de::bmw::infotainment::telematic::simprofileselectortypes::SimProfileSelectorTypes::RoamingConfigResult &_roamingconfig, const CommonAPI::CallInfo *_info = nullptr) = 0;
    virtual std::future<CommonAPI::CallStatus> configureProfileRoamingAsync(const ::de::bmw::infotainment::telematic::simprofileselectortypes::SimProfileSelectorTypes::Iccid &_iccid, const bool &_roamingActive, ConfigureProfileRoamingAsyncCallback _callback = nullptr, const CommonAPI::CallInfo *_info = nullptr) = 0;
    /*
     * description: 
     * Standard[en]=WAVE provides an interface to MGU where it can send a request to disable the protection of the user's SIM profile via PIN
     */
    virtual void disablePin(::de::bmw::infotainment::telematic::simprofileselectortypes::SimProfileSelectorTypes::Iccid _iccid, ::de::bmw::infotainment::telematic::simprofileselectortypes::SimProfileSelectorTypes::Pin _pin, CommonAPI::CallStatus &_internalCallStatus, ::de::bmw::infotainment::telematic::simprofileselectortypes::SimProfileSelectorTypes::RemovePinResult &_removepin, const CommonAPI::CallInfo *_info = nullptr) = 0;
    virtual std::future<CommonAPI::CallStatus> disablePinAsync(const ::de::bmw::infotainment::telematic::simprofileselectortypes::SimProfileSelectorTypes::Iccid &_iccid, const ::de::bmw::infotainment::telematic::simprofileselectortypes::SimProfileSelectorTypes::Pin &_pin, DisablePinAsyncCallback _callback = nullptr, const CommonAPI::CallInfo *_info = nullptr) = 0;
    /*
     * description: 
     * Standard[en]=WAVE provides an interface to MGU where it can send a request to enable the protection of the user's SIM profile via PIN
     */
    virtual void enablePin(::de::bmw::infotainment::telematic::simprofileselectortypes::SimProfileSelectorTypes::Iccid _iccid, ::de::bmw::infotainment::telematic::simprofileselectortypes::SimProfileSelectorTypes::Pin _pin, CommonAPI::CallStatus &_internalCallStatus, ::de::bmw::infotainment::telematic::simprofileselectortypes::SimProfileSelectorTypes::SetPinResult &_setpin, const CommonAPI::CallInfo *_info = nullptr) = 0;
    virtual std::future<CommonAPI::CallStatus> enablePinAsync(const ::de::bmw::infotainment::telematic::simprofileselectortypes::SimProfileSelectorTypes::Iccid &_iccid, const ::de::bmw::infotainment::telematic::simprofileselectortypes::SimProfileSelectorTypes::Pin &_pin, EnablePinAsyncCallback _callback = nullptr, const CommonAPI::CallInfo *_info = nullptr) = 0;
    /*
     * description: 
     * Standard[en]=WAVE provides an interface to MGU where it can request the deletion of all profiles installed in the vehicle
     */
    virtual void requestDeleteAllProfiles(CommonAPI::CallStatus &_internalCallStatus, ::de::bmw::infotainment::telematic::simprofileselectortypes::SimProfileSelectorTypes::DeleteAllResult &_deleteall, std::vector< ::de::bmw::infotainment::telematic::simprofileselectortypes::SimProfileSelectorTypes::Iccid > &_iccid, const CommonAPI::CallInfo *_info = nullptr) = 0;
    virtual std::future<CommonAPI::CallStatus> requestDeleteAllProfilesAsync(RequestDeleteAllProfilesAsyncCallback _callback = nullptr, const CommonAPI::CallInfo *_info = nullptr) = 0;
    /*
     * description: 
     * Standard[en]=WAVE provides an interface to MGU where it can request the deletion of a consumer SIM profile
     */
    virtual void requestDeleteSimProfile(::de::bmw::infotainment::telematic::simprofileselectortypes::SimProfileSelectorTypes::Iccid _iccid, CommonAPI::CallStatus &_internalCallStatus, ::de::bmw::infotainment::telematic::simprofileselectortypes::SimProfileSelectorTypes::DeleteResult &_deleteresult, const CommonAPI::CallInfo *_info = nullptr) = 0;
    virtual std::future<CommonAPI::CallStatus> requestDeleteSimProfileAsync(const ::de::bmw::infotainment::telematic::simprofileselectortypes::SimProfileSelectorTypes::Iccid &_iccid, RequestDeleteSimProfileAsyncCallback _callback = nullptr, const CommonAPI::CallInfo *_info = nullptr) = 0;
    /*
     * description: 
     * Standard[en]=WAVE provides an interface to MGU where it can request the disable of a consumer SIM profile
     */
    virtual void requestDisableSimProfile(::de::bmw::infotainment::telematic::simprofileselectortypes::SimProfileSelectorTypes::Iccid _iccid, CommonAPI::CallStatus &_internalCallStatus, ::de::bmw::infotainment::telematic::simprofileselectortypes::SimProfileSelectorTypes::DisableResult &_disableResult, const CommonAPI::CallInfo *_info = nullptr) = 0;
    virtual std::future<CommonAPI::CallStatus> requestDisableSimProfileAsync(const ::de::bmw::infotainment::telematic::simprofileselectortypes::SimProfileSelectorTypes::Iccid &_iccid, RequestDisableSimProfileAsyncCallback _callback = nullptr, const CommonAPI::CallInfo *_info = nullptr) = 0;
    /*
     * description: 
     * Standard[en]=WAVE provides an interface to MGU where it can request the enable of a
     * (asterisk) consumer SIM profile
     */
    virtual void requestEnableSimProfile(::de::bmw::infotainment::telematic::simprofileselectortypes::SimProfileSelectorTypes::Iccid _iccid, CommonAPI::CallStatus &_internalCallStatus, ::de::bmw::infotainment::telematic::simprofileselectortypes::SimProfileSelectorTypes::EnableResult &_enableResult, const CommonAPI::CallInfo *_info = nullptr) = 0;
    virtual std::future<CommonAPI::CallStatus> requestEnableSimProfileAsync(const ::de::bmw::infotainment::telematic::simprofileselectortypes::SimProfileSelectorTypes::Iccid &_iccid, RequestEnableSimProfileAsyncCallback _callback = nullptr, const CommonAPI::CallInfo *_info = nullptr) = 0;
    /*
     * description: 
     * Standard[en]=WAVE provides an interface to MGU it can send the activation code to the SIM profile switch component
     */
    virtual void sendActivationCode(::de::bmw::infotainment::telematic::simprofileselectortypes::SimProfileSelectorTypes::ActivationCode _activation, ::de::bmw::infotainment::telematic::simprofileselectortypes::SimProfileSelectorTypes::ConfirmationCode _confirmationCode, CommonAPI::CallStatus &_internalCallStatus, ::de::bmw::infotainment::telematic::simprofileselectortypes::SimProfileSelectorTypes::ActivationCodeResult &_acresult, const CommonAPI::CallInfo *_info = nullptr) = 0;
    virtual std::future<CommonAPI::CallStatus> sendActivationCodeAsync(const ::de::bmw::infotainment::telematic::simprofileselectortypes::SimProfileSelectorTypes::ActivationCode &_activation, const ::de::bmw::infotainment::telematic::simprofileselectortypes::SimProfileSelectorTypes::ConfirmationCode &_confirmationCode, SendActivationCodeAsyncCallback _callback = nullptr, const CommonAPI::CallInfo *_info = nullptr) = 0;
    /*
     * description: 
     * Standard[en]=WAVE provides an interface to MGU where it can check whether the PIN stored or introduced by the user for ICCID is correct
     */
    virtual void unblockPin(::de::bmw::infotainment::telematic::simprofileselectortypes::SimProfileSelectorTypes::Iccid _iccid, ::de::bmw::infotainment::telematic::simprofileselectortypes::SimProfileSelectorTypes::Puk _puk, ::de::bmw::infotainment::telematic::simprofileselectortypes::SimProfileSelectorTypes::Pin _newPin, CommonAPI::CallStatus &_internalCallStatus, ::de::bmw::infotainment::telematic::simprofileselectortypes::SimProfileSelectorTypes::CheckPukResult &_checkpuk, const CommonAPI::CallInfo *_info = nullptr) = 0;
    virtual std::future<CommonAPI::CallStatus> unblockPinAsync(const ::de::bmw::infotainment::telematic::simprofileselectortypes::SimProfileSelectorTypes::Iccid &_iccid, const ::de::bmw::infotainment::telematic::simprofileselectortypes::SimProfileSelectorTypes::Puk &_puk, const ::de::bmw::infotainment::telematic::simprofileselectortypes::SimProfileSelectorTypes::Pin &_newPin, UnblockPinAsyncCallback _callback = nullptr, const CommonAPI::CallInfo *_info = nullptr) = 0;
    /*
     * description: 
     * Standard[en]=WAVE provides an interface to MGU where it can check whether the PIN
     */
    virtual void verifyPin(::de::bmw::infotainment::telematic::simprofileselectortypes::SimProfileSelectorTypes::Iccid _iccid, ::de::bmw::infotainment::telematic::simprofileselectortypes::SimProfileSelectorTypes::Pin _pin, CommonAPI::CallStatus &_internalCallStatus, ::de::bmw::infotainment::telematic::simprofileselectortypes::SimProfileSelectorTypes::CheckPinResult &_checkpin, const CommonAPI::CallInfo *_info = nullptr) = 0;
    virtual std::future<CommonAPI::CallStatus> verifyPinAsync(const ::de::bmw::infotainment::telematic::simprofileselectortypes::SimProfileSelectorTypes::Iccid &_iccid, const ::de::bmw::infotainment::telematic::simprofileselectortypes::SimProfileSelectorTypes::Pin &_pin, VerifyPinAsyncCallback _callback = nullptr, const CommonAPI::CallInfo *_info = nullptr) = 0;
    /*
     * description: 
     * Standard[en]=WAVE provides an interface to MGU where it can request the CSIM free memory space.
     */
    virtual CsimMemorySpaceAttribute& getCsimMemorySpaceAttribute() = 0;
    /*
     * description: 
     * Standard[en]=WAVE provides an interface to the MGU where it can receive the current network status of the cSIM
     */
    virtual CsimNetworkStatusAttribute& getCsimNetworkStatusAttribute() = 0;
    /*
     * description: 
     * Standard[en]=WAVE provides an interface to the MGU where it can receive the EID of the CSIM
     */
    virtual EidAttribute& getEidAttribute() = 0;
    /*
     * description: 
     * Standard[en]=WAVE provides an interface to the MGU where it can receive the IMEI of the CSIM
     */
    virtual ImeiAttribute& getImeiAttribute() = 0;
    /*
     * description: 
     * Standard[en]=WAVE provides an interface to MGU where it can request he number of PIN retries that the current ICCID has left
     */
    virtual PinRetriesAttribute& getPinRetriesAttribute() = 0;
    /*
     * description: 
     * Standard[en]=WAVE provides an interface to the MGU where it can receive a list of the  existing profiles stored in the consumer SIM.
     */
    virtual ProfilesAttribute& getProfilesAttribute() = 0;
    /*
     * description: 
     * Standard[en]=WAVE provides an interface to MGU where it can request the number of PUK retries that the current ICCID has left
     */
    virtual PukRetriesAttribute& getPukRetriesAttribute() = 0;

    virtual std::future<void> getCompletionFuture() = 0;
};

} // namespace simprofileselector
} // namespace telematic
} // namespace infotainment
} // namespace bmw
} // namespace de
} // namespace v2


// Compatibility
namespace v2_0 = v2;

#endif // V2_DE_BMW_INFOTAINMENT_TELEMATIC_SIMPROFILESELECTOR_Sim_Profile_Selector_PROXY_BASE_HPP_
