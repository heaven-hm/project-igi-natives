// IGI native provenance: DisplayRender_Invoke7 - 0x00498B80 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00498B80-DisplayRender_Invoke7.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "DisplayRender_Invoke7.h"

int32_t DisplayRender_Invoke7(float arg1)

{
    int32_t result_val = Display_CheckCapabilities_7();
    int32_t result = Sys_ReadFileBlock_3();

    if (result != result_val)
        return result;

    long double x87_r7_1 = *(arg1 + 0x56a8);
    long double temp0_1 = 0f;
    x87_r7_1 - temp0_1;
    result = (x87_r7_1 < temp0_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, temp0_1) ? 1 : 0) << 0xa
        | (x87_r7_1 == temp0_1 ? 1 : 0) << 0xe;

    if (!(*(&result + 1) & 0x40))
    {
        Rain_Update(arg1);
        return Display_CloseDevice_17(arg1);
    }

    *(arg1 + 0x56ad) = 0;
    return result;
}
