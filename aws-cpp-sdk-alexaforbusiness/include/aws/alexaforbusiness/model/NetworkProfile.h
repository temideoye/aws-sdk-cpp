﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/alexaforbusiness/AlexaForBusiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/alexaforbusiness/model/NetworkSecurityType.h>
#include <aws/alexaforbusiness/model/NetworkEapMethod.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace AlexaForBusiness
{
namespace Model
{

  /**
   * <p>The network profile associated with a device.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/NetworkProfile">AWS
   * API Reference</a></p>
   */
  class AWS_ALEXAFORBUSINESS_API NetworkProfile
  {
  public:
    NetworkProfile();
    NetworkProfile(Aws::Utils::Json::JsonView jsonValue);
    NetworkProfile& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN of the network profile associated with a device.</p>
     */
    inline const Aws::String& GetNetworkProfileArn() const{ return m_networkProfileArn; }

    /**
     * <p>The ARN of the network profile associated with a device.</p>
     */
    inline bool NetworkProfileArnHasBeenSet() const { return m_networkProfileArnHasBeenSet; }

    /**
     * <p>The ARN of the network profile associated with a device.</p>
     */
    inline void SetNetworkProfileArn(const Aws::String& value) { m_networkProfileArnHasBeenSet = true; m_networkProfileArn = value; }

    /**
     * <p>The ARN of the network profile associated with a device.</p>
     */
    inline void SetNetworkProfileArn(Aws::String&& value) { m_networkProfileArnHasBeenSet = true; m_networkProfileArn = std::move(value); }

    /**
     * <p>The ARN of the network profile associated with a device.</p>
     */
    inline void SetNetworkProfileArn(const char* value) { m_networkProfileArnHasBeenSet = true; m_networkProfileArn.assign(value); }

    /**
     * <p>The ARN of the network profile associated with a device.</p>
     */
    inline NetworkProfile& WithNetworkProfileArn(const Aws::String& value) { SetNetworkProfileArn(value); return *this;}

    /**
     * <p>The ARN of the network profile associated with a device.</p>
     */
    inline NetworkProfile& WithNetworkProfileArn(Aws::String&& value) { SetNetworkProfileArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the network profile associated with a device.</p>
     */
    inline NetworkProfile& WithNetworkProfileArn(const char* value) { SetNetworkProfileArn(value); return *this;}


    /**
     * <p>The name of the network profile associated with a device.</p>
     */
    inline const Aws::String& GetNetworkProfileName() const{ return m_networkProfileName; }

    /**
     * <p>The name of the network profile associated with a device.</p>
     */
    inline bool NetworkProfileNameHasBeenSet() const { return m_networkProfileNameHasBeenSet; }

    /**
     * <p>The name of the network profile associated with a device.</p>
     */
    inline void SetNetworkProfileName(const Aws::String& value) { m_networkProfileNameHasBeenSet = true; m_networkProfileName = value; }

    /**
     * <p>The name of the network profile associated with a device.</p>
     */
    inline void SetNetworkProfileName(Aws::String&& value) { m_networkProfileNameHasBeenSet = true; m_networkProfileName = std::move(value); }

    /**
     * <p>The name of the network profile associated with a device.</p>
     */
    inline void SetNetworkProfileName(const char* value) { m_networkProfileNameHasBeenSet = true; m_networkProfileName.assign(value); }

    /**
     * <p>The name of the network profile associated with a device.</p>
     */
    inline NetworkProfile& WithNetworkProfileName(const Aws::String& value) { SetNetworkProfileName(value); return *this;}

    /**
     * <p>The name of the network profile associated with a device.</p>
     */
    inline NetworkProfile& WithNetworkProfileName(Aws::String&& value) { SetNetworkProfileName(std::move(value)); return *this;}

    /**
     * <p>The name of the network profile associated with a device.</p>
     */
    inline NetworkProfile& WithNetworkProfileName(const char* value) { SetNetworkProfileName(value); return *this;}


    /**
     * <p>Detailed information about a device's network profile.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>Detailed information about a device's network profile.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>Detailed information about a device's network profile.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>Detailed information about a device's network profile.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>Detailed information about a device's network profile.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>Detailed information about a device's network profile.</p>
     */
    inline NetworkProfile& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>Detailed information about a device's network profile.</p>
     */
    inline NetworkProfile& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>Detailed information about a device's network profile.</p>
     */
    inline NetworkProfile& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The SSID of the Wi-Fi network.</p>
     */
    inline const Aws::String& GetSsid() const{ return m_ssid; }

    /**
     * <p>The SSID of the Wi-Fi network.</p>
     */
    inline bool SsidHasBeenSet() const { return m_ssidHasBeenSet; }

    /**
     * <p>The SSID of the Wi-Fi network.</p>
     */
    inline void SetSsid(const Aws::String& value) { m_ssidHasBeenSet = true; m_ssid = value; }

    /**
     * <p>The SSID of the Wi-Fi network.</p>
     */
    inline void SetSsid(Aws::String&& value) { m_ssidHasBeenSet = true; m_ssid = std::move(value); }

    /**
     * <p>The SSID of the Wi-Fi network.</p>
     */
    inline void SetSsid(const char* value) { m_ssidHasBeenSet = true; m_ssid.assign(value); }

    /**
     * <p>The SSID of the Wi-Fi network.</p>
     */
    inline NetworkProfile& WithSsid(const Aws::String& value) { SetSsid(value); return *this;}

    /**
     * <p>The SSID of the Wi-Fi network.</p>
     */
    inline NetworkProfile& WithSsid(Aws::String&& value) { SetSsid(std::move(value)); return *this;}

    /**
     * <p>The SSID of the Wi-Fi network.</p>
     */
    inline NetworkProfile& WithSsid(const char* value) { SetSsid(value); return *this;}


    /**
     * <p>The security type of the Wi-Fi network. This can be WPA2_ENTERPRISE,
     * WPA2_PSK, WPA_PSK, WEP, or OPEN.</p>
     */
    inline const NetworkSecurityType& GetSecurityType() const{ return m_securityType; }

    /**
     * <p>The security type of the Wi-Fi network. This can be WPA2_ENTERPRISE,
     * WPA2_PSK, WPA_PSK, WEP, or OPEN.</p>
     */
    inline bool SecurityTypeHasBeenSet() const { return m_securityTypeHasBeenSet; }

    /**
     * <p>The security type of the Wi-Fi network. This can be WPA2_ENTERPRISE,
     * WPA2_PSK, WPA_PSK, WEP, or OPEN.</p>
     */
    inline void SetSecurityType(const NetworkSecurityType& value) { m_securityTypeHasBeenSet = true; m_securityType = value; }

    /**
     * <p>The security type of the Wi-Fi network. This can be WPA2_ENTERPRISE,
     * WPA2_PSK, WPA_PSK, WEP, or OPEN.</p>
     */
    inline void SetSecurityType(NetworkSecurityType&& value) { m_securityTypeHasBeenSet = true; m_securityType = std::move(value); }

    /**
     * <p>The security type of the Wi-Fi network. This can be WPA2_ENTERPRISE,
     * WPA2_PSK, WPA_PSK, WEP, or OPEN.</p>
     */
    inline NetworkProfile& WithSecurityType(const NetworkSecurityType& value) { SetSecurityType(value); return *this;}

    /**
     * <p>The security type of the Wi-Fi network. This can be WPA2_ENTERPRISE,
     * WPA2_PSK, WPA_PSK, WEP, or OPEN.</p>
     */
    inline NetworkProfile& WithSecurityType(NetworkSecurityType&& value) { SetSecurityType(std::move(value)); return *this;}


    /**
     * <p>The authentication standard that is used in the EAP framework. Currently,
     * EAP_TLS is supported. </p>
     */
    inline const NetworkEapMethod& GetEapMethod() const{ return m_eapMethod; }

    /**
     * <p>The authentication standard that is used in the EAP framework. Currently,
     * EAP_TLS is supported. </p>
     */
    inline bool EapMethodHasBeenSet() const { return m_eapMethodHasBeenSet; }

    /**
     * <p>The authentication standard that is used in the EAP framework. Currently,
     * EAP_TLS is supported. </p>
     */
    inline void SetEapMethod(const NetworkEapMethod& value) { m_eapMethodHasBeenSet = true; m_eapMethod = value; }

    /**
     * <p>The authentication standard that is used in the EAP framework. Currently,
     * EAP_TLS is supported. </p>
     */
    inline void SetEapMethod(NetworkEapMethod&& value) { m_eapMethodHasBeenSet = true; m_eapMethod = std::move(value); }

    /**
     * <p>The authentication standard that is used in the EAP framework. Currently,
     * EAP_TLS is supported. </p>
     */
    inline NetworkProfile& WithEapMethod(const NetworkEapMethod& value) { SetEapMethod(value); return *this;}

    /**
     * <p>The authentication standard that is used in the EAP framework. Currently,
     * EAP_TLS is supported. </p>
     */
    inline NetworkProfile& WithEapMethod(NetworkEapMethod&& value) { SetEapMethod(std::move(value)); return *this;}


    /**
     * <p>The current password of the Wi-Fi network.</p>
     */
    inline const Aws::String& GetCurrentPassword() const{ return m_currentPassword; }

    /**
     * <p>The current password of the Wi-Fi network.</p>
     */
    inline bool CurrentPasswordHasBeenSet() const { return m_currentPasswordHasBeenSet; }

    /**
     * <p>The current password of the Wi-Fi network.</p>
     */
    inline void SetCurrentPassword(const Aws::String& value) { m_currentPasswordHasBeenSet = true; m_currentPassword = value; }

    /**
     * <p>The current password of the Wi-Fi network.</p>
     */
    inline void SetCurrentPassword(Aws::String&& value) { m_currentPasswordHasBeenSet = true; m_currentPassword = std::move(value); }

    /**
     * <p>The current password of the Wi-Fi network.</p>
     */
    inline void SetCurrentPassword(const char* value) { m_currentPasswordHasBeenSet = true; m_currentPassword.assign(value); }

    /**
     * <p>The current password of the Wi-Fi network.</p>
     */
    inline NetworkProfile& WithCurrentPassword(const Aws::String& value) { SetCurrentPassword(value); return *this;}

    /**
     * <p>The current password of the Wi-Fi network.</p>
     */
    inline NetworkProfile& WithCurrentPassword(Aws::String&& value) { SetCurrentPassword(std::move(value)); return *this;}

    /**
     * <p>The current password of the Wi-Fi network.</p>
     */
    inline NetworkProfile& WithCurrentPassword(const char* value) { SetCurrentPassword(value); return *this;}


    /**
     * <p>The next, or subsequent, password of the Wi-Fi network. This password is
     * asynchronously transmitted to the device and is used when the password of the
     * network changes to NextPassword. </p>
     */
    inline const Aws::String& GetNextPassword() const{ return m_nextPassword; }

    /**
     * <p>The next, or subsequent, password of the Wi-Fi network. This password is
     * asynchronously transmitted to the device and is used when the password of the
     * network changes to NextPassword. </p>
     */
    inline bool NextPasswordHasBeenSet() const { return m_nextPasswordHasBeenSet; }

    /**
     * <p>The next, or subsequent, password of the Wi-Fi network. This password is
     * asynchronously transmitted to the device and is used when the password of the
     * network changes to NextPassword. </p>
     */
    inline void SetNextPassword(const Aws::String& value) { m_nextPasswordHasBeenSet = true; m_nextPassword = value; }

    /**
     * <p>The next, or subsequent, password of the Wi-Fi network. This password is
     * asynchronously transmitted to the device and is used when the password of the
     * network changes to NextPassword. </p>
     */
    inline void SetNextPassword(Aws::String&& value) { m_nextPasswordHasBeenSet = true; m_nextPassword = std::move(value); }

    /**
     * <p>The next, or subsequent, password of the Wi-Fi network. This password is
     * asynchronously transmitted to the device and is used when the password of the
     * network changes to NextPassword. </p>
     */
    inline void SetNextPassword(const char* value) { m_nextPasswordHasBeenSet = true; m_nextPassword.assign(value); }

    /**
     * <p>The next, or subsequent, password of the Wi-Fi network. This password is
     * asynchronously transmitted to the device and is used when the password of the
     * network changes to NextPassword. </p>
     */
    inline NetworkProfile& WithNextPassword(const Aws::String& value) { SetNextPassword(value); return *this;}

    /**
     * <p>The next, or subsequent, password of the Wi-Fi network. This password is
     * asynchronously transmitted to the device and is used when the password of the
     * network changes to NextPassword. </p>
     */
    inline NetworkProfile& WithNextPassword(Aws::String&& value) { SetNextPassword(std::move(value)); return *this;}

    /**
     * <p>The next, or subsequent, password of the Wi-Fi network. This password is
     * asynchronously transmitted to the device and is used when the password of the
     * network changes to NextPassword. </p>
     */
    inline NetworkProfile& WithNextPassword(const char* value) { SetNextPassword(value); return *this;}


    /**
     * <p>The ARN of the Private Certificate Authority (PCA) created in AWS Certificate
     * Manager (ACM). This is used to issue certificates to the devices. </p>
     */
    inline const Aws::String& GetCertificateAuthorityArn() const{ return m_certificateAuthorityArn; }

    /**
     * <p>The ARN of the Private Certificate Authority (PCA) created in AWS Certificate
     * Manager (ACM). This is used to issue certificates to the devices. </p>
     */
    inline bool CertificateAuthorityArnHasBeenSet() const { return m_certificateAuthorityArnHasBeenSet; }

    /**
     * <p>The ARN of the Private Certificate Authority (PCA) created in AWS Certificate
     * Manager (ACM). This is used to issue certificates to the devices. </p>
     */
    inline void SetCertificateAuthorityArn(const Aws::String& value) { m_certificateAuthorityArnHasBeenSet = true; m_certificateAuthorityArn = value; }

    /**
     * <p>The ARN of the Private Certificate Authority (PCA) created in AWS Certificate
     * Manager (ACM). This is used to issue certificates to the devices. </p>
     */
    inline void SetCertificateAuthorityArn(Aws::String&& value) { m_certificateAuthorityArnHasBeenSet = true; m_certificateAuthorityArn = std::move(value); }

    /**
     * <p>The ARN of the Private Certificate Authority (PCA) created in AWS Certificate
     * Manager (ACM). This is used to issue certificates to the devices. </p>
     */
    inline void SetCertificateAuthorityArn(const char* value) { m_certificateAuthorityArnHasBeenSet = true; m_certificateAuthorityArn.assign(value); }

    /**
     * <p>The ARN of the Private Certificate Authority (PCA) created in AWS Certificate
     * Manager (ACM). This is used to issue certificates to the devices. </p>
     */
    inline NetworkProfile& WithCertificateAuthorityArn(const Aws::String& value) { SetCertificateAuthorityArn(value); return *this;}

    /**
     * <p>The ARN of the Private Certificate Authority (PCA) created in AWS Certificate
     * Manager (ACM). This is used to issue certificates to the devices. </p>
     */
    inline NetworkProfile& WithCertificateAuthorityArn(Aws::String&& value) { SetCertificateAuthorityArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the Private Certificate Authority (PCA) created in AWS Certificate
     * Manager (ACM). This is used to issue certificates to the devices. </p>
     */
    inline NetworkProfile& WithCertificateAuthorityArn(const char* value) { SetCertificateAuthorityArn(value); return *this;}


    /**
     * <p>The root certificates of your authentication server, which is installed on
     * your devices and used to trust your authentication server during EAP
     * negotiation.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTrustAnchors() const{ return m_trustAnchors; }

    /**
     * <p>The root certificates of your authentication server, which is installed on
     * your devices and used to trust your authentication server during EAP
     * negotiation.</p>
     */
    inline bool TrustAnchorsHasBeenSet() const { return m_trustAnchorsHasBeenSet; }

    /**
     * <p>The root certificates of your authentication server, which is installed on
     * your devices and used to trust your authentication server during EAP
     * negotiation.</p>
     */
    inline void SetTrustAnchors(const Aws::Vector<Aws::String>& value) { m_trustAnchorsHasBeenSet = true; m_trustAnchors = value; }

    /**
     * <p>The root certificates of your authentication server, which is installed on
     * your devices and used to trust your authentication server during EAP
     * negotiation.</p>
     */
    inline void SetTrustAnchors(Aws::Vector<Aws::String>&& value) { m_trustAnchorsHasBeenSet = true; m_trustAnchors = std::move(value); }

    /**
     * <p>The root certificates of your authentication server, which is installed on
     * your devices and used to trust your authentication server during EAP
     * negotiation.</p>
     */
    inline NetworkProfile& WithTrustAnchors(const Aws::Vector<Aws::String>& value) { SetTrustAnchors(value); return *this;}

    /**
     * <p>The root certificates of your authentication server, which is installed on
     * your devices and used to trust your authentication server during EAP
     * negotiation.</p>
     */
    inline NetworkProfile& WithTrustAnchors(Aws::Vector<Aws::String>&& value) { SetTrustAnchors(std::move(value)); return *this;}

    /**
     * <p>The root certificates of your authentication server, which is installed on
     * your devices and used to trust your authentication server during EAP
     * negotiation.</p>
     */
    inline NetworkProfile& AddTrustAnchors(const Aws::String& value) { m_trustAnchorsHasBeenSet = true; m_trustAnchors.push_back(value); return *this; }

    /**
     * <p>The root certificates of your authentication server, which is installed on
     * your devices and used to trust your authentication server during EAP
     * negotiation.</p>
     */
    inline NetworkProfile& AddTrustAnchors(Aws::String&& value) { m_trustAnchorsHasBeenSet = true; m_trustAnchors.push_back(std::move(value)); return *this; }

    /**
     * <p>The root certificates of your authentication server, which is installed on
     * your devices and used to trust your authentication server during EAP
     * negotiation.</p>
     */
    inline NetworkProfile& AddTrustAnchors(const char* value) { m_trustAnchorsHasBeenSet = true; m_trustAnchors.push_back(value); return *this; }

  private:

    Aws::String m_networkProfileArn;
    bool m_networkProfileArnHasBeenSet = false;

    Aws::String m_networkProfileName;
    bool m_networkProfileNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_ssid;
    bool m_ssidHasBeenSet = false;

    NetworkSecurityType m_securityType;
    bool m_securityTypeHasBeenSet = false;

    NetworkEapMethod m_eapMethod;
    bool m_eapMethodHasBeenSet = false;

    Aws::String m_currentPassword;
    bool m_currentPasswordHasBeenSet = false;

    Aws::String m_nextPassword;
    bool m_nextPasswordHasBeenSet = false;

    Aws::String m_certificateAuthorityArn;
    bool m_certificateAuthorityArnHasBeenSet = false;

    Aws::Vector<Aws::String> m_trustAnchors;
    bool m_trustAnchorsHasBeenSet = false;
  };

} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws
