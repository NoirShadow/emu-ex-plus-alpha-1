#pragma once

typedef unsigned char uint8;
typedef signed char int8;
typedef signed char sint8;

#include <stdint.h>
typedef uint16_t uint16;
typedef int16_t int16;
typedef int16_t sint16;
typedef uint32_t uint32;
typedef int32_t int32;
typedef int32_t sint32;
typedef uint64_t uint64;
typedef int64_t int64;
typedef int64_t sint64;
typedef uintptr_t ptrsize;

// Shortcuts for (un)signed types
#ifndef __ANDROID__
	typedef unsigned int uint;
#else // uint provided in system header
	#include <sys/types.h>
#endif
typedef signed int sint;
typedef unsigned short ushort;
typedef signed short sshort;
typedef unsigned long ulong;
typedef signed long slong;
typedef unsigned char uchar;
typedef signed char schar;

#ifndef __cplusplus
	#include <stdbool.h>
#endif

// Fastest boolean type
typedef int_fast8_t fbool;

// Types without strict aliasing
typedef uint16 __attribute__((__may_alias__)) uint16a;
typedef int16 __attribute__((__may_alias__)) int16a;
typedef uint32 __attribute__((__may_alias__)) uint32a;
typedef int32 __attribute__((__may_alias__)) int32a;
typedef uint __attribute__((__may_alias__)) uinta;
typedef int __attribute__((__may_alias__)) inta;
