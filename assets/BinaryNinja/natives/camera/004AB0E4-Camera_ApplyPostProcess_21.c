// Original IGI.EXE function: Camera_ApplyPostProcess_21 (VA 0x004AB0E4; static CFG gate PASS, CFG score 1.000).
#include "Camera_ApplyPostProcess_21.h"
void* Camera_ApplyPostProcess_21(int32_t* a1)

{
    int32_t* tmpD = g_c321f8;
    void* dstD = &tmpD[g_c321f4 * 5];
    void* objC1 = (a1 + 0x17) & 0xfffffff0;
    uint32_t v_10;
    uint32_t v_c;
    uint32_t srcS;

    if ((objC1 >> 4) - 1 >= 0x20)
    {
        srcS = 0;
        v_10 = 0;
        v_c = 0xffffffff >> ((((objC1 >> 4) - 1) - 0x20) & 0x1f);
    }
    else
    {
        srcS = 0xffffffff >> (((objC1 >> 4) - 1) & 0x1f);
        v_c = 0xffffffff;
        v_10 = srcS;
    }

    int32_t* valA4 = g_c321ec;
    int32_t* ctxB = valA4;
    a1 = ctxB;

    if (ctxB < dstD)
    {
        while (!((ctxB[1] & v_c) | (*ctxB & srcS)))
        {
            ctxB = &ctxB[5];
            a1 = ctxB;

            if (ctxB >= dstD)
                break;
        }
    }

    if (ctxB == dstD)
    {
        ctxB = tmpD;
        bool cond_4_1;

        while (true)
        {
            cond_4_1 = ctxB != valA4;
            a1 = ctxB;

            if (ctxB >= valA4)
                break;

            if ((ctxB[1] & v_c) | (*ctxB & srcS))
            {
                cond_4_1 = ctxB != valA4;
                break;
            }

            ctxB = &ctxB[5];
        }

        if (!cond_4_1)
        {
            bool cond_5_1;

            while (true)
            {
                cond_5_1 = ctxB != dstD;

                if (ctxB >= dstD)
                    break;

                if (ctxB[2])
                {
                    cond_5_1 = ctxB != dstD;
                    break;
                }

                ctxB = &ctxB[5];
                a1 = ctxB;
            }

            if (!cond_5_1)
            {
                ctxB = tmpD;
                bool cond_7_1;

                while (true)
                {
                    cond_7_1 = ctxB != valA4;
                    a1 = ctxB;

                    if (ctxB >= valA4)
                        break;

                    if (ctxB[2])
                    {
                        cond_7_1 = ctxB != valA4;
                        break;
                    }

                    ctxB = &ctxB[5];
                }

                if (!cond_7_1)
                {
                    ctxB = Camera_UpdateViewCone_21();
                    a1 = ctxB;

                    if (!ctxB)
                        return nullptr;
                }
            }

            *ctxB[4] = Camera_ResetMatrix_21(ctxB);

            if (*ctxB[4] == 0xffffffff)
                return nullptr;
        }
    }

    g_c321ec = ctxB;
    int32_t* valA8 = ctxB[4];
    int32_t tmpD1 = *valA8;
    int32_t v_8_1 = tmpD1;

    if (tmpD1 == 0xffffffff || !((valA8[tmpD1 + 0x31] & v_c) | (valA8[tmpD1 + 0x11] & srcS)))
    {
        v_8_1 = 0;
        void* objC15 = &valA8[0x11];
        srcS = v_10;

        if (!((valA8[0x31] & v_c) | (valA8[0x11] & v_10)))
        {
            int32_t tmpD6;

            do
            {
                v_8_1 += 1;
                tmpD6 = *(objC15 + 0x84) & v_c;
                objC15 += 4;
            } while (!(tmpD6 | (srcS & *objC15)));
        }

        tmpD1 = v_8_1;
    }

    int32_t dstD9 = 0;
    int32_t i = valA8[tmpD1 + 0x11] & srcS;

    if (!i)
    {
        i = valA8[tmpD1 + 0x31] & v_c;
        dstD9 = 0x20;
    }

    while (i >= 0)
    {
        i <<= 1;
        dstD9 += 1;
    }

    int32_t* tmpD8 = valA8[tmpD1 * 0x81 + 0x51 + dstD9 * 2 + 1];
    void* objC23 = *tmpD8 - objC1;
    int32_t srcS5 = (objC23 >> 4) - 1;

    if (srcS5 > 0x3f)
        srcS5 = 0x3f;

    if (srcS5 == dstD9)
    {
    label_4ab39b:

        if (objC23)
        {
            *tmpD8 = objC23;
            *(objC23 + tmpD8 - 4) = objC23;
        }
    }
    else
    {
        if (tmpD8[1] == tmpD8[2])
        {
            if (dstD9 >= 0x20)
            {
                uint32_t ctxB5 = ~(0x80000000 >> ((dstD9 - 0x20) & 0x1f));
                valA8[v_8_1 + 0x31] &= ctxB5;
                char f1_1 = *(valA8 + dstD9 + 4);
                *(valA8 + dstD9 + 4) -= 1;

                if (f1_1 != 1)
                    ctxB = a1;
                else
                {
                    ctxB = a1;
                    ctxB[1] &= ctxB5;
                }
            }
            else
            {
                uint32_t ctxB2 = ~(0x80000000 >> (dstD9 & 0x1f));
                valA8[v_8_1 + 0x11] &= ctxB2;
                char f2_1 = *(valA8 + dstD9 + 4);
                *(valA8 + dstD9 + 4) -= 1;

                if (f2_1 != 1)
                    ctxB = a1;
                else
                {
                    ctxB = a1;
                    *ctxB &= ctxB2;
                }
            }
        }

        *(tmpD8[2] + 4) = tmpD8[1];
        *(tmpD8[1] + 8) = tmpD8[2];

        if (objC23)
        {
            void* objC35 = &valA8[tmpD1 * 0x81 + 0x51 + srcS5 * 2];
            tmpD8[1] = valA8[tmpD1 * 0x81 + 0x51 + srcS5 * 2 + 1];
            tmpD8[2] = objC35;
            *(objC35 + 4) = tmpD8;
            *(tmpD8[1] + 8) = tmpD8;

            if (tmpD8[1] == tmpD8[2])
            {
                char objC38 = *(srcS5 + valA8 + 4);
                *(&a1 + 3) = objC38;

                if (srcS5 >= 0x20)
                {
                    *(srcS5 + valA8 + 4) = objC38 + 1;

                    if (!*(&a1 + 3))
                        ctxB[1] |= 0x80000000 >> ((srcS5 - 0x20) & 0x1f);

                    valA8[v_8_1 + 0x31] |= 0x80000000 >> ((srcS5 - 0x20) & 0x1f);
                }
                else
                {
                    *(srcS5 + valA8 + 4) = objC38 + 1;

                    if (!*(&a1 + 3))
                        *ctxB |= 0x80000000 >> (srcS5 & 0x1f);

                    valA8[v_8_1 + 0x11] |= 0x80000000 >> (srcS5 & 0x1f);
                }
            }

            goto label_4ab39b;
        }
    }

    void** tmpD9 = tmpD8 + objC23;
    *tmpD9 = objC1 + 1;
    *(tmpD9 + objC1 - 4) = objC1 + 1;
    int32_t objC46 = valA8[tmpD1 * 0x81 + 0x51];
    valA8[tmpD1 * 0x81 + 0x51] = objC46 + 1;

    if (!objC46 && ctxB == g_c321f0 && v_8_1 == g_c321e8)
        g_c321f0 = 0;

    *valA8 = v_8_1;
    return &tmpD9[1];
}
