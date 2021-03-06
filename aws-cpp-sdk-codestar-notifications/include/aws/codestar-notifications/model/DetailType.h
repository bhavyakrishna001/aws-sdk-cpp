/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codestar-notifications/CodeStarNotifications_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CodeStarNotifications
{
namespace Model
{
  enum class DetailType
  {
    NOT_SET,
    BASIC,
    FULL
  };

namespace DetailTypeMapper
{
AWS_CODESTARNOTIFICATIONS_API DetailType GetDetailTypeForName(const Aws::String& name);

AWS_CODESTARNOTIFICATIONS_API Aws::String GetNameForDetailType(DetailType value);
} // namespace DetailTypeMapper
} // namespace Model
} // namespace CodeStarNotifications
} // namespace Aws
