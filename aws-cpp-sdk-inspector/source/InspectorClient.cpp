﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/Outcome.h>
#include <aws/core/auth/AWSAuthSigner.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/client/RetryStrategy.h>
#include <aws/core/http/HttpClient.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/core/utils/DNS.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <aws/inspector/InspectorClient.h>
#include <aws/inspector/InspectorEndpoint.h>
#include <aws/inspector/InspectorErrorMarshaller.h>
#include <aws/inspector/model/AddAttributesToFindingsRequest.h>
#include <aws/inspector/model/CreateAssessmentTargetRequest.h>
#include <aws/inspector/model/CreateAssessmentTemplateRequest.h>
#include <aws/inspector/model/CreateExclusionsPreviewRequest.h>
#include <aws/inspector/model/CreateResourceGroupRequest.h>
#include <aws/inspector/model/DeleteAssessmentRunRequest.h>
#include <aws/inspector/model/DeleteAssessmentTargetRequest.h>
#include <aws/inspector/model/DeleteAssessmentTemplateRequest.h>
#include <aws/inspector/model/DescribeAssessmentRunsRequest.h>
#include <aws/inspector/model/DescribeAssessmentTargetsRequest.h>
#include <aws/inspector/model/DescribeAssessmentTemplatesRequest.h>
#include <aws/inspector/model/DescribeExclusionsRequest.h>
#include <aws/inspector/model/DescribeFindingsRequest.h>
#include <aws/inspector/model/DescribeResourceGroupsRequest.h>
#include <aws/inspector/model/DescribeRulesPackagesRequest.h>
#include <aws/inspector/model/GetAssessmentReportRequest.h>
#include <aws/inspector/model/GetExclusionsPreviewRequest.h>
#include <aws/inspector/model/GetTelemetryMetadataRequest.h>
#include <aws/inspector/model/ListAssessmentRunAgentsRequest.h>
#include <aws/inspector/model/ListAssessmentRunsRequest.h>
#include <aws/inspector/model/ListAssessmentTargetsRequest.h>
#include <aws/inspector/model/ListAssessmentTemplatesRequest.h>
#include <aws/inspector/model/ListEventSubscriptionsRequest.h>
#include <aws/inspector/model/ListExclusionsRequest.h>
#include <aws/inspector/model/ListFindingsRequest.h>
#include <aws/inspector/model/ListRulesPackagesRequest.h>
#include <aws/inspector/model/ListTagsForResourceRequest.h>
#include <aws/inspector/model/PreviewAgentsRequest.h>
#include <aws/inspector/model/RegisterCrossAccountAccessRoleRequest.h>
#include <aws/inspector/model/RemoveAttributesFromFindingsRequest.h>
#include <aws/inspector/model/SetTagsForResourceRequest.h>
#include <aws/inspector/model/StartAssessmentRunRequest.h>
#include <aws/inspector/model/StopAssessmentRunRequest.h>
#include <aws/inspector/model/SubscribeToEventRequest.h>
#include <aws/inspector/model/UnsubscribeFromEventRequest.h>
#include <aws/inspector/model/UpdateAssessmentTargetRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::Inspector;
using namespace Aws::Inspector::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "inspector";
static const char* ALLOCATION_TAG = "InspectorClient";

InspectorClient::InspectorClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<InspectorErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

InspectorClient::InspectorClient(const AWSCredentials& credentials,
                                 const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<InspectorErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

InspectorClient::InspectorClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                 const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<InspectorErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

InspectorClient::~InspectorClient()
{
}

void InspectorClient::init(const Client::ClientConfiguration& config)
{
  AWSClient::SetServiceClientName("Inspector");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + InspectorEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void InspectorClient::OverrideEndpoint(const Aws::String& endpoint)
{
  if (endpoint.compare(0, 7, "http://") == 0 || endpoint.compare(0, 8, "https://") == 0)
  {
      m_uri = endpoint;
  }
  else
  {
      m_uri = m_configScheme + "://" + endpoint;
  }
}

AddAttributesToFindingsOutcome InspectorClient::AddAttributesToFindings(const AddAttributesToFindingsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return AddAttributesToFindingsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AddAttributesToFindingsOutcomeCallable InspectorClient::AddAttributesToFindingsCallable(const AddAttributesToFindingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AddAttributesToFindingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AddAttributesToFindings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void InspectorClient::AddAttributesToFindingsAsync(const AddAttributesToFindingsRequest& request, const AddAttributesToFindingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, AddAttributesToFindings(request), context);
    } );
}

CreateAssessmentTargetOutcome InspectorClient::CreateAssessmentTarget(const CreateAssessmentTargetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateAssessmentTargetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateAssessmentTargetOutcomeCallable InspectorClient::CreateAssessmentTargetCallable(const CreateAssessmentTargetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateAssessmentTargetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateAssessmentTarget(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void InspectorClient::CreateAssessmentTargetAsync(const CreateAssessmentTargetRequest& request, const CreateAssessmentTargetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateAssessmentTarget(request), context);
    } );
}

CreateAssessmentTemplateOutcome InspectorClient::CreateAssessmentTemplate(const CreateAssessmentTemplateRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateAssessmentTemplateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateAssessmentTemplateOutcomeCallable InspectorClient::CreateAssessmentTemplateCallable(const CreateAssessmentTemplateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateAssessmentTemplateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateAssessmentTemplate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void InspectorClient::CreateAssessmentTemplateAsync(const CreateAssessmentTemplateRequest& request, const CreateAssessmentTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateAssessmentTemplate(request), context);
    } );
}

