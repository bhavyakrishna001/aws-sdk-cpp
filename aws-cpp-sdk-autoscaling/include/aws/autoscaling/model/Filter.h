/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/autoscaling/AutoScaling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace AutoScaling
{
namespace Model
{

  /**
   * <p>Describes a filter that is used to return a more specific list of results
   * when describing tags.</p> <p>For more information, see <a
   * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/autoscaling-tagging.html">Tagging
   * Auto Scaling groups and instances</a> in the <i>Amazon EC2 Auto Scaling User
   * Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/Filter">AWS
   * API Reference</a></p>
   */
  class AWS_AUTOSCALING_API Filter
  {
  public:
    Filter();
    Filter(const Aws::Utils::Xml::XmlNode& xmlNode);
    Filter& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The name of the filter. The valid values are:
     * <code>auto-scaling-group</code>, <code>key</code>, <code>value</code>, and
     * <code>propagate-at-launch</code>.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the filter. The valid values are:
     * <code>auto-scaling-group</code>, <code>key</code>, <code>value</code>, and
     * <code>propagate-at-launch</code>.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the filter. The valid values are:
     * <code>auto-scaling-group</code>, <code>key</code>, <code>value</code>, and
     * <code>propagate-at-launch</code>.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the filter. The valid values are:
     * <code>auto-scaling-group</code>, <code>key</code>, <code>value</code>, and
     * <code>propagate-at-launch</code>.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the filter. The valid values are:
     * <code>auto-scaling-group</code>, <code>key</code>, <code>value</code>, and
     * <code>propagate-at-launch</code>.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the filter. The valid values are:
     * <code>auto-scaling-group</code>, <code>key</code>, <code>value</code>, and
     * <code>propagate-at-launch</code>.</p>
     */
    inline Filter& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the filter. The valid values are:
     * <code>auto-scaling-group</code>, <code>key</code>, <code>value</code>, and
     * <code>propagate-at-launch</code>.</p>
     */
    inline Filter& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the filter. The valid values are:
     * <code>auto-scaling-group</code>, <code>key</code>, <code>value</code>, and
     * <code>propagate-at-launch</code>.</p>
     */
    inline Filter& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>One or more filter values. Filter values are case-sensitive.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const{ return m_values; }

    /**
     * <p>One or more filter values. Filter values are case-sensitive.</p>
     */
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }

    /**
     * <p>One or more filter values. Filter values are case-sensitive.</p>
     */
    inline void SetValues(const Aws::Vector<Aws::String>& value) { m_valuesHasBeenSet = true; m_values = value; }

    /**
     * <p>One or more filter values. Filter values are case-sensitive.</p>
     */
    inline void SetValues(Aws::Vector<Aws::String>&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }

    /**
     * <p>One or more filter values. Filter values are case-sensitive.</p>
     */
    inline Filter& WithValues(const Aws::Vector<Aws::String>& value) { SetValues(value); return *this;}

    /**
     * <p>One or more filter values. Filter values are case-sensitive.</p>
     */
    inline Filter& WithValues(Aws::Vector<Aws::String>&& value) { SetValues(std::move(value)); return *this;}

    /**
     * <p>One or more filter values. Filter values are case-sensitive.</p>
     */
    inline Filter& AddValues(const Aws::String& value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

    /**
     * <p>One or more filter values. Filter values are case-sensitive.</p>
     */
    inline Filter& AddValues(Aws::String&& value) { m_valuesHasBeenSet = true; m_values.push_back(std::move(value)); return *this; }

    /**
     * <p>One or more filter values. Filter values are case-sensitive.</p>
     */
    inline Filter& AddValues(const char* value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
