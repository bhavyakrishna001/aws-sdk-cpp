/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/rds/model/CustomAvailabilityZone.h>
#include <aws/rds/model/ResponseMetadata.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace RDS
{
namespace Model
{
  class AWS_RDS_API DeleteCustomAvailabilityZoneResult
  {
  public:
    DeleteCustomAvailabilityZoneResult();
    DeleteCustomAvailabilityZoneResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    DeleteCustomAvailabilityZoneResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    
    inline const CustomAvailabilityZone& GetCustomAvailabilityZone() const{ return m_customAvailabilityZone; }

    
    inline void SetCustomAvailabilityZone(const CustomAvailabilityZone& value) { m_customAvailabilityZone = value; }

    
    inline void SetCustomAvailabilityZone(CustomAvailabilityZone&& value) { m_customAvailabilityZone = std::move(value); }

    
    inline DeleteCustomAvailabilityZoneResult& WithCustomAvailabilityZone(const CustomAvailabilityZone& value) { SetCustomAvailabilityZone(value); return *this;}

    
    inline DeleteCustomAvailabilityZoneResult& WithCustomAvailabilityZone(CustomAvailabilityZone&& value) { SetCustomAvailabilityZone(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DeleteCustomAvailabilityZoneResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DeleteCustomAvailabilityZoneResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    CustomAvailabilityZone m_customAvailabilityZone;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
