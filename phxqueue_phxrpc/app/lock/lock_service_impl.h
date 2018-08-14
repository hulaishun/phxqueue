/*
Tencent is pleased to support the open source community by making PhxQueue available.
Copyright (C) 2017 THL A29 Limited, a Tencent company. All rights reserved.
Licensed under the BSD 3-Clause License (the "License"); you may not use this file except in compliance with the License. You may obtain a copy of the License at

<https://opensource.org/licenses/BSD-3-Clause>

Unless required by applicable law or agreed to in writing, software distributed under the License is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the License for the specific language governing permissions and limitations under the License.
*/



/* lock_service_impl.h

 Generated by phxrpc_pb2service from lock.proto

*/

#pragma once

#include "phxqueue/lock.h"

#include "lock.pb.h"
#include "phxrpc_lock_service.h"


class LockServerConfig;


typedef struct tagServiceArgs {
    LockServerConfig *config;
    phxqueue::lock::Lock *lock;
} ServiceArgs_t;


class LockServiceImpl : public LockService {
  public:
    LockServiceImpl(ServiceArgs_t &app_args);
    virtual ~LockServiceImpl();

    virtual int PHXEcho(const google::protobuf::StringValue &req,
                        google::protobuf::StringValue *resp) override;

    virtual int GetLockInfo(const phxqueue::comm::proto::GetLockInfoRequest &req,
                            phxqueue::comm::proto::GetLockInfoResponse *resp) override;

    virtual int AcquireLock(const phxqueue::comm::proto::AcquireLockRequest &req,
                            phxqueue::comm::proto::AcquireLockResponse *resp) override;

    virtual int GetString(const phxqueue::comm::proto::GetStringRequest &req,
                          phxqueue::comm::proto::GetStringResponse *resp) override;

    virtual int SetString(const phxqueue::comm::proto::SetStringRequest &req,
                          phxqueue::comm::proto::SetStringResponse *resp) override;

    virtual int DeleteString(const phxqueue::comm::proto::DeleteStringRequest &req,
                             phxqueue::comm::proto::DeleteStringResponse *resp) override;

  private:
    ServiceArgs_t &args_;
    phxqueue::lock::Lock *lock_{nullptr};
};

