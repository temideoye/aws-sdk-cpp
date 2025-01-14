﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/opensearch/model/VolumeType.h>
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
namespace OpenSearchService
{
namespace Model
{

  /**
   * <p>Options to enable, disable, and specify the properties of EBS storage
   * volumes.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/EBSOptions">AWS
   * API Reference</a></p>
   */
  class AWS_OPENSEARCHSERVICE_API EBSOptions
  {
  public:
    EBSOptions();
    EBSOptions(Aws::Utils::Json::JsonView jsonValue);
    EBSOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Whether EBS-based storage is enabled.</p>
     */
    inline bool GetEBSEnabled() const{ return m_eBSEnabled; }

    /**
     * <p>Whether EBS-based storage is enabled.</p>
     */
    inline bool EBSEnabledHasBeenSet() const { return m_eBSEnabledHasBeenSet; }

    /**
     * <p>Whether EBS-based storage is enabled.</p>
     */
    inline void SetEBSEnabled(bool value) { m_eBSEnabledHasBeenSet = true; m_eBSEnabled = value; }

    /**
     * <p>Whether EBS-based storage is enabled.</p>
     */
    inline EBSOptions& WithEBSEnabled(bool value) { SetEBSEnabled(value); return *this;}


    /**
     * <p>The volume type for EBS-based storage.</p>
     */
    inline const VolumeType& GetVolumeType() const{ return m_volumeType; }

    /**
     * <p>The volume type for EBS-based storage.</p>
     */
    inline bool VolumeTypeHasBeenSet() const { return m_volumeTypeHasBeenSet; }

    /**
     * <p>The volume type for EBS-based storage.</p>
     */
    inline void SetVolumeType(const VolumeType& value) { m_volumeTypeHasBeenSet = true; m_volumeType = value; }

    /**
     * <p>The volume type for EBS-based storage.</p>
     */
    inline void SetVolumeType(VolumeType&& value) { m_volumeTypeHasBeenSet = true; m_volumeType = std::move(value); }

    /**
     * <p>The volume type for EBS-based storage.</p>
     */
    inline EBSOptions& WithVolumeType(const VolumeType& value) { SetVolumeType(value); return *this;}

    /**
     * <p>The volume type for EBS-based storage.</p>
     */
    inline EBSOptions& WithVolumeType(VolumeType&& value) { SetVolumeType(std::move(value)); return *this;}


    /**
     * <p>Integer to specify the size of an EBS volume.</p>
     */
    inline int GetVolumeSize() const{ return m_volumeSize; }

    /**
     * <p>Integer to specify the size of an EBS volume.</p>
     */
    inline bool VolumeSizeHasBeenSet() const { return m_volumeSizeHasBeenSet; }

    /**
     * <p>Integer to specify the size of an EBS volume.</p>
     */
    inline void SetVolumeSize(int value) { m_volumeSizeHasBeenSet = true; m_volumeSize = value; }

    /**
     * <p>Integer to specify the size of an EBS volume.</p>
     */
    inline EBSOptions& WithVolumeSize(int value) { SetVolumeSize(value); return *this;}


    /**
     * <p>The IOPS for Provisioned IOPS And GP3 EBS volume (SSD).</p>
     */
    inline int GetIops() const{ return m_iops; }

    /**
     * <p>The IOPS for Provisioned IOPS And GP3 EBS volume (SSD).</p>
     */
    inline bool IopsHasBeenSet() const { return m_iopsHasBeenSet; }

    /**
     * <p>The IOPS for Provisioned IOPS And GP3 EBS volume (SSD).</p>
     */
    inline void SetIops(int value) { m_iopsHasBeenSet = true; m_iops = value; }

    /**
     * <p>The IOPS for Provisioned IOPS And GP3 EBS volume (SSD).</p>
     */
    inline EBSOptions& WithIops(int value) { SetIops(value); return *this;}


    /**
     * <p>The Throughput for GP3 EBS volume (SSD).</p>
     */
    inline int GetThroughput() const{ return m_throughput; }

    /**
     * <p>The Throughput for GP3 EBS volume (SSD).</p>
     */
    inline bool ThroughputHasBeenSet() const { return m_throughputHasBeenSet; }

    /**
     * <p>The Throughput for GP3 EBS volume (SSD).</p>
     */
    inline void SetThroughput(int value) { m_throughputHasBeenSet = true; m_throughput = value; }

    /**
     * <p>The Throughput for GP3 EBS volume (SSD).</p>
     */
    inline EBSOptions& WithThroughput(int value) { SetThroughput(value); return *this;}

  private:

    bool m_eBSEnabled;
    bool m_eBSEnabledHasBeenSet = false;

    VolumeType m_volumeType;
    bool m_volumeTypeHasBeenSet = false;

    int m_volumeSize;
    bool m_volumeSizeHasBeenSet = false;

    int m_iops;
    bool m_iopsHasBeenSet = false;

    int m_throughput;
    bool m_throughputHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
