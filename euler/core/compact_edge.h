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

#ifndef EULER_CORE_COMPACT_EDGE_H_
#define EULER_CORE_COMPACT_EDGE_H_

#include <string>

#include "euler/common/data_types.h"
#include "euler/core/edge.h"

namespace euler {
namespace core {

class CompactEdge : public Edge {
 public:
  CompactEdge(euler::common::EdgeID id, float weight);

  CompactEdge();

  ~CompactEdge();

  bool DeSerialize(const char* s, size_t size);

  std::string Serialize() const;
};

}  // namespace core
}  // namespace euler

#endif  // EULER_CORE_COMPACT_EDGE_H_
