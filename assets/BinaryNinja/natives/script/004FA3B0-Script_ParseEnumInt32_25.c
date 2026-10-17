// Original IGI.EXE function: Script_ParseEnumInt32_25 (VA 0x004FA3B0; static CFG gate PASS, CFG score 1.000).
#include "Script_ParseEnumInt32_25.h"
uint32_t __fastcall Script_ParseEnumInt32_25(uint32_t a1)

{
    uint32_t v_4 = a1;
    uint32_t result_2;
    uint32_t result_1 = result_2;
    uint32_t result = result_1;
    int32_t i_1 = result_1 - 1;

    if (result)
    {
        void* arg_4;
        void* dstD1 = arg_4;
        int32_t i;

        do
        {
            result = Sys_DispatchOpcode_4(*(dstD1 + 4));

            if (result)
                break;

            Sys_ResolveSymbol_4(*(dstD1 + 4));
            Resource_Unpack(*(dstD1 + 4), &result_2, 1);
            result = result_2;
            uint32_t srcS1;

            switch (result)
            {
                case 0:
                case 1:
                {
                    Sys_ResolveSymbol_4(*(dstD1 + 4));
                    result = Sys_ExecuteBytecode_4(*(dstD1 + 4), 1, 1);
                    break;
                }
                case 2:
                case 3:
                {
                    Sys_ResolveSymbol_4(*(dstD1 + 4));
                    result = Sys_ExecuteBytecode_4(*(dstD1 + 4), 2, 1);
                    break;
                }
                case 4:
                case 5:
                case 6:
                {
                    Sys_ResolveSymbol_4(*(dstD1 + 4));
                    result = Sys_ExecuteBytecode_4(*(dstD1 + 4), 4, 1);
                    break;
                }
                case 7:
                {
                    Sys_ResolveSymbol_4(*(dstD1 + 4));
                    result = Sys_ExecuteBytecode_4(*(dstD1 + 4), 8, 1);
                    break;
                }
                case 8:
                {
                    Sys_ResolveSymbol_4(*(dstD1 + 4));
                    result = Sys_ExecuteBytecode_4(*(dstD1 + 4), 0x18, 1);
                    break;
                }
                case 9:
                {
                    Sys_ResolveSymbol_4(*(dstD1 + 4));
                    result = Resource_Unpack(*(dstD1 + 4), &arg_4, 1);
                    srcS1 = arg_4;
                label_4fa47b:

                    if (srcS1)
                    {
                        Sys_ResolveSymbol_4(*(dstD1 + 4));
                        result = Sys_ExecuteBytecode_4(*(dstD1 + 4), srcS1, 1);
                    }
                    break;
                }
                case 0xa:
                {
                    Sys_ResolveSymbol_4(*(dstD1 + 4));
                    result = Resource_Unpack(*(dstD1 + 4), &v_4, 4);
                    srcS1 = v_4;
                    goto label_4fa47b;
                }
            }

            i = i_1;
            i_1 -= 1;
        } while (i);
    }

    return result;
}
