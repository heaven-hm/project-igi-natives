#include "Config_GraphicOptionsGetDevice.h"
int32_t Config_GraphicOptionsGetDevice(int32_t a1)

// Sig: int Config_GraphicOptionsGetDevice()
// Note: Returns the active profile's render-device index (index into the device
// list). Use in video-options UI scripts.
{
    int32_t ctxB;
    int32_t v_20 = ctxB;
    int32_t flagP = 0;
    int32_t v_1c = 0;
    int32_t v_18;

    if (g_567c90 > 0)
    {
        char* dstD1 = &g_567c98;

        while (true)
        {
            char* srcS1 = dstD1;
            char* valA2 = Config_GetActiveGraphicOptions() + 0x13;
            int32_t valA4;

            while (true)
            {
                char tmpD1 = *valA2;
                char ctxB1 = *srcS1;
                bool c_1 = tmpD1 < ctxB1;

                if (tmpD1 == ctxB1)
                {
                    if (!tmpD1)
                    {
                        valA4 = 0;
                        break;
                    }

                    tmpD1 = valA2[1];
                    ctxB1 = srcS1[1];
                    c_1 = tmpD1 < ctxB1;

                    if (tmpD1 == ctxB1)
                    {
                        valA2 = &valA2[2];
                        srcS1 = &srcS1[2];

                        if (tmpD1)
                            continue;

                        valA4 = 0;
                        break;
                    }
                }

                valA4 = valA2 - valA2 + 1;
                break;
            }

            if (!valA4)
            {
                v_18 = flagP;
                int32_t v_10;
                v_10 = flagP;
                char* v_8_1 = &g_567c74;
                memcpy(a1, &v_18, 0x18);
                return a1;
            }

            flagP += 1;
            dstD1 = &dstD1[0x404];

            if (flagP >= g_567c90)
            {
                int32_t v_1c_1 = flagP;
                break;
            }
        }
    }

    v_18 = 0;
    int32_t v_10_1 = 0;
    int32_t v_c = 0;
    char* v_8 = &g_567c74;
    memcpy(a1, &v_18, 0x18);
    return a1;
}
