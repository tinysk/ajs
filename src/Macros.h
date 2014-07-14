#ifndef AJS_MACROS_H_
#define AJS_MACROS_H_

#include <stddef.h>

template<typename T> void UNUSED(const T&) {}

#ifndef UNLIKELY
#define UNLIKELY(x) __builtin_expect((x), 0)
#endif

#ifndef LIKELY
#define LIKELY(x) __builtin_expect((x), 1)
#endif

#endif