CreateExclusionsPreviewOutcome InspectorClient::CreateExclusionsPreview(const CreateExclusionsPreviewRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateExclusionsPreviewOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateExclusionsPreviewOutcomeCallable InspectorClient::CreateExclusionsPreviewCallable(const CreateExclusionsPreviewRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateExclusionsPreviewOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateExclusionsPreview(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void InspectorClient::CreateExclusionsPreviewAsync(const CreateExclusionsPreviewRequest& request, const CreateExclusionsPreviewResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateExclusionsPreview(request), context);
    } );
}

CreateResourceGroupOutcome InspectorClient::CreateResourceGroup(const CreateResourceGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateResourceGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateResourceGroupOutcomeCallable InspectorClient::CreateResourceGroupCallable(const CreateResourceGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateResourceGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateResourceGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void InspectorClient::CreateResourceGroupAsync(const CreateResourceGroupRequest& request, const CreateResourceGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateResourceGroup(request), context);
    } );
}

DeleteAssessmentRunOutcome InspectorClient::DeleteAssessmentRun(const DeleteAssessmentRunRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteAssessmentRunOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteAssessmentRunOutcomeCallable InspectorClient::DeleteAssessmentRunCallable(const DeleteAssessmentRunRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteAssessmentRunOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteAssessmentRun(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void InspectorClient::DeleteAssessmentRunAsync(const DeleteAssessmentRunRequest& request, const DeleteAssessmentRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteAssessmentRun(request), context);
    } );
}

DeleteAssessmentTargetOutcome InspectorClient::DeleteAssessmentTarget(const DeleteAssessmentTargetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteAssessmentTargetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteAssessmentTargetOutcomeCallable InspectorClient::DeleteAssessmentTargetCallable(const DeleteAssessmentTargetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteAssessmentTargetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteAssessmentTarget(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void InspectorClient::DeleteAssessmentTargetAsync(const DeleteAssessmentTargetRequest& request, const DeleteAssessmentTargetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteAssessmentTarget(request), context);
    } );
}

DeleteAssessmentTemplateOutcome InspectorClient::DeleteAssessmentTemplate(const DeleteAssessmentTemplateRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteAssessmentTemplateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteAssessmentTemplateOutcomeCallable InspectorClient::DeleteAssessmentTemplateCallable(const DeleteAssessmentTemplateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteAssessmentTemplateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteAssessmentTemplate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void InspectorClient::DeleteAssessmentTemplateAsync(const DeleteAssessmentTemplateRequest& request, const DeleteAssessmentTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteAssessmentTemplate(request), context);
    } );
}

DescribeAssessmentRunsOutcome InspectorClient::DescribeAssessmentRuns(const DescribeAssessmentRunsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeAssessmentRunsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeAssessmentRunsOutcomeCallable InspectorClient::DescribeAssessmentRunsCallable(const DescribeAssessmentRunsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeAssessmentRunsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeAssessmentRuns(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void InspectorClient::DescribeAssessmentRunsAsync(const DescribeAssessmentRunsRequest& request, const DescribeAssessmentRunsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeAssessmentRuns(request), context);
    } );
}

DescribeAssessmentTargetsOutcome InspectorClient::DescribeAssessmentTargets(const DescribeAssessmentTargetsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeAssessmentTargetsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeAssessmentTargetsOutcomeCallable InspectorClient::DescribeAssessmentTargetsCallable(const DescribeAssessmentTargetsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeAssessmentTargetsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeAssessmentTargets(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void InspectorClient::DescribeAssessmentTargetsAsync(const DescribeAssessmentTargetsRequest& request, const DescribeAssessmentTargetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeAssessmentTargets(request), context);
    } );
}

