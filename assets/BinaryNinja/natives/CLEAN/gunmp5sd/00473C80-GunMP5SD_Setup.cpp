// IGI native provenance: GunMP5SD_Setup - 0x00473C80 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00473C80-GunMP5SD_Setup.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "GunMP5SD_Setup.h"
float* GunMP5SD_Setup(float context )

{
    int32_t* source_val = context;
    void* data_1 = *(source_val[1] + 0x6e4);

    if (data_1)
    {
        Sys_ExecuteBytecode_2(data_1);
        *(source_val[1] + 0x6e4) = 0;
    }

    int32_t* data_2 = Script_FormatString_31(*source_val, "Zoom - Min FOV (degrees)");

    if (!data_2)
        data_2 = Script_CallNativeHandler_31(*source_val, "Zoom - Min FOV (degrees)", 0x42480000);

    long double fp0;
    bool c1;
    bool c2;
    fp0 = __fptan(data_2[0x49] * 0.5f * 0.0174532924f);
🚫🚫🚫    /* unimplemented  {fstp fp0, fp0} */
    /* unimplemented  {fstp fp0, fp0} */
🚫🚫🚫    context = /* context = unimplemented  {fstp dword [stack_ptr+0x14], fp0} */;
    /* unimplemented  {fstp dword [stack_ptr+0x14], fp0} */
    *(source_val[1] + 0x6e4) = Mem_Alloc(4, 4);
    float* result = *(source_val[1] + 0x6e4);
    *result = context;
    return result;
}
