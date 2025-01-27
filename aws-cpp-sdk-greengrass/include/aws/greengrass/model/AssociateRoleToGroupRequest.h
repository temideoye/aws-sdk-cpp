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
  class AWS_GREENGRASS_API AssociateRoleToGroupRequest : public GreengrassRequest
  {
  public:
    AssociateRoleToGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AssociateRoleToGroup"; }

    Aws::String SerializePayload() const override;


    /**
     * The ID of the Greengrass group.
     */
    inline const Aws::String& GetGroupId() const{ return m_groupId; }

    /**
     * The ID of the Greengrass group.
     */
    inline bool GroupIdHasBeenSet() const { return m_groupIdHasBeenSet; }

    /**
     * The ID of the Greengrass group.
     */
    inline void SetGroupId(const Aws::String& value) { m_groupIdHasBeenSet = true; m_groupId = value; }

    /**
     * The ID of the Greengrass group.
     */
    inline void SetGroupId(Aws::String&& value) { m_groupIdHasBeenSet = true; m_groupId = std::move(value); }

    /**
     * The ID of the Greengrass group.
     */
    inline void SetGroupId(const char* value) { m_groupIdHasBeenSet = true; m_groupId.assign(value); }

    /**
     * The ID of the Greengrass group.
     */
    inline AssociateRoleToGroupRequest& WithGroupId(const Aws::String& value) { SetGroupId(value); return *this;}

    /**
     * The ID of the Greengrass group.
     */
    inline AssociateRoleToGroupRequest& WithGroupId(Aws::String&& value) { SetGroupId(std::move(value)); return *this;}

    /**
     * The ID of the Greengrass group.
     */
    inline AssociateRoleToGroupRequest& WithGroupId(const char* value) { SetGroupId(value); return *this;}


    /**
     * The ARN of the role you wish to associate with this group. The existence of the
     * role is not validated.
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * The ARN of the role you wish to associate with this group. The existence of the
     * role is not validated.
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * The ARN of the role you wish to associate with this group. The existence of the
     * role is not validated.
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * The ARN of the role you wish to associate with this group. The existence of the
     * role is not validated.
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * The ARN of the role you wish to associate with this group. The existence of the
     * role is not validated.
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * The ARN of the role you wish to associate with this group. The existence of the
     * role is not validated.
     */
    inline AssociateRoleToGroupRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * The ARN of the role you wish to associate with this group. The existence of the
     * role is not validated.
     */
    inline AssociateRoleToGroupRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * The ARN of the role you wish to associate with this group. The existence of the
     * role is not validated.
     */
    inline AssociateRoleToGroupRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}

  private:

    Aws::String m_groupId;
    bool m_groupIdHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
