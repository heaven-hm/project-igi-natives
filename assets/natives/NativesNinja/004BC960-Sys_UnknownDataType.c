#include "004BC960-Sys_UnknownDataType.h"
/* 0x004bc960 Sys_UnknownDataType full linked: callers=3 callees=7 */
int32_t sub_4bc960(void* a1)

{
    int32_t ebp;
    int32_t var_4 = ebp;
    sub_4a54a0(0x1008);
    int32_t result_1 = 0;
    int32_t i = *(a1 + 0x1c);
    int32_t result = *(a1 + 0xc);
    int32_t esi = *(a1 + 0x18);
    int32_t i_1 = i;

    if (i < result)
    {
        do
        {
            char* var_1c;

            switch (*(*(a1 + 0x28) + (i << 2)) - 1)
            {
                case 0:
                {
                    int32_t var_18_1 = *(*(a1 + 0x24) + (esi << 2));
                    var_1c = &g_53fde4;
                    Game_DataSymbolLoad(&__return_addr, "%d");
                    esi += 1;
                    break;
                }
                case 1:
                {
                    var_1c = *(*(a1 + 0x24) + (esi << 2));
                    Game_DataSymbolLoad(&__return_addr, "%f");
                    esi += 1;
                    break;
                }
                case 2:
                {
                    int32_t var_18_3 = *(a1 + 0x24) + (esi << 2) + 4;
                    var_1c = ""%s"";
                    Game_DataSymbolLoad(&__return_addr, ""%s"");
                    esi = esi + *(*(a1 + 0x24) + (esi << 2)) + 1;
                    break;
                }
                case 3:
                {
                    int32_t var_18_2 = *(a1 + 0x24) + (esi << 2) + 4;
                    var_1c = &g_53f730;
                    Game_DataSymbolLoad(&__return_addr, "%s");
                    esi = esi + *(*(a1 + 0x24) + (esi << 2)) + 1;
                    break;
                }
                case 6:
                {
                    int32_t ebx = *(*(a1 + 0x24) + (esi << 2));
                    int32_t var_18_4 = ebx;
                    var_1c = "%d words of data.";
                    Game_DataSymbolLoad(&__return_addr, "%d words of data.");
                    esi = esi + ebx + 1;
                    i = i_1;
                    break;
                }
                default:
                {
                    var_1c = &__return_addr;
                    Game_DataSymbolLoad(var_1c, "UNKNOWN DATA TYPE");
                    result_1 = 1;
                }
            }

            result = result_1;
            i += 1;
            i_1 = i;

            if (result)
                break;
        } while (i < *(a1 + 0xc));
    }

    return result;
}
