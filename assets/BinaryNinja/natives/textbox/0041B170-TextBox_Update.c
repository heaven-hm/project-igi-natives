#include "TextBox_Update.h"
int32_t TextBox_Update(void* a1)

{
    *(a1 + 0x219c) = 0;
    g_57bba0 = a1;

    if (Script_FormatString_6(a1 + 0x21a4))
        Script_SpawnNewTask_7(a1 + 0x21a4, a1);

    g_57bba0 = 0;
    int32_t result = *(a1 + 0x21a0);
    int32_t ctxB = 0;
    void* dstD1 = a1 + 0x9c;

    if (result > 0)
    {
        do
        {
            *(dstD1 + 0x104) = Menu_LocalSS(*(a1 + 0x44), dstD1);
            result = *(a1 + 0x21a0);
            dstD1 += 0x108;
            ctxB += 1;
        } while (ctxB < result);
    }

    int32_t* i = *(a1 + 8);

    if (*i && i)
    {
        int32_t objC1 = g_afa7e0;

        do
        {
            int32_t* tmpD1 = *i;
            void* valA6;

            if (!tmpD1)
                valA6 = nullptr;
            else
            {
                int32_t valA3 = *tmpD1;
                int32_t valA4 = -(valA3);
                valA6 = (valA4 - valA4) & tmpD1;
            }

            *((objC1 << 2) + &g_afa6e0) = valA6;
            g_afa7e0 = objC1 + 1;
            int32_t valA7 = Menu_HandleInput_13();
            int32_t tmpD2 = 0;
            tmpD2 = i[7];
            result = *(((valA7 * 0x180 + tmpD2) << 2) + &g_a96ae0);

            if (result)
                result = result(i);

            objC1 = g_afa7e0 - 1;
            g_afa7e0 = objC1;
            i = *((objC1 << 2) + &g_afa6e0);
        } while (i);
    }

    return result;
}
