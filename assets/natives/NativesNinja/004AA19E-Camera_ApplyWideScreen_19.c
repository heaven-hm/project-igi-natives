#include "004AA19E-Camera_ApplyWideScreen_19.h"
/* 0x004aa19e Camera_ApplyWideScreen_19 full linked: callers=1 callees=8 */
int32_t sub_4aa19e(uint32_t a1)

{
    uint32_t CodePage = sub_4aa337(a1);

    if (CodePage != g_c32200)
    {
        if (!CodePage)
        {
        label_4aa321:
            sub_4aa3b4();
        }
        else
        {
            int32_t edx_1 = 0;
            int32_t* eax = &g_5445b8;

            while (true)
            {
                if (*eax == CodePage)
                {
                    void* i = nullptr;
                    int32_t esi_2 = edx_1 * 0x30;
                    *__builtin_memset(0xc32320, 0, 0x100) = 0;
                    char* ebx_1 = esi_2 + 0x5445c8;

                    do
                    {
                        char* ecx_2 = ebx_1;

                        if (*ebx_1)
                        {
                            do
                            {
                                char edx_4 = ecx_2[1];

                                if (!edx_4)
                                    break;

                                uint32_t eax_2 = *ecx_2;
                                uint32_t edi_5 = edx_4;

                                if (eax_2 <= edi_5)
                                {
                                    char edx_6 = *(i + 0x5445b0);

                                    do
                                    {
                                        *(eax_2 + 0xc32321) |= edx_6;
                                        eax_2 += 1;
                                    } while (eax_2 <= edi_5);
                                }

                                ecx_2 = &ecx_2[2];
                            } while (*ecx_2);
                        }

                        i += 1;
                        ebx_1 = &ebx_1[8];
                    } while (i < 4);

                    g_c3221c = 1;
                    g_c32200 = CodePage;
                    int32_t eax_4 = sub_4aa381(CodePage);
                    g_c32210 = *(esi_2 + 0x5445bc);
                    int32_t* edi_6 = &g_c32214;
                    int32_t* esi_4 = esi_2 + 0x5445c0;
                    *edi_6 = *esi_4;
                    g_c32424 = eax_4;
                    edi_6[1] = esi_4[1];
                    break;
                }

                eax = &eax[0xc];
                edx_1 += 1;

                if (eax >= 0x5446a8)
                {
                    CPINFO cPInfo;

                    if (GetCPInfo(CodePage, &cPInfo) != 1)
                    {
                        if (!g_9361fc)
                            return 0xffffffff;

                        goto label_4aa321;
                    }

                    bool cond:2_1 = cPInfo.MaxCharSize <= 1;
                    g_c32200 = CodePage;
                    *__builtin_memset(0xc32320, 0, 0x100) = 0;
                    g_c32424 = 0;

                    if (cond:2_1)
                        g_c3221c = 0;
                    else
                    {
                        if (cPInfo.LeadByte[0])
                        {
                            var_15;
                            char* ecx_1 = &var_15;

                            do
                            {
                                char edx_3 = *ecx_1;

                                if (!edx_3)
                                    break;

                                for (uint32_t i_1 = ecx_1[0xffffffff]; i_1 <= edx_3; i_1 += 1)
                                    *(i_1 + 0xc32321) |= 4;

                                ecx_1 = &ecx_1[2];
                            } while (ecx_1[0xffffffff]);
                        }

                        for (void* i_2 = 1; i_2 < 0xff; i_2 += 1)
                            *(i_2 + 0xc32321) |= 8;

                        g_c32424 = sub_4aa381(CodePage);
                        g_c3221c = 1;
                    }

                    g_c32210 = 0;
                    int32_t* edi_9 = &g_c32214;
                    *edi_9 = 0;
                    edi_9[1] = 0;
                    goto label_4aa326;
                }
            }
        }

    label_4aa326:
        sub_4aa3dd();
    }

    return 0;
}
