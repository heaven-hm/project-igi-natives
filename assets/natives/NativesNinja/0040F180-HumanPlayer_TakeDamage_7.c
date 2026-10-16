#include "0040F180-HumanPlayer_TakeDamage_7.h"
/* 0x0040f180 HumanPlayer_TakeDamage_7 full linked: callers=0 callees=3 */
int32_t HumanPlayer_TakeDamage_7(void* a1, void* a2)

{
    int32_t esi = *(a2 + 0x4ec);
    int32_t var_38 = 0;
    void* var_3c = a2 + 0x4c4;
    void* eax_1 = Table_GetAt(var_3c, var_38);
    *(a2 + 0x4d0) = 0;
    void* var_24 = a2;
    void var_20;
    memcpy(&var_20, esi + 0x208, 0x1c);
    char var_3 = g_56e214;
    uint32_t eax_3 = sub_460c10();
    int32_t eax_4 = 0;
    eax_4 = *(eax_1 + 0x1c);
    (*(((eax_3 * 0x180 + eax_4) << 2) + &g_a96ae0))(eax_1, &var_24);
    char result;

    if (!result)
        return result;

    *(a2 + 0x4d0) = 1;
    int32_t edx_3 = *(a1 + 0x10);
    *(a1 + 0x10) = 1;
    void* ecx_2 = *(a1 + 4);
    *(a1 + 0xc) = edx_3;
    var_3c = a1;
    int32_t ecx_3 = *(ecx_2 + 4);
    *(a1 + 0x14) = ecx_3;
    return ecx_3(var_3c, a2);
}
