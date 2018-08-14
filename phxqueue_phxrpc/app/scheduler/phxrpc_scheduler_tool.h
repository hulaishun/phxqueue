/*
Tencent is pleased to support the open source community by making PhxQueue available.
Copyright (C) 2017 THL A29 Limited, a Tencent company. All rights reserved.
Licensed under the BSD 3-Clause License (the "License"); you may not use this file except in compliance with the License. You may obtain a copy of the License at

<https://opensource.org/licenses/BSD-3-Clause>

Unless required by applicable law or agreed to in writing, software distributed under the License is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the License for the specific language governing permissions and limitations under the License.
*/



/* phxrpc_scheduler_tool.h

 Generated by phxrpc_pb2tool from scheduler.proto

 Please DO NOT edit unless you know exactly what you are doing.

*/

#pragma once

#include <cstdio>


namespace phxrpc {


class OptMap;


}


class SchedulerTool {
  public:
    SchedulerTool();
    virtual ~SchedulerTool();

    virtual int PHXEcho(phxrpc::OptMap &bigmap);

    virtual int GetAddrScale(phxrpc::OptMap &bigmap);

    typedef int (SchedulerTool::*ToolFunc_t) (phxrpc::OptMap &);

    typedef struct tagName2Func {
        const char *name;
        SchedulerTool::ToolFunc_t func;
        const char *opt_string;
        const char *usage;
    } Name2Func_t;

    static Name2Func_t *GetName2Func() {
        static Name2Func_t name2func[]{
            { "PHXEcho", &SchedulerTool::PHXEcho, "c:f:vs:", "-s <string>" },
            { nullptr, nullptr }
        };

        return name2func;
    };
};

