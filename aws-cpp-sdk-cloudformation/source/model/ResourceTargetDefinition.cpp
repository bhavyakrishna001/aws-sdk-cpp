/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/ResourceTargetDefinition.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudFormation
{
namespace Model
{

ResourceTargetDefinition::ResourceTargetDefinition() : 
    m_attribute(ResourceAttribute::NOT_SET),
    m_attributeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_requiresRecreation(RequiresRecreation::NOT_SET),
    m_requiresRecreationHasBeenSet(false)
{
}

ResourceTargetDefinition::ResourceTargetDefinition(const XmlNode& xmlNode) : 
    m_attribute(ResourceAttribute::NOT_SET),
    m_attributeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_requiresRecreation(RequiresRecreation::NOT_SET),
    m_requiresRecreationHasBeenSet(false)
{
  *this = xmlNode;
}

ResourceTargetDefinition& ResourceTargetDefinition::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode attributeNode = resultNode.FirstChild("Attribute");
    if(!attributeNode.IsNull())
    {
      m_attribute = ResourceAttributeMapper::GetResourceAttributeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(attributeNode.GetText()).c_str()).c_str());
      m_attributeHasBeenSet = true;
    }
    XmlNode nameNode = resultNode.FirstChild("Name");
    if(!nameNode.IsNull())
    {
      m_name = Aws::Utils::Xml::DecodeEscapedXmlText(nameNode.GetText());
      m_nameHasBeenSet = true;
    }
    XmlNode requiresRecreationNode = resultNode.FirstChild("RequiresRecreation");
    if(!requiresRecreationNode.IsNull())
    {
      m_requiresRecreation = RequiresRecreationMapper::GetRequiresRecreationForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(requiresRecreationNode.GetText()).c_str()).c_str());
      m_requiresRecreationHasBeenSet = true;
    }
  }

  return *this;
}

void ResourceTargetDefinition::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_attributeHasBeenSet)
  {
      oStream << location << index << locationValue << ".Attribute=" << ResourceAttributeMapper::GetNameForResourceAttribute(m_attribute) << "&";
  }

  if(m_nameHasBeenSet)
  {
      oStream << location << index << locationValue << ".Name=" << StringUtils::URLEncode(m_name.c_str()) << "&";
  }

  if(m_requiresRecreationHasBeenSet)
  {
      oStream << location << index << locationValue << ".RequiresRecreation=" << RequiresRecreationMapper::GetNameForRequiresRecreation(m_requiresRecreation) << "&";
  }

}

void ResourceTargetDefinition::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_attributeHasBeenSet)
  {
      oStream << location << ".Attribute=" << ResourceAttributeMapper::GetNameForResourceAttribute(m_attribute) << "&";
  }
  if(m_nameHasBeenSet)
  {
      oStream << location << ".Name=" << StringUtils::URLEncode(m_name.c_str()) << "&";
  }
  if(m_requiresRecreationHasBeenSet)
  {
      oStream << location << ".RequiresRecreation=" << RequiresRecreationMapper::GetNameForRequiresRecreation(m_requiresRecreation) << "&";
  }
}

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
