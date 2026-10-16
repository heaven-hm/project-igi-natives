#include "004DC340-Render_DrawLightmapMesh_14.h"
/* 0x004dc340 Render_DrawLightmapMesh_14 full linked: callers=3 callees=6 */
void sub_4dc340(void** a1)

{
    void** i = a1;

    while (i)
    {
        int32_t eax_1 = sub_4dee80();
        int16_t var_8_1 = eax_1;
        eax_1 = i[7];
        char eax;
        int32_t ecx_1;
        eax = TaskType_IsDerivedFrom(eax_1, var_8_1);

        if (!eax)
        {
            int16_t eax_2 = sub_4c48c0();
            ecx_1 = i[7];

            if (TaskType_IsDerivedFrom(ecx_1, eax_2))
            {
                void* eax_4 = i[0x3a];
                i[0x37] = 0;

                if (eax_4)
                {
                    int32_t* ecx_2 = *(eax_4 + 8);
                    int32_t eax_5 = *ecx_2;
                    int32_t eax_6 = -(eax_5);
                    sub_4dc340((eax_6 - eax_6) & ecx_2);
                }
            }

            int32_t* ecx_3 = i[2];
            int32_t eax_9 = *ecx_3;
            int32_t eax_10 = -(eax_9);
            sub_4dc340((eax_10 - eax_10) & ecx_3);
        }

        i = *i;

        if (!i)
            break;

        if (!*i)
            break;
    }
}
