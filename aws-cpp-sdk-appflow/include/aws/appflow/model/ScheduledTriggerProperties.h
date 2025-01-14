﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appflow/Appflow_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appflow/model/DataPullMode.h>
#include <aws/core/utils/DateTime.h>
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
namespace Appflow
{
namespace Model
{

  /**
   * <p> Specifies the configuration details of a schedule-triggered flow as defined
   * by the user. Currently, these settings only apply to the <code>Scheduled</code>
   * trigger type. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appflow-2020-08-23/ScheduledTriggerProperties">AWS
   * API Reference</a></p>
   */
  class AWS_APPFLOW_API ScheduledTriggerProperties
  {
  public:
    ScheduledTriggerProperties();
    ScheduledTriggerProperties(Aws::Utils::Json::JsonView jsonValue);
    ScheduledTriggerProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The scheduling expression that determines the rate at which the schedule
     * will run, for example <code>rate(5minutes)</code>. </p>
     */
    inline const Aws::String& GetScheduleExpression() const{ return m_scheduleExpression; }

    /**
     * <p> The scheduling expression that determines the rate at which the schedule
     * will run, for example <code>rate(5minutes)</code>. </p>
     */
    inline bool ScheduleExpressionHasBeenSet() const { return m_scheduleExpressionHasBeenSet; }

    /**
     * <p> The scheduling expression that determines the rate at which the schedule
     * will run, for example <code>rate(5minutes)</code>. </p>
     */
    inline void SetScheduleExpression(const Aws::String& value) { m_scheduleExpressionHasBeenSet = true; m_scheduleExpression = value; }

    /**
     * <p> The scheduling expression that determines the rate at which the schedule
     * will run, for example <code>rate(5minutes)</code>. </p>
     */
    inline void SetScheduleExpression(Aws::String&& value) { m_scheduleExpressionHasBeenSet = true; m_scheduleExpression = std::move(value); }

    /**
     * <p> The scheduling expression that determines the rate at which the schedule
     * will run, for example <code>rate(5minutes)</code>. </p>
     */
    inline void SetScheduleExpression(const char* value) { m_scheduleExpressionHasBeenSet = true; m_scheduleExpression.assign(value); }

    /**
     * <p> The scheduling expression that determines the rate at which the schedule
     * will run, for example <code>rate(5minutes)</code>. </p>
     */
    inline ScheduledTriggerProperties& WithScheduleExpression(const Aws::String& value) { SetScheduleExpression(value); return *this;}

    /**
     * <p> The scheduling expression that determines the rate at which the schedule
     * will run, for example <code>rate(5minutes)</code>. </p>
     */
    inline ScheduledTriggerProperties& WithScheduleExpression(Aws::String&& value) { SetScheduleExpression(std::move(value)); return *this;}

    /**
     * <p> The scheduling expression that determines the rate at which the schedule
     * will run, for example <code>rate(5minutes)</code>. </p>
     */
    inline ScheduledTriggerProperties& WithScheduleExpression(const char* value) { SetScheduleExpression(value); return *this;}


    /**
     * <p> Specifies whether a scheduled flow has an incremental data transfer or a
     * complete data transfer for each flow run. </p>
     */
    inline const DataPullMode& GetDataPullMode() const{ return m_dataPullMode; }

    /**
     * <p> Specifies whether a scheduled flow has an incremental data transfer or a
     * complete data transfer for each flow run. </p>
     */
    inline bool DataPullModeHasBeenSet() const { return m_dataPullModeHasBeenSet; }

    /**
     * <p> Specifies whether a scheduled flow has an incremental data transfer or a
     * complete data transfer for each flow run. </p>
     */
    inline void SetDataPullMode(const DataPullMode& value) { m_dataPullModeHasBeenSet = true; m_dataPullMode = value; }

    /**
     * <p> Specifies whether a scheduled flow has an incremental data transfer or a
     * complete data transfer for each flow run. </p>
     */
    inline void SetDataPullMode(DataPullMode&& value) { m_dataPullModeHasBeenSet = true; m_dataPullMode = std::move(value); }

    /**
     * <p> Specifies whether a scheduled flow has an incremental data transfer or a
     * complete data transfer for each flow run. </p>
     */
    inline ScheduledTriggerProperties& WithDataPullMode(const DataPullMode& value) { SetDataPullMode(value); return *this;}

    /**
     * <p> Specifies whether a scheduled flow has an incremental data transfer or a
     * complete data transfer for each flow run. </p>
     */
    inline ScheduledTriggerProperties& WithDataPullMode(DataPullMode&& value) { SetDataPullMode(std::move(value)); return *this;}


