/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Macie2
{
namespace Model
{
  enum class SeverityDescription
  {
    NOT_SET,
    Low,
    Medium,
    High
  };

namespace SeverityDescriptionMapper
{
AWS_MACIE2_API SeverityDescription GetSeverityDescriptionForName(const Aws::String& name);

AWS_MACIE2_API Aws::String GetNameForSeverityDescription(SeverityDescription value);
} // namespace SeverityDescriptionMapper
} // namespace Model
} // namespace Macie2
} // namespace Aws
