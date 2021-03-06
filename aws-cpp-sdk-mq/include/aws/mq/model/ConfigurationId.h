/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mq/MQ_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace MQ
{
namespace Model
{

  /**
   * A list of information about the configuration. Does not apply to
   * RabbitMQ brokers.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mq-2017-11-27/ConfigurationId">AWS
   * API Reference</a></p>
   */
  class AWS_MQ_API ConfigurationId
  {
  public:
    ConfigurationId();
    ConfigurationId(Aws::Utils::Json::JsonView jsonValue);
    ConfigurationId& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Required. The unique ID that Amazon MQ generates for the configuration.
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * Required. The unique ID that Amazon MQ generates for the configuration.
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * Required. The unique ID that Amazon MQ generates for the configuration.
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * Required. The unique ID that Amazon MQ generates for the configuration.
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * Required. The unique ID that Amazon MQ generates for the configuration.
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * Required. The unique ID that Amazon MQ generates for the configuration.
     */
    inline ConfigurationId& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * Required. The unique ID that Amazon MQ generates for the configuration.
     */
    inline ConfigurationId& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * Required. The unique ID that Amazon MQ generates for the configuration.
     */
    inline ConfigurationId& WithId(const char* value) { SetId(value); return *this;}


    /**
     * The revision number of the configuration.
     */
    inline int GetRevision() const{ return m_revision; }

    /**
     * The revision number of the configuration.
     */
    inline bool RevisionHasBeenSet() const { return m_revisionHasBeenSet; }

    /**
     * The revision number of the configuration.
     */
    inline void SetRevision(int value) { m_revisionHasBeenSet = true; m_revision = value; }

    /**
     * The revision number of the configuration.
     */
    inline ConfigurationId& WithRevision(int value) { SetRevision(value); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet;

    int m_revision;
    bool m_revisionHasBeenSet;
  };

} // namespace Model
} // namespace MQ
} // namespace Aws
