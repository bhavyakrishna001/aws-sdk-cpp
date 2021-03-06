/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/acm-pca/ACMPCA_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ACMPCA
{
namespace Model
{
  enum class ActionType
  {
    NOT_SET,
    IssueCertificate,
    GetCertificate,
    ListPermissions
  };

namespace ActionTypeMapper
{
AWS_ACMPCA_API ActionType GetActionTypeForName(const Aws::String& name);

AWS_ACMPCA_API Aws::String GetNameForActionType(ActionType value);
} // namespace ActionTypeMapper
} // namespace Model
} // namespace ACMPCA
} // namespace Aws
