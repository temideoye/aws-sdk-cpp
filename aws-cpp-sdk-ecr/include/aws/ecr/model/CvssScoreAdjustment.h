﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecr/ECR_EXPORTS.h>
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
namespace ECR
{
namespace Model
{

  /**
   * <p>Details on adjustments Amazon Inspector made to the CVSS score for a
   * finding.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/CvssScoreAdjustment">AWS
   * API Reference</a></p>
   */
  class AWS_ECR_API CvssScoreAdjustment
  {
  public:
    CvssScoreAdjustment();
    CvssScoreAdjustment(Aws::Utils::Json::JsonView jsonValue);
    CvssScoreAdjustment& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The metric used to adjust the CVSS score.</p>
     */
    inline const Aws::String& GetMetric() const{ return m_metric; }

    /**
     * <p>The metric used to adjust the CVSS score.</p>
     */
    inline bool MetricHasBeenSet() const { return m_metricHasBeenSet; }

    /**
     * <p>The metric used to adjust the CVSS score.</p>
     */
    inline void SetMetric(const Aws::String& value) { m_metricHasBeenSet = true; m_metric = value; }

    /**
     * <p>The metric used to adjust the CVSS score.</p>
     */
    inline void SetMetric(Aws::String&& value) { m_metricHasBeenSet = true; m_metric = std::move(value); }

    /**
     * <p>The metric used to adjust the CVSS score.</p>
     */
    inline void SetMetric(const char* value) { m_metricHasBeenSet = true; m_metric.assign(value); }

    /**
     * <p>The metric used to adjust the CVSS score.</p>
     */
    inline CvssScoreAdjustment& WithMetric(const Aws::String& value) { SetMetric(value); return *this;}

    /**
     * <p>The metric used to adjust the CVSS score.</p>
     */
    inline CvssScoreAdjustment& WithMetric(Aws::String&& value) { SetMetric(std::move(value)); return *this;}

    /**
     * <p>The metric used to adjust the CVSS score.</p>
     */
    inline CvssScoreAdjustment& WithMetric(const char* value) { SetMetric(value); return *this;}


    /**
     * <p>The reason the CVSS score has been adjustment.</p>
     */
    inline const Aws::String& GetReason() const{ return m_reason; }

    /**
     * <p>The reason the CVSS score has been adjustment.</p>
     */
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }

    /**
     * <p>The reason the CVSS score has been adjustment.</p>
     */
    inline void SetReason(const Aws::String& value) { m_reasonHasBeenSet = true; m_reason = value; }

    /**
     * <p>The reason the CVSS score has been adjustment.</p>
     */
    inline void SetReason(Aws::String&& value) { m_reasonHasBeenSet = true; m_reason = std::move(value); }

    /**
     * <p>The reason the CVSS score has been adjustment.</p>
     */
    inline void SetReason(const char* value) { m_reasonHasBeenSet = true; m_reason.assign(value); }

    /**
     * <p>The reason the CVSS score has been adjustment.</p>
     */
    inline CvssScoreAdjustment& WithReason(const Aws::String& value) { SetReason(value); return *this;}

    /**
     * <p>The reason the CVSS score has been adjustment.</p>
     */
    inline CvssScoreAdjustment& WithReason(Aws::String&& value) { SetReason(std::move(value)); return *this;}

    /**
     * <p>The reason the CVSS score has been adjustment.</p>
     */
    inline CvssScoreAdjustment& WithReason(const char* value) { SetReason(value); return *this;}

  private:

    Aws::String m_metric;
    bool m_metricHasBeenSet = false;

    Aws::String m_reason;
    bool m_reasonHasBeenSet = false;
  };

} // namespace Model
} // namespace ECR
} // namespace Aws
