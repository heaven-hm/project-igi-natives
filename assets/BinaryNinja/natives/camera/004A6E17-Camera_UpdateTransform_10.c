// Original IGI.EXE function: Camera_UpdateTransform_10 (VA 0x004A6E17; static CFG gate PASS, CFG score 1.000).
#include "Camera_UpdateTransform_10.h"
void* Camera_UpdateTransform_10(int32_t* a1)

{
    int32_t* dstD = a1;
    int32_t srcS = dstD[4];

    if (dstD[1] < 0)
        dstD[1] = 0;

    uint32_t valA = Camera_ResetMatrix_9(srcS, 0, FILE_CURRENT);
    uint32_t v_8 = valA;

    if (valA >= 0)
    {
        int16_t tmpD1 = dstD[3];

        if (!(tmpD1 & 0x108))
            return valA - dstD[1];

        int32_t valA2 = *dstD;
        char* i_2 = dstD[2];
        void* result = valA2 - i_2;

        if (tmpD1 & 3)
        {
            if (*((&g_c32440)[srcS >> 5] + ((srcS & 0x1f) << 3) + 4) & 0x80)
            {
                for (char* i = i_2; i < valA2; i = &i[1])
                {
                    if (*i == 0xa)
                        result += 1;
                }
            }

            goto label_4a6ea9;
        }

        if (tmpD1 & 0x80)
        {
        label_4a6ea9:

            if (!v_8)
                return result;

            if (dstD[3] & 1)
            {
                int32_t tmpD5 = dstD[1];

                if (tmpD5)
                {
                    a1 = valA2 - i_2 + tmpD5;
                    int32_t srcS2 = (srcS & 0x1f) << 3;

                    if (*(srcS2 + (&g_c32440)[srcS >> 5] + 4) & 0x80)
                    {
                        bool cond_3_1;

                        if (Camera_ResetMatrix_9(srcS, 0, FILE_END) != v_8)
                        {
                            Camera_ResetMatrix_9(srcS, v_8, FILE_BEGIN);
                            int32_t* valA9 = 0x200;
                            int16_t objC3;

                            if (a1 <= 0x200)
                                objC3 = dstD[3];

                            if (a1 > 0x200 || !(objC3 & 8) || *(&objC3 + 1) & 4)
                                valA9 = dstD[6];

                            a1 = valA9;
                            cond_3_1 = !(*(srcS2 + (&g_c32440)[srcS >> 5] + 4) & 4);
                        }
                        else
                        {
                            char* i_1 = dstD[2];

                            for (void* objC2 = a1 + i_1; i_1 < objC2; i_1 = &i_1[1])
                            {
                                if (*i_1 == 0xa)
                                    a1 += 1;
                            }

                            cond_3_1 = !(*(dstD + 0xd) & 0x20);
                        }

                        if (!cond_3_1)
                            a1 += 1;
                    }

                    v_8 -= a1;
                }
                else
                    result &= tmpD5;
            }

            return result + v_8;
        }

        g_936064 = 0x16;
    }

    return 0xffffffff;
}
