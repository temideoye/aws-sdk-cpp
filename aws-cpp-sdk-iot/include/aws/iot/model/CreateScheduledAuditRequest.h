﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/IoTRequest.h>
#include <aws/iot/model/AuditFrequency.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/DayOfWeek.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iot/model/Tag.h>
#include <utility>

namespace Aws
{
namespace IoT
{
namespace Model
{

  /**
   */
  class AWS_IOT_API CreateScheduledAuditRequest : public IoTRequest
  {
  public:
    CreateScheduledAuditRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateScheduledAudit"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>How often the scheduled audit takes place, either <code>DAILY</code>,
     * <code>WEEKLY</code>, <code>BIWEEKLY</code> or <code>MONTHLY</code>. The start
     * time of each audit is determined by the system.</p>
     */
    inline const AuditFrequency& GetFrequency() const{ return m_frequency; }

    /**
     * <p>How often the scheduled audit takes place, either <code>DAILY</code>,
     * <code>WEEKLY</code>, <code>BIWEEKLY</code> or <code>MONTHLY</code>. The start
     * time of each audit is determined by the system.</p>
     */
    inline bool FrequencyHasBeenSet() const { return m_frequencyHasBeenSet; }

    /**
     * <p>How often the scheduled audit takes place, either <code>DAILY</code>,
     * <code>WEEKLY</code>, <code>BIWEEKLY</code> or <code>MONTHLY</code>. The start
     * time of each audit is determined by the system.</p>
     */
    inline void SetFrequency(const AuditFrequency& value) { m_frequencyHasBeenSet = true; m_frequency = value; }

    /**
     * <p>How often the scheduled audit takes place, either <code>DAILY</code>,
     * <code>WEEKLY</code>, <code>BIWEEKLY</code> or <code>MONTHLY</code>. The start
     * time of each audit is determined by the system.</p>
     */
    inline void SetFrequency(AuditFrequency&& value) { m_frequencyHasBeenSet = true; m_frequency = std::move(value); }

    /**
     * <p>How often the scheduled audit takes place, either <code>DAILY</code>,
     * <code>WEEKLY</code>, <code>BIWEEKLY</code> or <code>MONTHLY</code>. The start
     * time of each audit is determined by the system.</p>
     */
    inline CreateScheduledAuditRequest& WithFrequency(const AuditFrequency& value) { SetFrequency(value); return *this;}

    /**
     * <p>How often the scheduled audit takes place, either <code>DAILY</code>,
     * <code>WEEKLY</code>, <code>BIWEEKLY</code> or <code>MONTHLY</code>. The start
     * time of each audit is determined by the system.</p>
     */
    inline CreateScheduledAuditRequest& WithFrequency(AuditFrequency&& value) { SetFrequency(std::move(value)); return *this;}


    /**
     * <p>The day of the month on which the scheduled audit takes place. This can be
     * "1" through "31" or "LAST". This field is required if the "frequency" parameter
     * is set to <code>MONTHLY</code>. If days 29 to 31 are specified, and the month
     * doesn't have that many days, the audit takes place on the <code>LAST</code> day
     * of the month.</p>
     */
    inline const Aws::String& GetDayOfMonth() const{ return m_dayOfMonth; }

    /**
     * <p>The day of the month on which the scheduled audit takes place. This can be
     * "1" through "31" or "LAST". This field is required if the "frequency" parameter
     * is set to <code>MONTHLY</code>. If days 29 to 31 are specified, and the month
     * doesn't have that many days, the audit takes place on the <code>LAST</code> day
     * of the month.</p>
     */
    inline bool DayOfMonthHasBeenSet() const { return m_dayOfMonthHasBeenSet; }

    /**
     * <p>The day of the month on which the scheduled audit takes place. This can be
     * "1" through "31" or "LAST". This field is required if the "frequency" parameter
     * is set to <code>MONTHLY</code>. If days 29 to 31 are specified, and the month
     * doesn't have that many days, the audit takes place on the <code>LAST</code> day
     * of the month.</p>
     */
    inline void SetDayOfMonth(const Aws::String& value) { m_dayOfMonthHasBeenSet = true; m_dayOfMonth = value; }

