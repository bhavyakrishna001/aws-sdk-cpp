/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace EC2
{
namespace Model
{
  enum class ClientVpnAuthenticationType
  {
    NOT_SET,
    certificate_authentication,
    directory_service_authentication,
    federated_authentication
  };

namespace ClientVpnAuthenticationTypeMapper
{
AWS_EC2_API ClientVpnAuthenticationType GetClientVpnAuthenticationTypeForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForClientVpnAuthenticationType(ClientVpnAuthenticationType value);
} // namespace ClientVpnAuthenticationTypeMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
