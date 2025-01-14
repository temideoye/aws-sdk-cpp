﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/savingsplans/SavingsPlans_EXPORTS.h>
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
namespace SavingsPlans
{
namespace Model
{

  /**
   * <p>Information about a property.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/savingsplans-2019-06-28/SavingsPlanOfferingRateProperty">AWS
   * API Reference</a></p>
   */
  class AWS_SAVINGSPLANS_API SavingsPlanOfferingRateProperty
  {
  public:
    SavingsPlanOfferingRateProperty();
    SavingsPlanOfferingRateProperty(Aws::Utils::Json::JsonView jsonValue);
    SavingsPlanOfferingRateProperty& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The property name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The property name.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The property name.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The property name.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The property name.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The property name.</p>
     */
    inline SavingsPlanOfferingRateProperty& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The property name.</p>
     */
    inline SavingsPlanOfferingRateProperty& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The property name.</p>
     */
    inline SavingsPlanOfferingRateProperty& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The property value.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The property value.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The property value.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The property value.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The property value.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The property value.</p>
     */
    inline SavingsPlanOfferingRateProperty& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The property value.</p>
     */
    inline SavingsPlanOfferingRateProperty& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The property value.</p>
     */
    inline SavingsPlanOfferingRateProperty& WithValue(const char* value) { SetValue(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace SavingsPlans
} // namespace Aws
