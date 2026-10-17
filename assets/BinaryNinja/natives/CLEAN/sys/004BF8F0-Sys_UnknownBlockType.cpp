// IGI native provenance: Sys_UnknownBlockType - 0x004BF8F0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004BF8F0-Sys_UnknownBlockType.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sys_UnknownBlockType.h"
void Sys_UnknownBlockType(void* context)

{
    if (!context)
        return;

    switch (*(context + 8) - 1)
    {
        case 0:
        {
            int32_t* i_2 = *(context + 0xc);
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

                Sys_ExecuteBytecode_2(context);
                return;
            }

            Sys_ExecuteBytecode_2(context);
            break;
        }
        case 1:
        {
            Sys_PushStack_24(*(context + 0xc));
            Sys_UnknownBlockType(*(context + 0x10));
            int32_t* i_3 = *(context + 0x14);

            for (int32_t* i_1 = *i_3; i_1; i_1 = *i_1)
            {
                Sys_PushStack_24(i_3[3]);
                Sys_UnknownBlockType(i_3[4]);
                Camera_ApplyHandiCam_33(i_3);
                Sys_ExecuteBytecode_2(i_3);
                i_3 = i_1;
            }

            void* data_8 = *(context + 0x20);

            if (data_8)
                Sys_UnknownBlockType(data_8);

            Sys_ExecuteBytecode_2(context);
            break;
        }
        case 3:
        {
            Sys_PushStack_24(*(context + 0xc));
            Sys_UnknownBlockType(*(context + 0x10));
            Sys_ExecuteBytecode_2(context);
            break;
        }
        case 4:
        {
            Sys_PushStack_24(*(context + 0xc));
            Sys_UnknownBlockType(*(context + 0x10));
            Sys_ExecuteBytecode_2(context);
            break;
        }
        case 5:
        {
            char* data_12 = *(context + 0xc);

            if (data_12)
                Sys_PushStack_24(data_12);

            char* data_13 = *(context + 0x10);

            if (data_13)
                Sys_PushStack_24(data_13);

            Sys_UnknownBlockType(*(context + 0x18));
            char* data_14 = *(context + 0x14);

            if (data_14)
            {
                Sys_PushStack_24(data_14);
                Sys_ExecuteBytecode_2(context);
                return;
            }

            Sys_ExecuteBytecode_2(context);
            break;
        }
        case 6:
        {
            char* data_3 = *(context + 0xc);

            if (data_3)
            {
                Sys_PushStack_24(data_3);
                Sys_ExecuteBytecode_2(context);
                return;
            }

            Sys_ExecuteBytecode_2(context);
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
