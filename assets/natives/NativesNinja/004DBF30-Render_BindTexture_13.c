#include "004DBF30-Render_BindTexture_13.h"
/* 0x004dbf30 Render_BindTexture_13 full linked: callers=2 callees=3 */
void sub_4dbf30(int32_t* a1, void** a2)

{
    void** i = a2;

    while (i)
    {
        int32_t eax_1 = MagicObj_GetTypeId();
        int16_t var_c_1 = eax_1;
        eax_1 = i[7];

        if (TaskType_IsDerivedFrom(eax_1, var_c_1))
        {
            int32_t* eax_2 = i[0x1b];

            if (eax_2 && *(*(*(*eax_2 + 0xc) + 0xc) + 0x20) == 3)
                *a1 += eax_2[0xf];

            int32_t* ecx_3 = i[2];
            int32_t eax_3 = *ecx_3;
            int32_t eax_4 = -(eax_3);
            sub_4dbf30(a1, (eax_4 - eax_4) & ecx_3);
        }

        i = *i;

        if (!i)
            break;

        if (!*i)
            break;
    }
}
