/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/client/AWSError.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/clouddirectory/CloudDirectory_EXPORTS.h>

namespace Aws
{
namespace CloudDirectory
{
enum class CloudDirectoryErrors
{
  //From Core//
  //////////////////////////////////////////////////////////////////////////////////////////
  INCOMPLETE_SIGNATURE = 0,
  INTERNAL_FAILURE = 1,
  INVALID_ACTION = 2,
  INVALID_CLIENT_TOKEN_ID = 3,
  INVALID_PARAMETER_COMBINATION = 4,
  INVALID_QUERY_PARAMETER = 5,
  INVALID_PARAMETER_VALUE = 6,
  MISSING_ACTION = 7, // SDK should never allow
  MISSING_AUTHENTICATION_TOKEN = 8, // SDK should never allow
  MISSING_PARAMETER = 9, // SDK should never allow
  OPT_IN_REQUIRED = 10,
  REQUEST_EXPIRED = 11,
  SERVICE_UNAVAILABLE = 12,
  THROTTLING = 13,
  VALIDATION = 14,
  ACCESS_DENIED = 15,
  RESOURCE_NOT_FOUND = 16,
  UNRECOGNIZED_CLIENT = 17,
  MALFORMED_QUERY_STRING = 18,
  SLOW_DOWN = 19,
  REQUEST_TIME_TOO_SKEWED = 20,
  INVALID_SIGNATURE = 21,
  SIGNATURE_DOES_NOT_MATCH = 22,
  INVALID_ACCESS_KEY_ID = 23,
  REQUEST_TIMEOUT = 24,
  NETWORK_CONNECTION = 99,

  UNKNOWN = 100,
  ///////////////////////////////////////////////////////////////////////////////////////////

  BATCH_WRITE= static_cast<int>(Aws::Client::CoreErrors::SERVICE_EXTENSION_START_RANGE) + 1,
  CANNOT_LIST_PARENT_OF_ROOT,
  DIRECTORY_ALREADY_EXISTS,
  DIRECTORY_DELETED,
  DIRECTORY_NOT_DISABLED,
  DIRECTORY_NOT_ENABLED,
  FACET_ALREADY_EXISTS,
  FACET_IN_USE,
  FACET_NOT_FOUND,
  FACET_VALIDATION,
  INCOMPATIBLE_SCHEMA,
  INDEXED_ATTRIBUTE_MISSING,
  INTERNAL_SERVICE,
  INVALID_ARN,
  INVALID_ATTACHMENT,
  INVALID_FACET_UPDATE,
  INVALID_NEXT_TOKEN,
  INVALID_RULE,
  INVALID_SCHEMA_DOC,
  INVALID_TAGGING_REQUEST,
  LIMIT_EXCEEDED,
  LINK_NAME_ALREADY_IN_USE,
  NOT_INDEX,
  NOT_NODE,
  NOT_POLICY,
  OBJECT_ALREADY_DETACHED,
  OBJECT_NOT_DETACHED,
  RETRYABLE_CONFLICT,
  SCHEMA_ALREADY_EXISTS,
  SCHEMA_ALREADY_PUBLISHED,
  STILL_CONTAINS_LINKS,
  UNSUPPORTED_INDEX_TYPE
};

class AWS_CLOUDDIRECTORY_API CloudDirectoryError : public Aws::Client::AWSError<CloudDirectoryErrors>
{
public:
  CloudDirectoryError() {}
  CloudDirectoryError(const Aws::Client::AWSError<Aws::Client::CoreErrors>& rhs) : Aws::Client::AWSError<CloudDirectoryErrors>(rhs) {}
  CloudDirectoryError(Aws::Client::AWSError<Aws::Client::CoreErrors>&& rhs) : Aws::Client::AWSError<CloudDirectoryErrors>(rhs) {}
  CloudDirectoryError(const Aws::Client::AWSError<CloudDirectoryErrors>& rhs) : Aws::Client::AWSError<CloudDirectoryErrors>(rhs) {}
  CloudDirectoryError(Aws::Client::AWSError<CloudDirectoryErrors>&& rhs) : Aws::Client::AWSError<CloudDirectoryErrors>(rhs) {}

  template <typename T>
  T GetModeledError();
};

namespace CloudDirectoryErrorMapper
{
  AWS_CLOUDDIRECTORY_API Aws::Client::AWSError<Aws::Client::CoreErrors> GetErrorForName(const char* errorName);
}

} // namespace CloudDirectory
} // namespace Aws
