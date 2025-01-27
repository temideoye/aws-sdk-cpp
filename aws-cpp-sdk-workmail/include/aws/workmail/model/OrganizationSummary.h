﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workmail/WorkMail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace WorkMail
{
namespace Model
{

  /**
   * <p>The representation of an organization.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/OrganizationSummary">AWS
   * API Reference</a></p>
   */
  class AWS_WORKMAIL_API OrganizationSummary
  {
  public:
    OrganizationSummary();
    OrganizationSummary(Aws::Utils::Json::JsonView jsonValue);
    OrganizationSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identifier associated with the organization.</p>
     */
    inline const Aws::String& GetOrganizationId() const{ return m_organizationId; }

    /**
     * <p>The identifier associated with the organization.</p>
     */
    inline bool OrganizationIdHasBeenSet() const { return m_organizationIdHasBeenSet; }

    /**
     * <p>The identifier associated with the organization.</p>
     */
    inline void SetOrganizationId(const Aws::String& value) { m_organizationIdHasBeenSet = true; m_organizationId = value; }

    /**
     * <p>The identifier associated with the organization.</p>
     */
    inline void SetOrganizationId(Aws::String&& value) { m_organizationIdHasBeenSet = true; m_organizationId = std::move(value); }

    /**
     * <p>The identifier associated with the organization.</p>
     */
    inline void SetOrganizationId(const char* value) { m_organizationIdHasBeenSet = true; m_organizationId.assign(value); }

    /**
     * <p>The identifier associated with the organization.</p>
     */
    inline OrganizationSummary& WithOrganizationId(const Aws::String& value) { SetOrganizationId(value); return *this;}

    /**
     * <p>The identifier associated with the organization.</p>
     */
    inline OrganizationSummary& WithOrganizationId(Aws::String&& value) { SetOrganizationId(std::move(value)); return *this;}

    /**
     * <p>The identifier associated with the organization.</p>
     */
    inline OrganizationSummary& WithOrganizationId(const char* value) { SetOrganizationId(value); return *this;}


    /**
     * <p>The alias associated with the organization.</p>
     */
    inline const Aws::String& GetAlias() const{ return m_alias; }

    /**
     * <p>The alias associated with the organization.</p>
     */
    inline bool AliasHasBeenSet() const { return m_aliasHasBeenSet; }

    /**
     * <p>The alias associated with the organization.</p>
     */
    inline void SetAlias(const Aws::String& value) { m_aliasHasBeenSet = true; m_alias = value; }

    /**
     * <p>The alias associated with the organization.</p>
     */
    inline void SetAlias(Aws::String&& value) { m_aliasHasBeenSet = true; m_alias = std::move(value); }

    /**
     * <p>The alias associated with the organization.</p>
     */
    inline void SetAlias(const char* value) { m_aliasHasBeenSet = true; m_alias.assign(value); }

    /**
     * <p>The alias associated with the organization.</p>
     */
    inline OrganizationSummary& WithAlias(const Aws::String& value) { SetAlias(value); return *this;}

    /**
     * <p>The alias associated with the organization.</p>
     */
    inline OrganizationSummary& WithAlias(Aws::String&& value) { SetAlias(std::move(value)); return *this;}

    /**
     * <p>The alias associated with the organization.</p>
     */
    inline OrganizationSummary& WithAlias(const char* value) { SetAlias(value); return *this;}


    /**
     * <p>The default email domain associated with the organization.</p>
     */
    inline const Aws::String& GetDefaultMailDomain() const{ return m_defaultMailDomain; }

    /**
     * <p>The default email domain associated with the organization.</p>
     */
    inline bool DefaultMailDomainHasBeenSet() const { return m_defaultMailDomainHasBeenSet; }

    /**
     * <p>The default email domain associated with the organization.</p>
     */
    inline void SetDefaultMailDomain(const Aws::String& value) { m_defaultMailDomainHasBeenSet = true; m_defaultMailDomain = value; }

    /**
     * <p>The default email domain associated with the organization.</p>
     */
    inline void SetDefaultMailDomain(Aws::String&& value) { m_defaultMailDomainHasBeenSet = true; m_defaultMailDomain = std::move(value); }

    /**
     * <p>The default email domain associated with the organization.</p>
     */
    inline void SetDefaultMailDomain(const char* value) { m_defaultMailDomainHasBeenSet = true; m_defaultMailDomain.assign(value); }

    /**
     * <p>The default email domain associated with the organization.</p>
     */
    inline OrganizationSummary& WithDefaultMailDomain(const Aws::String& value) { SetDefaultMailDomain(value); return *this;}

    /**
     * <p>The default email domain associated with the organization.</p>
     */
    inline OrganizationSummary& WithDefaultMailDomain(Aws::String&& value) { SetDefaultMailDomain(std::move(value)); return *this;}

    /**
     * <p>The default email domain associated with the organization.</p>
     */
    inline OrganizationSummary& WithDefaultMailDomain(const char* value) { SetDefaultMailDomain(value); return *this;}


    /**
     * <p>The error message associated with the organization. It is only present if
     * unexpected behavior has occurred with regards to the organization. It provides
     * insight or solutions regarding unexpected behavior.</p>
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }

    /**
     * <p>The error message associated with the organization. It is only present if
     * unexpected behavior has occurred with regards to the organization. It provides
     * insight or solutions regarding unexpected behavior.</p>
     */
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }

    /**
     * <p>The error message associated with the organization. It is only present if
     * unexpected behavior has occurred with regards to the organization. It provides
     * insight or solutions regarding unexpected behavior.</p>
     */
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessageHasBeenSet = true; m_errorMessage = value; }

    /**
     * <p>The error message associated with the organization. It is only present if
     * unexpected behavior has occurred with regards to the organization. It provides
     * insight or solutions regarding unexpected behavior.</p>
     */
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::move(value); }

    /**
     * <p>The error message associated with the organization. It is only present if
     * unexpected behavior has occurred with regards to the organization. It provides
     * insight or solutions regarding unexpected behavior.</p>
     */
    inline void SetErrorMessage(const char* value) { m_errorMessageHasBeenSet = true; m_errorMessage.assign(value); }

    /**
     * <p>The error message associated with the organization. It is only present if
     * unexpected behavior has occurred with regards to the organization. It provides
     * insight or solutions regarding unexpected behavior.</p>
     */
    inline OrganizationSummary& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}

    /**
     * <p>The error message associated with the organization. It is only present if
     * unexpected behavior has occurred with regards to the organization. It provides
     * insight or solutions regarding unexpected behavior.</p>
     */
    inline OrganizationSummary& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}

    /**
     * <p>The error message associated with the organization. It is only present if
     * unexpected behavior has occurred with regards to the organization. It provides
     * insight or solutions regarding unexpected behavior.</p>
     */
    inline OrganizationSummary& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}


    /**
     * <p>The state associated with the organization.</p>
     */
    inline const Aws::String& GetState() const{ return m_state; }

    /**
     * <p>The state associated with the organization.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The state associated with the organization.</p>
     */
    inline void SetState(const Aws::String& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The state associated with the organization.</p>
     */
    inline void SetState(Aws::String&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The state associated with the organization.</p>
     */
    inline void SetState(const char* value) { m_stateHasBeenSet = true; m_state.assign(value); }

    /**
     * <p>The state associated with the organization.</p>
     */
    inline OrganizationSummary& WithState(const Aws::String& value) { SetState(value); return *this;}

    /**
     * <p>The state associated with the organization.</p>
     */
    inline OrganizationSummary& WithState(Aws::String&& value) { SetState(std::move(value)); return *this;}

    /**
     * <p>The state associated with the organization.</p>
     */
    inline OrganizationSummary& WithState(const char* value) { SetState(value); return *this;}

  private:

    Aws::String m_organizationId;
    bool m_organizationIdHasBeenSet = false;

    Aws::String m_alias;
    bool m_aliasHasBeenSet = false;

    Aws::String m_defaultMailDomain;
    bool m_defaultMailDomainHasBeenSet = false;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet = false;

    Aws::String m_state;
    bool m_stateHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkMail
} // namespace Aws
