/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecr/ECR_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ECR
{
namespace Model
{
  enum class TagStatus
  {
    NOT_SET,
    TAGGED,
    UNTAGGED,
    ANY
  };

namespace TagStatusMapper
{
AWS_ECR_API TagStatus GetTagStatusForName(const Aws::String& name);

AWS_ECR_API Aws::String GetNameForTagStatus(TagStatus value);
} // namespace TagStatusMapper
} // namespace Model
} // namespace ECR
} // namespace Aws
