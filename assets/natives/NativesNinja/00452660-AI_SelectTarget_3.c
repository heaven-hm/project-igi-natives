#include "00452660-AI_SelectTarget_3.h"
/* 0x00452660 AI_SelectTarget_3 full linked: callers=5 callees=5 */
void* sub_452660(int32_t a1)

{
    void* esi = *(a1 + 0x14);
    int16_t eax = sub_45d5a0();
    char eax_1;

    if (*(esi + 0x1c) != eax)
    {
        int16_t eax_2 = sub_45a7e0();

        if (*(esi + 0x1c) != eax_2)
        {
            int16_t eax_3 = sub_455980();

            if (*(esi + 0x1c) != eax_3)
            {
                int16_t eax_4 = sub_457800();

                if (*(esi + 0x1c) != eax_4)
                    eax_1 = a1;
                else
                    eax_1 = *(esi + 0xd00);
            }
            else
                eax_1 = *(esi + 0xd00);
        }
        else
            eax_1 = *(esi + 0xd00);
    }
    else
        eax_1 = *(esi + 0xd00);

    int32_t ecx;
    int32_t var_c = ecx;
    return sub_48ef70(a1, 0, eax_1);
}
