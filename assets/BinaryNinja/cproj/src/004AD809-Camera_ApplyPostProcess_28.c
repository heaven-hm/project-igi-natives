#include "gi_platform.h"
#include "004AD809-Camera_ApplyPostProcess_28.h"
char* Camera_ApplyPostProcess_28(uint32_t a1, int32_t a2)

{
    uint32_t dwBytes = a1 * a2;
    a1 = dwBytes;

    if (dwBytes <= 0xffffffe0)
    {
        if (!dwBytes)
            dwBytes = 1;

        dwBytes = (dwBytes + 0xf) & 0xfffffff0;
    }

    bool cond_1_1;

    do
    {
        if (dwBytes <= 0xffffffe0)
        {
            int32_t valA1 = g_c3242c;
            char* result;

            if (valA1 != 3)
            {
                if (valA1 == 2 && dwBytes <= g_5466d4)
                {
                    result = Camera_ApplyWideScreen_22(dwBytes >> 4);

                    if (result)
                    {
                        Camera_ApplyBandFilter_26(result, 0, dwBytes);
                        return result;
                    }
                }
            }
            else if (a1 <= g_c321fc)
            {
                result = Camera_ApplyPostProcess_21(a1);

                if (result)
                {
                    Camera_ApplyBandFilter_26(result, 0, a1);
                    return result;
                }
            }

            result = HeapAlloc(g_c32428, HEAP_ZERO_MEMORY, dwBytes);

            if (result || !g_936250)
                return result;
        }
        else if (!g_936250)
            return nullptr;

        cond_1_1 = !Camera_ApplyHandiCam_28(dwBytes);
    } while (!cond_1_1);
    return nullptr;
}
