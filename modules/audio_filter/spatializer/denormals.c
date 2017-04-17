// Macro for killing denormalled numbers
//
// Written by Jezar at Dreampoint, June 2000
// http://www.dreampoint.co.uk
// Based on IS_DENORMAL macro by Jon Watte
// This code is public domain

#include "stdafx.h"

#ifdef HAVE_CONFIG_H
# include <config.h>
#endif

//#include <math.h>			// sunqueen delete
#include "denormals.h"

// sunqueen add start
#define FP_NAN         0
#define FP_INFINITE    1
#define FP_ZERO        2
#define FP_SUBNORMAL   3
#define FP_NORMAL      4

#include <dirent.h>
#include <cover.h>

#define fpclassify(x) (sizeof (x) == sizeof (float) ? cover__fpclassifyf (x)	  \
		       : sizeof (x) == sizeof (double) ? cover__fpclassify (x) \
		       : cover__fpclassifyl (x))

// sunqueen add end

/* fpclassify() is C99, cannot be compiled into a C++90 file (on some systems) */
float undenormalise( float f )
{
    if( fpclassify( f ) == FP_SUBNORMAL  )
        return 0.0;
    return f;
}
