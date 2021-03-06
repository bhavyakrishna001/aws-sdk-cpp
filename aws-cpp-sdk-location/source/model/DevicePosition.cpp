/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/location/model/DevicePosition.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LocationService
{
namespace Model
{

DevicePosition::DevicePosition() : 
    m_deviceIdHasBeenSet(false),
    m_positionHasBeenSet(false),
    m_receivedTimeHasBeenSet(false),
    m_sampleTimeHasBeenSet(false)
{
}

DevicePosition::DevicePosition(JsonView jsonValue) : 
    m_deviceIdHasBeenSet(false),
    m_positionHasBeenSet(false),
    m_receivedTimeHasBeenSet(false),
    m_sampleTimeHasBeenSet(false)
{
  *this = jsonValue;
}

DevicePosition& DevicePosition::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DeviceId"))
  {
    m_deviceId = jsonValue.GetString("DeviceId");

    m_deviceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Position"))
  {
    Array<JsonView> positionJsonList = jsonValue.GetArray("Position");
    for(unsigned positionIndex = 0; positionIndex < positionJsonList.GetLength(); ++positionIndex)
    {
      m_position.push_back(positionJsonList[positionIndex].AsDouble());
    }
    m_positionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReceivedTime"))
  {
    m_receivedTime = jsonValue.GetString("ReceivedTime");

    m_receivedTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SampleTime"))
  {
    m_sampleTime = jsonValue.GetString("SampleTime");

    m_sampleTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue DevicePosition::Jsonize() const
{
  JsonValue payload;

  if(m_deviceIdHasBeenSet)
  {
   payload.WithString("DeviceId", m_deviceId);

  }

  if(m_positionHasBeenSet)
  {
   Array<JsonValue> positionJsonList(m_position.size());
   for(unsigned positionIndex = 0; positionIndex < positionJsonList.GetLength(); ++positionIndex)
   {
     positionJsonList[positionIndex].AsDouble(m_position[positionIndex]);
   }
   payload.WithArray("Position", std::move(positionJsonList));

  }

  if(m_receivedTimeHasBeenSet)
  {
   payload.WithString("ReceivedTime", m_receivedTime.ToGmtString(DateFormat::ISO_8601));
  }

  if(m_sampleTimeHasBeenSet)
  {
   payload.WithString("SampleTime", m_sampleTime.ToGmtString(DateFormat::ISO_8601));
  }

  return payload;
}

} // namespace Model
} // namespace LocationService
} // namespace Aws
