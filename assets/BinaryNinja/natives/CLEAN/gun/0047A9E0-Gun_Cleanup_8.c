// IGI native provenance: Gun_Cleanup_8 - 0x0047A9E0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0047A9E0-Gun_Cleanup_8.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Gun_Cleanup_8.h"
int32_t Gun_Cleanup_8(void* context, int32_t param_2)

{
    char result = *(context + 0xf1);

    if (!result)
    {
        result = *(context + 0xf4);

        if (result)
        {
            result = *(context + 0xf0);

            if (!result)
            {
                result =
                    (*(((DynObj_UpdateDynTree_12() * 0x180 + DynObj_LookupHashItem_5()) << 2) + &g_a96ae0))(context, param_2);
                *(context + 0xf0) = 1;
            }
        }
    }

    return result;
}
