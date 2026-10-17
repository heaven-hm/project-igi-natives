// Original IGI.EXE function: Gun_Cleanup_8 (VA 0x0047A9E0; static CFG gate PASS, CFG score 1.000).
#include "Gun_Cleanup_8.h"
int32_t Gun_Cleanup_8(void* a1, int32_t a2)

{
    char result = *(a1 + 0xf1);

    if (!result)
    {
        result = *(a1 + 0xf4);

        if (result)
        {
            result = *(a1 + 0xf0);

            if (!result)
            {
                result =
                    (*(((DynObj_UpdateDynTree_12() * 0x180 + DynObj_LookupHashItem_5()) << 2) + &g_a96ae0))(a1, a2);
                *(a1 + 0xf0) = 1;
            }
        }
    }

    return result;
}
