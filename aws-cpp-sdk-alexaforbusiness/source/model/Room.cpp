/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/alexaforbusiness/model/Room.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AlexaForBusiness
{
namespace Model
{

Room::Room() : 
    m_roomArnHasBeenSet(false),
    m_roomNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_providerCalendarIdHasBeenSet(false),
    m_profileArnHasBeenSet(false)
{
}

Room::Room(JsonView jsonValue) : 
    m_roomArnHasBeenSet(false),
    m_roomNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_providerCalendarIdHasBeenSet(false),
    m_profileArnHasBeenSet(false)
{
  *this = jsonValue;
}

Room& Room::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RoomArn"))
  {
    m_roomArn = jsonValue.GetString("RoomArn");

    m_roomArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RoomName"))
  {
    m_roomName = jsonValue.GetString("RoomName");

    m_roomNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProviderCalendarId"))
  {
    m_providerCalendarId = jsonValue.GetString("ProviderCalendarId");

    m_providerCalendarIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProfileArn"))
  {
    m_profileArn = jsonValue.GetString("ProfileArn");

    m_profileArnHasBeenSet = true;
  }

  return *this;
}

JsonValue Room::Jsonize() const
{
  JsonValue payload;

  if(m_roomArnHasBeenSet)
  {
   payload.WithString("RoomArn", m_roomArn);

  }

  if(m_roomNameHasBeenSet)
  {
   payload.WithString("RoomName", m_roomName);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_providerCalendarIdHasBeenSet)
  {
   payload.WithString("ProviderCalendarId", m_providerCalendarId);

  }

  if(m_profileArnHasBeenSet)
  {
   payload.WithString("ProfileArn", m_profileArn);

  }

  return payload;
}

} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws
