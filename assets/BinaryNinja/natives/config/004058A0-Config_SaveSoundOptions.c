#include "Config_SaveSoundOptions.h"
int32_t Config_SaveSoundOptions()

{
    int32_t v_4 = 0x1b;
    int32_t srcS = Config_SetResolution();
    int32_t* flagP = Config_SetGamma();
    int32_t valA2 = 0;
    int32_t* v_c = flagP;
    int32_t v_10 = 0;

    while (true)
    {
        int32_t dstD1 = 0;
        int32_t v_8;
        Config_Moveleft(valA2, &v_8, nullptr);
        int32_t ctxB1 = v_8;
        int32_t valA3 = 0;

        if (srcS > 0)
        {
            int32_t* objC1 = flagP;

            do
            {
                if (dstD1)
                    goto label_405953;

                if (*objC1 == ctxB1)
                    dstD1 = 1;

                valA3 += 1;
                objC1 = &objC1[3];
            } while (valA3 < srcS);
        }

        if (srcS <= 0 || !dstD1)
        {
            int32_t i = 0;
            int32_t* objC2 = &flagP[srcS * 3];
            int32_t* valA5 = &g_536410;

            while (!i)
            {
                if (*valA5 == ctxB1)
                {
                    int32_t* dstD2 = objC2;
                    srcS += 1;
                    objC2 = &objC2[3];
                    *dstD2 = *valA5;
                    dstD2[1] = valA5[1];
                    dstD2[2] = valA5[2];
                    i = 1;
                }

                valA5 = &valA5[3];

                if (valA5 >= 0x536554)
                    break;
            }
        }

    label_405953:
        valA2 = v_10 + 1;
        v_10 = valA2;

        if (valA2 >= v_4)
            break;

        flagP = v_c;
    }

    return Config_SetVolume(srcS);
}
