#pragma once

#if defined(_WIN32) | defined (WIN32)
#if defined(_WIN64)
#define 			PLATFORM_WINDOWS_X64
#else
#define 			PLATFORM_WINDOWS_X32
#endif
#elif defined (__APPLE__)
#define 			PLATFORM_MACOS
#else
#error Unkown Platfom!
#endif

#if defined(PLATFORM_WINDOWS_X32)
typedef signed char             i8;
typedef unsigned char           u8;
typedef signed short            i16;
typedef unsigned short          u16;
typedef signed int              i32;
typedef unsigned int            u32;
typedef signed long long        i64;
typedef unsigned long long      u64;
typedef float                   f32;
typedef double                  f64;

typedef i32                     iptr;
typedef u32                     uptr;
typedef i32                     iptrdiff;
typedef u32                     uptrdiff;
typedef i32                     isize;
typedef u32                     usize;
#elif defined(PLATFORM_WINDOWS_X64)
typedef signed char             i8;
typedef unsigned char           u8;
typedef signed short            i16;
typedef unsigned short          u16;
typedef signed int              i32;
typedef unsigned int            u32;
typedef signed long long        i64;
typedef unsigned long long      u64;
typedef float                   f32;
typedef double                  f64;

typedef i64                     iptr;
typedef u64                     uptr;
typedef i64                     iptrdiff;
typedef u64                     uptrdiff;
typedef i64                     isize;
typedef u64                     usize;
#endif