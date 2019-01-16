/* Copyright 2018 Alibaba Group Holding Limited. All Rights Reserved.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/

#ifndef EULER_COMMON_SERVER_REGISTER_H_
#define EULER_COMMON_SERVER_REGISTER_H_

#include <memory>
#include <string>
#include <unordered_map>

namespace euler {
namespace common {

using Meta = std::unordered_map<std::string, std::string>;
using Server = std::string;

class ServerRegister {
 public:
  virtual bool Initialize() = 0;
  virtual ~ServerRegister() = default;

  virtual bool RegisterShard(size_t shard_index, const Server &server,
                             const Meta &meta, const Meta &shard_meta) = 0;
  virtual bool DeregisterShard(size_t shard_index, const Server &server) = 0;
};

std::shared_ptr<ServerRegister> GetServerRegister(const std::string &zk_addr,
                                                  const std::string &zk_path);

}  // namespace common
}  // namespace euler

#endif  // EULER_COMMON_SERVER_REGISTER_H_
