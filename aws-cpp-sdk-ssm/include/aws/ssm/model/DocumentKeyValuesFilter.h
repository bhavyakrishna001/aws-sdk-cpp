/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace SSM
{
namespace Model
{

  /**
   * <p>One or more filters. Use a filter to return a more specific list of
   * documents.</p> <p>For keys, you can specify one or more tags that have been
   * applied to a document. </p> <p>You can also use AWS-provided keys, some of which
   * have specific allowed values. These keys and their associated values are as
   * follows:</p> <dl> <dt>DocumentType</dt> <dd> <ul> <li>
   * <p>ApplicationConfiguration</p> </li> <li> <p>ApplicationConfigurationSchema</p>
   * </li> <li> <p>Automation</p> </li> <li> <p>ChangeCalendar</p> </li> <li>
   * <p>Command</p> </li> <li> <p>DeploymentStrategy</p> </li> <li> <p>Package</p>
   * </li> <li> <p>Policy</p> </li> <li> <p>Session</p> </li> </ul> </dd>
   * <dt>Owner</dt> <dd> <p>Note that only one <code>Owner</code> can be specified in
   * a request. For example: <code>Key=Owner,Values=Self</code>.</p> <ul> <li>
   * <p>Amazon</p> </li> <li> <p>Private</p> </li> <li> <p>Public</p> </li> <li>
   * <p>Self</p> </li> <li> <p>ThirdParty</p> </li> </ul> </dd>
   * <dt>PlatformTypes</dt> <dd> <ul> <li> <p>Linux</p> </li> <li> <p>Windows</p>
   * </li> </ul> </dd> </dl> <p> <code>Name</code> is another AWS-provided key. If
   * you use <code>Name</code> as a key, you can use a name prefix to return a list
   * of documents. For example, in the AWS CLI, to return a list of all documents
   * that begin with <code>Te</code>, run the following command:</p> <p> <code>aws
   * ssm list-documents --filters Key=Name,Values=Te</code> </p> <p>You can also use
   * the <code>TargetType</code> AWS-provided key. For a list of valid resource type
   * values that can be used with this key, see <a
   * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-template-resource-type-ref.html">AWS
   * resource and property types reference</a> in the <i>AWS CloudFormation User
   * Guide</i>.</p> <p>If you specify more than two keys, only documents that are
   * identified by all the tags are returned in the results. If you specify more than
   * two values for a key, documents that are identified by any of the values are
   * returned in the results.</p> <p>To specify a custom key and value pair, use the
   * format <code>Key=tag:tagName,Values=valueName</code>.</p> <p>For example, if you
   * created a key called region and are using the AWS CLI to call the
   * <code>list-documents</code> command: </p> <p> <code>aws ssm list-documents
   * --filters Key=tag:region,Values=east,west Key=Owner,Values=Self</code>
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DocumentKeyValuesFilter">AWS
   * API Reference</a></p>
   */
  class AWS_SSM_API DocumentKeyValuesFilter
  {
  public:
    DocumentKeyValuesFilter();
    DocumentKeyValuesFilter(Aws::Utils::Json::JsonView jsonValue);
    DocumentKeyValuesFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the filter key.</p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }

    /**
     * <p>The name of the filter key.</p>
     */
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    /**
     * <p>The name of the filter key.</p>
     */
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>The name of the filter key.</p>
     */
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p>The name of the filter key.</p>
     */
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }

    /**
     * <p>The name of the filter key.</p>
     */
    inline DocumentKeyValuesFilter& WithKey(const Aws::String& value) { SetKey(value); return *this;}

    /**
     * <p>The name of the filter key.</p>
     */
    inline DocumentKeyValuesFilter& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}

    /**
     * <p>The name of the filter key.</p>
     */
    inline DocumentKeyValuesFilter& WithKey(const char* value) { SetKey(value); return *this;}


    /**
     * <p>The value for the filter key.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const{ return m_values; }

    /**
     * <p>The value for the filter key.</p>
     */
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }

    /**
     * <p>The value for the filter key.</p>
     */
    inline void SetValues(const Aws::Vector<Aws::String>& value) { m_valuesHasBeenSet = true; m_values = value; }

    /**
     * <p>The value for the filter key.</p>
     */
    inline void SetValues(Aws::Vector<Aws::String>&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }

    /**
     * <p>The value for the filter key.</p>
     */
    inline DocumentKeyValuesFilter& WithValues(const Aws::Vector<Aws::String>& value) { SetValues(value); return *this;}

    /**
     * <p>The value for the filter key.</p>
     */
    inline DocumentKeyValuesFilter& WithValues(Aws::Vector<Aws::String>&& value) { SetValues(std::move(value)); return *this;}

    /**
     * <p>The value for the filter key.</p>
     */
    inline DocumentKeyValuesFilter& AddValues(const Aws::String& value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

    /**
     * <p>The value for the filter key.</p>
     */
    inline DocumentKeyValuesFilter& AddValues(Aws::String&& value) { m_valuesHasBeenSet = true; m_values.push_back(std::move(value)); return *this; }

    /**
     * <p>The value for the filter key.</p>
     */
    inline DocumentKeyValuesFilter& AddValues(const char* value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

  private:

    Aws::String m_key;
    bool m_keyHasBeenSet;

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
