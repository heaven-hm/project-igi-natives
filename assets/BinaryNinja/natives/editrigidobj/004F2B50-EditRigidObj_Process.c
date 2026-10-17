// IGI native provenance: EditRigidObj_Process - 0x004F2B50 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004F2B50-EditRigidObj_Process.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "EditRigidObj_Process.h"
void* EditRigidObj_Process(void* context)

{
    int32_t* data_val = *(context + 0xe8);

    if (data_val)
        QTask_FindType(data_val);

    Render_SetupLighting_14(context);
    return DynObj_RegisterSymbol_9(*(context + 0x68), context);
}
