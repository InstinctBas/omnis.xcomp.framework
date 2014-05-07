/*
 *  omnis.xcomp.framework
 *  =====================
 *
 *  xCompStandardIncludes.h
 *  This include file includes all the header files from our SDK and such
 *
 *  Bastiaan Olij
 *
 *
 *  https://github.com/BastiaanOlij/omnis.xcomp.framework
 */

#ifndef xcompstandardincludesh
#define xcompstandardincludesh

#ifdef ismach_o
// For MACOSX, Omnis uses some deprectated APIS, ignore for now...
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

#ifdef iswin32
typedef unsigned int uint;
#endif

// add in our SDK headers
#include <anums.he>
#include <extcomp.he>
#include <extfval.he>
#include <hwnd.he>
#include <gdi.he>

// add in some useful standard libraries
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <string>
#include <vector>
#include <map>
#include <algorithm>

#define PI 3.14159265

#endif
