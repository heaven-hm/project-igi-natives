#include "004D2BD0-Render_CallbackNotFound.h"
/* 0x004d2bd0 Render_CallbackNotFound full linked: callers=2 callees=1 */
void** sub_4d2bd0(int32_t a1)

{
    void** i = g_a538e4;
    int32_t* i_1 = nullptr;

    for (; i; i = *i)
    {
        if (i[1] == a1)
        {
            if (!i_1)
            {
                g_a538e4 = *i;
                i[1] = 0;
                return i;
            }

            *i_1 = *i;
            i[1] = 0;
            return i;
        }

        i_1 = i;
    }

    Error_Show("Callback not found");

    while (true)
        /* nop */
}
