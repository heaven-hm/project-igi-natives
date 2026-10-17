// IGI native provenance: Sector_Cleanup_3 - 0x004DDFF0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004DDFF0-Sector_Cleanup_3.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sector_Cleanup_3.h"
int32_t* Sector_Cleanup_3(void* context)

{
    Render_SkinBones_15(context);
    Sys_OpenFileStream_2(context + 0x130);
    int32_t* result = *(context + 0xe8);

    if (result)
        result = QTask_FindType(result);

    int32_t* source_1 = *(context + 0x148);

    if (!source_1)
        return result;

    return QTask_FindType(source_1);
}
