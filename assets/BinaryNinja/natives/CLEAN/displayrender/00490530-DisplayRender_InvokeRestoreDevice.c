// IGI native provenance: DisplayRender_InvokeRestoreDevice - 0x00490530 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00490530-DisplayRender_InvokeRestoreDevice.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "DisplayRender_InvokeRestoreDevice.h"

int32_t DisplayRender_InvokeRestoreDevice(int32_t arg1, int32_t arg2)

{
    if (arg1 == 6)
    {
        if (!arg2 || arg2 >> 0x10)
        {
            if (!g_5c8e40)
            {
                g_5c8e40 = Timer_Now();
                return 1;
            }

        label_490567:
            int32_t eax_7 = Timer_Now();
            int32_t ecx_1 = data_5c8e50;
            int32_t eax_8 = eax_7 - g_5c8e40;
            g_5c8e40 = 0;
            data_5c8e50 = ecx_1 + eax_8;
        }
        else if (g_5c8e40)
            goto label_490567;
    }

    return 1;
}
