#include "GunM16A2_Init_2.h"

int32_t GunM16A2_Init_2(int32_t pThis @ 0x8)

{
    int32_t edi = *(pThis + 8);
    float* ebx = *pThis;
    int32_t eax_2;
    int32_t edx;
    edx = HIGHD(Script_GetArg(*(pThis + 4), edi));
    eax_2 = LOWD(Script_GetArg(*(pThis + 4), edi));
    int32_t result = (eax_2 - edx) >> 1;
    long double st0;
    bool c1;
    bool c2;
    st0 = __fptan(result * 0.0174532924f);
🚫🚫🚫    /* unimplemented  {fstp st0, st0} */
    /* unimplemented  {fstp st0, st0} */
🚫🚫🚫    *ebx = /* *ebx = unimplemented  {fstp dword [ebx], st0} */;
    /* unimplemented  {fstp dword [ebx], st0} */
    *(pThis + 8) = edi + 1;
    return result;
}
