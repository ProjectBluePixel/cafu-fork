
/*************************/
/*** Common Cg Helpers ***/
/*************************/

#ifndef CAFU_MATSYS_COMMON_CG_HELPERS_HPP_INCLUDED
#define CAFU_MATSYS_COMMON_CG_HELPERS_HPP_INCLUDED

// This is required for cg.h to get the function calling conventions (Win32 import/export/lib) right.
#ifdef _WIN32
#define WIN32 1
#endif

#include <Cg/cg.h>
#include <Cg/cgGL.h>


CGprogram UploadCgProgram(CGcontext CgContext, CGprofile Profile, const char* SourceCode, bool IsObjectCode=false);

#endif
