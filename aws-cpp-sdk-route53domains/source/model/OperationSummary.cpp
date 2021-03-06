/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53domains/model/OperationSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Route53Domains
{
namespace Model
{

OperationSummary::OperationSummary() : 
    m_operationIdHasBeenSet(false),
    m_status(OperationStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_type(OperationType::NOT_SET),
    m_typeHasBeenSet(false),
    m_submittedDateHasBeenSet(false)
{
}

OperationSummary::OperationSummary(JsonView jsonValue) : 
    m_operationIdHasBeenSet(false),
    m_status(OperationStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_type(OperationType::NOT_SET),
    m_typeHasBeenSet(false),
    m_submittedDateHasBeenSet(false)
{
  *this = jsonValue;
}

OperationSummary& OperationSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("OperationId"))
  {
    m_operationId = jsonValue.GetString("OperationId");

    m_operationIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = OperationStatusMapper::GetOperationStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = OperationTypeMapper::GetOperationTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SubmittedDate"))
  {
    m_submittedDate = jsonValue.GetDouble("SubmittedDate");

    m_submittedDateHasBeenSet = true;
  }

  return *this;
}

JsonValue OperationSummary::Jsonize() const
{
  JsonValue payload;

  if(m_operationIdHasBeenSet)
  {
   payload.WithString("OperationId", m_operationId);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", OperationStatusMapper::GetNameForOperationStatus(m_status));
  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", OperationTypeMapper::GetNameForOperationType(m_type));
  }

  if(m_submittedDateHasBeenSet)
  {
   payload.WithDouble("SubmittedDate", m_submittedDate.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace Route53Domains
} // namespace Aws
