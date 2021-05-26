#pragma once
#define nguvu
#include <stdbool.h>
#include <stdint.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#ifdef __APPLE__
// do apple spesific stuff
#endif // __APPLE__
#ifndef _WIN32
// do microsoft spesific stuff
#endif
#ifndef __linux__
// do linux spesific stuff
#endif
#ifdef CL
#define cl_header
#include <CL/cl.h>
#include <math.h>
#ifdef __APPLE__
// do apple spesific stuff
#include <OpenCL/cl.h>
#endif // __APPLE__
#ifndef _WIN32
// do microsoft spesific stuff
#endif
#ifndef __linux__
// do linux spesific stuff
#endif
#undef cl_header
#endif // !CL
#define NVBOOTCODE 0b1010101001010101
#ifdef NVBOOT
#undef NVBOOTCODE
#define NVBOOTCODE 0xAA55
#endif
