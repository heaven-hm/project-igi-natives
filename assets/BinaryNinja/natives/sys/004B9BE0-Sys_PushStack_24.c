#include "Sys_PushStack_24.h"
void Sys_PushStack_24(char* a1)

{
    if (!a1)
        return;

    Sys_PushStack_24(*(a1 + 0x18));
    Sys_PushStack_24(*(a1 + 0x1c));
    char valA3 = *a1;

    if (valA3 == 6 || valA3 == 7)
        Sys_PushStack_24(*(a1 + 8));

    valA3 = *a1;

    if (valA3 == 4 || valA3 == 5)
    {
        int32_t* valA4 = *(a1 + 8);

        if (valA4)
            Sys_PushStack_25(valA4);

        int32_t* valA5 = *(a1 + 0xc);

        if (valA5)
        {
            if (*valA5)
            {
                char* i = *valA5[2];

                if (i)
                {
                    int32_t dstD1 = 0;

                    do
                    {
                        Sys_PushStack_24(i);
                        dstD1 += 4;
                        i = *(*(*(a1 + 0xc) + 8) + dstD1);
                    } while (i);
                }
            }

            void* valA8 = *(*(a1 + 0xc) + 8);

            if (valA8)
            {
                Sys_ExecuteBytecode_2(valA8);
                *(*(a1 + 0xc) + 8) = 0;
            }

            Sys_ExecuteBytecode_2(*(a1 + 0xc));
            *(a1 + 0xc) = 0;
        }
    }

    Sys_ExecuteBytecode_2(a1);
}
