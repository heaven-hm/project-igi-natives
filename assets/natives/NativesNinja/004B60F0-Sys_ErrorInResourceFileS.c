#include "004B60F0-Sys_ErrorInResourceFileS.h"
/* 0x004b60f0 Sys_ErrorInResourceFileS full linked: callers=2 callees=34 */
int32_t sub_4b60f0(int32_t a1, void* a2, void* a3, int32_t* a4)

{
    int32_t* esi = sub_4b7490(a3);

    if (esi)
    {
        while (true)
        {
            if (sub_4b7580(esi) != 0x454d414e)
            {
                if (sub_4b7580(esi) == 0x46464c49)
                {
                    if (sub_4b7570(esi) != 0x47554244)
                        goto label_4b636f;

                    goto label_4b6347;
                }

            label_4b636f:
                int32_t var_20_22 = a1;
                Error_Show("Error in resource file: '%s'");

                while (true)
                    /* nop */
            }
            else
            {
                char* eax_2 = sub_4b74d0(esi, a3);
                esi = sub_4b7470(esi);

                if (!esi)
                    goto label_4b636f;

                void* ebx_1 = nullptr;
                int32_t* eax_4 = sub_4b7470(esi);

                if (eax_4 && sub_4b7580(eax_4) == 0x46464c49 && sub_4b7570(eax_4) == 0x47554244)
                {
                    for (int32_t* i = sub_4b7490(eax_4); i; i = sub_4b7470(i))
                    {
                        if (sub_4b7580(i) == 0x52545343)
                            ebx_1 = sub_4b74d0(i, eax_4);
                    }
                }

                int32_t var_c;
                void var_8;

                if (sub_4b7580(esi) != 0x59444f42)
                {
                    int32_t eax_16 = sub_4b7580(esi);
                    int32_t eax_17;

                    if (eax_16 == 0x46464c49)
                        eax_17 = sub_4b7570(esi);

                    if (eax_16 == 0x46464c49 && eax_17 == 0x53455249)
                    {
                        sub_4b7540(&var_c, &var_8, esi);
                        sub_4af8f0(a2 + 0x14, &sub_4b59f0(eax_2, ebx_1, esi, 0, 1, a4)[2]);

                        if (!sub_4b60f0(a1, a2, esi, a4))
                            return 0;

                        goto label_4b6347;
                    }

                    if (sub_4b7580(esi) == 0x52545343)
                    {
                        sub_4b7540(&var_c, &var_8, esi);
                        sub_4af8f0(a2 + 0x14,
                            &sub_4b59f0(eax_2, nullptr, sub_4b74d0(esi, a3), var_c, 1, a4)[2]);
                        goto label_4b6347;
                    }

                    if (sub_4b7580(esi) != 0x48544150)
                        goto label_4b636f;

                    sub_4b7540(&var_c, &var_8, esi);
                    sub_4af8f0(a2 + 0x14,
                        &sub_4b59f0(eax_2, ebx_1, sub_4b74d0(esi, a3), var_c, 4, a4)[2]);
                    goto label_4b6347;
                }

                sub_4b7540(&var_c, &var_8, esi);
                sub_4af8f0(a2 + 0x14,
                    &sub_4b59f0(eax_2, ebx_1, sub_4b74d0(esi, a3), var_c, 1, a4)[2]);
            label_4b6347:
                esi = sub_4b7470(esi);

                if (!esi)
                    break;
            }
        }
    }

    return 1;
}
