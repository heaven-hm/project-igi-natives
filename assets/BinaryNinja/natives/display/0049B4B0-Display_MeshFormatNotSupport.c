#include "Display_MeshFormatNotSupport.h"
void* Display_MeshFormatNotSupport(void* a1)

{
    int32_t* ctxB = a1 * 0xfa8 + &g_7205c0;
    int32_t tmpD1 = *((a1 << 2) + &g_543cb8);
    int32_t* v_18 = ctxB;
    int32_t objC4;

    if (!g_bcad74)
        objC4 = *((a1 << 2) + &g_543cc4);
    else
        objC4 = *((a1 << 2) + &g_543cd0);

    int32_t valA1 = g_72350c;
    g_72350c = valA1 + 1;
    int32_t* valA3 = ctxB[0x3e8];
    int32_t* valA4 = g_5ca110;
    void* srcS1 = valA1 * 0x24 + &g_7ac0a0;
    int32_t v_10 = 0x10;
    a1 = srcS1;
    (*(*valA4 + 0x14))(valA4, &v_10, srcS1, 0);
    int32_t flagP = 0;
    void* i_1 = nullptr;
    *(srcS1 + 4) = v_10;
    *(srcS1 + 8) = objC4;
    *(srcS1 + 0xc) = tmpD1;
    *(srcS1 + 0x1c) = 0;
    *(srcS1 + 0x10) = valA3;
    void* i = srcS1 + 0x1c;
    *(srcS1 + 0x18) = i;
    *(srcS1 + 0x20) = srcS1 + 0x18;

    if (ctxB[0x3e9] > 0)
    {
        int32_t* v_24_1 = ctxB;

        do
        {
            void* valA7 = *v_24_1;
            int32_t objC9 = *(valA7 + 0x20);
            int32_t valA16;

            if (!objC9)
            {
                void* ctxB2 = *(valA7 + 0x24);
                int16_t tmpD7 = *(ctxB2 + 0xc);
                int32_t valA17 = *(ctxB2 + 0x10);
                *(ctxB2 + 0x24) = flagP;
                *(ctxB2 + 0x26) = tmpD7;
                *(ctxB2 + 0x28) = srcS1;
                *(ctxB2 + 0x20) = 1;
                *(ctxB2 + 0x2c) = valA17;
                int32_t v_1c = 0;
                int32_t* valA18 = **(ctxB2 + 0x28);
                (*(*valA18 + 0xc))(valA18, 0x20, &v_1c, 0);
                int32_t objC24 = *(ctxB2 + 0xc) << 5;
                int32_t srcS5;
                int32_t dstD6;
                dstD6 = memcpy((flagP << 5) + v_1c, *(ctxB2 + 0x10), objC24 & 0xfffffffc);
                memcpy(dstD6, srcS5, objC24 & 3);
                int32_t* valA20 = **(ctxB2 + 0x28);
                (*(*valA20 + 0x10))(valA20);
                *(a1 + 0x14) = 0x20;
                Camera_SetFieldOfView_33(a1 + 0x18, ctxB2 + 0x18);
                valA16 = *(ctxB2 + 0xc);
            label_49b6a7:
                srcS1 = a1;
                ctxB = v_18;
                flagP += valA16;
            }
            else if (objC9 != 1)
            {
                if (objC9 != 3)
                {
                    Error_Show("Mesh format not supported");

                    while (true)
                        /* nop */
                }
                else
                {
                    void* ctxB1 = *(valA7 + 0x24);
                    int16_t objC13 = *(ctxB1 + 0x10);
                    int32_t tmpD4 = *(ctxB1 + 0x14);
                    *(ctxB1 + 0x2c) = flagP;
                    *(ctxB1 + 0x2e) = objC13;
                    *(ctxB1 + 0x30) = srcS1;
                    *(ctxB1 + 0x28) = 1;
                    *(ctxB1 + 0x34) = tmpD4;
                    int32_t v_20 = 0;
                    int32_t* valA9 = **(ctxB1 + 0x30);
                    (*(*valA9 + 0xc))(valA9, 0x20, &v_20, 0);
                    int32_t objC16 = *(ctxB1 + 0x10) * 0x28;
                    int32_t srcS3;
                    int32_t dstD2;
                    dstD2 =
                        memcpy(v_20 + flagP * 0x28, *(ctxB1 + 0x14), objC16 & 0xfffffffc);
                    memcpy(dstD2, srcS3, objC16 & 3);
                    int32_t* valA13 = **(ctxB1 + 0x30);
                    (*(*valA13 + 0x10))(valA13);
                    *(a1 + 0x14) = 0x28;
                    Camera_SetFieldOfView_33(a1 + 0x18, ctxB1 + 0x20);
                    valA16 = *(ctxB1 + 0x10);
                }

                goto label_49b6a7;
            }
            i = i_1 + 1;
            i_1 = i;
            v_24_1 = &v_24_1[1];
        } while (i < ctxB[0x3e9]);
    }

    ctxB[0x3e9] = 0;
    ctxB[0x3e8] = 0;
    return i;
}