    /**
     * <p>The time at which the scheduled flow starts. The time is formatted as a
     * timestamp that follows the ISO 8601 standard, such as
     * <code>2022-04-26T13:00:00-07:00</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetScheduleStartTime() const{ return m_scheduleStartTime; }

    /**
     * <p>The time at which the scheduled flow starts. The time is formatted as a
     * timestamp that follows the ISO 8601 standard, such as
     * <code>2022-04-26T13:00:00-07:00</code>.</p>
     */
    inline bool ScheduleStartTimeHasBeenSet() const { return m_scheduleStartTimeHasBeenSet; }

    /**
     * <p>The time at which the scheduled flow starts. The time is formatted as a
     * timestamp that follows the ISO 8601 standard, such as
     * <code>2022-04-26T13:00:00-07:00</code>.</p>
     */
    inline void SetScheduleStartTime(const Aws::Utils::DateTime& value) { m_scheduleStartTimeHasBeenSet = true; m_scheduleStartTime = value; }

    /**
     * <p>The time at which the scheduled flow starts. The time is formatted as a
     * timestamp that follows the ISO 8601 standard, such as
     * <code>2022-04-26T13:00:00-07:00</code>.</p>
     */
    inline void SetScheduleStartTime(Aws::Utils::DateTime&& value) { m_scheduleStartTimeHasBeenSet = true; m_scheduleStartTime = std::move(value); }

    /**
     * <p>The time at which the scheduled flow starts. The time is formatted as a
     * timestamp that follows the ISO 8601 standard, such as
     * <code>2022-04-26T13:00:00-07:00</code>.</p>
     */
    inline ScheduledTriggerProperties& WithScheduleStartTime(const Aws::Utils::DateTime& value) { SetScheduleStartTime(value); return *this;}

    /**
     * <p>The time at which the scheduled flow starts. The time is formatted as a
     * timestamp that follows the ISO 8601 standard, such as
     * <code>2022-04-26T13:00:00-07:00</code>.</p>
     */
    inline ScheduledTriggerProperties& WithScheduleStartTime(Aws::Utils::DateTime&& value) { SetScheduleStartTime(std::move(value)); return *this;}


    /**
     * <p>The time at which the scheduled flow ends. The time is formatted as a
     * timestamp that follows the ISO 8601 standard, such as
     * <code>2022-04-27T13:00:00-07:00</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetScheduleEndTime() const{ return m_scheduleEndTime; }

    /**
     * <p>The time at which the scheduled flow ends. The time is formatted as a
     * timestamp that follows the ISO 8601 standard, such as
     * <code>2022-04-27T13:00:00-07:00</code>.</p>
     */
    inline bool ScheduleEndTimeHasBeenSet() const { return m_scheduleEndTimeHasBeenSet; }

    /**
     * <p>The time at which the scheduled flow ends. The time is formatted as a
     * timestamp that follows the ISO 8601 standard, such as
     * <code>2022-04-27T13:00:00-07:00</code>.</p>
     */
    inline void SetScheduleEndTime(const Aws::Utils::DateTime& value) { m_scheduleEndTimeHasBeenSet = true; m_scheduleEndTime = value; }

    /**
     * <p>The time at which the scheduled flow ends. The time is formatted as a
     * timestamp that follows the ISO 8601 standard, such as
     * <code>2022-04-27T13:00:00-07:00</code>.</p>
     */
    inline void SetScheduleEndTime(Aws::Utils::DateTime&& value) { m_scheduleEndTimeHasBeenSet = true; m_scheduleEndTime = std::move(value); }

    /**
     * <p>The time at which the scheduled flow ends. The time is formatted as a
     * timestamp that follows the ISO 8601 standard, such as
     * <code>2022-04-27T13:00:00-07:00</code>.</p>
     */
    inline ScheduledTriggerProperties& WithScheduleEndTime(const Aws::Utils::DateTime& value) { SetScheduleEndTime(value); return *this;}

    /**
     * <p>The time at which the scheduled flow ends. The time is formatted as a
     * timestamp that follows the ISO 8601 standard, such as
     * <code>2022-04-27T13:00:00-07:00</code>.</p>
     */
    inline ScheduledTriggerProperties& WithScheduleEndTime(Aws::Utils::DateTime&& value) { SetScheduleEndTime(std::move(value)); return *this;}


    /**
     * <p>Specifies the time zone used when referring to the dates and times of a
     * scheduled flow, such as <code>America/New_York</code>. This time zone is only a
     * descriptive label. It doesn't affect how Amazon AppFlow interprets the
     * timestamps that you specify to schedule the flow.</p> <p>If you want to schedule
     * a flow by using times in a particular time zone, indicate the time zone as a UTC
     * offset in your timestamps. For example, the UTC offsets for the
     * <code>America/New_York</code> timezone are <code>-04:00</code> EDT and
     * <code>-05:00 EST</code>.</p>
     */
    inline const Aws::String& GetTimezone() const{ return m_timezone; }

