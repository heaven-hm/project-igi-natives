#include "00488220-FX_SmokeEmit_10.h"
/* 0x00488220 FX_SmokeEmit_10 full linked: callers=1 callees=9 */
int32_t sub_488220(void* a1)

{
    void* edi = a1;
    void** ebp = nullptr;
    void** var_10 = nullptr;
    int32_t* esi = *(edi + 8);

    if (*esi)
    {
        int32_t* var_18_1 = esi;

        if (esi)
        {
            while (true)
            {
                int32_t* var_14 = nullptr;
                uint32_t eax_2 = sub_4f1a60();
                int32_t ecx_1 = 0;
                ecx_1 = esi[7];
                int32_t eax_6 = *(((eax_2 * 0x180 + ecx_1) << 2) + &g_a96ae0);

                if (eax_6)
                    eax_6(esi, &var_14);

                if (!var_14)
                {
                label_48836e:
                    int32_t* eax_20 = *esi;

                    if (!eax_20 || !*eax_20)
                    {
                        int32_t* esi_3 = esi[5];
                        var_18_1 = esi_3;

                        if (esi_3[5] == edi)
                            break;

                        var_10 = var_10[5];
                    }
                    else
                        var_18_1 = eax_20;
                }
                else
                {
                    void** eax_8 = sub_4883c0(ebp, esi);

                    if (!ebp)
                        *(edi + 0x7c) = eax_8;

                    eax_8[9] = var_14;
                    eax_8[0xa] = Mem_Alloc(*var_14 << 2, 4);
                    int32_t* eax_11 = eax_8[9];
                    int32_t i = 0;

                    if (*eax_11 > 0)
                    {
                        int32_t var_c_1 = 0;

                        do
                        {
                            void** esi_2 = eax_11[2] + var_c_1;
                            void* edi_2 = *esi_2 + var_18_1;
                            char eax_13 = sub_4f1b90();
                            int32_t var_8;
                            sub_4f1af0(edi_2, esi_2[1], eax_13, &var_8);
                            int32_t eax_14 = var_8;

                            if (eax_14)
                            {
                                *(eax_8[0xa] + (i << 2)) = Mem_Alloc(eax_14, 4);
                                int32_t var_4 = *(eax_8[0xa] + (i << 2));
                                char eax_17 = sub_4f1ba0();
                                sub_4f1af0(edi_2, esi_2[1], eax_17, &var_4);
                            }

                            eax_11 = eax_8[9];
                            i += 1;
                            var_c_1 += 0x10;
                        } while (i < *eax_11);

                        edi = a1;
                        esi = var_18_1;
                    }

                    int32_t* eax_19 = esi[2];

                    if (!*eax_19 || !eax_19)
                        goto label_48836e;

                    var_18_1 = eax_19;
                    var_10 = eax_8;
                }

                if (!var_18_1)
                    break;

                esi = var_18_1;
                ebp = var_10;
            }
        }
    }

    int32_t* ecx_8 = *(edi + 8);
    int32_t eax_22 = *ecx_8;
    int32_t eax_23 = -(eax_22);
    return QTask_FindType((eax_23 - eax_23) & ecx_8);
}
