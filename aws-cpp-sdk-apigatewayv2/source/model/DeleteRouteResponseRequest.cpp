/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigatewayv2/model/DeleteRouteResponseRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ApiGatewayV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteRouteResponseRequest::DeleteRouteResponseRequest() : 
    m_apiIdHasBeenSet(false),
    m_routeIdHasBeenSet(false),
    m_routeResponseIdHasBeenSet(false)
{
}

Aws::String DeleteRouteResponseRequest::SerializePayload() const
{
  return {};
}




