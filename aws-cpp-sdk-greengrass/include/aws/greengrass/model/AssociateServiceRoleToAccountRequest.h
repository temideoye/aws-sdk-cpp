﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/greengrass/Greengrass_EXPORTS.h>
#include <aws/greengrass/GreengrassRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Greengrass
{
namespace Model
{

  /**
   */
  class AWS_GREENGRASS_API AssociateServiceRoleToAccountRequest : public GreengrassRequest
  {
  public:
    AssociateServiceRoleToAccountRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AssociateServiceRoleToAccount"; }

    Aws::String SerializePayload() const override;


    /**
     * The ARN of the service role you wish to associate with your account.
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * The ARN of the service role you wish to associate with your account.
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * The ARN of the service role you wish to associate with your account.
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * The ARN of the service role you wish to associate with your account.
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * The ARN of the service role you wish to associate with your account.
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * The ARN of the service role you wish to associate with your account.
     */
    inline AssociateServiceRoleToAccountRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * The ARN of the service role you wish to associate with your account.
     */
    inline AssociateServiceRoleToAccountRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * The ARN of the service role you wish to associate with your account.
     */
    inline AssociateServiceRoleToAccountRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}

  private:

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