    /**
     * <p>The day of the month on which the scheduled audit takes place. This can be
     * "1" through "31" or "LAST". This field is required if the "frequency" parameter
     * is set to <code>MONTHLY</code>. If days 29 to 31 are specified, and the month
     * doesn't have that many days, the audit takes place on the <code>LAST</code> day
     * of the month.</p>
     */
    inline void SetDayOfMonth(Aws::String&& value) { m_dayOfMonthHasBeenSet = true; m_dayOfMonth = std::move(value); }

    /**
     * <p>The day of the month on which the scheduled audit takes place. This can be
     * "1" through "31" or "LAST". This field is required if the "frequency" parameter
     * is set to <code>MONTHLY</code>. If days 29 to 31 are specified, and the month
     * doesn't have that many days, the audit takes place on the <code>LAST</code> day
     * of the month.</p>
     */
    inline void SetDayOfMonth(const char* value) { m_dayOfMonthHasBeenSet = true; m_dayOfMonth.assign(value); }

    /**
     * <p>The day of the month on which the scheduled audit takes place. This can be
     * "1" through "31" or "LAST". This field is required if the "frequency" parameter
     * is set to <code>MONTHLY</code>. If days 29 to 31 are specified, and the month
     * doesn't have that many days, the audit takes place on the <code>LAST</code> day
     * of the month.</p>
     */
    inline CreateScheduledAuditRequest& WithDayOfMonth(const Aws::String& value) { SetDayOfMonth(value); return *this;}

    /**
     * <p>The day of the month on which the scheduled audit takes place. This can be
     * "1" through "31" or "LAST". This field is required if the "frequency" parameter
     * is set to <code>MONTHLY</code>. If days 29 to 31 are specified, and the month
     * doesn't have that many days, the audit takes place on the <code>LAST</code> day
     * of the month.</p>
     */
    inline CreateScheduledAuditRequest& WithDayOfMonth(Aws::String&& value) { SetDayOfMonth(std::move(value)); return *this;}

    /**
     * <p>The day of the month on which the scheduled audit takes place. This can be
     * "1" through "31" or "LAST". This field is required if the "frequency" parameter
     * is set to <code>MONTHLY</code>. If days 29 to 31 are specified, and the month
     * doesn't have that many days, the audit takes place on the <code>LAST</code> day
     * of the month.</p>
     */
    inline CreateScheduledAuditRequest& WithDayOfMonth(const char* value) { SetDayOfMonth(value); return *this;}


    /**
     * <p>The day of the week on which the scheduled audit takes place, either
     * <code>SUN</code>, <code>MON</code>, <code>TUE</code>, <code>WED</code>,
     * <code>THU</code>, <code>FRI</code>, or <code>SAT</code>. This field is required
     * if the <code>frequency</code> parameter is set to <code>WEEKLY</code> or
     * <code>BIWEEKLY</code>.</p>
     */
    inline const DayOfWeek& GetDayOfWeek() const{ return m_dayOfWeek; }

    /**
     * <p>The day of the week on which the scheduled audit takes place, either
     * <code>SUN</code>, <code>MON</code>, <code>TUE</code>, <code>WED</code>,
     * <code>THU</code>, <code>FRI</code>, or <code>SAT</code>. This field is required
     * if the <code>frequency</code> parameter is set to <code>WEEKLY</code> or
     * <code>BIWEEKLY</code>.</p>
     */
    inline bool DayOfWeekHasBeenSet() const { return m_dayOfWeekHasBeenSet; }

    /**
     * <p>The day of the week on which the scheduled audit takes place, either
     * <code>SUN</code>, <code>MON</code>, <code>TUE</code>, <code>WED</code>,
     * <code>THU</code>, <code>FRI</code>, or <code>SAT</code>. This field is required
     * if the <code>frequency</code> parameter is set to <code>WEEKLY</code> or
     * <code>BIWEEKLY</code>.</p>
     */
    inline void SetDayOfWeek(const DayOfWeek& value) { m_dayOfWeekHasBeenSet = true; m_dayOfWeek = value; }

    /**
     * <p>The day of the week on which the scheduled audit takes place, either
     * <code>SUN</code>, <code>MON</code>, <code>TUE</code>, <code>WED</code>,
     * <code>THU</code>, <code>FRI</code>, or <code>SAT</code>. This field is required
     * if the <code>frequency</code> parameter is set to <code>WEEKLY</code> or
     * <code>BIWEEKLY</code>.</p>
     */
    inline void SetDayOfWeek(DayOfWeek&& value) { m_dayOfWeekHasBeenSet = true; m_dayOfWeek = std::move(value); }

