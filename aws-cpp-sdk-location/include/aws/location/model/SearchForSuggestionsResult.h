﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/location/LocationService_EXPORTS.h>
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
namespace LocationService
{
namespace Model
{

  /**
   * <p>Contains a place suggestion resulting from a place suggestion query that is
   * run on a place index resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/SearchForSuggestionsResult">AWS
   * API Reference</a></p>
   */
  class AWS_LOCATIONSERVICE_API SearchForSuggestionsResult
  {
  public:
    SearchForSuggestionsResult();
    SearchForSuggestionsResult(Aws::Utils::Json::JsonView jsonValue);
    SearchForSuggestionsResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The text of the place suggestion, typically formatted as an address
     * string.</p>
     */
    inline const Aws::String& GetText() const{ return m_text; }

    /**
     * <p>The text of the place suggestion, typically formatted as an address
     * string.</p>
     */
    inline bool TextHasBeenSet() const { return m_textHasBeenSet; }

    /**
     * <p>The text of the place suggestion, typically formatted as an address
     * string.</p>
     */
    inline void SetText(const Aws::String& value) { m_textHasBeenSet = true; m_text = value; }

    /**
     * <p>The text of the place suggestion, typically formatted as an address
     * string.</p>
     */
    inline void SetText(Aws::String&& value) { m_textHasBeenSet = true; m_text = std::move(value); }

    /**
     * <p>The text of the place suggestion, typically formatted as an address
     * string.</p>
     */
    inline void SetText(const char* value) { m_textHasBeenSet = true; m_text.assign(value); }

    /**
     * <p>The text of the place suggestion, typically formatted as an address
     * string.</p>
     */
    inline SearchForSuggestionsResult& WithText(const Aws::String& value) { SetText(value); return *this;}

    /**
     * <p>The text of the place suggestion, typically formatted as an address
     * string.</p>
     */
    inline SearchForSuggestionsResult& WithText(Aws::String&& value) { SetText(std::move(value)); return *this;}

    /**
     * <p>The text of the place suggestion, typically formatted as an address
     * string.</p>
     */
    inline SearchForSuggestionsResult& WithText(const char* value) { SetText(value); return *this;}

  private:

    Aws::String m_text;
    bool m_textHasBeenSet = false;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
