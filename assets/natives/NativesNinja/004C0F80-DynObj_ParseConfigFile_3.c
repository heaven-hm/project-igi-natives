#include "004C0F80-DynObj_ParseConfigFile_3.h"
/* 0x004c0f80 DynObj_ParseConfigFile_3 full linked: callers=0 callees=10 */
void** sub_4c0f80(void** a1, int32_t* a2)

{
    void var_2c8;
    void** eax_1 = sub_4bb240(&var_2c8, a2[6]);

    if (eax_1)
    {
        void** var_4;
        eax_1 = var_4;
        int32_t edi_1 = *a2;
        int32_t ebx_1 = 0;
        int32_t var_2cc = 0;

        if (eax_1 == 7)
        {
            int32_t* eax_2 = a2[4];
            char var_2cd = 0x18;
            sub_4b1700(eax_2, &var_2cd, 1);
            sub_4b1700(a2[4], &var_2cc, 4);
            eax_1 = sub_4bb240(&var_2c8, a2[6]);

            if (eax_1)
            {
                int32_t edi_2 = edi_1 + 5;

                while (true)
                {
                    eax_1 = var_4;

                    if (eax_1 == 9)
                    {
                        void var_2c0;
                        eax_1 = sub_4bafd0(a2, &var_2c0);

                        if (!eax_1)
                            break;

                        eax_1[2] = edi_2;
                        eax_1[3] = 0;
                        goto label_4c1055;
                    }

                    if (eax_1 == 0xc)
                    {
                        void var_2bf;
                        var_2cc = sub_4c08c0(&var_2bf);
                    label_4c1055:
                        sub_4b1700(a2[4], &var_2cc, 4);
                        ebx_1 += 1;
                        edi_2 += 4;
                        eax_1 = sub_4bb240(&var_2c8, a2[6]);

                        if (!eax_1)
                            break;

                        eax_1 = var_4;

                        if (eax_1 == 6)
                        {
                            eax_1 = sub_4bb240(&var_2c8, a2[6]);

                            if (!eax_1)
                                break;

                            continue;
                        }
                        else if (eax_1 != 8)
                            break;
                    }
                    else if (eax_1 != 8)
                        break;

                    *a1 = (ebx_1 << 2) + 5;
                    int32_t* eax_8 = sub_4badc0(a2, *a2 + 1);
                    eax_8[3] = ebx_1;
                    return eax_8;
                }
            }
        }
    }

    a2[1] = 1;
    return eax_1;
}
