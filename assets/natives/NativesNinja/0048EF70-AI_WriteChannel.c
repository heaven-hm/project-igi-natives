#include "0048EF70-AI_WriteChannel.h"
/* 0x0048ef70 AI_WriteChannel full linked: callers=36 callees=2 */
void* sub_48ef70(void* a1, int32_t a2, float a3)

{
    int32_t ecx_2 = *(*((*(a1 + 0x3d38) << 2) + &g_54151c) + (a2 << 2));

    if (ecx_2 != 0xffffffff)
    {
        *(a1 + (ecx_2 << 2) + 0x3c74) = a3;
        return a1;
    }

    int32_t var_104 = a2;
    void* var_108 = a1 + 0x3d15;
    int32_t var_10c_1 = sub_4f1050(a1);
    void var_100;
    return Game_DataSymbolLoad(&var_100, "AI(%d) type(%s) channel(%d)");
}
