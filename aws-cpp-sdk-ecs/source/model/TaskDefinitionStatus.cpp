/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecs/model/TaskDefinitionStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ECS
  {
    namespace Model
    {
      namespace TaskDefinitionStatusMapper
      {

        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int INACTIVE_HASH = HashingUtils::HashString("INACTIVE");


        TaskDefinitionStatus GetTaskDefinitionStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACTIVE_HASH)
          {
            return TaskDefinitionStatus::ACTIVE;
          }
          else if (hashCode == INACTIVE_HASH)
          {
            return TaskDefinitionStatus::INACTIVE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TaskDefinitionStatus>(hashCode);
          }

          return TaskDefinitionStatus::NOT_SET;
        }

        Aws::String GetNameForTaskDefinitionStatus(TaskDefinitionStatus enumValue)
        {
          switch(enumValue)
          {
          case TaskDefinitionStatus::ACTIVE:
            return "ACTIVE";
          case TaskDefinitionStatus::INACTIVE:
            return "INACTIVE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TaskDefinitionStatusMapper
    } // namespace Model
  } // namespace ECS
} // namespace Aws
