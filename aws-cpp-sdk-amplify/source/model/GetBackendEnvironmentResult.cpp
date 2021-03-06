/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amplify/model/GetBackendEnvironmentResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Amplify::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetBackendEnvironmentResult::GetBackendEnvironmentResult()
{
}

GetBackendEnvironmentResult::GetBackendEnvironmentResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetBackendEnvironmentResult& GetBackendEnvironmentResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("backendEnvironment"))
  {
    m_backendEnvironment = jsonValue.GetObject("backendEnvironment");

  }



  return *this;
}
