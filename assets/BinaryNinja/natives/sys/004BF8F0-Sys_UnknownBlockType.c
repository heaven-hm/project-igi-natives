#include "Sys_UnknownBlockType.h"
void Sys_UnknownBlockType(void* a1)

{
    if (!a1)
        return;

    switch (*(a1 + 8) - 1)
    {
        case 0:
        {
            int32_t* i_2 = *(a1 + 0xc);
            int32_t* i = *i_2;

            if (i)
            {
                do
                {
                    Camera_ApplyHandiCam_33(i_2);
                    Sys_UnknownBlockType(i_2);
                    i_2 = i;
                    i = *i;
                } while (i);

                Sys_ExecuteBytecode_2(a1);
                return;
            }

            Sys_ExecuteBytecode_2(a1);
            break;
        }
        case 1:
        {
            Sys_PushStack_24(*(a1 + 0xc));
            Sys_UnknownBlockType(*(a1 + 0x10));
            int32_t* i_3 = *(a1 + 0x14);

            for (int32_t* i_1 = *i_3; i_1; i_1 = *i_1)
            {
                Sys_PushStack_24(i_3[3]);
                Sys_UnknownBlockType(i_3[4]);
                Camera_ApplyHandiCam_33(i_3);
                Sys_ExecuteBytecode_2(i_3);
                i_3 = i_1;
            }

            void* valA8 = *(a1 + 0x20);

            if (valA8)
                Sys_UnknownBlockType(valA8);

            Sys_ExecuteBytecode_2(a1);
            break;
        }
        case 3:
        {
            Sys_PushStack_24(*(a1 + 0xc));
            Sys_UnknownBlockType(*(a1 + 0x10));
            Sys_ExecuteBytecode_2(a1);
            break;
        }
        case 4:
        {
            Sys_PushStack_24(*(a1 + 0xc));
            Sys_UnknownBlockType(*(a1 + 0x10));
            Sys_ExecuteBytecode_2(a1);
            break;
        }
        case 5:
        {
            char* valA12 = *(a1 + 0xc);

            if (valA12)
                Sys_PushStack_24(valA12);

            char* valA13 = *(a1 + 0x10);

            if (valA13)
                Sys_PushStack_24(valA13);

            Sys_UnknownBlockType(*(a1 + 0x18));
            char* valA14 = *(a1 + 0x14);

            if (valA14)
            {
                Sys_PushStack_24(valA14);
                Sys_ExecuteBytecode_2(a1);
                return;
            }

            Sys_ExecuteBytecode_2(a1);
            break;
        }
        case 6:
        {
            char* valA3 = *(a1 + 0xc);

            if (valA3)
            {
                Sys_PushStack_24(valA3);
                Sys_ExecuteBytecode_2(a1);
                return;
            }

            Sys_ExecuteBytecode_2(a1);
            break;
        }
        default:
        {
            Error_Show("Unknown block type.");

            while (true)
                /* nop */
        }
    }
}
