#include "Log.hpp"

#include <cstdlib>
#include <stdio.h>
#include <stdarg.h>


void Error(const char* format, ...)
{
    va_list args;
    va_start(args, format);
    vfprintf(stderr, format, args);
    va_end(args);
    fprintf(stderr, "\n");
    exit(1);
}