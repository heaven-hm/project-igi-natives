#include "Render_DrawRigidMesh_14.h"
void Render_DrawRigidMesh_14(int32_t* a1, int32_t a2, int32_t* a3, int32_t a4)

{
    int32_t* i = a3;

    while (i)
    {
        int32_t* flagP1 = i[0x1b];
        int32_t valA1 = MagicObj_GetTypeId();
        int16_t v_14_1 = valA1;
        valA1 = i[7];

        if (TaskType_IsDerivedFrom(valA1, v_14_1))
        {
            int32_t valA = i[0x1b];

            if (valA && *(*(*(*valA + 0xc) + 0xc) + 0x20) == 3)
            {
                int32_t j = 0;
                i[0x37] = a2 + *a1 * 0x24 + 0x18;

                if (flagP1[0xf] > 0)
                {
                    a3 = flagP1;

                    do
                    {
                        *(a2 + *a1 * 0x24 + 0x18) = 0;
                        *(a2 + *a1 * 0x24 + 0x20) = i;
                        *(a2 + (*a1 + 1) * 0x24) = &i[0x1c];
                        *(a2 + *a1 * 0x24 + 0x28) = &i[8];
                        *(a2 + *a1 * 0x24 + 0x2c) = i[0x36];
                        *(a2 + *a1 * 0x24 + 0x30) = j;
                        *(a2 + *a1 * 0x24 + 0x34) = flagP1[0xf];
                        *(a2 + *a1 * 0x24 + 0x1c) = *a3;
                        *(a2 + *a1 * 0x24 + 0x38) = 0;
                        j += 1;
                        *a1 += 1;
                        a3 = &a3[1];
                    } while (j < flagP1[0xf]);
                }

                int32_t* objC3 = i[2];
                int32_t valA26 = *objC3;
                int32_t valA27 = -(valA26);
                Render_DrawRigidMesh_14(a1, a2, (valA27 - valA27) & objC3, a4);
            }
        }

        i = *i;

        if (!i)
            break;

        if (!*i)
            break;
    }
}
