/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigateway/APIGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace APIGateway
{
namespace Model
{
  /**
   * <p>Represents a method response of a given HTTP status code returned to the
   * client. The method response is passed from the back end through the associated
   * integration response that can be transformed using a mapping template. </p> <div
   * class="remarks"> <p/> <h4>Example: A <b>MethodResponse</b> instance of an
   * API</h4> <h5>Request</h5> <p>The example request retrieves a
   * <b>MethodResponse</b> of the 200 status code.</p> <pre><code>GET
   * /restapis/fugvjdxtri/resources/3kzxbg5sa2/methods/GET/responses/200 HTTP/1.1
   * Content-Type: application/json Host: apigateway.us-east-1.amazonaws.com
   * X-Amz-Date: 20160603T222952Z Authorization: AWS4-HMAC-SHA256
   * Credential={access_key_ID}/20160603/us-east-1/apigateway/aws4_request,
   * SignedHeaders=content-type;host;x-amz-date, Signature={sig4_hash}</code></pre>
   * <h5>Response</h5> <p>The successful response returns <code>200 OK</code> status
   * and a payload as follows:</p> <pre><code>{ "_links": { "curies": { "href":
   * "https://docs.aws.amazon.com/apigateway/latest/developerguide/restapi-method-response-{rel}.html",
   * "name": "methodresponse", "templated": true }, "self": { "href":
   * "/restapis/fugvjdxtri/resources/3kzxbg5sa2/methods/GET/responses/200", "title":
   * "200" }, "methodresponse:delete": { "href":
   * "/restapis/fugvjdxtri/resources/3kzxbg5sa2/methods/GET/responses/200" },
   * "methodresponse:update": { "href":
   * "/restapis/fugvjdxtri/resources/3kzxbg5sa2/methods/GET/responses/200" } },
   * "responseModels": { "application/json": "Empty" }, "responseParameters": {
   * "method.response.header.Content-Type": false }, "statusCode": "200"
   * }</code></pre> <p/> </div> <div class="seeAlso"> <a>Method</a>,
   * <a>IntegrationResponse</a>, <a>Integration</a> <a
   * href="https://docs.aws.amazon.com/apigateway/latest/developerguide/how-to-create-api.html">Creating
   * an API</a> </div><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/MethodResponse">AWS
   * API Reference</a></p>
   */
  class AWS_APIGATEWAY_API UpdateMethodResponseResult
  {
  public:
    UpdateMethodResponseResult();
    UpdateMethodResponseResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    UpdateMethodResponseResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The method response's status code.</p>
     */
    inline const Aws::String& GetStatusCode() const{ return m_statusCode; }

    /**
     * <p>The method response's status code.</p>
     */
    inline void SetStatusCode(const Aws::String& value) { m_statusCode = value; }

    /**
     * <p>The method response's status code.</p>
     */
    inline void SetStatusCode(Aws::String&& value) { m_statusCode = std::move(value); }

    /**
     * <p>The method response's status code.</p>
     */
    inline void SetStatusCode(const char* value) { m_statusCode.assign(value); }

    /**
     * <p>The method response's status code.</p>
     */
    inline UpdateMethodResponseResult& WithStatusCode(const Aws::String& value) { SetStatusCode(value); return *this;}

    /**
     * <p>The method response's status code.</p>
     */
    inline UpdateMethodResponseResult& WithStatusCode(Aws::String&& value) { SetStatusCode(std::move(value)); return *this;}

    /**
     * <p>The method response's status code.</p>
     */
    inline UpdateMethodResponseResult& WithStatusCode(const char* value) { SetStatusCode(value); return *this;}


    /**
     * <p>A key-value map specifying required or optional response parameters that API
     * Gateway can send back to the caller. A key defines a method response header and
     * the value specifies whether the associated method response header is required or
     * not. The expression of the key must match the pattern
     * <code>method.response.header.{name}</code>, where <code>name</code> is a valid
     * and unique header name. API Gateway passes certain integration response data to
     * the method response headers specified here according to the mapping you
     * prescribe in the API's <a>IntegrationResponse</a>. The integration response data
     * that can be mapped include an integration response header expressed in
     * <code>integration.response.header.{name}</code>, a static value enclosed within
     * a pair of single quotes (e.g., <code>'application/json'</code>), or a JSON
     * expression from the back-end response payload in the form of
     * <code>integration.response.body.{JSON-expression}</code>, where
     * <code>JSON-expression</code> is a valid JSON expression without the
     * <code>$</code> prefix.)</p>
     */
    inline const Aws::Map<Aws::String, bool>& GetResponseParameters() const{ return m_responseParameters; }

    /**
     * <p>A key-value map specifying required or optional response parameters that API
     * Gateway can send back to the caller. A key defines a method response header and
     * the value specifies whether the associated method response header is required or
     * not. The expression of the key must match the pattern
     * <code>method.response.header.{name}</code>, where <code>name</code> is a valid
     * and unique header name. API Gateway passes certain integration response data to
     * the method response headers specified here according to the mapping you
     * prescribe in the API's <a>IntegrationResponse</a>. The integration response data
     * that can be mapped include an integration response header expressed in
     * <code>integration.response.header.{name}</code>, a static value enclosed within
     * a pair of single quotes (e.g., <code>'application/json'</code>), or a JSON
     * expression from the back-end response payload in the form of
     * <code>integration.response.body.{JSON-expression}</code>, where
     * <code>JSON-expression</code> is a valid JSON expression without the
     * <code>$</code> prefix.)</p>
     */
    inline void SetResponseParameters(const Aws::Map<Aws::String, bool>& value) { m_responseParameters = value; }

    /**
     * <p>A key-value map specifying required or optional response parameters that API
     * Gateway can send back to the caller. A key defines a method response header and
     * the value specifies whether the associated method response header is required or
     * not. The expression of the key must match the pattern
     * <code>method.response.header.{name}</code>, where <code>name</code> is a valid
     * and unique header name. API Gateway passes certain integration response data to
     * the method response headers specified here according to the mapping you
     * prescribe in the API's <a>IntegrationResponse</a>. The integration response data
     * that can be mapped include an integration response header expressed in
     * <code>integration.response.header.{name}</code>, a static value enclosed within
     * a pair of single quotes (e.g., <code>'application/json'</code>), or a JSON
     * expression from the back-end response payload in the form of
     * <code>integration.response.body.{JSON-expression}</code>, where
     * <code>JSON-expression</code> is a valid JSON expression without the
     * <code>$</code> prefix.)</p>
     */
    inline void SetResponseParameters(Aws::Map<Aws::String, bool>&& value) { m_responseParameters = std::move(value); }

    /**
     * <p>A key-value map specifying required or optional response parameters that API
     * Gateway can send back to the caller. A key defines a method response header and
     * the value specifies whether the associated method response header is required or
     * not. The expression of the key must match the pattern
     * <code>method.response.header.{name}</code>, where <code>name</code> is a valid
     * and unique header name. API Gateway passes certain integration response data to
     * the method response headers specified here according to the mapping you
     * prescribe in the API's <a>IntegrationResponse</a>. The integration response data
     * that can be mapped include an integration response header expressed in
     * <code>integration.response.header.{name}</code>, a static value enclosed within
     * a pair of single quotes (e.g., <code>'application/json'</code>), or a JSON
     * expression from the back-end response payload in the form of
     * <code>integration.response.body.{JSON-expression}</code>, where
     * <code>JSON-expression</code> is a valid JSON expression without the
     * <code>$</code> prefix.)</p>
     */
    inline UpdateMethodResponseResult& WithResponseParameters(const Aws::Map<Aws::String, bool>& value) { SetResponseParameters(value); return *this;}

    /**
     * <p>A key-value map specifying required or optional response parameters that API
     * Gateway can send back to the caller. A key defines a method response header and
     * the value specifies whether the associated method response header is required or
     * not. The expression of the key must match the pattern
     * <code>method.response.header.{name}</code>, where <code>name</code> is a valid
     * and unique header name. API Gateway passes certain integration response data to
     * the method response headers specified here according to the mapping you
     * prescribe in the API's <a>IntegrationResponse</a>. The integration response data
     * that can be mapped include an integration response header expressed in
     * <code>integration.response.header.{name}</code>, a static value enclosed within
     * a pair of single quotes (e.g., <code>'application/json'</code>), or a JSON
     * expression from the back-end response payload in the form of
     * <code>integration.response.body.{JSON-expression}</code>, where
     * <code>JSON-expression</code> is a valid JSON expression without the
     * <code>$</code> prefix.)</p>
     */
    inline UpdateMethodResponseResult& WithResponseParameters(Aws::Map<Aws::String, bool>&& value) { SetResponseParameters(std::move(value)); return *this;}

    /**
     * <p>A key-value map specifying required or optional response parameters that API
     * Gateway can send back to the caller. A key defines a method response header and
     * the value specifies whether the associated method response header is required or
     * not. The expression of the key must match the pattern
     * <code>method.response.header.{name}</code>, where <code>name</code> is a valid
     * and unique header name. API Gateway passes certain integration response data to
     * the method response headers specified here according to the mapping you
     * prescribe in the API's <a>IntegrationResponse</a>. The integration response data
     * that can be mapped include an integration response header expressed in
     * <code>integration.response.header.{name}</code>, a static value enclosed within
     * a pair of single quotes (e.g., <code>'application/json'</code>), or a JSON
     * expression from the back-end response payload in the form of
     * <code>integration.response.body.{JSON-expression}</code>, where
     * <code>JSON-expression</code> is a valid JSON expression without the
     * <code>$</code> prefix.)</p>
     */
    inline UpdateMethodResponseResult& AddResponseParameters(const Aws::String& key, bool value) { m_responseParameters.emplace(key, value); return *this; }

    /**
     * <p>A key-value map specifying required or optional response parameters that API
     * Gateway can send back to the caller. A key defines a method response header and
     * the value specifies whether the associated method response header is required or
     * not. The expression of the key must match the pattern
     * <code>method.response.header.{name}</code>, where <code>name</code> is a valid
     * and unique header name. API Gateway passes certain integration response data to
     * the method response headers specified here according to the mapping you
     * prescribe in the API's <a>IntegrationResponse</a>. The integration response data
     * that can be mapped include an integration response header expressed in
     * <code>integration.response.header.{name}</code>, a static value enclosed within
     * a pair of single quotes (e.g., <code>'application/json'</code>), or a JSON
     * expression from the back-end response payload in the form of
     * <code>integration.response.body.{JSON-expression}</code>, where
     * <code>JSON-expression</code> is a valid JSON expression without the
     * <code>$</code> prefix.)</p>
     */
    inline UpdateMethodResponseResult& AddResponseParameters(Aws::String&& key, bool value) { m_responseParameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>A key-value map specifying required or optional response parameters that API
     * Gateway can send back to the caller. A key defines a method response header and
     * the value specifies whether the associated method response header is required or
     * not. The expression of the key must match the pattern
     * <code>method.response.header.{name}</code>, where <code>name</code> is a valid
     * and unique header name. API Gateway passes certain integration response data to
     * the method response headers specified here according to the mapping you
     * prescribe in the API's <a>IntegrationResponse</a>. The integration response data
     * that can be mapped include an integration response header expressed in
     * <code>integration.response.header.{name}</code>, a static value enclosed within
     * a pair of single quotes (e.g., <code>'application/json'</code>), or a JSON
     * expression from the back-end response payload in the form of
     * <code>integration.response.body.{JSON-expression}</code>, where
     * <code>JSON-expression</code> is a valid JSON expression without the
     * <code>$</code> prefix.)</p>
     */
    inline UpdateMethodResponseResult& AddResponseParameters(const char* key, bool value) { m_responseParameters.emplace(key, value); return *this; }


    /**
     * <p>Specifies the <a>Model</a> resources used for the response's content-type.
     * Response models are represented as a key/value map, with a content-type as the
     * key and a <a>Model</a> name as the value.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetResponseModels() const{ return m_responseModels; }

    /**
     * <p>Specifies the <a>Model</a> resources used for the response's content-type.
     * Response models are represented as a key/value map, with a content-type as the
     * key and a <a>Model</a> name as the value.</p>
     */
    inline void SetResponseModels(const Aws::Map<Aws::String, Aws::String>& value) { m_responseModels = value; }

    /**
     * <p>Specifies the <a>Model</a> resources used for the response's content-type.
     * Response models are represented as a key/value map, with a content-type as the
     * key and a <a>Model</a> name as the value.</p>
     */
    inline void SetResponseModels(Aws::Map<Aws::String, Aws::String>&& value) { m_responseModels = std::move(value); }

    /**
     * <p>Specifies the <a>Model</a> resources used for the response's content-type.
     * Response models are represented as a key/value map, with a content-type as the
     * key and a <a>Model</a> name as the value.</p>
     */
    inline UpdateMethodResponseResult& WithResponseModels(const Aws::Map<Aws::String, Aws::String>& value) { SetResponseModels(value); return *this;}

    /**
     * <p>Specifies the <a>Model</a> resources used for the response's content-type.
     * Response models are represented as a key/value map, with a content-type as the
     * key and a <a>Model</a> name as the value.</p>
     */
    inline UpdateMethodResponseResult& WithResponseModels(Aws::Map<Aws::String, Aws::String>&& value) { SetResponseModels(std::move(value)); return *this;}

    /**
     * <p>Specifies the <a>Model</a> resources used for the response's content-type.
     * Response models are represented as a key/value map, with a content-type as the
     * key and a <a>Model</a> name as the value.</p>
     */
    inline UpdateMethodResponseResult& AddResponseModels(const Aws::String& key, const Aws::String& value) { m_responseModels.emplace(key, value); return *this; }

    /**
     * <p>Specifies the <a>Model</a> resources used for the response's content-type.
     * Response models are represented as a key/value map, with a content-type as the
     * key and a <a>Model</a> name as the value.</p>
     */
    inline UpdateMethodResponseResult& AddResponseModels(Aws::String&& key, const Aws::String& value) { m_responseModels.emplace(std::move(key), value); return *this; }

    /**
     * <p>Specifies the <a>Model</a> resources used for the response's content-type.
     * Response models are represented as a key/value map, with a content-type as the
     * key and a <a>Model</a> name as the value.</p>
     */
    inline UpdateMethodResponseResult& AddResponseModels(const Aws::String& key, Aws::String&& value) { m_responseModels.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Specifies the <a>Model</a> resources used for the response's content-type.
     * Response models are represented as a key/value map, with a content-type as the
     * key and a <a>Model</a> name as the value.</p>
     */
    inline UpdateMethodResponseResult& AddResponseModels(Aws::String&& key, Aws::String&& value) { m_responseModels.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Specifies the <a>Model</a> resources used for the response's content-type.
     * Response models are represented as a key/value map, with a content-type as the
     * key and a <a>Model</a> name as the value.</p>
     */
    inline UpdateMethodResponseResult& AddResponseModels(const char* key, Aws::String&& value) { m_responseModels.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Specifies the <a>Model</a> resources used for the response's content-type.
     * Response models are represented as a key/value map, with a content-type as the
     * key and a <a>Model</a> name as the value.</p>
     */
    inline UpdateMethodResponseResult& AddResponseModels(Aws::String&& key, const char* value) { m_responseModels.emplace(std::move(key), value); return *this; }

    /**
     * <p>Specifies the <a>Model</a> resources used for the response's content-type.
     * Response models are represented as a key/value map, with a content-type as the
     * key and a <a>Model</a> name as the value.</p>
     */
    inline UpdateMethodResponseResult& AddResponseModels(const char* key, const char* value) { m_responseModels.emplace(key, value); return *this; }

  private:

    Aws::String m_statusCode;

    Aws::Map<Aws::String, bool> m_responseParameters;

    Aws::Map<Aws::String, Aws::String> m_responseModels;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
