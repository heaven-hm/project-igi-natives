#include "004DC190-Render_DrawBoneMesh_14.h"
/* 0x004dc190 Render_DrawBoneMesh_14 full linked: callers=3 callees=6 */
void sub_4dc190(int32_t* a1, int32_t a2, int32_t* a3)

{
    int32_t* i = a3;

    while (i)
    {
        int32_t eax_1 = sub_4dee80();
        int16_t var_14_1 = eax_1;
        eax_1 = i[7];
        char eax;
        int32_t ecx_1;
        eax = TaskType_IsDerivedFrom(eax_1, var_14_1);

        if (!eax)
        {
            int16_t eax_2 = sub_4c48c0();
            ecx_1 = i[7];

            if (TaskType_IsDerivedFrom(ecx_1, eax_2))
            {
                int32_t* edx_1 = i[0x1b];

                if (edx_1 && *(*(*(*edx_1 + 0xc) + 0xc) + 0x20) == 3)
                {
                    int32_t j = 0;
                    i[0x37] = a2 + *a1 * 0x24 + 0x18;

                    if (edx_1[0xf] > 0)
                    {
                        a3 = edx_1;

                        do
                        {
                            *(a2 + *a1 * 0x24 + 0x18) = 0;
                            *(a2 + *a1 * 0x24 + 0x20) = i;
                            *(a2 + (*a1 + 1) * 0x24) = &i[0x1c];
                            *(a2 + *a1 * 0x24 + 0x28) = &i[8];
                            *(a2 + *a1 * 0x24 + 0x2c) = i[0x36];
                            *(a2 + *a1 * 0x24 + 0x30) = j;
                            *(a2 + *a1 * 0x24 + 0x34) = edx_1[0xf];
                            *(a2 + *a1 * 0x24 + 0x1c) = *a3;
                            *(a2 + *a1 * 0x24 + 0x38) = 0;
                            j += 1;
                            *a1 += 1;
                            a3 = &a3[1];
                        } while (j < edx_1[0xf]);
                    }
                }

                void* eax_32 = i[0x3a];

                if (eax_32)
                {
                    int32_t* ecx_4 = *(eax_32 + 8);
                    int32_t eax_33 = *ecx_4;
                    int32_t eax_34 = -(eax_33);
                    sub_4dc190(a1, a2, (eax_34 - eax_34) & ecx_4);
                }
            }

            int32_t* ecx_5 = i[2];
            int32_t eax_37 = *ecx_5;
            int32_t eax_38 = -(eax_37);
            sub_4dc190(a1, a2, (eax_38 - eax_38) & ecx_5);
        }

        i = *i;

        if (!i)
            break;

        if (!*i)
            break;
    }
}
