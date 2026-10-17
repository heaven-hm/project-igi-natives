// Original IGI.EXE function: Sector_Update (VA 0x004DE800; static CFG gate PASS, CFG score 1.000).
#include "Sector_Update.h"
void* Sector_Update(void* a1, int32_t a2)

{
    Render_SkinBones_15(a1);
    void* result = *(a1 + 0xe8);

    if (result)
    {
        int32_t* i = *(result + 8);

        if (*i && i)
        {
            int32_t objC1 = g_afa7e0;

            do
            {
                int32_t* tmpD1 = *i;
                void* valA3;

                if (!tmpD1)
                    valA3 = nullptr;
                else
                {
                    int32_t valA = *tmpD1;
                    int32_t valA1 = -(valA);
                    valA3 = (valA1 - valA1) & tmpD1;
                }

                *((objC1 << 2) + &g_afa6e0) = valA3;
                g_afa7e0 = objC1 + 1;
                uint32_t valA5 = DynObj_LinkDynamicCube_12();
                int32_t objC3 = 0;
                objC3 = i[7];
                result = *(((valA5 * 0x180 + objC3) << 2) + &g_a96ae0);

                if (result)
                    result = result(i, a2);

                objC1 = g_afa7e0 - 1;
                g_afa7e0 = objC1;
                i = *((objC1 << 2) + &g_afa6e0);
            } while (i);
        }
    }

    return result;
}
