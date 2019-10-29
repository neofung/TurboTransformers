#pragma once
#include "fast_transformers/core/common.h"
#include <dlpack/dlpack.h>

namespace fast_transformers {
namespace layers {

template<typename T, DLDeviceType Device>
class EmbeddingLookupOp;

template<typename T, DLDeviceType Device>
class EmbeddingPostprocessorOp;

}
}
