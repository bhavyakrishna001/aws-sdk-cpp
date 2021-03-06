/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kms/model/ScheduleKeyDeletionResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::KMS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ScheduleKeyDeletionResult::ScheduleKeyDeletionResult()
{
}

ScheduleKeyDeletionResult::ScheduleKeyDeletionResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ScheduleKeyDeletionResult& ScheduleKeyDeletionResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("KeyId"))
  {
    m_keyId = jsonValue.GetString("KeyId");

  }

  if(jsonValue.ValueExists("DeletionDate"))
  {
    m_deletionDate = jsonValue.GetDouble("DeletionDate");

  }



  return *this;
}
