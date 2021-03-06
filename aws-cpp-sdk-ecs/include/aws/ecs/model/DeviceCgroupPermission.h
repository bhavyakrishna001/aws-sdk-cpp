/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ECS
{
namespace Model
{
  enum class DeviceCgroupPermission
  {
    NOT_SET,
    read,
    write,
    mknod
  };

namespace DeviceCgroupPermissionMapper
{
AWS_ECS_API DeviceCgroupPermission GetDeviceCgroupPermissionForName(const Aws::String& name);

AWS_ECS_API Aws::String GetNameForDeviceCgroupPermission(DeviceCgroupPermission value);
} // namespace DeviceCgroupPermissionMapper
} // namespace Model
} // namespace ECS
} // namespace Aws
