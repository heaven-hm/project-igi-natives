#include "004DC050-Render_DrawRigidMesh_14.h"
/* 0x004dc050 Render_DrawRigidMesh_14 full linked: callers=2 callees=3 */
void sub_4dc050(int32_t* a1, int32_t a2, int32_t* a3, int32_t a4)

{
    int32_t* i = a3;

    while (i)
    {
        int32_t* ebp_1 = i[0x1b];
        int32_t eax_1 = MagicObj_GetTypeId();
        int16_t var_14_1 = eax_1;
        eax_1 = i[7];

        if (TaskType_IsDerivedFrom(eax_1, var_14_1))
        {
            int32_t eax = i[0x1b];

            if (eax && *(*(*(*eax + 0xc) + 0xc) + 0x20) == 3)
            {
                int32_t j = 0;
                i[0x37] = a2 + *a1 * 0x24 + 0x18;

                if (ebp_1[0xf] > 0)
                {
                    a3 = ebp_1;

                    do
                    {
                        *(a2 + *a1 * 0x24 + 0x18) = 0;
                        *(a2 + *a1 * 0x24 + 0x20) = i;
                        *(a2 + (*a1 + 1) * 0x24) = &i[0x1c];
                        *(a2 + *a1 * 0x24 + 0x28) = &i[8];
                        *(a2 + *a1 * 0x24 + 0x2c) = i[0x36];
                        *(a2 + *a1 * 0x24 + 0x30) = j;
                        *(a2 + *a1 * 0x24 + 0x34) = ebp_1[0xf];
                        *(a2 + *a1 * 0x24 + 0x1c) = *a3;
                        *(a2 + *a1 * 0x24 + 0x38) = 0;
                        j += 1;
                        *a1 += 1;
                        a3 = &a3[1];
                    } while (j < ebp_1[0xf]);
                }

                int32_t* ecx_3 = i[2];
                int32_t eax_26 = *ecx_3;
                int32_t eax_27 = -(eax_26);
                sub_4dc050(a1, a2, (eax_27 - eax_27) & ecx_3, a4);
            }
        }

        i = *i;

        if (!i)
            break;

        if (!*i)
            break;
    }
}
