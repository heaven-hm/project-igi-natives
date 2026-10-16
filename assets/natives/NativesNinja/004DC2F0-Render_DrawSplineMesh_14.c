#include "004DC2F0-Render_DrawSplineMesh_14.h"
/* 0x004dc2f0 Render_DrawSplineMesh_14 full linked: callers=2 callees=3 */
void sub_4dc2f0(int32_t* a1)

{
    int32_t* i = a1;

    while (i)
    {
        int32_t eax_1 = MagicObj_GetTypeId();
        int16_t var_8_1 = eax_1;
        eax_1 = i[7];

        if (TaskType_IsDerivedFrom(eax_1, var_8_1))
        {
            i[0x37] = 0;
            int32_t* ecx_1 = i[2];
            int32_t eax_2 = *ecx_1;
            int32_t eax_3 = -(eax_2);
            sub_4dc2f0((eax_3 - eax_3) & ecx_1);
        }

        i = *i;

        if (!i)
            break;

        if (!*i)
            break;
    }
}
