// Copyright (C) 2017-2018 Dremio Corporation
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "codegen/projector_cache.h"

#define CACHE_SIZE 100

namespace gandiva {
lru_cache<ProjectorCache::ProjectorCacheKey, std::shared_ptr<Projector>>
    ProjectorCache::cache_(CACHE_SIZE);
// std::mutex ProjectorCache::mtx_;
}  // namespace gandiva
