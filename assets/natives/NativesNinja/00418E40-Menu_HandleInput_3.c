#include "00418E40-Menu_HandleInput_3.h"
/* 0x00418e40 Menu_HandleInput_3 full linked: callers=23 callees=1 */
void* Menu_HandleInput_3(void* a1, char* a2)

{
    int32_t esi = 0;

    if (*(a1 + 0x2666) > 0)
    {
        char* edi_1 = a1 + 0x264;
        int32_t eax;

        do
        {
            int32_t eax_1;
            int32_t ecx;
            int32_t edx;
            eax_1 = sub_4a5980(eax, edx, ecx, a2, edi_1);

            if (!eax_1)
                return a1 + esi * 0x58 + 0x2a4;

            eax = *(a1 + 0x2666);
            esi += 1;
            edi_1 = &edi_1[0x58];
        } while (esi < eax);
    }

    return 0;
}
