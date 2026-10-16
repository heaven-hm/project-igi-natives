#include "gi_platform.h"
#include "004BC960-Sys_UnknownDataType.h"
int32_t Sys_UnknownDataType(void* a1)

{
    int32_t flagP;
    int32_t v_4 = flagP;
    Camera_UpdateTransform_5(0x1008);
    int32_t result_1 = 0;
    int32_t i = (*(int32_t*)(uintptr_t)(a1 + 0x1c));
    int32_t result = (*(int32_t*)(uintptr_t)(a1 + 0xc));
    int32_t srcS = (*(int32_t*)(uintptr_t)(a1 + 0x18));
    int32_t i_1 = i;

    if (i < result)
    {
        do
        {
            char* v_1c;

            switch ((*(int32_t*)(uintptr_t)(*(a1 + 0x28) + (i << 2))) - 1)
            {
                case 0:
                {
                    int32_t v_18_1 = (*(int32_t*)(uintptr_t)(*(a1 + 0x24) + (srcS << 2)));
                    v_1c = &g_53fde4;
                    Game_DataSymbolLoad(&__return_addr, "%d");
                    srcS += 1;
                    break;
                }
                case 1:
                {
                    v_1c = (*(int32_t*)(uintptr_t)(*(a1 + 0x24) + (srcS << 2)));
                    Game_DataSymbolLoad(&__return_addr, "%f");
                    srcS += 1;
                    break;
                }
                case 2:
                {
                    int32_t v_18_3 = (*(int32_t*)(uintptr_t)(a1 + 0x24)) + (srcS << 2) + 4;
                    v_1c = ""%s"";
                    Game_DataSymbolLoad(&__return_addr, ""%s"");
                    srcS = srcS + (*(int32_t*)(uintptr_t)(*(a1 + 0x24) + (srcS << 2))) + 1;
                    break;
                }
                case 3:
                {
                    int32_t v_18_2 = (*(int32_t*)(uintptr_t)(a1 + 0x24)) + (srcS << 2) + 4;
                    v_1c = &g_53f730;
                    Game_DataSymbolLoad(&__return_addr, "%s");
                    srcS = srcS + (*(int32_t*)(uintptr_t)(*(a1 + 0x24) + (srcS << 2))) + 1;
                    break;
                }
                case 6:
                {
                    int32_t ctxB = (*(int32_t*)(uintptr_t)(*(a1 + 0x24) + (srcS << 2)));
                    int32_t v_18_4 = ctxB;
                    v_1c = "%d words of data.";
                    Game_DataSymbolLoad(&__return_addr, "%d words of data.");
                    srcS = srcS + ctxB + 1;
                    i = i_1;
                    break;
                }
                default:
                {
                    v_1c = &__return_addr;
                    Game_DataSymbolLoad(v_1c, "UNKNOWN DATA TYPE");
                    result_1 = 1;
                }
            }

            result = result_1;
            i += 1;
            i_1 = i;

            if (result)
                break;
        } while (i < (*(int32_t*)(uintptr_t)(a1 + 0xc)));
    }

    return result;
}
