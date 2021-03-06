/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MediaConvert
{
namespace Model
{
  enum class Eac3LfeFilter
  {
    NOT_SET,
    ENABLED,
    DISABLED
  };

namespace Eac3LfeFilterMapper
{
AWS_MEDIACONVERT_API Eac3LfeFilter GetEac3LfeFilterForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForEac3LfeFilter(Eac3LfeFilter value);
} // namespace Eac3LfeFilterMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
