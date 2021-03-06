/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/monitoring/model/PutAnomalyDetectorRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::CloudWatch::Model;
using namespace Aws::Utils;

PutAnomalyDetectorRequest::PutAnomalyDetectorRequest() : 
    m_namespaceHasBeenSet(false),
    m_metricNameHasBeenSet(false),
    m_dimensionsHasBeenSet(false),
    m_statHasBeenSet(false),
    m_configurationHasBeenSet(false)
{
}

Aws::String PutAnomalyDetectorRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=PutAnomalyDetector&";
  if(m_namespaceHasBeenSet)
  {
    ss << "Namespace=" << StringUtils::URLEncode(m_namespace.c_str()) << "&";
  }

  if(m_metricNameHasBeenSet)
  {
    ss << "MetricName=" << StringUtils::URLEncode(m_metricName.c_str()) << "&";
  }

  if(m_dimensionsHasBeenSet)
  {
    unsigned dimensionsCount = 1;
    for(auto& item : m_dimensions)
    {
      item.OutputToStream(ss, "Dimensions.member.", dimensionsCount, "");
      dimensionsCount++;
    }
  }

  if(m_statHasBeenSet)
  {
    ss << "Stat=" << StringUtils::URLEncode(m_stat.c_str()) << "&";
  }

  if(m_configurationHasBeenSet)
  {
    m_configuration.OutputToStream(ss, "Configuration");
  }

  ss << "Version=2010-08-01";
  return ss.str();
}


void  PutAnomalyDetectorRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
