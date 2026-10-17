// Original IGI.EXE function: Sector_Cleanup_8 (VA 0x004DED30; static CFG gate PASS, CFG score 1.000).
#include "Sector_Cleanup_8.h"
int32_t Sector_Cleanup_8(void* a1, int32_t* a2)

{
    Render_SetupLighting_14(a1);
    DynObj_RegisterSymbol_9(*a2, a1);
    int32_t* i = *(a1 + 8);
    int32_t result;

    if (!*i || !i)
        result = g_afa7e0;
    else
    {
        result = g_afa7e0;

        do
        {
            int32_t* tmpD1 = *i;
            void* objC4;

            if (!tmpD1)
                objC4 = nullptr;
            else
            {
                int32_t objC1 = *tmpD1;
                int32_t objC2 = -(objC1);
                objC4 = (objC2 - objC2) & tmpD1;
            }

            *((result << 2) + &g_afa6e0) = objC4;
            g_afa7e0 = result + 1;
            uint32_t valA3 = DynObj_LinkDynamicCube_12();
            int32_t tmpD2 = 0;
            tmpD2 = i[7];
            int32_t valA4 = *(((valA3 * 0x180 + tmpD2) << 2) + &g_a96ae0);

            if (valA4)
                valA4(i, a2);

            result = g_afa7e0 - 1;
            g_afa7e0 = result;
            i = *((result << 2) + &g_afa6e0);
        } while (i);
    }

    void* objC8 = *(a1 + 0xe8);

    if (objC8)
    {
        int32_t* i_1 = *(objC8 + 8);

        if (*i_1 && i_1)
        {
            do
            {
                int32_t* tmpD3 = *i_1;
                void* objC12;

                if (!tmpD3)
                    objC12 = nullptr;
                else
                {
                    int32_t objC9 = *tmpD3;
                    int32_t objC10 = -(objC9);
                    objC12 = (objC10 - objC10) & tmpD3;
                }

                *((result << 2) + &g_afa6e0) = objC12;
                g_afa7e0 = result + 1;
                uint32_t valA8 = DynObj_LinkDynamicCube_12();
                int32_t objC13 = 0;
                objC13 = i_1[7];
                int32_t valA12 = *(((valA8 * 0x180 + objC13) << 2) + &g_a96ae0);

                if (valA12)
                    valA12(i_1, a2);

                result = g_afa7e0 - 1;
                g_afa7e0 = result;
                i_1 = *((result << 2) + &g_afa6e0);
            } while (i_1);
        }
    }

    return result;
}
