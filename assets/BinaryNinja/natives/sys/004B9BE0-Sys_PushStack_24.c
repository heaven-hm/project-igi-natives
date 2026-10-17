// Original IGI.EXE function: Sys_PushStack_24 (VA 0x004B9BE0; static CFG gate PASS, CFG score 1.000).
#include "Sys_PushStack_24.h"
void Sys_PushStack_24(char* context)

{
    if (!context)
        return;

    Sys_PushStack_24(*(context + 0x18));
    Sys_PushStack_24(*(context + 0x1c));
    char data_3 = *context;

    if (data_3 == 6 || data_3 == 7)
        Sys_PushStack_24(*(context + 8));

    data_3 = *context;

    if (data_3 == 4 || data_3 == 5)
    {
        int32_t* data_4 = *(context + 8);

        if (data_4)
            Sys_PushStack_25(data_4);

        int32_t* data_5 = *(context + 0xc);

        if (data_5)
        {
            if (*data_5)
            {
                char* i = *data_5[2];

                if (i)
                {
                    int32_t dest_1 = 0;

                    do
                    {
                        Sys_PushStack_24(i);
                        dest_1 += 4;
                        i = *(*(*(context + 0xc) + 8) + dest_1);
                    } while (i);
                }
            }

            void* data_8 = *(*(context + 0xc) + 8);

            if (data_8)
            {
                Sys_ExecuteBytecode_2(data_8);
                *(*(context + 0xc) + 8) = 0;
            }

            Sys_ExecuteBytecode_2(*(context + 0xc));
            *(context + 0xc) = 0;
        }
    }

    Sys_ExecuteBytecode_2(context);
}
