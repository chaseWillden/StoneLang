// Copyright 2016 Chase Willden and The CobraLang Authors. All rights reserved.
// Use of this source code is governed by a BSD-style
// license that can be found in the LICENSE file.

#ifndef ASSERT_H_
#define ASSERT_H_

#include <stdlib.h> 

namespace Cobra {
namespace internal{
	
	void FATAL(const char* file, int line, const char* msg1, const char* msg2);

	#define CHECK(condition) \
		if (!(condition)){ \
			Cobra::internal::FATAL(__FILE__, __LINE__, "Fatal:", #condition); \
		}		

	#define BENCHMARK(node, name) \
		if (node != NULL){\
			printf("Function: %s, NodeId: %d\n", name, node->id);\
		}

} // namespace internal
} // namespace Cobra

#endif // ASSERT_H_