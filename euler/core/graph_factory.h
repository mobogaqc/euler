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

#ifndef EULER_CORE_GRAPH_FACTORY_H_
#define EULER_CORE_GRAPH_FACTORY_H_

#include <vector>
#include <string>
#include <utility>

#include "euler/common/data_types.h"
#include "euler/core/node.h"
#include "euler/core/edge.h"
#include "euler/core/graph.h"

namespace euler {
namespace core {

class GraphFactory {
 public:
  virtual ~GraphFactory() { }

  virtual Node* CreateNode() = 0;

  virtual Edge* CreateEdge() = 0;

  virtual Graph* CreateGraph() = 0;
};

}  // namespace core
}  // namespace euler

#endif  // EULER_CORE_GRAPH_FACTORY_H_
