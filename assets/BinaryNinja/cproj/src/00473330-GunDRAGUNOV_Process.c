#include "gi_platform.h"
#include "00473330-GunDRAGUNOV_Process.h"
float* GunDRAGUNOV_Process(float a1 )

{
    int32_t* srcS = a1;
    (*(int32_t*)(uintptr_t)(srcS[1] + 0x668)) = 0;
    (*(int32_t*)(uintptr_t)(srcS[1] + 0x664)) = 0;
    void* valA1 = (*(int32_t*)(uintptr_t)(srcS[1] + 0x6e4));

    if (valA1)
    {
        Sys_ExecuteBytecode_2(valA1);
        (*(int32_t*)(uintptr_t)(srcS[1] + 0x6e4)) = 0;
    }

    int32_t* valA3 = Script_FormatString_31(*srcS, "Zoom - Min FOV (degrees)");

    if (!valA3)
        valA3 = Script_CallNativeHandler_31(*srcS, "Zoom - Min FOV (degrees)", 0x40a00000);

    long double fp0;
    bool c1;
    bool c2;
    fp0 = __fptan(valA3[0x49] * 0.5.0f * 0.0174532924.0f);
🚫🚫🚫    /* unimplemented  {fstp fp0, fp0} */
    /* unimplemented  {fstp fp0, fp0} */
🚫🚫🚫    a1 = /* a1 = unimplemented  {fstp dword [esp+0x14], fp0} */;
    /* unimplemented  {fstp dword [esp+0x14], fp0} */
    (*(int32_t*)(uintptr_t)(srcS[1] + 0x6e4)) = Mem_Alloc(4, 4);
    float* result = (*(int32_t*)(uintptr_t)(srcS[1] + 0x6e4));
    *result = a1;
    return result;
}
