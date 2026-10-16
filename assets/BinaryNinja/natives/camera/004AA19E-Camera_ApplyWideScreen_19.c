#include "Camera_ApplyWideScreen_19.h"
int32_t Camera_ApplyWideScreen_19(uint32_t a1)

{
    uint32_t CodePage = Camera_ApplyPostProcess_19(a1);

    if (CodePage != g_c32200)
    {
        if (!CodePage)
        {
        label_4aa321:
            Camera_ResetMatrix_19();
        }
        else
        {
            int32_t tmpD1 = 0;
            int32_t* valA = &g_5445b8;

            while (true)
            {
                if (*valA == CodePage)
                {
                    void* i = nullptr;
                    int32_t srcS2 = tmpD1 * 0x30;
                    *__builtin_memset(0xc32320, 0, 0x100) = 0;
                    char* ctxB1 = srcS2 + 0x5445c8;

                    do
                    {
                        char* objC2 = ctxB1;

                        if (*ctxB1)
                        {
                            do
                            {
                                char tmpD4 = objC2[1];

                                if (!tmpD4)
                                    break;

                                uint32_t valA2 = *objC2;
                                uint32_t dstD5 = tmpD4;

                                if (valA2 <= dstD5)
                                {
                                    char tmpD6 = *(i + 0x5445b0);

                                    do
                                    {
                                        *(valA2 + 0xc32321) |= tmpD6;
                                        valA2 += 1;
                                    } while (valA2 <= dstD5);
                                }

                                objC2 = &objC2[2];
                            } while (*objC2);
                        }

                        i += 1;
                        ctxB1 = &ctxB1[8];
                    } while (i < 4);

                    g_c3221c = 1;
                    g_c32200 = CodePage;
                    int32_t valA4 = Camera_UpdateViewCone_19(CodePage);
                    g_c32210 = *(srcS2 + 0x5445bc);
                    int32_t* dstD6 = &g_c32214;
                    int32_t* srcS4 = srcS2 + 0x5445c0;
                    *dstD6 = *srcS4;
                    g_c32424 = valA4;
                    dstD6[1] = srcS4[1];
                    break;
                }

                valA = &valA[0xc];
                tmpD1 += 1;

                if (valA >= 0x5446a8)
                {
                    CPINFO cPInfo;

                    if (GetCPInfo(CodePage, &cPInfo) != 1)
                    {
                        if (!g_9361fc)
                            return 0xffffffff;

                        goto label_4aa321;
                    }

                    bool cond_2_1 = cPInfo.MaxCharSize <= 1;
                    g_c32200 = CodePage;
                    *__builtin_memset(0xc32320, 0, 0x100) = 0;
                    g_c32424 = 0;

                    if (cond_2_1)
                        g_c3221c = 0;
                    else
                    {
                        if (cPInfo.LeadByte[0])
                        {
                            v_15;
                            char* objC1 = &v_15;

                            do
                            {
                                char tmpD3 = *objC1;

                                if (!tmpD3)
                                    break;

                                for (uint32_t i_1 = objC1[0xffffffff]; i_1 <= tmpD3; i_1 += 1)
                                    *(i_1 + 0xc32321) |= 4;

                                objC1 = &objC1[2];
                            } while (objC1[0xffffffff]);
                        }

                        for (void* i_2 = 1; i_2 < 0xff; i_2 += 1)
                            *(i_2 + 0xc32321) |= 8;

                        g_c32424 = Camera_UpdateViewCone_19(CodePage);
                        g_c3221c = 1;
                    }

                    g_c32210 = 0;
                    int32_t* dstD9 = &g_c32214;
                    *dstD9 = 0;
                    dstD9[1] = 0;
                    goto label_4aa326;
                }
            }
        }

    label_4aa326:
        Camera_UpdateTransform_20();
    }

    return 0;
}
