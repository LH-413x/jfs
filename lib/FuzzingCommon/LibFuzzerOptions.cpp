//===----------------------------------------------------------------------===//
//
//                        JFS - The JIT Fuzzing Solver
//
// Copyright 2017 Daniel Liew
//
// This file is distributed under the MIT license.
// See LICENSE.txt for details.
//
//===----------------------------------------------------------------------===//
#include "jfs/FuzzingCommon/LibFuzzerOptions.h"

namespace jfs {
namespace fuzzingCommon {

LibFuzzerOptions::LibFuzzerOptions()
    : seed(1), mutationDepth(5), crossOver(true), maxLength(0), useCmp(false),
      addAllZeroMaxLengthSeed(true) {}
}
}