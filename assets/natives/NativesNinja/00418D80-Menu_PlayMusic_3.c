#include "00418D80-Menu_PlayMusic_3.h"
/* 0x00418d80 Menu_PlayMusic_3 full linked: callers=3 callees=1 */
int32_t Menu_PlayMusic_3(void* a1, char* a2)

{
    int32_t esi = 0;

    if (*(a1 + 0x2668) > 0)
    {
        char* edi_1 = a1 + 0x1de4;
        int32_t eax;

        do
        {
            int32_t eax_1;
            int32_t ecx;
            int32_t edx;
            eax_1 = sub_4a5980(eax, edx, ecx, a2, edi_1);

            if (!eax_1)
                return *(a1 + esi * 0x44 + 0x1e24);

            eax = *(a1 + 0x2668);
            esi += 1;
            edi_1 = &edi_1[0x44];
        } while (esi < eax);
    }

    return 0;
}