    /**
     * <p>Specifies the time zone used when referring to the dates and times of a
     * scheduled flow, such as <code>America/New_York</code>. This time zone is only a
     * descriptive label. It doesn't affect how Amazon AppFlow interprets the
     * timestamps that you specify to schedule the flow.</p> <p>If you want to schedule
     * a flow by using times in a particular time zone, indicate the time zone as a UTC
     * offset in your timestamps. For example, the UTC offsets for the
     * <code>America/New_York</code> timezone are <code>-04:00</code> EDT and
     * <code>-05:00 EST</code>.</p>
     */
    inline bool TimezoneHasBeenSet() const { return m_timezoneHasBeenSet; }

    /**
     * <p>Specifies the time zone used when referring to the dates and times of a
     * scheduled flow, such as <code>America/New_York</code>. This time zone is only a
     * descriptive label. It doesn't affect how Amazon AppFlow interprets the
     * timestamps that you specify to schedule the flow.</p> <p>If you want to schedule
     * a flow by using times in a particular time zone, indicate the time zone as a UTC
     * offset in your timestamps. For example, the UTC offsets for the
     * <code>America/New_York</code> timezone are <code>-04:00</code> EDT and
     * <code>-05:00 EST</code>.</p>
     */
    inline void SetTimezone(const Aws::String& value) { m_timezoneHasBeenSet = true; m_timezone = value; }

    /**
     * <p>Specifies the time zone used when referring to the dates and times of a
     * scheduled flow, such as <code>America/New_York</code>. This time zone is only a
     * descriptive label. It doesn't affect how Amazon AppFlow interprets the
     * timestamps that you specify to schedule the flow.</p> <p>If you want to schedule
     * a flow by using times in a particular time zone, indicate the time zone as a UTC
     * offset in your timestamps. For example, the UTC offsets for the
     * <code>America/New_York</code> timezone are <code>-04:00</code> EDT and
     * <code>-05:00 EST</code>.</p>
     */
    inline void SetTimezone(Aws::String&& value) { m_timezoneHasBeenSet = true; m_timezone = std::move(value); }

    /**
     * <p>Specifies the time zone used when referring to the dates and times of a
     * scheduled flow, such as <code>America/New_York</code>. This time zone is only a
     * descriptive label. It doesn't affect how Amazon AppFlow interprets the
     * timestamps that you specify to schedule the flow.</p> <p>If you want to schedule
     * a flow by using times in a particular time zone, indicate the time zone as a UTC
     * offset in your timestamps. For example, the UTC offsets for the
     * <code>America/New_York</code> timezone are <code>-04:00</code> EDT and
     * <code>-05:00 EST</code>.</p>
     */
    inline void SetTimezone(const char* value) { m_timezoneHasBeenSet = true; m_timezone.assign(value); }

    /**
     * <p>Specifies the time zone used when referring to the dates and times of a
     * scheduled flow, such as <code>America/New_York</code>. This time zone is only a
     * descriptive label. It doesn't affect how Amazon AppFlow interprets the
     * timestamps that you specify to schedule the flow.</p> <p>If you want to schedule
     * a flow by using times in a particular time zone, indicate the time zone as a UTC
     * offset in your timestamps. For example, the UTC offsets for the
     * <code>America/New_York</code> timezone are <code>-04:00</code> EDT and
     * <code>-05:00 EST</code>.</p>
     */
    inline ScheduledTriggerProperties& WithTimezone(const Aws::String& value) { SetTimezone(value); return *this;}

    /**
     * <p>Specifies the time zone used when referring to the dates and times of a
     * scheduled flow, such as <code>America/New_York</code>. This time zone is only a
     * descriptive label. It doesn't affect how Amazon AppFlow interprets the
     * timestamps that you specify to schedule the flow.</p> <p>If you want to schedule
     * a flow by using times in a particular time zone, indicate the time zone as a UTC
     * offset in your timestamps. For example, the UTC offsets for the
     * <code>America/New_York</code> timezone are <code>-04:00</code> EDT and
     * <code>-05:00 EST</code>.</p>
     */
    inline ScheduledTriggerProperties& WithTimezone(Aws::String&& value) { SetTimezone(std::move(value)); return *this;}

    /**
     * <p>Specifies the time zone used when referring to the dates and times of a
     * scheduled flow, such as <code>America/New_York</code>. This time zone is only a
     * descriptive label. It doesn't affect how Amazon AppFlow interprets the
     * timestamps that you specify to schedule the flow.</p> <p>If you want to schedule
     * a flow by using times in a particular time zone, indicate the time zone as a UTC
     * offset in your timestamps. For example, the UTC offsets for the
     * <code>America/New_York</code> timezone are <code>-04:00</code> EDT and
     * <code>-05:00 EST</code>.</p>
     */
    inline ScheduledTriggerProperties& WithTimezone(const char* value) { SetTimezone(value); return *this;}


