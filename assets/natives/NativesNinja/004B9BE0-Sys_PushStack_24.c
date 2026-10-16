#include "004B9BE0-Sys_PushStack_24.h"
/* 0x004b9be0 Sys_PushStack_24 full linked: callers=23 callees=8 */
void sub_4b9be0(char* a1)

{
    if (!a1)
        return;

    sub_4b9be0(*(a1 + 0x18));
    sub_4b9be0(*(a1 + 0x1c));
    char eax_3 = *a1;

    if (eax_3 == 6 || eax_3 == 7)
        sub_4b9be0(*(a1 + 8));

    eax_3 = *a1;

    if (eax_3 == 4 || eax_3 == 5)
    {
        int32_t* eax_4 = *(a1 + 8);

        if (eax_4)
            sub_4baca0(eax_4);

        int32_t* eax_5 = *(a1 + 0xc);

        if (eax_5)
        {
            if (*eax_5)
            {
                char* i = *eax_5[2];

                if (i)
                {
                    int32_t edi_1 = 0;

                    do
                    {
                        sub_4b9be0(i);
                        edi_1 += 4;
                        i = *(*(*(a1 + 0xc) + 8) + edi_1);
                    } while (i);
                }
            }

            void* eax_8 = *(*(a1 + 0xc) + 8);

            if (eax_8)
            {
                sub_4b0d10(eax_8);
                *(*(a1 + 0xc) + 8) = 0;
            }

            sub_4b0d10(*(a1 + 0xc));
            *(a1 + 0xc) = 0;
        }
    }

    sub_4b0d10(a1);
}
