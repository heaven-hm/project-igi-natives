#include "00472880-GunCABarrel_Update.h"
/* 0x00472880 GunCABarrel_Update full linked: callers=0 callees=6 */
void* sub_472880(void* a1)

{
    void* esi = *(*(a1 + 0x14) + 0x20);
    void* result = sub_4e81f0();

    if (!*(result + 0x5c))
        return result;

    char eax_1 = sub_477c30();
    void* edx_1 = *(esi + 0x14);
    int32_t eax_3 = 0;
    eax_3 = *(edx_1 + 0x1c);
    void* var_50;

    if (*(((eax_1 * 0x180 + eax_3) << 2) + &g_a96ae0))
    {
        uint32_t eax_6 = sub_477c30();
        int32_t edx_2 = 0;
        edx_2 = *(edx_1 + 0x1c);
        int32_t eax_7 = *(((eax_6 * 0x180 + edx_2) << 2) + &g_a96ae0);
        void var_40;
        var_50 = &var_40;
        eax_7(edx_1, var_50);
        memcpy(a1 + 0x20, &var_40, 0x18);
        void var_28;
        memcpy(a1 + 0x70, &var_28, 0x28);
    }

    uint32_t eax_9 = sub_4c48c0();
    int32_t __saved_edi_1 = 0;
    var_50 = a1;
    return (*((eax_9 << 2) + &g_a982e0))(var_50, __saved_edi_1);
}