    /**
     * <p> Specifies the optional offset that is added to the time interval for a
     * schedule-triggered flow. </p>
     */
    inline long long GetScheduleOffset() const{ return m_scheduleOffset; }

    /**
     * <p> Specifies the optional offset that is added to the time interval for a
     * schedule-triggered flow. </p>
     */
    inline bool ScheduleOffsetHasBeenSet() const { return m_scheduleOffsetHasBeenSet; }

    /**
     * <p> Specifies the optional offset that is added to the time interval for a
     * schedule-triggered flow. </p>
     */
    inline void SetScheduleOffset(long long value) { m_scheduleOffsetHasBeenSet = true; m_scheduleOffset = value; }

    /**
     * <p> Specifies the optional offset that is added to the time interval for a
     * schedule-triggered flow. </p>
     */
    inline ScheduledTriggerProperties& WithScheduleOffset(long long value) { SetScheduleOffset(value); return *this;}


    /**
     * <p> Specifies the date range for the records to import from the connector in the
     * first flow run. </p>
     */
    inline const Aws::Utils::DateTime& GetFirstExecutionFrom() const{ return m_firstExecutionFrom; }

    /**
     * <p> Specifies the date range for the records to import from the connector in the
     * first flow run. </p>
     */
    inline bool FirstExecutionFromHasBeenSet() const { return m_firstExecutionFromHasBeenSet; }

    /**
     * <p> Specifies the date range for the records to import from the connector in the
     * first flow run. </p>
     */
    inline void SetFirstExecutionFrom(const Aws::Utils::DateTime& value) { m_firstExecutionFromHasBeenSet = true; m_firstExecutionFrom = value; }

    /**
     * <p> Specifies the date range for the records to import from the connector in the
     * first flow run. </p>
     */
    inline void SetFirstExecutionFrom(Aws::Utils::DateTime&& value) { m_firstExecutionFromHasBeenSet = true; m_firstExecutionFrom = std::move(value); }

    /**
     * <p> Specifies the date range for the records to import from the connector in the
     * first flow run. </p>
     */
    inline ScheduledTriggerProperties& WithFirstExecutionFrom(const Aws::Utils::DateTime& value) { SetFirstExecutionFrom(value); return *this;}

    /**
     * <p> Specifies the date range for the records to import from the connector in the
     * first flow run. </p>
     */
    inline ScheduledTriggerProperties& WithFirstExecutionFrom(Aws::Utils::DateTime&& value) { SetFirstExecutionFrom(std::move(value)); return *this;}


    /**
     * <p>Defines how many times a scheduled flow fails consecutively before Amazon
     * AppFlow deactivates it.</p>
     */
    inline int GetFlowErrorDeactivationThreshold() const{ return m_flowErrorDeactivationThreshold; }

    /**
     * <p>Defines how many times a scheduled flow fails consecutively before Amazon
     * AppFlow deactivates it.</p>
     */
    inline bool FlowErrorDeactivationThresholdHasBeenSet() const { return m_flowErrorDeactivationThresholdHasBeenSet; }

    /**
     * <p>Defines how many times a scheduled flow fails consecutively before Amazon
     * AppFlow deactivates it.</p>
     */
    inline void SetFlowErrorDeactivationThreshold(int value) { m_flowErrorDeactivationThresholdHasBeenSet = true; m_flowErrorDeactivationThreshold = value; }

    /**
     * <p>Defines how many times a scheduled flow fails consecutively before Amazon
     * AppFlow deactivates it.</p>
     */
    inline ScheduledTriggerProperties& WithFlowErrorDeactivationThreshold(int value) { SetFlowErrorDeactivationThreshold(value); return *this;}

  private:

    Aws::String m_scheduleExpression;
    bool m_scheduleExpressionHasBeenSet = false;

    DataPullMode m_dataPullMode;
    bool m_dataPullModeHasBeenSet = false;

    Aws::Utils::DateTime m_scheduleStartTime;
    bool m_scheduleStartTimeHasBeenSet = false;

    Aws::Utils::DateTime m_scheduleEndTime;
    bool m_scheduleEndTimeHasBeenSet = false;

    Aws::String m_timezone;
    bool m_timezoneHasBeenSet = false;

    long long m_scheduleOffset;
    bool m_scheduleOffsetHasBeenSet = false;

    Aws::Utils::DateTime m_firstExecutionFrom;
    bool m_firstExecutionFromHasBeenSet = false;

    int m_flowErrorDeactivationThreshold;
    bool m_flowErrorDeactivationThresholdHasBeenSet = false;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws
