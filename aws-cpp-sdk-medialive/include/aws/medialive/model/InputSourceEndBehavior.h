/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MediaLive
{
namespace Model
{
  enum class InputSourceEndBehavior
  {
    NOT_SET,
    CONTINUE,
    LOOP
  };

namespace InputSourceEndBehaviorMapper
{
AWS_MEDIALIVE_API InputSourceEndBehavior GetInputSourceEndBehaviorForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForInputSourceEndBehavior(InputSourceEndBehavior value);
} // namespace InputSourceEndBehaviorMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