    /**
     * <p>The day of the week on which the scheduled audit takes place, either
     * <code>SUN</code>, <code>MON</code>, <code>TUE</code>, <code>WED</code>,
     * <code>THU</code>, <code>FRI</code>, or <code>SAT</code>. This field is required
     * if the <code>frequency</code> parameter is set to <code>WEEKLY</code> or
     * <code>BIWEEKLY</code>.</p>
     */
    inline CreateScheduledAuditRequest& WithDayOfWeek(const DayOfWeek& value) { SetDayOfWeek(value); return *this;}

    /**
     * <p>The day of the week on which the scheduled audit takes place, either
     * <code>SUN</code>, <code>MON</code>, <code>TUE</code>, <code>WED</code>,
     * <code>THU</code>, <code>FRI</code>, or <code>SAT</code>. This field is required
     * if the <code>frequency</code> parameter is set to <code>WEEKLY</code> or
     * <code>BIWEEKLY</code>.</p>
     */
    inline CreateScheduledAuditRequest& WithDayOfWeek(DayOfWeek&& value) { SetDayOfWeek(std::move(value)); return *this;}


    /**
     * <p>Which checks are performed during the scheduled audit. Checks must be enabled
     * for your account. (Use <code>DescribeAccountAuditConfiguration</code> to see the
     * list of all checks, including those that are enabled or use
     * <code>UpdateAccountAuditConfiguration</code> to select which checks are
     * enabled.)</p>
     */
    inline const Aws::Vector<Aws::String>& GetTargetCheckNames() const{ return m_targetCheckNames; }

    /**
     * <p>Which checks are performed during the scheduled audit. Checks must be enabled
     * for your account. (Use <code>DescribeAccountAuditConfiguration</code> to see the
     * list of all checks, including those that are enabled or use
     * <code>UpdateAccountAuditConfiguration</code> to select which checks are
     * enabled.)</p>
     */
    inline bool TargetCheckNamesHasBeenSet() const { return m_targetCheckNamesHasBeenSet; }

    /**
     * <p>Which checks are performed during the scheduled audit. Checks must be enabled
     * for your account. (Use <code>DescribeAccountAuditConfiguration</code> to see the
     * list of all checks, including those that are enabled or use
     * <code>UpdateAccountAuditConfiguration</code> to select which checks are
     * enabled.)</p>
     */
    inline void SetTargetCheckNames(const Aws::Vector<Aws::String>& value) { m_targetCheckNamesHasBeenSet = true; m_targetCheckNames = value; }

    /**
     * <p>Which checks are performed during the scheduled audit. Checks must be enabled
     * for your account. (Use <code>DescribeAccountAuditConfiguration</code> to see the
     * list of all checks, including those that are enabled or use
     * <code>UpdateAccountAuditConfiguration</code> to select which checks are
     * enabled.)</p>
     */
    inline void SetTargetCheckNames(Aws::Vector<Aws::String>&& value) { m_targetCheckNamesHasBeenSet = true; m_targetCheckNames = std::move(value); }

    /**
     * <p>Which checks are performed during the scheduled audit. Checks must be enabled
     * for your account. (Use <code>DescribeAccountAuditConfiguration</code> to see the
     * list of all checks, including those that are enabled or use
     * <code>UpdateAccountAuditConfiguration</code> to select which checks are
     * enabled.)</p>
     */
    inline CreateScheduledAuditRequest& WithTargetCheckNames(const Aws::Vector<Aws::String>& value) { SetTargetCheckNames(value); return *this;}

    /**
     * <p>Which checks are performed during the scheduled audit. Checks must be enabled
     * for your account. (Use <code>DescribeAccountAuditConfiguration</code> to see the
     * list of all checks, including those that are enabled or use
     * <code>UpdateAccountAuditConfiguration</code> to select which checks are
     * enabled.)</p>
     */
    inline CreateScheduledAuditRequest& WithTargetCheckNames(Aws::Vector<Aws::String>&& value) { SetTargetCheckNames(std::move(value)); return *this;}

    /**
     * <p>Which checks are performed during the scheduled audit. Checks must be enabled
     * for your account. (Use <code>DescribeAccountAuditConfiguration</code> to see the
     * list of all checks, including those that are enabled or use
     * <code>UpdateAccountAuditConfiguration</code> to select which checks are
     * enabled.)</p>
     */
    inline CreateScheduledAuditRequest& AddTargetCheckNames(const Aws::String& value) { m_targetCheckNamesHasBeenSet = true; m_targetCheckNames.push_back(value); return *this; }

