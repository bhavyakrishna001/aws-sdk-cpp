/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mq/MQ_EXPORTS.h>
#include <aws/mq/MQRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace MQ
{
namespace Model
{

  /**
   */
  class AWS_MQ_API DescribeBrokerRequest : public MQRequest
  {
  public:
    DescribeBrokerRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeBroker"; }

    Aws::String SerializePayload() const override;


    /**
     * The name of the broker. This value must be unique in your AWS account, 1-50
     * characters long, must contain only letters, numbers, dashes, and underscores,
     * and must not contain whitespaces, brackets, wildcard characters, or special
     * characters.
     */
    inline const Aws::String& GetBrokerId() const{ return m_brokerId; }

    /**
     * The name of the broker. This value must be unique in your AWS account, 1-50
     * characters long, must contain only letters, numbers, dashes, and underscores,
     * and must not contain whitespaces, brackets, wildcard characters, or special
     * characters.
     */
    inline bool BrokerIdHasBeenSet() const { return m_brokerIdHasBeenSet; }

    /**
     * The name of the broker. This value must be unique in your AWS account, 1-50
     * characters long, must contain only letters, numbers, dashes, and underscores,
     * and must not contain whitespaces, brackets, wildcard characters, or special
     * characters.
     */
    inline void SetBrokerId(const Aws::String& value) { m_brokerIdHasBeenSet = true; m_brokerId = value; }

    /**
     * The name of the broker. This value must be unique in your AWS account, 1-50
     * characters long, must contain only letters, numbers, dashes, and underscores,
     * and must not contain whitespaces, brackets, wildcard characters, or special
     * characters.
     */
    inline void SetBrokerId(Aws::String&& value) { m_brokerIdHasBeenSet = true; m_brokerId = std::move(value); }

    /**
     * The name of the broker. This value must be unique in your AWS account, 1-50
     * characters long, must contain only letters, numbers, dashes, and underscores,
     * and must not contain whitespaces, brackets, wildcard characters, or special
     * characters.
     */
    inline void SetBrokerId(const char* value) { m_brokerIdHasBeenSet = true; m_brokerId.assign(value); }

    /**
     * The name of the broker. This value must be unique in your AWS account, 1-50
     * characters long, must contain only letters, numbers, dashes, and underscores,
     * and must not contain whitespaces, brackets, wildcard characters, or special
     * characters.
     */
    inline DescribeBrokerRequest& WithBrokerId(const Aws::String& value) { SetBrokerId(value); return *this;}

    /**
     * The name of the broker. This value must be unique in your AWS account, 1-50
     * characters long, must contain only letters, numbers, dashes, and underscores,
     * and must not contain whitespaces, brackets, wildcard characters, or special
     * characters.
     */
    inline DescribeBrokerRequest& WithBrokerId(Aws::String&& value) { SetBrokerId(std::move(value)); return *this;}

    /**
     * The name of the broker. This value must be unique in your AWS account, 1-50
     * characters long, must contain only letters, numbers, dashes, and underscores,
     * and must not contain whitespaces, brackets, wildcard characters, or special
     * characters.
     */
    inline DescribeBrokerRequest& WithBrokerId(const char* value) { SetBrokerId(value); return *this;}

  private:

    Aws::String m_brokerId;
    bool m_brokerIdHasBeenSet;
  };

} // namespace Model
} // namespace MQ
} // namespace Aws
