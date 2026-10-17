// IGI native provenance: Magic_ObjLoad - 0x004C4930 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004C4930-Magic_ObjLoad.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Magic_ObjLoad.h"
int32_t Magic_ObjLoad(void* context)

// Sig: void Magic_ObjLoad(char *path)
// Note: Loads magic objects from path, Params: Path 'LOCAL:magicobj'
{
    return Sys_IllegalDeviceNameInP(context, DynObj_ParseConfigFile_4, nullptr);
}
