#include "gi_platform.h"
#include "004AB891-Camera_ApplyWideScreen_22.h"
void* Camera_ApplyWideScreen_22(int32_t a1)

{
    int32_t objC;
    int32_t v_8 = objC;
    int32_t v_c = objC;
    void** srcS = g_5466d0;
    void* result;

    while (true)
    {
        int32_t tmpD1 = srcS[4];
        int32_t ctxB1;

        if (tmpD1 == 0xffffffff)
            ctxB1 = a1;
        else
        {
            int32_t* dstD1 = srcS[2];
            int32_t* valA6 = ((dstD1 - srcS - 0x18) >> 3 << 0xc) + tmpD1;
            int32_t* v_8_1 = valA6;

            if (dstD1 < &srcS[0x806])
            {
                while (true)
                {
                    int32_t objC2 = *dstD1;
                    ctxB1 = a1;

                    if (objC2 >= ctxB1 && dstD1[1] > ctxB1)
                    {
                        result = Camera_ApplyPostProcess_22(valA6, objC2, ctxB1);

                        if (result)
                            break;

                        valA6 = v_8_1;
                        dstD1[1] = ctxB1;
                    }

                    dstD1 = &dstD1[2];
                    valA6 = &valA6[0x400];
                    v_8_1 = valA6;

                    if (dstD1 >= &srcS[0x806])
                        goto label_4ab907;
                }

                goto label_4ab95c;
            }

            ctxB1 = a1;
    label_4ab907: ;
            int32_t valA7 = srcS[2];
            dstD1 = &srcS[6];
            int32_t* v_8_2 = srcS[4];

            if (dstD1 < valA7)
            {
                while (true)
                {
                    int32_t valA8 = *dstD1;

                    if (valA8 >= ctxB1 && dstD1[1] > ctxB1)
                    {
                        result = Camera_ApplyPostProcess_22(v_8_2, valA8, ctxB1);

                        if (result)
                            break;

                        dstD1[1] = ctxB1;
                    }

                    v_8_2 = &v_8_2[0x400];
                    dstD1 = &dstD1[2];

                    if (dstD1 >= valA7)
                        goto label_4ab94d;
                }
    label_4ab95c: ;
                g_5466d0 = srcS;
                *dstD1 -= ctxB1;
                srcS[2] = dstD1;
                break;
            }
        }
    label_4ab94d: ;
        srcS = *srcS;

        if (srcS == g_5466d0)
        {
            void** dstD2 = &g_5446b0;
            int32_t i;
            int32_t dwSize;
            int32_t* ctxB2;
            int32_t* lpAddress;

            while (true)
            {
                if (dstD2[4] == 0xffffffff || !dstD2[3])
                {
                    dstD2 = *dstD2;

                    if (dstD2 == &g_5446b0)
                    {
                        void** valA17 = Camera_UpdateTransform_22();

                        if (valA17)
                        {
                            void** objC7 = valA17[4];
                            objC7[2] = ctxB1;
                            g_5466d0 = valA17;
                            *objC7 = objC7 + ctxB1 + 8;
                            objC7[1] = 0xf0 - ctxB1;
                            valA17[6] -= ctxB1;
                            return &objC7[0x40];
                        }
                    }
                    else
                        continue;
                }
                else
                {
                    ctxB2 = dstD2[3];
                    i = 0;
                    int32_t* valA9 = ctxB2;
                    lpAddress = ((ctxB2 - dstD2 - 0x18) >> 3 << 0xc) + dstD2[4];

                    if (*ctxB2 == 0xffffffff)
                    {
                        while (i < 0x10)
                        {
                            valA9 = &valA9[2];
                            i += 1;

                            if (*valA9 != 0xffffffff)
                                break;
                        }
                    }

                    dwSize = i << 0xc;

                    if (VirtualAlloc(lpAddress, dwSize, MEM_COMMIT, PAGE_READWRITE) == lpAddress)
                        break;
                }

                return nullptr;
            }

            Camera_ApplyBandFilter_26(lpAddress, dwSize, 0);
            int32_t* objC5 = ctxB2;

            if (i > 0)
            {
                int32_t* valA12 = &lpAddress[1];
                int32_t i_2 = i;
                int32_t i_1;

                do
                {
                    valA12[0x3d] = 0xff;
                    valA12[-1] = &valA12[1];
                    *valA12 = 0xf0;
                    *objC5 = 0xf0;
                    objC5[1] = 0xf1;
                    valA12 = &valA12[0x400];
                    objC5 = &objC5[2];
                    i_1 = i_2;
                    i_2 -= 1;
                } while (i_1 != 1);
            }

            g_5466d0 = dstD2;
            bool c_1;

            while (true)
            {
                c_1 = objC5 < &dstD2[0x806];

                if (!c_1)
                    break;

                if (*objC5 == 0xffffffff)
                {
                    c_1 = objC5 < &dstD2[0x806];
                    break;
                }

                objC5 = &objC5[2];
            }

            dstD2[3] = (&dstD2[0x806] - &dstD2[0x806]) & objC5;
            lpAddress[2] = a1;
            dstD2[2] = ctxB2;
            *ctxB2 -= a1;
            lpAddress[1] -= a1;
            result = &lpAddress[0x40];
            *lpAddress = lpAddress + a1 + 8;
            break;
        }
    }

    return result;
}
