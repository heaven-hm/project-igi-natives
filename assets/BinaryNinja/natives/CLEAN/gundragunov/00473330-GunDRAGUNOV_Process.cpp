// IGI native provenance: GunDRAGUNOV_Process - 0x00473330 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00473330-GunDRAGUNOV_Process.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "GunDRAGUNOV_Process.h"
float* GunDRAGUNOV_Process(float context )

{
    int32_t* source_val = context;
    *(source_val[1] + 0x668) = 0;
    *(source_val[1] + 0x664) = 0;
    void* data_1 = *(source_val[1] + 0x6e4);

    if (data_1)
    {
        Sys_ExecuteBytecode_2(data_1);
        *(source_val[1] + 0x6e4) = 0;
    }

    int32_t* data_3 = Script_FormatString_31(*source_val, "Zoom - Min FOV (degrees)");

    if (!data_3)
        data_3 = Script_CallNativeHandler_31(*source_val, "Zoom - Min FOV (degrees)", 0x40a00000);

    long double fp0;
    bool c1;
    bool c2;
    fp0 = __fptan(data_3[0x49] * 0.5f * 0.0174532924f);
🚫🚫🚫    /* unimplemented  {fstp fp0, fp0} */
    /* unimplemented  {fstp fp0, fp0} */
🚫🚫🚫    context = /* context = unimplemented  {fstp dword [stack_ptr+0x14], fp0} */;
    /* unimplemented  {fstp dword [stack_ptr+0x14], fp0} */
    *(source_val[1] + 0x6e4) = Mem_Alloc(4, 4);
    float* result = *(source_val[1] + 0x6e4);
    *result = context;
    return result;
}
