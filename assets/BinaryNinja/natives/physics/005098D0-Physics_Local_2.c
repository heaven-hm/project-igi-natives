// IGI native provenance: Physics_Local_2 - 0x005098D0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 005098D0-Physics_Local_2.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Physics_Local_2.h"
int32_t Physics_Local_2()

{
    return Sys_CloseFileStream_5(QFile_DeviceIndex("LOCAL:"));
}
