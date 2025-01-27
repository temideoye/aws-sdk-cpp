﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace SSM
{
namespace Model
{

  /**
   * <p>Information about the association.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/AssociationOverview">AWS
   * API Reference</a></p>
   */
  class AWS_SSM_API AssociationOverview
  {
  public:
    AssociationOverview();
    AssociationOverview(Aws::Utils::Json::JsonView jsonValue);
    AssociationOverview& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The status of the association. Status can be: Pending, Success, or
     * Failed.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the association. Status can be: Pending, Success, or
     * Failed.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the association. Status can be: Pending, Success, or
     * Failed.</p>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the association. Status can be: Pending, Success, or
     * Failed.</p>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the association. Status can be: Pending, Success, or
     * Failed.</p>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p>The status of the association. Status can be: Pending, Success, or
     * Failed.</p>
     */
    inline AssociationOverview& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the association. Status can be: Pending, Success, or
     * Failed.</p>
     */
    inline AssociationOverview& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>The status of the association. Status can be: Pending, Success, or
     * Failed.</p>
     */
    inline AssociationOverview& WithStatus(const char* value) { SetStatus(value); return *this;}


    /**
     * <p>A detailed status of the association.</p>
     */
    inline const Aws::String& GetDetailedStatus() const{ return m_detailedStatus; }

    /**
     * <p>A detailed status of the association.</p>
     */
    inline bool DetailedStatusHasBeenSet() const { return m_detailedStatusHasBeenSet; }

    /**
     * <p>A detailed status of the association.</p>
     */
    inline void SetDetailedStatus(const Aws::String& value) { m_detailedStatusHasBeenSet = true; m_detailedStatus = value; }

    /**
     * <p>A detailed status of the association.</p>
     */
    inline void SetDetailedStatus(Aws::String&& value) { m_detailedStatusHasBeenSet = true; m_detailedStatus = std::move(value); }

    /**
     * <p>A detailed status of the association.</p>
     */
    inline void SetDetailedStatus(const char* value) { m_detailedStatusHasBeenSet = true; m_detailedStatus.assign(value); }

    /**
     * <p>A detailed status of the association.</p>
     */
    inline AssociationOverview& WithDetailedStatus(const Aws::String& value) { SetDetailedStatus(value); return *this;}

    /**
     * <p>A detailed status of the association.</p>
     */
    inline AssociationOverview& WithDetailedStatus(Aws::String&& value) { SetDetailedStatus(std::move(value)); return *this;}

    /**
     * <p>A detailed status of the association.</p>
     */
    inline AssociationOverview& WithDetailedStatus(const char* value) { SetDetailedStatus(value); return *this;}


    /**
     * <p>Returns the number of targets for the association status. For example, if you
     * created an association with two managed nodes, and one of them was successful,
     * this would return the count of managed nodes by status.</p>
     */
    inline const Aws::Map<Aws::String, int>& GetAssociationStatusAggregatedCount() const{ return m_associationStatusAggregatedCount; }

    /**
     * <p>Returns the number of targets for the association status. For example, if you
     * created an association with two managed nodes, and one of them was successful,
     * this would return the count of managed nodes by status.</p>
     */
    inline bool AssociationStatusAggregatedCountHasBeenSet() const { return m_associationStatusAggregatedCountHasBeenSet; }

    /**
     * <p>Returns the number of targets for the association status. For example, if you
     * created an association with two managed nodes, and one of them was successful,
     * this would return the count of managed nodes by status.</p>
     */
    inline void SetAssociationStatusAggregatedCount(const Aws::Map<Aws::String, int>& value) { m_associationStatusAggregatedCountHasBeenSet = true; m_associationStatusAggregatedCount = value; }

    /**
     * <p>Returns the number of targets for the association status. For example, if you
     * created an association with two managed nodes, and one of them was successful,
     * this would return the count of managed nodes by status.</p>
     */
    inline void SetAssociationStatusAggregatedCount(Aws::Map<Aws::String, int>&& value) { m_associationStatusAggregatedCountHasBeenSet = true; m_associationStatusAggregatedCount = std::move(value); }

    /**
     * <p>Returns the number of targets for the association status. For example, if you
     * created an association with two managed nodes, and one of them was successful,
     * this would return the count of managed nodes by status.</p>
     */
    inline AssociationOverview& WithAssociationStatusAggregatedCount(const Aws::Map<Aws::String, int>& value) { SetAssociationStatusAggregatedCount(value); return *this;}

    /**
     * <p>Returns the number of targets for the association status. For example, if you
     * created an association with two managed nodes, and one of them was successful,
     * this would return the count of managed nodes by status.</p>
     */
    inline AssociationOverview& WithAssociationStatusAggregatedCount(Aws::Map<Aws::String, int>&& value) { SetAssociationStatusAggregatedCount(std::move(value)); return *this;}

    /**
     * <p>Returns the number of targets for the association status. For example, if you
     * created an association with two managed nodes, and one of them was successful,
     * this would return the count of managed nodes by status.</p>
     */
    inline AssociationOverview& AddAssociationStatusAggregatedCount(const Aws::String& key, int value) { m_associationStatusAggregatedCountHasBeenSet = true; m_associationStatusAggregatedCount.emplace(key, value); return *this; }

    /**
     * <p>Returns the number of targets for the association status. For example, if you
     * created an association with two managed nodes, and one of them was successful,
     * this would return the count of managed nodes by status.</p>
     */
    inline AssociationOverview& AddAssociationStatusAggregatedCount(Aws::String&& key, int value) { m_associationStatusAggregatedCountHasBeenSet = true; m_associationStatusAggregatedCount.emplace(std::move(key), value); return *this; }

    /**
     * <p>Returns the number of targets for the association status. For example, if you
     * created an association with two managed nodes, and one of them was successful,
     * this would return the count of managed nodes by status.</p>
     */
    inline AssociationOverview& AddAssociationStatusAggregatedCount(const char* key, int value) { m_associationStatusAggregatedCountHasBeenSet = true; m_associationStatusAggregatedCount.emplace(key, value); return *this; }

  private:

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_detailedStatus;
    bool m_detailedStatusHasBeenSet = false;

    Aws::Map<Aws::String, int> m_associationStatusAggregatedCount;
    bool m_associationStatusAggregatedCountHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
