/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotthingsgraph/model/CreateFlowTemplateRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoTThingsGraph::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateFlowTemplateRequest::CreateFlowTemplateRequest() : 
    m_definitionHasBeenSet(false),
    m_compatibleNamespaceVersion(0),
    m_compatibleNamespaceVersionHasBeenSet(false)
{
}

Aws::String CreateFlowTemplateRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_definitionHasBeenSet)
  {
   payload.WithObject("definition", m_definition.Jsonize());

  }

  if(m_compatibleNamespaceVersionHasBeenSet)
  {
   payload.WithInt64("compatibleNamespaceVersion", m_compatibleNamespaceVersion);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateFlowTemplateRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "IotThingsGraphFrontEndService.CreateFlowTemplate"));
  return headers;

}