DescribeAssessmentTemplatesOutcome InspectorClient::DescribeAssessmentTemplates(const DescribeAssessmentTemplatesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeAssessmentTemplatesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeAssessmentTemplatesOutcomeCallable InspectorClient::DescribeAssessmentTemplatesCallable(const DescribeAssessmentTemplatesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeAssessmentTemplatesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeAssessmentTemplates(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void InspectorClient::DescribeAssessmentTemplatesAsync(const DescribeAssessmentTemplatesRequest& request, const DescribeAssessmentTemplatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeAssessmentTemplates(request), context);
    } );
}

DescribeCrossAccountAccessRoleOutcome InspectorClient::DescribeCrossAccountAccessRole() const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  return DescribeCrossAccountAccessRoleOutcome(MakeRequest(ss.str(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER, "DescribeCrossAccountAccessRole"));
}

DescribeCrossAccountAccessRoleOutcomeCallable InspectorClient::DescribeCrossAccountAccessRoleCallable() const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeCrossAccountAccessRoleOutcome() > >(ALLOCATION_TAG, [this](){ return this->DescribeCrossAccountAccessRole(); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void InspectorClient::DescribeCrossAccountAccessRoleAsync(const DescribeCrossAccountAccessRoleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, handler, context]()
    {
      handler(this, DescribeCrossAccountAccessRole(), context);
    } );
}

DescribeExclusionsOutcome InspectorClient::DescribeExclusions(const DescribeExclusionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeExclusionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeExclusionsOutcomeCallable InspectorClient::DescribeExclusionsCallable(const DescribeExclusionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeExclusionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeExclusions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void InspectorClient::DescribeExclusionsAsync(const DescribeExclusionsRequest& request, const DescribeExclusionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeExclusions(request), context);
    } );
}

DescribeFindingsOutcome InspectorClient::DescribeFindings(const DescribeFindingsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeFindingsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeFindingsOutcomeCallable InspectorClient::DescribeFindingsCallable(const DescribeFindingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeFindingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeFindings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void InspectorClient::DescribeFindingsAsync(const DescribeFindingsRequest& request, const DescribeFindingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeFindings(request), context);
    } );
}

DescribeResourceGroupsOutcome InspectorClient::DescribeResourceGroups(const DescribeResourceGroupsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeResourceGroupsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeResourceGroupsOutcomeCallable InspectorClient::DescribeResourceGroupsCallable(const DescribeResourceGroupsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeResourceGroupsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeResourceGroups(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void InspectorClient::DescribeResourceGroupsAsync(const DescribeResourceGroupsRequest& request, const DescribeResourceGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeResourceGroups(request), context);
    } );
}

DescribeRulesPackagesOutcome InspectorClient::DescribeRulesPackages(const DescribeRulesPackagesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeRulesPackagesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeRulesPackagesOutcomeCallable InspectorClient::DescribeRulesPackagesCallable(const DescribeRulesPackagesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeRulesPackagesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeRulesPackages(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void InspectorClient::DescribeRulesPackagesAsync(const DescribeRulesPackagesRequest& request, const DescribeRulesPackagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeRulesPackages(request), context);
    } );
}

GetAssessmentReportOutcome InspectorClient::GetAssessmentReport(const GetAssessmentReportRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetAssessmentReportOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetAssessmentReportOutcomeCallable InspectorClient::GetAssessmentReportCallable(const GetAssessmentReportRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetAssessmentReportOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetAssessmentReport(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void InspectorClient::GetAssessmentReportAsync(const GetAssessmentReportRequest& request, const GetAssessmentReportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetAssessmentReport(request), context);
    } );
}

GetExclusionsPreviewOutcome InspectorClient::GetExclusionsPreview(const GetExclusionsPreviewRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetExclusionsPreviewOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetExclusionsPreviewOutcomeCallable InspectorClient::GetExclusionsPreviewCallable(const GetExclusionsPreviewRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetExclusionsPreviewOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetExclusionsPreview(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void InspectorClient::GetExclusionsPreviewAsync(const GetExclusionsPreviewRequest& request, const GetExclusionsPreviewResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetExclusionsPreview(request), context);
    } );
}

