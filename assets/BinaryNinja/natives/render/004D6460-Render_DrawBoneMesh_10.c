// Original IGI.EXE function: Render_DrawBoneMesh_10 (VA 0x004D6460; static CFG gate PASS, CFG score 1.000).
#include "Render_DrawBoneMesh_10.h"
int32_t Render_DrawBoneMesh_10(void* context, int32_t param_2)

{
    void* entity_2 = *(context + 8) + param_2 * 0x84;
    int32_t temp_3 = *(entity_2 + 4);

    if (temp_3 & 0x20000)
    {
        void* i = *(entity_2 + 0x80);

        if (i)
        {
            do
            {
                if (!(temp_3 & 0x10000))
                    return *(*(i + 0x20) + 0x10);

                if (*(i + 0x24) == 1)
                    return *(*(i + 0x28) + 0x10);

                i = *(i + 0x28);
            } while (i);
        }
    }

    return 0;
}
