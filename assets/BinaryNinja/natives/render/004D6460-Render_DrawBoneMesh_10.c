#include "Render_DrawBoneMesh_10.h"
int32_t Render_DrawBoneMesh_10(void* a1, int32_t a2)

{
    void* objC2 = *(a1 + 8) + a2 * 0x84;
    int32_t tmpD3 = *(objC2 + 4);

    if (tmpD3 & 0x20000)
    {
        void* i = *(objC2 + 0x80);

        if (i)
        {
            do
            {
                if (!(tmpD3 & 0x10000))
                    return *(*(i + 0x20) + 0x10);

                if (*(i + 0x24) == 1)
                    return *(*(i + 0x28) + 0x10);

                i = *(i + 0x28);
            } while (i);
        }
    }

    return 0;
}
