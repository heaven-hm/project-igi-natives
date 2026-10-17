// Original IGI.EXE function: SoundSys_LoadSoundDef_3 (VA 0x004E5BA0; static CFG gate PASS, CFG score 1.000).
#include "SoundSys_LoadSoundDef_3.h"
int32_t SoundSys_LoadSoundDef_3(void* a1, float a2, float a3, float a4, float a5)

{
    int32_t dstD = a2;
    int32_t srcS = *(a1 + 8);
    int32_t valA = a3;
    int32_t tmpD2 = a2 + a4 - dstD + 1;
    int32_t objC2 = a3 + a5 - valA + 1;

    if (dstD < srcS)
    {
        if (dstD >= 0)
            goto label_4e5bfc;

        tmpD2 += dstD;

        if (tmpD2 > 0)
        {
            dstD = 0;
        label_4e5bfc:

            if (valA < srcS)
            {
                if (valA >= 0)
                    goto label_4e5c11;

                objC2 += valA;

                if (objC2 > 0)
                {
                    valA = 0;
                label_4e5c11:

                    if (tmpD2 + dstD > srcS)
                        tmpD2 = srcS - dstD;

                    if (objC2 + valA > srcS)
                        objC2 = srcS - valA;

                    float objC3 = objC2 + valA;
                    float srcS2 = valA;
                    a2 = srcS2;
                    a3 = objC3;

                    if (valA < objC3)
                    {
                        int32_t tmpD4 = tmpD2 + dstD;

                        do
                        {
                            int32_t valA1 = dstD;

                            if (dstD < tmpD4)
                            {
                                do
                                {
                                    if (*((((valA1 & 0xfffffff8) + (srcS2 << (*(a1 + 4) & 0x1f)))
                                            >> 3) + a1 + 0xc) >> (valA1 & 7) & 1)
                                        return 1;

                                    valA1 += 1;
                                } while (valA1 < tmpD4);

                                srcS2 = a2;
                                objC3 = a3;
                            }

                            srcS2 += 1;
                            a2 = srcS2;
                        } while (srcS2 < objC3);
                    }
                }
            }
        }
    }

    return 0;
}
