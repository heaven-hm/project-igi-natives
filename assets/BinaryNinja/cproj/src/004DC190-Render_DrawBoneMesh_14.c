#include "gi_platform.h"
#include "004DC190-Render_DrawBoneMesh_14.h"
void Render_DrawBoneMesh_14(int32_t* a1, int32_t a2, int32_t* a3)

{
    int32_t* i = a3;

    while (i)
    {
        int32_t valA1 = Render_ComputeNormals_15();
        int16_t v_14_1 = valA1;
        valA1 = i[7];
        char valA;
        int32_t objC1;
        valA = TaskType_IsDerivedFrom(valA1, v_14_1);

        if (!valA)
        {
            int16_t valA2 = DynObj_LookupHashItem_5();
            objC1 = i[7];

            if (TaskType_IsDerivedFrom(objC1, valA2))
            {
                int32_t* tmpD1 = i[0x1b];

                if (tmpD1 && *(*(*(*tmpD1 + 0xc) + 0xc) + 0x20) == 3)
                {
                    int32_t j = 0;
                    i[0x37] = a2 + *a1 * 0x24 + 0x18;

                    if (tmpD1[0xf] > 0)
                    {
                        a3 = tmpD1;

                        do
                        {
                            (*(int32_t*)(uintptr_t)(a2 + *a1 * 0x24 + 0x18)) = 0;
                            (*(int32_t*)(uintptr_t)(a2 + *a1 * 0x24 + 0x20)) = i;
                            (*(int32_t*)(uintptr_t)(a2 + (*a1 + 1) * 0x24)) = &i[0x1c];
                            (*(int32_t*)(uintptr_t)(a2 + *a1 * 0x24 + 0x28)) = &i[8];
                            (*(int32_t*)(uintptr_t)(a2 + *a1 * 0x24 + 0x2c)) = i[0x36];
                            (*(int32_t*)(uintptr_t)(a2 + *a1 * 0x24 + 0x30)) = j;
                            (*(int32_t*)(uintptr_t)(a2 + *a1 * 0x24 + 0x34)) = tmpD1[0xf];
                            (*(int32_t*)(uintptr_t)(a2 + *a1 * 0x24 + 0x1c)) = *a3;
                            (*(int32_t*)(uintptr_t)(a2 + *a1 * 0x24 + 0x38)) = 0;
                            j += 1;
                            *a1 += 1;
                            a3 = &a3[1];
                        } while (j < tmpD1[0xf]);
                    }
                }

                void* valA32 = i[0x3a];

                if (valA32)
                {
                    int32_t* objC4 = *(valA32 + 8);
                    int32_t valA33 = *objC4;
                    int32_t valA34 = -(valA33);
                    Render_DrawBoneMesh_14(a1, a2, (valA34 - valA34) & objC4);
                }
            }

            int32_t* objC5 = i[2];
            int32_t valA37 = *objC5;
            int32_t valA38 = -(valA37);
            Render_DrawBoneMesh_14(a1, a2, (valA38 - valA38) & objC5);
        }

        i = *i;

        if (!i)
            break;

        if (!*i)
            break;
    }
}
