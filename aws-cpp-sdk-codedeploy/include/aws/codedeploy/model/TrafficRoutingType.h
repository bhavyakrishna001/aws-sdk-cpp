/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codedeploy/CodeDeploy_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CodeDeploy
{
namespace Model
{
  enum class TrafficRoutingType
  {
    NOT_SET,
    TimeBasedCanary,
    TimeBasedLinear,
    AllAtOnce
  };

namespace TrafficRoutingTypeMapper
{
AWS_CODEDEPLOY_API TrafficRoutingType GetTrafficRoutingTypeForName(const Aws::String& name);

AWS_CODEDEPLOY_API Aws::String GetNameForTrafficRoutingType(TrafficRoutingType value);
} // namespace TrafficRoutingTypeMapper
} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
