#include "00436CB0-EnvironmentSound_Update.h"
/* 0x00436cb0 EnvironmentSound_Update full linked: callers=2 callees=3 */
int32_t* EnvironmentSound_Update(void* a1)

{
    void* eax = *(a1 + 0x38);
    *(a1 + 0x34) = 0;

    if (eax)
    {
        sub_4e6c00(eax);
        *(a1 + 0x38) = 0;
    }

    struct status_msg* eax_2 = sub_4e6b00(a1, a1 + 0x24);
    int32_t ecx = *(a1 + 0x34);
    *(a1 + 0x38) = eax_2;
    sub_4e6c60(eax_2, 0xbf800000, ecx);
    int32_t* result = a1 + 0x4c;
    int32_t i_1 = 4;
    int32_t i;

    do
    {
        result[-4] = 0;
        *result = 0;
        result = &result[1];
        i = i_1;
        i_1 -= 1;
    } while (i != 1);
    return result;
}
