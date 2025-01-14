﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesis/Kinesis_EXPORTS.h>
#include <aws/kinesis/KinesisRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kinesis/model/StreamModeDetails.h>
#include <utility>

namespace Aws
{
namespace Kinesis
{
namespace Model
{

  /**
   */
  class AWS_KINESIS_API UpdateStreamModeRequest : public KinesisRequest
  {
  public:
    UpdateStreamModeRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateStreamMode"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p> Specifies the ARN of the data stream whose capacity mode you want to update.
     * </p>
     */
    inline const Aws::String& GetStreamARN() const{ return m_streamARN; }

    /**
     * <p> Specifies the ARN of the data stream whose capacity mode you want to update.
     * </p>
     */
    inline bool StreamARNHasBeenSet() const { return m_streamARNHasBeenSet; }

    /**
     * <p> Specifies the ARN of the data stream whose capacity mode you want to update.
     * </p>
     */
    inline void SetStreamARN(const Aws::String& value) { m_streamARNHasBeenSet = true; m_streamARN = value; }

    /**
     * <p> Specifies the ARN of the data stream whose capacity mode you want to update.
     * </p>
     */
    inline void SetStreamARN(Aws::String&& value) { m_streamARNHasBeenSet = true; m_streamARN = std::move(value); }

    /**
     * <p> Specifies the ARN of the data stream whose capacity mode you want to update.
     * </p>
     */
    inline void SetStreamARN(const char* value) { m_streamARNHasBeenSet = true; m_streamARN.assign(value); }

    /**
     * <p> Specifies the ARN of the data stream whose capacity mode you want to update.
     * </p>
     */
    inline UpdateStreamModeRequest& WithStreamARN(const Aws::String& value) { SetStreamARN(value); return *this;}

    /**
     * <p> Specifies the ARN of the data stream whose capacity mode you want to update.
     * </p>
     */
    inline UpdateStreamModeRequest& WithStreamARN(Aws::String&& value) { SetStreamARN(std::move(value)); return *this;}

    /**
     * <p> Specifies the ARN of the data stream whose capacity mode you want to update.
     * </p>
     */
    inline UpdateStreamModeRequest& WithStreamARN(const char* value) { SetStreamARN(value); return *this;}


    /**
     * <p> Specifies the capacity mode to which you want to set your data stream.
     * Currently, in Kinesis Data Streams, you can choose between an <b>on-demand</b>
     * capacity mode and a <b>provisioned</b> capacity mode for your data streams. </p>
     */
    inline const StreamModeDetails& GetStreamModeDetails() const{ return m_streamModeDetails; }

    /**
     * <p> Specifies the capacity mode to which you want to set your data stream.
     * Currently, in Kinesis Data Streams, you can choose between an <b>on-demand</b>
     * capacity mode and a <b>provisioned</b> capacity mode for your data streams. </p>
     */
    inline bool StreamModeDetailsHasBeenSet() const { return m_streamModeDetailsHasBeenSet; }

    /**
     * <p> Specifies the capacity mode to which you want to set your data stream.
     * Currently, in Kinesis Data Streams, you can choose between an <b>on-demand</b>
     * capacity mode and a <b>provisioned</b> capacity mode for your data streams. </p>
     */
    inline void SetStreamModeDetails(const StreamModeDetails& value) { m_streamModeDetailsHasBeenSet = true; m_streamModeDetails = value; }

    /**
     * <p> Specifies the capacity mode to which you want to set your data stream.
     * Currently, in Kinesis Data Streams, you can choose between an <b>on-demand</b>
     * capacity mode and a <b>provisioned</b> capacity mode for your data streams. </p>
     */
    inline void SetStreamModeDetails(StreamModeDetails&& value) { m_streamModeDetailsHasBeenSet = true; m_streamModeDetails = std::move(value); }

    /**
     * <p> Specifies the capacity mode to which you want to set your data stream.
     * Currently, in Kinesis Data Streams, you can choose between an <b>on-demand</b>
     * capacity mode and a <b>provisioned</b> capacity mode for your data streams. </p>
     */
    inline UpdateStreamModeRequest& WithStreamModeDetails(const StreamModeDetails& value) { SetStreamModeDetails(value); return *this;}

    /**
     * <p> Specifies the capacity mode to which you want to set your data stream.
     * Currently, in Kinesis Data Streams, you can choose between an <b>on-demand</b>
     * capacity mode and a <b>provisioned</b> capacity mode for your data streams. </p>
     */
    inline UpdateStreamModeRequest& WithStreamModeDetails(StreamModeDetails&& value) { SetStreamModeDetails(std::move(value)); return *this;}

  private:

    Aws::String m_streamARN;
    bool m_streamARNHasBeenSet = false;

    StreamModeDetails m_streamModeDetails;
    bool m_streamModeDetailsHasBeenSet = false;
  };

} // namespace Model
} // namespace Kinesis
} // namespace Aws
