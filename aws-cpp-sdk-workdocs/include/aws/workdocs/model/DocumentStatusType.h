/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workdocs/WorkDocs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace WorkDocs
{
namespace Model
{
  enum class DocumentStatusType
  {
    NOT_SET,
    INITIALIZED,
    ACTIVE
  };

namespace DocumentStatusTypeMapper
{
AWS_WORKDOCS_API DocumentStatusType GetDocumentStatusTypeForName(const Aws::String& name);

AWS_WORKDOCS_API Aws::String GetNameForDocumentStatusType(DocumentStatusType value);
} // namespace DocumentStatusTypeMapper
} // namespace Model
} // namespace WorkDocs
} // namespace Aws
