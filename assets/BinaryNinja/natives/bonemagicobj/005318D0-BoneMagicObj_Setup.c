#include "BoneMagicObj_Setup.h"
int32_t BoneMagicObj_Setup(int32_t* a1, int32_t* a2)

{
    int32_t* valA1 = DynObj_Missing(*a2);

    if (valA1)
    {
        int16_t* objC1 = a2[0x23];
        a1[0x47] = objC1;
        int32_t v_20 = a2[1];
        Render_DrawBoneMesh_12(a1, *objC1, valA1);
        DynObj_LinkDynamicCube_8(a2[1], a1, &a2[2], a1[0x28], 2);
        Render_SetupLighting_9(&a1[0x1a], 0, *(a1[0x47] + 4), 1);
        memcpy(&a1[0x36], &a2[8], 0x18);
        memcpy(&a1[0x3c], &a2[0x18], 0x28);
        memcpy(&a1[0x1e], &a2[0xe], 0x28);
        Render_DrawBoneMesh_7(&a1[0x1e], &a1[0x1a]);
        a1[0x46] = a2[0x22];
        a1[0x48] = 0;
        a1[0x49] = 0;
        a1[0x4a] = 0;
        return 0;
    }

    int32_t __saved_ebx_1 = *a2;
    Error_Show("VirModel "%s" not available");

    while (true)
        /* nop */
}
