// Original IGI.EXE function: PictureBox_OnEvent (VA 0x0041B750; static CFG gate PASS, CFG score 1.000).
#include "PictureBox_OnEvent.h"
int32_t PictureBox_OnEvent(void* a1)

{
    *(a1 + 0x954) = 0;
    g_57bba4 = a1;

    if (Script_FormatString_6(a1 + 0x95c))
        Script_SpawnNewTask_7(a1 + 0x95c, a1);

    g_57bba4 = 0;
    int32_t result = *(a1 + 0x958);
    int32_t ctxB = 0;
    char* dstD1 = a1 + 0x54;

    if (result > 0)
    {
        do
        {
            *(dstD1 + 0x44) = Menu_DrawWidget_3(*(a1 + 0x44), dstD1);
            result = *(a1 + 0x958);
            dstD1 = &dstD1[0x48];
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
