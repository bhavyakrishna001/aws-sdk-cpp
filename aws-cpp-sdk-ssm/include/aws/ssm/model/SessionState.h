/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SSM
{
namespace Model
{
  enum class SessionState
  {
    NOT_SET,
    Active,
    History
  };

namespace SessionStateMapper
{
AWS_SSM_API SessionState GetSessionStateForName(const Aws::String& name);

AWS_SSM_API Aws::String GetNameForSessionState(SessionState value);
} // namespace SessionStateMapper
} // namespace Model
} // namespace SSM
} // namespace Aws
