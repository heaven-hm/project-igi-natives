#include "00421A10-MenuScreen_Setup.h"
/* 0x00421a10 MenuScreen_Setup full linked: callers=0 callees=5 */
int32_t MenuScreen_Setup(void* a1)

{
    sub_4f1340(a1 + 0xac);
    sub_4f1340(a1 + 0xfc);
    sub_4f1340(a1 + 0x14c);
    int32_t result = sub_4f1050(a1);

    if (result >= 0)
    {
        int32_t eax_1 = sub_4f1220();
        int32_t ecx_1 = 0;
        ecx_1 = *(a1 + 0x1c);
        result = *(((eax_1 * 0x180 + ecx_1) << 2) + &g_a96ae0);

        if (result)
            return result(a1);
    }

    return result;
}
