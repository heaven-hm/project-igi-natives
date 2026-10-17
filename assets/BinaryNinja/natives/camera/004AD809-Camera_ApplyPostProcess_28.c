// IGI native provenance: Camera_ApplyPostProcess_28 - 0x004AD809 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004AD809-Camera_ApplyPostProcess_28.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Camera_ApplyPostProcess_28.h"
char* Camera_ApplyPostProcess_28(uint32_t context, int32_t param_2)

{
    uint32_t dwBytes = context * param_2;
    context = dwBytes;

    if (dwBytes <= 0xffffffe0)
    {
        if (!dwBytes)
            dwBytes = 1;

        dwBytes = (dwBytes + 0xf) & 0xfffffff0;
    }

    bool flag_1_1;

    do
    {
        if (dwBytes <= 0xffffffe0)
        {
            int32_t data_1 = g_c3242c;
            char* result;

            if (data_1 != 3)
            {
                if (data_1 == 2 && dwBytes <= g_5466d4)
                {
                    result = Camera_ApplyWideScreen_22(dwBytes >> 4);

                    if (result)
                    {
                        Camera_ApplyBandFilter_26(result, 0, dwBytes);
                        return result;
                    }
                }
            }
            else if (context <= g_c321fc)
            {
                result = Camera_ApplyPostProcess_21(context);

                if (result)
                {
                    Camera_ApplyBandFilter_26(result, 0, context);
                    return result;
                }
            }

            result = HeapAlloc(g_c32428, HEAP_ZERO_MEMORY, dwBytes);

            if (result || !g_936250)
                return result;
        }
        else if (!g_936250)
            return nullptr;

        flag_1_1 = !Camera_ApplyHandiCam_28(dwBytes);
    } while (!flag_1_1);
    return nullptr;
}
