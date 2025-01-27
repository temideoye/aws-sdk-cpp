﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces-web/WorkSpacesWeb_EXPORTS.h>
#include <aws/workspaces-web/WorkSpacesWebRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/Array.h>
#include <aws/workspaces-web/model/Tag.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace WorkSpacesWeb
{
namespace Model
{

  /**
   */
  class AWS_WORKSPACESWEB_API CreateTrustStoreRequest : public WorkSpacesWebRequest
  {
  public:
    CreateTrustStoreRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateTrustStore"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>A list of CA certificates to be added to the trust store.</p>
     */
    inline const Aws::Vector<Aws::Utils::ByteBuffer>& GetCertificateList() const{ return m_certificateList; }

    /**
     * <p>A list of CA certificates to be added to the trust store.</p>
     */
    inline bool CertificateListHasBeenSet() const { return m_certificateListHasBeenSet; }

    /**
     * <p>A list of CA certificates to be added to the trust store.</p>
     */
    inline void SetCertificateList(const Aws::Vector<Aws::Utils::ByteBuffer>& value) { m_certificateListHasBeenSet = true; m_certificateList = value; }

    /**
     * <p>A list of CA certificates to be added to the trust store.</p>
     */
    inline void SetCertificateList(Aws::Vector<Aws::Utils::ByteBuffer>&& value) { m_certificateListHasBeenSet = true; m_certificateList = std::move(value); }

    /**
     * <p>A list of CA certificates to be added to the trust store.</p>
     */
    inline CreateTrustStoreRequest& WithCertificateList(const Aws::Vector<Aws::Utils::ByteBuffer>& value) { SetCertificateList(value); return *this;}

    /**
     * <p>A list of CA certificates to be added to the trust store.</p>
     */
    inline CreateTrustStoreRequest& WithCertificateList(Aws::Vector<Aws::Utils::ByteBuffer>&& value) { SetCertificateList(std::move(value)); return *this;}

    /**
     * <p>A list of CA certificates to be added to the trust store.</p>
     */
    inline CreateTrustStoreRequest& AddCertificateList(const Aws::Utils::ByteBuffer& value) { m_certificateListHasBeenSet = true; m_certificateList.push_back(value); return *this; }

    /**
     * <p>A list of CA certificates to be added to the trust store.</p>
     */
    inline CreateTrustStoreRequest& AddCertificateList(Aws::Utils::ByteBuffer&& value) { m_certificateListHasBeenSet = true; m_certificateList.push_back(std::move(value)); return *this; }


    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. Idempotency ensures that an API request completes
     * only once. With an idempotent request, if the original request completes
     * successfully, subsequent retries with the same client token returns the result
     * from the original successful request. </p> <p>If you do not specify a client
     * token, one is automatically generated by the AWS SDK.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. Idempotency ensures that an API request completes
     * only once. With an idempotent request, if the original request completes
     * successfully, subsequent retries with the same client token returns the result
     * from the original successful request. </p> <p>If you do not specify a client
     * token, one is automatically generated by the AWS SDK.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. Idempotency ensures that an API request completes
     * only once. With an idempotent request, if the original request completes
     * successfully, subsequent retries with the same client token returns the result
     * from the original successful request. </p> <p>If you do not specify a client
     * token, one is automatically generated by the AWS SDK.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. Idempotency ensures that an API request completes
     * only once. With an idempotent request, if the original request completes
     * successfully, subsequent retries with the same client token returns the result
     * from the original successful request. </p> <p>If you do not specify a client
     * token, one is automatically generated by the AWS SDK.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. Idempotency ensures that an API request completes
     * only once. With an idempotent request, if the original request completes
     * successfully, subsequent retries with the same client token returns the result
     * from the original successful request. </p> <p>If you do not specify a client
     * token, one is automatically generated by the AWS SDK.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. Idempotency ensures that an API request completes
     * only once. With an idempotent request, if the original request completes
     * successfully, subsequent retries with the same client token returns the result
     * from the original successful request. </p> <p>If you do not specify a client
     * token, one is automatically generated by the AWS SDK.</p>
     */
    inline CreateTrustStoreRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. Idempotency ensures that an API request completes
     * only once. With an idempotent request, if the original request completes
     * successfully, subsequent retries with the same client token returns the result
     * from the original successful request. </p> <p>If you do not specify a client
     * token, one is automatically generated by the AWS SDK.</p>
     */
    inline CreateTrustStoreRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. Idempotency ensures that an API request completes
     * only once. With an idempotent request, if the original request completes
     * successfully, subsequent retries with the same client token returns the result
     * from the original successful request. </p> <p>If you do not specify a client
     * token, one is automatically generated by the AWS SDK.</p>
     */
    inline CreateTrustStoreRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>The tags to add to the trust store. A tag is a key-value pair.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags to add to the trust store. A tag is a key-value pair.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags to add to the trust store. A tag is a key-value pair.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags to add to the trust store. A tag is a key-value pair.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags to add to the trust store. A tag is a key-value pair.</p>
     */
    inline CreateTrustStoreRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags to add to the trust store. A tag is a key-value pair.</p>
     */
    inline CreateTrustStoreRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags to add to the trust store. A tag is a key-value pair.</p>
     */
    inline CreateTrustStoreRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The tags to add to the trust store. A tag is a key-value pair.</p>
     */
    inline CreateTrustStoreRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<Aws::Utils::ByteBuffer> m_certificateList;
    bool m_certificateListHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpacesWeb
} // namespace Aws
