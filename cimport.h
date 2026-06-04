#ifndef CIMPORT_H
#define CIMPORT_H

#include <stddef.h>
#include <stdint.h>
#include <stdbool.h>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>


#define CINT64  int64_t
#define CINT32  int32_t
#define CINT16  int16_t
#define CINT8   int8_t

#define CUINT64 uint64_t
#define CUINT32 uint32_t
#define CUINT16 uint16_t
#define CUINT8  uint8_t

#define CIZE    size_t

#define CBOOL   bool
#define CTRUE   true
#define CFALSE  false

#define CIM_PRINTF  printf
#define CIM_SQRT    sqrtf
#define CIM_LSQRT   sqrt

#define CIM_ROUND   roundf
#define CIM_LROUND  round
#define CIM_POW     powf
#define CIM_LPOW    pow
#define CIM_SIN     sinf
#define CIM_LSIN    sin
#define CIM_COS     cosf
#define CIM_LCOS    cos
#define CIM_TAN     tanf
#define CIM_LTAN    tan

#define CIM_MALLOC  malloc
#define CIM_CALLOC  calloc
#define CIM_REALLOC realloc
#define CIM_FREE    free
#define CIM_MCPY    memcpy
#define CIM_MMOVE   memmove
#define CIM_MSET    memset
#define MCMP        memcmp

// disable CIM EXIT
#define CIM_EXIT
#include <cim.h>
/* make sure it is no longer used */
#undef CIM_EXIT


#endif