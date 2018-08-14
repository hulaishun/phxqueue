/*
Tencent is pleased to support the open source community by making PhxQueue available.
Copyright (C) 2017 THL A29 Limited, a Tencent company. All rights reserved.
Licensed under the BSD 3-Clause License (the "License"); you may not use this file except in compliance with the License. You may obtain a copy of the License at

<https://opensource.org/licenses/BSD-3-Clause>

Unless required by applicable law or agreed to in writing, software distributed under the License is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the License for the specific language governing permissions and limitations under the License.
*/



/* lock_tool_impl.h

 Generated by phxrpc_pb2tool from lock.proto

*/

#pragma once

#include <cstdio>

#include "phxqueue/comm.h"

#include "phxrpc_lock_tool.h"


namespace phxrpc {


class OptMap;


}


class LockToolImpl : public LockTool {
  public:
    LockToolImpl();
    virtual ~LockToolImpl();

    virtual int PHXEcho(phxrpc::OptMap &opt_map) override;

    virtual int GetLockInfo(phxrpc::OptMap &opt_map) override;

    virtual int AcquireLock(phxrpc::OptMap &opt_map) override;

    virtual int GetString(phxrpc::OptMap &opt_map) override;

    virtual int SetString(phxrpc::OptMap &opt_map) override;

    virtual int DeleteString(phxrpc::OptMap &opt_map) override;

  private:
    phxqueue::comm::RetCode
    GetLockInfoImpl(const phxqueue::comm::proto::GetLockInfoRequest &req,
                    phxqueue::comm::proto::GetLockInfoResponse &resp);

    phxqueue::comm::RetCode
    AcquireLockImpl(const phxqueue::comm::proto::AcquireLockRequest &req,
                    phxqueue::comm::proto::AcquireLockResponse &resp);

    phxqueue::comm::RetCode
    GetStringImpl(const phxqueue::comm::proto::GetStringRequest &req,
                  phxqueue::comm::proto::GetStringResponse &resp);

    phxqueue::comm::RetCode
    SetStringImpl(const phxqueue::comm::proto::SetStringRequest &req,
                  phxqueue::comm::proto::SetStringResponse &resp);

    phxqueue::comm::RetCode
    DeleteStringImpl(const phxqueue::comm::proto::DeleteStringRequest &req,
                     phxqueue::comm::proto::DeleteStringResponse &resp);
};

