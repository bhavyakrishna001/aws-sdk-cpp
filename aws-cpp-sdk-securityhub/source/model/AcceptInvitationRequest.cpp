/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AcceptInvitationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SecurityHub::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

AcceptInvitationRequest::AcceptInvitationRequest() : 
    m_masterIdHasBeenSet(false),
    m_invitationIdHasBeenSet(false)
{
}

Aws::String AcceptInvitationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_masterIdHasBeenSet)
  {
   payload.WithString("MasterId", m_masterId);

  }

  if(m_invitationIdHasBeenSet)
  {
   payload.WithString("InvitationId", m_invitationId);

  }

  return payload.View().WriteReadable();
}




