// Original IGI.EXE function: TypeWriterBox_Update (VA 0x0041A9F0; static CFG gate PASS, CFG score 1.000).
#include "TypeWriterBox_Update.h"
void TypeWriterBox_Update(void* a1)

{
    int32_t* i = *(a1 + 8);

    if (*i && i)
    {
        int32_t objC1 = g_afa7e0;

        do
        {
            int32_t* tmpD1 = *i;
            void* valA4;

            if (!tmpD1)
                valA4 = nullptr;
            else
            {
                int32_t valA1 = *tmpD1;
                int32_t valA2 = -(valA1);
                valA4 = (valA2 - valA2) & tmpD1;
            }

            *((objC1 << 2) + &g_afa6e0) = valA4;
            g_afa7e0 = objC1 + 1;
            int32_t valA5 = Menu_HandleInput_13();
            int32_t objC3 = 0;
            objC3 = i[7];
            int32_t valA = *(((valA5 * 0x180 + objC3) << 2) + &g_a96ae0);

            if (valA)
                valA(i);

            objC1 = g_afa7e0 - 1;
            g_afa7e0 = objC1;
            i = *((objC1 << 2) + &g_afa6e0);
        } while (i);
    }

    *(a1 + 0x68) = 0;
    *(a1 + 0x60) = 0;
    *(a1 + 0x64) = 0;
    *(a1 + 0x70) = 0;
    *(a1 + 0x74) = 0;
    *(a1 + 0x6c) = 0x10;
}
