// IGI native provenance: Gun_Cleanup_7 - 0x0047A960 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0047A960-Gun_Cleanup_7.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Gun_Cleanup_7.h"
int32_t* Gun_Cleanup_7(void* context, int32_t param_2)

{
    int32_t* result = *(context + 0x194);

    if (result)
    {
        result = *result;

        if (result)
        {
            QTask_FindType(result);
            result = Qtask_UpdateList(*(context + 0x194));
            *(context + 0x194) = 0;
        }
    }

    result = *(context + 0xf0);

    if (result)
    {
        result = (*(((DynObj_LinkDynamicCube_12() * 0x180 + DynObj_LookupHashItem_5()) << 2) + &g_a96ae0))(context, param_2);
        *(context + 0xf0) = 0;
    }

    return result;
}
