#include "gi_platform.h"
#include "004DEA80-Sector_Cleanup_6.h"
int32_t Sector_Cleanup_6(void* a1, int32_t a2)

{
    Render_SkinBones_15(a1);
    void* valA = (*(int32_t*)(uintptr_t)(a1 + 0x148));
    int32_t result;

    if (!valA)
        result = g_afa7e0;
    else
    {
        int32_t* i_2 = (*(int32_t*)(uintptr_t)(valA + 8));

        if (!*i_2)
            result = g_afa7e0;
        else
        {
            int32_t* i = i_2;

            if (!i)
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
                    int32_t objC5 = 0;
                    objC5 = i[7];
                    int32_t valA7 = *(((valA3 * 0x180 + objC5) << 2) + &g_a96ae0);

                    if (valA7)
                        valA7(i, a2);

                    result = g_afa7e0 - 1;
                    g_afa7e0 = result;
                    i = *((result << 2) + &g_afa6e0);
                } while (i);
            }
        }
    }

    void* objC6 = (*(int32_t*)(uintptr_t)(a1 + 0xe8));

    if (objC6)
    {
        int32_t* i_1 = *(objC6 + 8);

        if (*i_1 && i_1)
        {
            do
            {
                int32_t* tmpD2 = *i_1;
                void* objC10;

                if (!tmpD2)
                    objC10 = nullptr;
                else
                {
                    int32_t objC7 = *tmpD2;
                    int32_t objC8 = -(objC7);
                    objC10 = (objC8 - objC8) & tmpD2;
                }

                *((result << 2) + &g_afa6e0) = objC10;
                g_afa7e0 = result + 1;
                uint32_t valA11 = DynObj_LinkDynamicCube_12();
                int32_t valA12 = 0;
                valA12 = i_1[7];
                int32_t valA13 = *(((valA11 * 0x180 + valA12) << 2) + &g_a96ae0);

                if (valA13)
                    valA13(i_1, a2);

                result = g_afa7e0 - 1;
                g_afa7e0 = result;
                i_1 = *((result << 2) + &g_afa6e0);
            } while (i_1);
        }
    }

    return result;
}