GetTelemetryMetadataOutcome InspectorClient::GetTelemetryMetadata(const GetTelemetryMetadataRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetTelemetryMetadataOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetTelemetryMetadataOutcomeCallable InspectorClient::GetTelemetryMetadataCallable(const GetTelemetryMetadataRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetTelemetryMetadataOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetTelemetryMetadata(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void InspectorClient::GetTelemetryMetadataAsync(const GetTelemetryMetadataRequest& request, const GetTelemetryMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetTelemetryMetadata(request), context);
    } );
}

ListAssessmentRunAgentsOutcome InspectorClient::ListAssessmentRunAgents(const ListAssessmentRunAgentsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListAssessmentRunAgentsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListAssessmentRunAgentsOutcomeCallable InspectorClient::ListAssessmentRunAgentsCallable(const ListAssessmentRunAgentsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAssessmentRunAgentsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListAssessmentRunAgents(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void InspectorClient::ListAssessmentRunAgentsAsync(const ListAssessmentRunAgentsRequest& request, const ListAssessmentRunAgentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListAssessmentRunAgents(request), context);
    } );
}

ListAssessmentRunsOutcome InspectorClient::ListAssessmentRuns(const ListAssessmentRunsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListAssessmentRunsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListAssessmentRunsOutcomeCallable InspectorClient::ListAssessmentRunsCallable(const ListAssessmentRunsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAssessmentRunsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListAssessmentRuns(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void InspectorClient::ListAssessmentRunsAsync(const ListAssessmentRunsRequest& request, const ListAssessmentRunsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListAssessmentRuns(request), context);
    } );
}

ListAssessmentTargetsOutcome InspectorClient::ListAssessmentTargets(const ListAssessmentTargetsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListAssessmentTargetsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListAssessmentTargetsOutcomeCallable InspectorClient::ListAssessmentTargetsCallable(const ListAssessmentTargetsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAssessmentTargetsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListAssessmentTargets(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void InspectorClient::ListAssessmentTargetsAsync(const ListAssessmentTargetsRequest& request, const ListAssessmentTargetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListAssessmentTargets(request), context);
    } );
}

ListAssessmentTemplatesOutcome InspectorClient::ListAssessmentTemplates(const ListAssessmentTemplatesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListAssessmentTemplatesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListAssessmentTemplatesOutcomeCallable InspectorClient::ListAssessmentTemplatesCallable(const ListAssessmentTemplatesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAssessmentTemplatesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListAssessmentTemplates(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void InspectorClient::ListAssessmentTemplatesAsync(const ListAssessmentTemplatesRequest& request, const ListAssessmentTemplatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListAssessmentTemplates(request), context);
    } );
}

ListEventSubscriptionsOutcome InspectorClient::ListEventSubscriptions(const ListEventSubscriptionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListEventSubscriptionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListEventSubscriptionsOutcomeCallable InspectorClient::ListEventSubscriptionsCallable(const ListEventSubscriptionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListEventSubscriptionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListEventSubscriptions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void InspectorClient::ListEventSubscriptionsAsync(const ListEventSubscriptionsRequest& request, const ListEventSubscriptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListEventSubscriptions(request), context);
    } );
}

ListExclusionsOutcome InspectorClient::ListExclusions(const ListExclusionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListExclusionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListExclusionsOutcomeCallable InspectorClient::ListExclusionsCallable(const ListExclusionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListExclusionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListExclusions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void InspectorClient::ListExclusionsAsync(const ListExclusionsRequest& request, const ListExclusionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListExclusions(request), context);
    } );
}

ListFindingsOutcome InspectorClient::ListFindings(const ListFindingsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListFindingsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListFindingsOutcomeCallable InspectorClient::ListFindingsCallable(const ListFindingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListFindingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListFindings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void InspectorClient::ListFindingsAsync(const ListFindingsRequest& request, const ListFindingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListFindings(request), context);
    } );
}

ListRulesPackagesOutcome InspectorClient::ListRulesPackages(const ListRulesPackagesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListRulesPackagesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListRulesPackagesOutcomeCallable InspectorClient::ListRulesPackagesCallable(const ListRulesPackagesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListRulesPackagesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListRulesPackages(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void InspectorClient::ListRulesPackagesAsync(const ListRulesPackagesRequest& request, const ListRulesPackagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListRulesPackages(request), context);
    } );
}

ListTagsForResourceOutcome InspectorClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListTagsForResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable InspectorClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void InspectorClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListTagsForResource(request), context);
    } );
}

