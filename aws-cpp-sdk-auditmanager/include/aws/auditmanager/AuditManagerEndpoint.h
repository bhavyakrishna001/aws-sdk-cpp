/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/auditmanager/AuditManager_EXPORTS.h>
#include <aws/core/Region.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{

namespace AuditManager
{
namespace AuditManagerEndpoint
{
AWS_AUDITMANAGER_API Aws::String ForRegion(const Aws::String& regionName, bool useDualStack = false);
} // namespace AuditManagerEndpoint
} // namespace AuditManager
} // namespace Aws
