﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3-crt/S3Crt_EXPORTS.h>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace S3Crt
{
namespace Model
{

  /**
   * <p>The container element for a bucket's policy status.</p><p><h3>See Also:</h3> 
   * <a href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/PolicyStatus">AWS
   * API Reference</a></p>
   */
  class AWS_S3CRT_API PolicyStatus
  {
  public:
    PolicyStatus();
    PolicyStatus(const Aws::Utils::Xml::XmlNode& xmlNode);
    PolicyStatus& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>The policy status for this bucket. <code>TRUE</code> indicates that this
     * bucket is public. <code>FALSE</code> indicates that the bucket is not
     * public.</p>
     */
    inline bool GetIsPublic() const{ return m_isPublic; }

    /**
     * <p>The policy status for this bucket. <code>TRUE</code> indicates that this
     * bucket is public. <code>FALSE</code> indicates that the bucket is not
     * public.</p>
     */
    inline bool IsPublicHasBeenSet() const { return m_isPublicHasBeenSet; }

    /**
     * <p>The policy status for this bucket. <code>TRUE</code> indicates that this
     * bucket is public. <code>FALSE</code> indicates that the bucket is not
     * public.</p>
     */
    inline void SetIsPublic(bool value) { m_isPublicHasBeenSet = true; m_isPublic = value; }

    /**
     * <p>The policy status for this bucket. <code>TRUE</code> indicates that this
     * bucket is public. <code>FALSE</code> indicates that the bucket is not
     * public.</p>
     */
    inline PolicyStatus& WithIsPublic(bool value) { SetIsPublic(value); return *this;}

  private:

    bool m_isPublic;
    bool m_isPublicHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Crt
} // namespace Aws
