#include "gi_platform.h"
#include "004824C0-ExplodeObject_Cleanup_4.h"
void* ExplodeObject_Cleanup_4(void* a1, int32_t* a2)

{
    int32_t* i = (*(int32_t*)(uintptr_t)(a1 + 8));

    if (*i && i)
    {
        int32_t objC1 = g_afa7e0;

        do
        {
            int32_t* tmpD1 = *i;
            void* valA4;

            if (!tmpD1)
                valA4 = nullptr;
            else
            {
                int32_t valA1 = *tmpD1;
                int32_t valA2 = -(valA1);
                valA4 = (valA2 - valA2) & tmpD1;
            }

            *((objC1 << 2) + &g_afa6e0) = valA4;
            g_afa7e0 = objC1 + 1;
            uint32_t valA6 = DynObj_LinkDynamicCube_12();
            int32_t objC3 = 0;
            objC3 = i[7];
            int32_t valA10 = *(((valA6 * 0x180 + objC3) << 2) + &g_a96ae0);

            if (valA10)
                valA10(i, a2);

            objC1 = g_afa7e0 - 1;
            g_afa7e0 = objC1;
            i = *((objC1 << 2) + &g_afa6e0);
        } while (i);
    }

    Render_SetupLighting_14(a1);
    void* result = DynObj_RegisterSymbol_9(*a2, a1);
    (*(int32_t*)(uintptr_t)(a1 + 0x234)) = 0;
    return result;
}