    /**
     * <p>Which checks are performed during the scheduled audit. Checks must be enabled
     * for your account. (Use <code>DescribeAccountAuditConfiguration</code> to see the
     * list of all checks, including those that are enabled or use
     * <code>UpdateAccountAuditConfiguration</code> to select which checks are
     * enabled.)</p>
     */
    inline CreateScheduledAuditRequest& AddTargetCheckNames(Aws::String&& value) { m_targetCheckNamesHasBeenSet = true; m_targetCheckNames.push_back(std::move(value)); return *this; }

    /**
     * <p>Which checks are performed during the scheduled audit. Checks must be enabled
     * for your account. (Use <code>DescribeAccountAuditConfiguration</code> to see the
     * list of all checks, including those that are enabled or use
     * <code>UpdateAccountAuditConfiguration</code> to select which checks are
     * enabled.)</p>
     */
    inline CreateScheduledAuditRequest& AddTargetCheckNames(const char* value) { m_targetCheckNamesHasBeenSet = true; m_targetCheckNames.push_back(value); return *this; }


    /**
     * <p>The name you want to give to the scheduled audit. (Max. 128 chars)</p>
     */
    inline const Aws::String& GetScheduledAuditName() const{ return m_scheduledAuditName; }

    /**
     * <p>The name you want to give to the scheduled audit. (Max. 128 chars)</p>
     */
    inline bool ScheduledAuditNameHasBeenSet() const { return m_scheduledAuditNameHasBeenSet; }

    /**
     * <p>The name you want to give to the scheduled audit. (Max. 128 chars)</p>
     */
    inline void SetScheduledAuditName(const Aws::String& value) { m_scheduledAuditNameHasBeenSet = true; m_scheduledAuditName = value; }

    /**
     * <p>The name you want to give to the scheduled audit. (Max. 128 chars)</p>
     */
    inline void SetScheduledAuditName(Aws::String&& value) { m_scheduledAuditNameHasBeenSet = true; m_scheduledAuditName = std::move(value); }

    /**
     * <p>The name you want to give to the scheduled audit. (Max. 128 chars)</p>
     */
    inline void SetScheduledAuditName(const char* value) { m_scheduledAuditNameHasBeenSet = true; m_scheduledAuditName.assign(value); }

    /**
     * <p>The name you want to give to the scheduled audit. (Max. 128 chars)</p>
     */
    inline CreateScheduledAuditRequest& WithScheduledAuditName(const Aws::String& value) { SetScheduledAuditName(value); return *this;}

    /**
     * <p>The name you want to give to the scheduled audit. (Max. 128 chars)</p>
     */
    inline CreateScheduledAuditRequest& WithScheduledAuditName(Aws::String&& value) { SetScheduledAuditName(std::move(value)); return *this;}

    /**
     * <p>The name you want to give to the scheduled audit. (Max. 128 chars)</p>
     */
    inline CreateScheduledAuditRequest& WithScheduledAuditName(const char* value) { SetScheduledAuditName(value); return *this;}


    /**
     * <p>Metadata that can be used to manage the scheduled audit.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>Metadata that can be used to manage the scheduled audit.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Metadata that can be used to manage the scheduled audit.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Metadata that can be used to manage the scheduled audit.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Metadata that can be used to manage the scheduled audit.</p>
     */
    inline CreateScheduledAuditRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>Metadata that can be used to manage the scheduled audit.</p>
     */
    inline CreateScheduledAuditRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Metadata that can be used to manage the scheduled audit.</p>
     */
    inline CreateScheduledAuditRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>Metadata that can be used to manage the scheduled audit.</p>
     */
    inline CreateScheduledAuditRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    AuditFrequency m_frequency;
    bool m_frequencyHasBeenSet = false;

    Aws::String m_dayOfMonth;
    bool m_dayOfMonthHasBeenSet = false;

    DayOfWeek m_dayOfWeek;
    bool m_dayOfWeekHasBeenSet = false;

    Aws::Vector<Aws::String> m_targetCheckNames;
    bool m_targetCheckNamesHasBeenSet = false;

    Aws::String m_scheduledAuditName;
    bool m_scheduledAuditNameHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
