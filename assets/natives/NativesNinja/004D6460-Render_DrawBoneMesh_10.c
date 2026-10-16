#include "004D6460-Render_DrawBoneMesh_10.h"
/* 0x004d6460 Render_DrawBoneMesh_10 full linked: callers=5 callees=0 */
int32_t sub_4d6460(void* a1, int32_t a2)

{
    void* ecx_2 = *(a1 + 8) + a2 * 0x84;
    int32_t edx_3 = *(ecx_2 + 4);

    if (edx_3 & 0x20000)
    {
        void* i = *(ecx_2 + 0x80);

        if (i)
        {
            do
            {
                if (!(edx_3 & 0x10000))
                    return *(*(i + 0x20) + 0x10);

                if (*(i + 0x24) == 1)
                    return *(*(i + 0x28) + 0x10);

                i = *(i + 0x28);
            } while (i);
        }
    }

    return 0;
}
