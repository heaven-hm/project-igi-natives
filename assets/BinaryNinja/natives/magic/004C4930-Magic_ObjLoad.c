// Original IGI.EXE function: Magic_ObjLoad (VA 0x004C4930; static CFG gate PASS, CFG score 1.000).
#include "Magic_ObjLoad.h"
int32_t Magic_ObjLoad(void* context)

// Sig: void Magic_ObjLoad(char *path)
// Note: Loads magic objects from path, Params: Path 'LOCAL:magicobj'
{
    return Sys_IllegalDeviceNameInP(context, DynObj_ParseConfigFile_4, nullptr);
}
