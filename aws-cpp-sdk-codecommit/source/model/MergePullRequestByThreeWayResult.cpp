/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codecommit/model/MergePullRequestByThreeWayResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CodeCommit::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

MergePullRequestByThreeWayResult::MergePullRequestByThreeWayResult()
{
}

MergePullRequestByThreeWayResult::MergePullRequestByThreeWayResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

MergePullRequestByThreeWayResult& MergePullRequestByThreeWayResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("pullRequest"))
  {
    m_pullRequest = jsonValue.GetObject("pullRequest");

  }



  return *this;
}
