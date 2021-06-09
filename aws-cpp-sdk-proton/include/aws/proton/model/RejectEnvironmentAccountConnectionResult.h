﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/proton/Proton_EXPORTS.h>
#include <aws/proton/model/EnvironmentAccountConnection.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Proton
{
namespace Model
{
  class AWS_PROTON_API RejectEnvironmentAccountConnectionResult
  {
  public:
    RejectEnvironmentAccountConnectionResult();
    RejectEnvironmentAccountConnectionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    RejectEnvironmentAccountConnectionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The environment connection account detail data that's returned by AWS
     * Proton.</p>
     */
    inline const EnvironmentAccountConnection& GetEnvironmentAccountConnection() const{ return m_environmentAccountConnection; }

    /**
     * <p>The environment connection account detail data that's returned by AWS
     * Proton.</p>
     */
    inline void SetEnvironmentAccountConnection(const EnvironmentAccountConnection& value) { m_environmentAccountConnection = value; }

    /**
     * <p>The environment connection account detail data that's returned by AWS
     * Proton.</p>
     */
    inline void SetEnvironmentAccountConnection(EnvironmentAccountConnection&& value) { m_environmentAccountConnection = std::move(value); }

    /**
     * <p>The environment connection account detail data that's returned by AWS
     * Proton.</p>
     */
    inline RejectEnvironmentAccountConnectionResult& WithEnvironmentAccountConnection(const EnvironmentAccountConnection& value) { SetEnvironmentAccountConnection(value); return *this;}

    /**
     * <p>The environment connection account detail data that's returned by AWS
     * Proton.</p>
     */
    inline RejectEnvironmentAccountConnectionResult& WithEnvironmentAccountConnection(EnvironmentAccountConnection&& value) { SetEnvironmentAccountConnection(std::move(value)); return *this;}

  private:

    EnvironmentAccountConnection m_environmentAccountConnection;
  };

} // namespace Model
} // namespace Proton
} // namespace Aws
