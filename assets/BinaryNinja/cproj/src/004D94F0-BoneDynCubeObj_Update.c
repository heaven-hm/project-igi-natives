#include "gi_platform.h"
#include "004D94F0-BoneDynCubeObj_Update.h"
void BoneDynCubeObj_Update(int32_t* a1, int32_t* a2)

{
    if (!*a2)
        DynObj_LinkDynamicCube_8(a2[1], a1, &a1[8], a1[0x28], a2[2]);

    int32_t* i = a1[2];

    if (!*i || !i)
        return;

    int32_t objC2 = g_afa7e0;

    do
    {
        int32_t* tmpD2 = *i;
        void* valA6;

        if (!tmpD2)
            valA6 = nullptr;
        else
        {
            int32_t valA3 = *tmpD2;
            int32_t valA4 = -(valA3);
            valA6 = (valA4 - valA4) & tmpD2;
        }

        *((objC2 << 2) + &g_afa6e0) = valA6;
        g_afa7e0 = objC2 + 1;
        uint32_t valA8 = DynObj_UpdateDynTree_12();
        int32_t tmpD3 = 0;
        tmpD3 = i[7];
        int32_t valA = *(((valA8 * 0x180 + tmpD3) << 2) + &g_a96ae0);

        if (valA)
            valA(i, a2);

        objC2 = g_afa7e0 - 1;
        g_afa7e0 = objC2;
        i = *((objC2 << 2) + &g_afa6e0);
    } while (i);
}
