#include "00407E30-DefineQ_Material.h"
/* 0x00407e30 DefineQ_Material full linked: callers=0 callees=7 */
int32_t DefineQ_Material(long double a1 @ st0, long double a2 @ st1, long double a3 @ st2, int32_t a4, int32_t a5 @ 0xc)

// Sig: void DefineQ_Material(...)
// Note: Defines a Q-material (surface material) entry while a material
// definition block is parsed. Called BY the engine's own define-block parser -
// call only from material .qsc definition contexts; arg layout follows the
// Define block grammar (registration argc unknown).
{
    float esi = a5;
    Profile_ValueSet(esi, 0f);
    int32_t eax = g_53851c;
    float var_2c = 1.40129846e-45f;
    float var_30 = esi;
    *(eax * 0x268 + &g_569210) = a1;
    Profile_ValueSet(var_30, var_2c);
    *(g_53851c * 0x268 + &g_56921c) = a2;
    Profile_ValueSet(esi, 2.80259693e-45f);
    *(g_53851c * 0x268 + &g_569218) = a3;
    *(g_53851c * 0x268 + &g_569224) = sub_4b8a20(esi, 3) * 9.53674316e-07f;
    *(g_53851c * 0x268 + &g_569228) = sub_4b8a20(esi, 4) * 9.53674316e-07f;
    int32_t eax_12 = sub_4b8a20(esi, 5);
    int32_t eax_13 = g_53851c;
    int32_t var_18 = 1;
    int32_t var_10 = 0;
    int32_t var_c = 0x3ff00000;
    char* var_8 = &g_567c74;
    *(eax_13 * 0x268 + &g_56922c) = eax_12 * 9.53674316e-07f;
    memcpy(a4, &var_18, 0x18);
    return a4;
}
