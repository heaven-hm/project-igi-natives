#include "00473C80-GunMP5SD_Setup.h"
/* 0x00473c80 GunMP5SD_Setup full linked: callers=0 callees=4 */
float* sub_473c80(float a1 @ 0x8)

{
    int32_t* esi = a1;
    void* eax_1 = *(esi[1] + 0x6e4);

    if (eax_1)
    {
        sub_4b0d10(eax_1);
        *(esi[1] + 0x6e4) = 0;
    }

    int32_t* eax_2 = sub_4fe730(*esi, "Zoom - Min FOV (degrees)");

    if (!eax_2)
        eax_2 = sub_4fe650(*esi, "Zoom - Min FOV (degrees)", 0x42480000);

    long double st0;
    bool c1;
    bool c2;
    st0 = __fptan(eax_2[0x49] * 0.5f * 0.0174532924f);
🚫🚫🚫    /* unimplemented  {fstp st0, st0} */
    /* unimplemented  {fstp st0, st0} */
🚫🚫🚫    a1 = /* a1 = unimplemented  {fstp dword [esp+0x14], st0} */;
    /* unimplemented  {fstp dword [esp+0x14], st0} */
    *(esi[1] + 0x6e4) = Mem_Alloc(4, 4);
    float* result = *(esi[1] + 0x6e4);
    *result = a1;
    return result;
}
