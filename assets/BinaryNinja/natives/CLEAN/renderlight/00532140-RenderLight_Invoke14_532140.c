// IGI native provenance: RenderLight_Invoke14_532140 - 0x00532140 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00532140-RenderLight_Invoke14_532140.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "RenderLight_Invoke14_532140.h"

int32_t* RenderLight_Invoke14_532140(void* arg1)

{
    int32_t* result_val = Display_CloseDevice_14(0x10);
    result_val[1] = g_c28f90;
    result_val[3] = arg1;
    Display_ClearSurfaces_14(0, result_val);
    int32_t* eax_1 = Display_CloseDevice_14(0x10);
    int32_t c28f94_1 = g_c28f94;
    eax_1[3] = arg1;
    eax_1[1] = c28f94_1;
    Display_ClearSurfaces_14(g_bcabe0 - 1, eax_1);
    g_a84620 = *(arg1 + 0x74);
    data_a84624 = *(arg1 + 0x78);
    data_a8462c = arg1 + 0x70;
    data_a84630 = arg1 + 0x6c;
    *(arg1 + 0x70) = 0;
    int32_t* result = data_a84630;
    *result = 0;
    return result;
}
