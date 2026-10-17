// IGI native provenance: Sys_UnknownDataType - 0x004BC960 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004BC960-Sys_UnknownDataType.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sys_UnknownDataType.h"
int32_t Sys_UnknownDataType(void* context)

{
    int32_t flagP;
    int32_t item_4 = flagP;
    Camera_UpdateTransform_5(0x1008);
    int32_t result_1 = 0;
    int32_t i = *(context + 0x1c);
    int32_t result = *(context + 0xc);
    int32_t source_val = *(context + 0x18);
    int32_t i_1 = i;

    if (i < result)
    {
        do
        {
            char* item_1c;

            switch (*(*(context + 0x28) + (i << 2)) - 1)
            {
                case 0:
                {
                    int32_t item_18_1 = *(*(context + 0x24) + (source_val << 2));
                    item_1c = &g_53fde4;
                    Game_DataSymbolLoad(&return_addr, "%d");
                    source_val += 1;
                    break;
                }
                case 1:
                {
                    item_1c = *(*(context + 0x24) + (source_val << 2));
                    Game_DataSymbolLoad(&return_addr, "%f");
                    source_val += 1;
                    break;
                }
                case 2:
                {
                    int32_t item_18_3 = *(context + 0x24) + (source_val << 2) + 4;
                    item_1c = ""%s"";
                    Game_DataSymbolLoad(&return_addr, ""%s"");
                    source_val = source_val + *(*(context + 0x24) + (source_val << 2)) + 1;
                    break;
                }
                case 3:
                {
                    int32_t item_18_2 = *(context + 0x24) + (source_val << 2) + 4;
                    item_1c = &g_53f730;
                    Game_DataSymbolLoad(&return_addr, "%s");
                    source_val = source_val + *(*(context + 0x24) + (source_val << 2)) + 1;
                    break;
                }
                case 6:
                {
                    int32_t context_val = *(*(context + 0x24) + (source_val << 2));
                    int32_t item_18_4 = context_val;
                    item_1c = "%d words of data.";
                    Game_DataSymbolLoad(&return_addr, "%d words of data.");
                    source_val = source_val + context_val + 1;
                    i = i_1;
                    break;
                }
                default:
                {
                    item_1c = &return_addr;
                    Game_DataSymbolLoad(item_1c, "UNKNOWN DATA TYPE");
                    result_1 = 1;
                }
            }

            result = result_1;
            i += 1;
            i_1 = i;

            if (result)
                break;
        } while (i < *(context + 0xc));
    }

    return result;
}
