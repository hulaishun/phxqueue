/*
Tencent is pleased to support the open source community by making PhxQueue available.
Copyright (C) 2017 THL A29 Limited, a Tencent company. All rights reserved.
Licensed under the BSD 3-Clause License (the "License"); you may not use this file except in compliance with the License. You may obtain a copy of the License at

<https://opensource.org/licenses/BSD-3-Clause>

Unless required by applicable law or agreed to in writing, software distributed under the License is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the License for the specific language governing permissions and limitations under the License.
*/



/* phxrpc_store_dispatcher.h

 Generated by phxrpc_pb2service from store.proto

 Please DO NOT edit unless you know exactly what you are doing.

*/

#pragma once

#include "phxrpc/http.h"
#include "phxrpc/rpc.h"


class StoreService;


class StoreDispatcher {
  public:
    static const phxrpc::BaseDispatcher<StoreDispatcher>::URIFuncMap &GetURIFuncMap();

    StoreDispatcher(StoreService &service, phxrpc::DispatcherArgs_t *dispatcher_args);

    virtual ~StoreDispatcher();

    int PhxEcho(const phxrpc::BaseRequest &req, phxrpc::BaseResponse *const resp);

    int Add(const phxrpc::BaseRequest &req, phxrpc::BaseResponse *const resp);

    int Get(const phxrpc::BaseRequest &req, phxrpc::BaseResponse *const resp);

  private:
    StoreService &service_;
    phxrpc::DispatcherArgs_t *dispatcher_args_;
};

