#include "Magic_ObjLoad.h"
int32_t Magic_ObjLoad(void* a1)

// Sig: void Magic_ObjLoad(char *path)
// Note: Loads magic objects from path, Params: Path 'LOCAL:magicobj'
{
    return Sys_IllegalDeviceNameInP(a1, DynObj_ParseConfigFile_4, nullptr);
}
