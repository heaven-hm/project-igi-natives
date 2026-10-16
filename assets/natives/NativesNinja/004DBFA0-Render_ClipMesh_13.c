#include "004DBFA0-Render_ClipMesh_13.h"
/* 0x004dbfa0 Render_ClipMesh_13 full linked: callers=3 callees=6 */
void sub_4dbfa0(int32_t* a1, void** a2)

{
    void** i = a2;

    while (i)
    {
        int32_t eax_1 = sub_4dee80();
        int16_t var_c_1 = eax_1;
        eax_1 = i[7];
        char eax;
        int32_t ecx_1;
        eax = TaskType_IsDerivedFrom(eax_1, var_c_1);

        if (!eax)
        {
            int16_t eax_2 = sub_4c48c0();
            ecx_1 = i[7];

            if (TaskType_IsDerivedFrom(ecx_1, eax_2))
            {
                int32_t* eax_4 = i[0x1b];

                if (eax_4 && *(*(*(*eax_4 + 0xc) + 0xc) + 0x20) == 3)
                    *a1 += eax_4[0xf];

                void* eax_6 = i[0x3a];

                if (eax_6)
                {
                    int32_t* ecx_3 = *(eax_6 + 8);
                    int32_t eax_7 = *ecx_3;
                    int32_t eax_8 = -(eax_7);
                    sub_4dbfa0(a1, (eax_8 - eax_8) & ecx_3);
                }
            }

            int32_t* ecx_4 = i[2];
            int32_t eax_11 = *ecx_4;
            int32_t eax_12 = -(eax_11);
            sub_4dbfa0(a1, (eax_12 - eax_12) & ecx_4);
        }

        i = *i;

        if (!i)
            break;

        if (!*i)
            break;
    }
}
