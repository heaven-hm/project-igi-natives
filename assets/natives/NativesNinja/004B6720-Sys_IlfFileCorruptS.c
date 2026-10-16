#include "004B6720-Sys_IlfFileCorruptS.h"
/* 0x004b6720 Sys_IlfFileCorruptS full linked: callers=67 callees=42 */
int32_t* sub_4b6720(int32_t* a1, int32_t* a2)

{
    int32_t* ebp = nullptr;
    int32_t* var_28 = a2;
    int32_t* ebx = nullptr;
    int32_t eax;
    void* ecx;
    int32_t edx;
    int32_t* eax_1 = Resource_Load(eax, edx, ecx, nullptr);

    if (eax_1)
    {
        if (sub_4b7580(eax_1) == 0x46464c49 && sub_4b7570(eax_1) == 0x544e4f46)
        {
            int32_t* eax_4 = sub_4b7490(eax_1);

            if (eax_4)
            {
                int32_t* eax_5 = sub_4b7590(eax_4, 0x48544e46);
                int32_t* eax_6 = sub_4b7590(eax_4, 0x4e415254);
                int32_t* eax_7 = sub_4b7590(eax_4, 0x464d4e41);

                if (eax_5 && eax_6 && eax_7)
                {
                    int32_t* eax_8 = sub_4b74d0(eax_5, eax_1);
                    char* eax_9 = sub_4b74d0(eax_6, eax_1);
                    void* eax_10 = sub_4b74d0(eax_7, eax_1);
                    void var_8;
                    sub_4b7540(&var_8, nullptr, eax_6);
                    void var_4;
                    sub_4b7540(&var_4, nullptr, eax_7);

                    if (eax_8)
                    {
                        char* ebx_2 = eax_9;

                        if (ebx_2 && eax_10)
                        {
                            int32_t eax_11 = sub_4b1ff0(eax_1);
                            int32_t eax_12 = *eax_8;
                            int32_t eax_13 = -(eax_12);
                            sub_4b65e0(a1, 0, 0, 0, eax_8[4], eax_8[5], eax_8[3],
                                ((eax_13 - eax_13) & 0xffff0000) + 0x10000, 0, eax_8[1], eax_11);
                            int32_t eax_18 = a1[4];

                            if (eax_18 > 0)
                            {
                                sub_4b2070(eax_1, a1[1], eax_18, 0);
                                int32_t* eax_19 = sub_4b7630(0x100, 1, a1);
                                a1[3] = eax_19;

                                for (int32_t i = 0; i < 0x100; )
                                {
                                    eax_19 = *ebx_2;
                                    eax_19 = sub_4b76f0(a1[3], i, 0, eax_19);
                                    i += 1;
                                    ebx_2 = &ebx_2[2];
                                }

                                int32_t ebx_3 = 0;

                                if (a1[5] > 0)
                                {
                                    int32_t* esi_1 = eax_10 + 0xc;
                                    int32_t ecx_8;

                                    do
                                    {
                                        sub_4b6540(a1, ebx_3, esi_1[2], *(esi_1 + 0xa), esi_1[3],
                                            *(esi_1 + 0x16), esi_1[6], *(esi_1 + 0xe), esi_1[-3],
                                            esi_1[-2], esi_1[-1], *esi_1, esi_1[1]);
                                        ecx_8 = 0;
                                        ecx_8 = a1[5];
                                        ebx_3 += 1;
                                        esi_1 = &esi_1[0xa];
                                    } while (ebx_3 < ecx_8);
                                }

                                return a1;
                            }

                            int32_t* var_24_7 = a2;
                            Error_Show("ILF file corrupt: %s");

                            while (true)
                                /* nop */
                        }
                    }

                    int32_t* var_24_10 = a2;
                    Error_Show("ILF file corrupt: %s");

                    while (true)
                        /* nop */
                }

                int32_t* var_24_11 = a2;
                Error_Show("ILF file corrupt: %s");

                while (true)
                    /* nop */
            }
            else
            {
                int32_t* var_24_4 = a2;
                Error_Show("ILF file corrupt: %s");

                while (true)
                    /* nop */
            }
        }

        char ecx_9 = *eax_1;

        if (ecx_9 != 0x4c)
        {
        label_4b6cd0:
            int32_t* var_24_19 = a2;
            Error_Show("Invalid sprite file: %s");

            while (true)
                /* nop */
        }
        else if (*(eax_1 + 1) != 0x4f || *(eax_1 + 2) != 0x4f || *(eax_1 + 3) != 0x50
            || eax_1[1] != 1)
        {
            if (ecx_9 != 0x4c)
                goto label_4b6cd0;

            if (*(eax_1 + 1) != 0x4f || *(eax_1 + 2) != 0x4f || *(eax_1 + 3) != 0x50
                || eax_1[1] != 7)
            {
                if (ecx_9 != 0x4c)
                    goto label_4b6cd0;

                if (*(eax_1 + 1) != 0x4f || *(eax_1 + 2) != 0x4f || *(eax_1 + 3) != 0x50
                    || eax_1[1] != 9)
                {
                    if (ecx_9 != 0x4c)
                        goto label_4b6cd0;

                    if (*(eax_1 + 1) == 0x4f && *(eax_1 + 2) == 0x4f && *(eax_1 + 3) == 0x50
                        && eax_1[1] == 5)
                    {
                        int32_t* var_24_17 = a2;
                        Error_Show("The font '%s' must be packed. Ask Stein.");

                        while (true)
                            /* nop */
                    }

                    if (ecx_9 == 0x4c && *(eax_1 + 1) == 0x4f && *(eax_1 + 2) == 0x4f
                        && *(eax_1 + 3) == 0x50 && eax_1[1] == 0xa)
                    {
                        int32_t* var_24_18 = a2;
                        Error_Show("The font '%s' must be packed. Ask Stein.");

                        while (true)
                            /* nop */
                    }

                    goto label_4b6cd0;
                }

                int32_t ebp_6 = eax_1[6];
                int32_t edi_8;

                if (!ebp_6)
                    edi_8 = eax_1[0xc];
                else
                {
                    int32_t* eax_47 = Mem_Alloc(0xc, 4);
                    edi_8 = *(eax_1 + ebp_6 + 0xc);
                    ebx = eax_47;
                    sub_4b7cf0(ebx, eax_1 + ebp_6 + 0x10, edi_8);
                }

                int32_t eax_48 = eax_1[8];
                ebp = a1;
                int32_t eax_50 = -((eax_48 - 1));
                sub_4b65e0(ebp, edi_8, 0, 0, eax_1[0xa], eax_1[0xb], 0,
                    ((eax_50 - eax_50) & 0xffff0000) + 0x10000, ebx, eax_48, eax_48);
                int32_t i_1 = 0;

                if (eax_1[8] > 0)
                {
                    int32_t* edi_9 = &eax_1[0x14];

                    do
                    {
                        int32_t ecx_21 = 0;
                        ecx_21 = edi_9[-4];
                        int32_t edx_21 = 0;
                        edx_21 = *(edi_9 - 0x12);
                        int32_t eax_57 = 0;
                        eax_57 = edi_9[-5];
                        sub_4b64f0(ebp, i_1, edi_9[-7] + eax_1, eax_57, edx_21, ecx_21, edi_9[-6],
                            *(eax_1 + 0x12), *edi_9);
                        sub_4b6540(ebp, i_1, i_1, *(edi_9 - 0x12), edi_9[-4], *(edi_9 - 6),
                            edi_9[-1], *(edi_9 - 0xe), *edi_9, 0f, 0f, 1f, 1f);
                        i_1 += 1;
                        edi_9 = &edi_9[8];
                    } while (i_1 < eax_1[8]);
                }

                int32_t eax_61 = eax_1[7];

                if (!eax_61)
                    Resource_Unload(a2);
                else
                {
                    ebp[3] = sub_4b75c0(eax_1 + eax_61, ebp);
                    Resource_Unload(a2);
                }
            }
            else
            {
                int32_t ebp_5 = eax_1[6];
                int32_t var_10_2;
                int32_t edi_6;

                if (!ebp_5)
                {
                    int32_t edx_14 = eax_1[0xc];
                    var_10_2 = edx_14;
                    edi_6 = edx_14;
                }
                else
                {
                    int32_t* eax_31 = Mem_Alloc(0xc, 4);
                    edi_6 = *(eax_1 + ebp_5 + 0xc);
                    ebx = eax_31;
                    var_10_2 = edi_6;
                    sub_4b7cf0(ebx, eax_1 + ebp_5 + 0x10, edi_6);
                }

                int32_t eax_32 = eax_1[8];
                ebp = a1;
                int32_t eax_34 = -((eax_32 - 1));
                sub_4b65e0(ebp, edi_6, 0, 0, eax_1[0xa], eax_1[0xb], 0,
                    ((eax_34 - eax_34) & 0xffff0000) + 0x10000, ebx, eax_32, eax_32);
                int32_t i_2 = 0;

                if (eax_1[8] > 0)
                {
                    int32_t* edi_7 = &eax_1[0x11];

                    do
                    {
                        sub_4b64f0(ebp, i_2, edi_7[-4] + eax_1, edi_7[-3], edi_7[-2], edi_7[-1],
                            var_10_2, *(eax_1 + 0x12), 0);
                        sub_4b6540(ebp, i_2, i_2, edi_7[-2], edi_7[-1], edi_7[4], edi_7[5], *edi_7,
                            0, 0f, 0f, 1f, 1f);
                        i_2 += 1;
                        edi_7 = &edi_7[0xa];
                    } while (i_2 < eax_1[8]);
                }

                void* eax_45 = eax_1[7];

                if (!eax_45)
                    Resource_Unload(a2);
                else
                {
                    ebp[3] = sub_4b75c0(eax_45 + eax_1, ebp);
                    Resource_Unload(a2);
                }
            }
        }
        else
        {
            int32_t edi_4 = eax_1[3];
            int32_t ebp_4;

            if (!edi_4)
                ebp_4 = 2;
            else
            {
                int32_t* eax_27 = Mem_Alloc(0xc, 4);
                ebp_4 = *(edi_4 + eax_1 + 0xc);
                ebx = eax_27;
                sub_4b7cf0(ebx, edi_4 + eax_1 + 0x10, ebp_4);
            }

            sub_4b65e0(a1, ebp_4, 0, 0, eax_1[6], *(eax_1 + 0x1a), 0, 0x10000, ebx, 1, 1);
            int32_t ecx_11 = 0;
            ecx_11 = *(eax_1 + 0x1a);
            int32_t edx_12 = 0;
            edx_12 = eax_1[6];
            int32_t eax_29 = 0;
            eax_29 = *(eax_1 + 0x16);
            sub_4b64f0(a1, 0, &eax_1[7], eax_29, edx_12, ecx_11, ebp_4, 0, 0);
            sub_4b6540(a1, 0, 0, eax_1[6], *(eax_1 + 0x1a), 0, 0, 0, 0, 0f, 0f, 1f, 1f);
            ebp = a1;
            Resource_Unload(a2);
        }
    }

    return ebp;
}
