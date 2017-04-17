#ifndef __STDINT_H__
#define	__STDINT_H__

/* Limits of exact-width integer types */

#define INT8_MIN (-128)
#define INT16_MIN (-32768)
#define INT32_MIN (-2147483647 - 1)
#define INT64_MIN (-9223372036854775807LL - 1LL)

#define INT8_MAX (127)
#define INT16_MAX (32767)
#define INT32_MAX (2147483647)
#define INT64_MAX (9223372036854775807LL)

#define UINT8_MAX (255)
#define UINT16_MAX (65535)
#define UINT32_MAX (4294967295UL)
#define UINT64_MAX (18446744073709551615ULL)

#define INT8_C(x) x
#define INT16_C(x) x
#define INT32_C(x) x ## L
#define INT64_C(x) x ## LL

#define UINT8_C(x) x
#define UINT16_C(x) x
#define UINT32_C(x) x ## UL
#define UINT64_C(x) x ## ULL

/* Greatest-width integer types */

typedef long long intmax_t;
typedef unsigned long long uintmax_t;

typedef unsigned __int64 		uint64_t;
typedef unsigned __int32 		uint32_t;
typedef unsigned __int16 		uint16_t;
typedef unsigned __int8  		uint8_t;

typedef __int64           		int64_t;
typedef __int32           		int32_t;
typedef __int16          		int16_t;
typedef __int8             		int8_t;

/* Minimum-width integer types */

typedef signed char int_least8_t;
typedef short int_least16_t;
typedef int int_least32_t;
typedef long long int_least64_t;

typedef unsigned char uint_least8_t;
typedef unsigned short uint_least16_t;
typedef unsigned int uint_least32_t;
typedef unsigned long long uint_least64_t;

/* Fastest minimum-width integer types */

typedef signed char int_fast8_t;
typedef int int_fast16_t;
typedef int int_fast32_t;
typedef long long int_fast64_t;

typedef unsigned char uint_fast8_t;
typedef unsigned int uint_fast16_t;
typedef unsigned int uint_fast32_t;
typedef unsigned long long uint_fast64_t;

#endif/*__STDINT_H__*/