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
  enum class M3u8NielsenId3Behavior
  {
    NOT_SET,
    NO_PASSTHROUGH,
    PASSTHROUGH
  };

namespace M3u8NielsenId3BehaviorMapper
{
AWS_MEDIALIVE_API M3u8NielsenId3Behavior GetM3u8NielsenId3BehaviorForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForM3u8NielsenId3Behavior(M3u8NielsenId3Behavior value);
} // namespace M3u8NielsenId3BehaviorMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
