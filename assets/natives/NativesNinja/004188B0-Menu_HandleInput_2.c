#include "004188B0-Menu_HandleInput_2.h"
/* 0x004188b0 Menu_HandleInput_2 full linked: callers=1 callees=4 */
void* Menu_HandleInput_2(void* a1)

{
    void* result = sub_4f1030(*(a1 + 0x24));
    *(a1 + 0x34) = result;

    if (result)
    {
        int32_t eax_1 = Menu_HandleInput_13();
        int32_t edx_1 = 0;
        edx_1 = *(result + 0x1c);
        int32_t eax_2 = *(((eax_1 * 0x180 + edx_1) << 2) + &g_a96ae0);

        if (eax_2)
            eax_2(result);

        void* var_14_1 = a1;
        Menu_PlayMusic(*(a1 + 0x34));
        Menu_PlayMusic_2(a1, *(a1 + 0x34));
        void* eax_4 = *(a1 + 0x34);
        int32_t edx_2 = 0;
        *(a1 + 0x27cd) = 0;
        *(a1 + 0x27ce) = 0;
        *(a1 + 0x27cc) = 0;
        *(a1 + 0x27cf) = 1;
        edx_2 = *(eax_4 + 0x1c);
        result = (*((edx_2 << 2) + &g_a970e0))(eax_4);
        *(a1 + 0x27cf) = 0;
    }

    return result;
}
