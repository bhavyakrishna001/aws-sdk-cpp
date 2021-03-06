/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigateway/APIGateway_EXPORTS.h>
#include <aws/apigateway/APIGatewayRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace APIGateway
{
namespace Model
{

  /**
   * <p>Request to generate a sample mapping template used to transform the
   * payload.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/GetModelTemplateRequest">AWS
   * API Reference</a></p>
   */
  class AWS_APIGATEWAY_API GetModelTemplateRequest : public APIGatewayRequest
  {
  public:
    GetModelTemplateRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetModelTemplate"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>[Required] The string identifier of the associated <a>RestApi</a>.</p>
     */
    inline const Aws::String& GetRestApiId() const{ return m_restApiId; }

    /**
     * <p>[Required] The string identifier of the associated <a>RestApi</a>.</p>
     */
    inline bool RestApiIdHasBeenSet() const { return m_restApiIdHasBeenSet; }

    /**
     * <p>[Required] The string identifier of the associated <a>RestApi</a>.</p>
     */
    inline void SetRestApiId(const Aws::String& value) { m_restApiIdHasBeenSet = true; m_restApiId = value; }

    /**
     * <p>[Required] The string identifier of the associated <a>RestApi</a>.</p>
     */
    inline void SetRestApiId(Aws::String&& value) { m_restApiIdHasBeenSet = true; m_restApiId = std::move(value); }

    /**
     * <p>[Required] The string identifier of the associated <a>RestApi</a>.</p>
     */
    inline void SetRestApiId(const char* value) { m_restApiIdHasBeenSet = true; m_restApiId.assign(value); }

    /**
     * <p>[Required] The string identifier of the associated <a>RestApi</a>.</p>
     */
    inline GetModelTemplateRequest& WithRestApiId(const Aws::String& value) { SetRestApiId(value); return *this;}

    /**
     * <p>[Required] The string identifier of the associated <a>RestApi</a>.</p>
     */
    inline GetModelTemplateRequest& WithRestApiId(Aws::String&& value) { SetRestApiId(std::move(value)); return *this;}

    /**
     * <p>[Required] The string identifier of the associated <a>RestApi</a>.</p>
     */
    inline GetModelTemplateRequest& WithRestApiId(const char* value) { SetRestApiId(value); return *this;}


    /**
     * <p>[Required] The name of the model for which to generate a template.</p>
     */
    inline const Aws::String& GetModelName() const{ return m_modelName; }

    /**
     * <p>[Required] The name of the model for which to generate a template.</p>
     */
    inline bool ModelNameHasBeenSet() const { return m_modelNameHasBeenSet; }

    /**
     * <p>[Required] The name of the model for which to generate a template.</p>
     */
    inline void SetModelName(const Aws::String& value) { m_modelNameHasBeenSet = true; m_modelName = value; }

    /**
     * <p>[Required] The name of the model for which to generate a template.</p>
     */
    inline void SetModelName(Aws::String&& value) { m_modelNameHasBeenSet = true; m_modelName = std::move(value); }

    /**
     * <p>[Required] The name of the model for which to generate a template.</p>
     */
    inline void SetModelName(const char* value) { m_modelNameHasBeenSet = true; m_modelName.assign(value); }

    /**
     * <p>[Required] The name of the model for which to generate a template.</p>
     */
    inline GetModelTemplateRequest& WithModelName(const Aws::String& value) { SetModelName(value); return *this;}

    /**
     * <p>[Required] The name of the model for which to generate a template.</p>
     */
    inline GetModelTemplateRequest& WithModelName(Aws::String&& value) { SetModelName(std::move(value)); return *this;}

    /**
     * <p>[Required] The name of the model for which to generate a template.</p>
     */
    inline GetModelTemplateRequest& WithModelName(const char* value) { SetModelName(value); return *this;}

  private:

    Aws::String m_restApiId;
    bool m_restApiIdHasBeenSet;

    Aws::String m_modelName;
    bool m_modelNameHasBeenSet;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
