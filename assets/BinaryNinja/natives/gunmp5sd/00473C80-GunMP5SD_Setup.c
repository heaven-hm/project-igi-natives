#include "GunMP5SD_Setup.h"
float* GunMP5SD_Setup(float a1 @ 0x8)

{
    int32_t* srcS = a1;
    void* valA1 = *(srcS[1] + 0x6e4);

    if (valA1)
    {
        Sys_ExecuteBytecode_2(valA1);
        *(srcS[1] + 0x6e4) = 0;
    }

    int32_t* valA2 = Script_FormatString_31(*srcS, "Zoom - Min FOV (degrees)");

    if (!valA2)
        valA2 = Script_CallNativeHandler_31(*srcS, "Zoom - Min FOV (degrees)", 0x42480000);

    long double fp0;
    bool c1;
    bool c2;
    fp0 = __fptan(valA2[0x49] * 0.5f * 0.0174532924f);
🚫🚫🚫    /* unimplemented  {fstp fp0, fp0} */
    /* unimplemented  {fstp fp0, fp0} */
🚫🚫🚫    a1 = /* a1 = unimplemented  {fstp dword [esp+0x14], fp0} */;
    /* unimplemented  {fstp dword [esp+0x14], fp0} */
    *(srcS[1] + 0x6e4) = Mem_Alloc(4, 4);
    float* result = *(srcS[1] + 0x6e4);
    *result = a1;
    return result;
}