PreviewAgentsOutcome InspectorClient::PreviewAgents(const PreviewAgentsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return PreviewAgentsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PreviewAgentsOutcomeCallable InspectorClient::PreviewAgentsCallable(const PreviewAgentsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PreviewAgentsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PreviewAgents(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void InspectorClient::PreviewAgentsAsync(const PreviewAgentsRequest& request, const PreviewAgentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PreviewAgents(request), context);
    } );
}

RegisterCrossAccountAccessRoleOutcome InspectorClient::RegisterCrossAccountAccessRole(const RegisterCrossAccountAccessRoleRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return RegisterCrossAccountAccessRoleOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RegisterCrossAccountAccessRoleOutcomeCallable InspectorClient::RegisterCrossAccountAccessRoleCallable(const RegisterCrossAccountAccessRoleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RegisterCrossAccountAccessRoleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RegisterCrossAccountAccessRole(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void InspectorClient::RegisterCrossAccountAccessRoleAsync(const RegisterCrossAccountAccessRoleRequest& request, const RegisterCrossAccountAccessRoleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, RegisterCrossAccountAccessRole(request), context);
    } );
}

RemoveAttributesFromFindingsOutcome InspectorClient::RemoveAttributesFromFindings(const RemoveAttributesFromFindingsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return RemoveAttributesFromFindingsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RemoveAttributesFromFindingsOutcomeCallable InspectorClient::RemoveAttributesFromFindingsCallable(const RemoveAttributesFromFindingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RemoveAttributesFromFindingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RemoveAttributesFromFindings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void InspectorClient::RemoveAttributesFromFindingsAsync(const RemoveAttributesFromFindingsRequest& request, const RemoveAttributesFromFindingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, RemoveAttributesFromFindings(request), context);
    } );
}

SetTagsForResourceOutcome InspectorClient::SetTagsForResource(const SetTagsForResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return SetTagsForResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

SetTagsForResourceOutcomeCallable InspectorClient::SetTagsForResourceCallable(const SetTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SetTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SetTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void InspectorClient::SetTagsForResourceAsync(const SetTagsForResourceRequest& request, const SetTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, SetTagsForResource(request), context);
    } );
}

StartAssessmentRunOutcome InspectorClient::StartAssessmentRun(const StartAssessmentRunRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StartAssessmentRunOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartAssessmentRunOutcomeCallable InspectorClient::StartAssessmentRunCallable(const StartAssessmentRunRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartAssessmentRunOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartAssessmentRun(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void InspectorClient::StartAssessmentRunAsync(const StartAssessmentRunRequest& request, const StartAssessmentRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StartAssessmentRun(request), context);
    } );
}

StopAssessmentRunOutcome InspectorClient::StopAssessmentRun(const StopAssessmentRunRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StopAssessmentRunOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StopAssessmentRunOutcomeCallable InspectorClient::StopAssessmentRunCallable(const StopAssessmentRunRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopAssessmentRunOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopAssessmentRun(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void InspectorClient::StopAssessmentRunAsync(const StopAssessmentRunRequest& request, const StopAssessmentRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StopAssessmentRun(request), context);
    } );
}

SubscribeToEventOutcome InspectorClient::SubscribeToEvent(const SubscribeToEventRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return SubscribeToEventOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

SubscribeToEventOutcomeCallable InspectorClient::SubscribeToEventCallable(const SubscribeToEventRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SubscribeToEventOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SubscribeToEvent(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void InspectorClient::SubscribeToEventAsync(const SubscribeToEventRequest& request, const SubscribeToEventResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, SubscribeToEvent(request), context);
    } );
}

UnsubscribeFromEventOutcome InspectorClient::UnsubscribeFromEvent(const UnsubscribeFromEventRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UnsubscribeFromEventOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UnsubscribeFromEventOutcomeCallable InspectorClient::UnsubscribeFromEventCallable(const UnsubscribeFromEventRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UnsubscribeFromEventOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UnsubscribeFromEvent(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void InspectorClient::UnsubscribeFromEventAsync(const UnsubscribeFromEventRequest& request, const UnsubscribeFromEventResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UnsubscribeFromEvent(request), context);
    } );
}

UpdateAssessmentTargetOutcome InspectorClient::UpdateAssessmentTarget(const UpdateAssessmentTargetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateAssessmentTargetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateAssessmentTargetOutcomeCallable InspectorClient::UpdateAssessmentTargetCallable(const UpdateAssessmentTargetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateAssessmentTargetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateAssessmentTarget(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void InspectorClient::UpdateAssessmentTargetAsync(const UpdateAssessmentTargetRequest& request, const UpdateAssessmentTargetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateAssessmentTarget(request), context);
    } );
}

