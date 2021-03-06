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
  enum class M2tsAudioBufferModel
  {
    NOT_SET,
    ATSC,
    DVB
  };

namespace M2tsAudioBufferModelMapper
{
AWS_MEDIALIVE_API M2tsAudioBufferModel GetM2tsAudioBufferModelForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForM2tsAudioBufferModel(M2tsAudioBufferModel value);
} // namespace M2tsAudioBufferModelMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
