#include "DefineQ_Material.h"
int32_t DefineQ_Material(long double a1 @ fp0, long double a2 @ fp1, long double a3 @ fp2, int32_t a4, int32_t a5 @ 0xc)

// Sig: void DefineQ_Material(...)
// Note: Defines a Q-material (surface material) entry while a material
// definition block is parsed. Called BY the engine's own define-block parser -
// call only from material .qsc definition contexts; arg layout follows the
// Define block grammar (registration argc unknown).
{
    float srcS = a5;
    Profile_ValueSet(srcS, 0f);
    int32_t valA = g_53851c;
    float v_2c = 1.40129846e-45f;
    float v_30 = srcS;
    *(valA * 0x268 + &g_569210) = a1;
    Profile_ValueSet(v_30, v_2c);
    *(g_53851c * 0x268 + &g_56921c) = a2;
    Profile_ValueSet(srcS, 2.80259693e-45f);
    *(g_53851c * 0x268 + &g_569218) = a3;
    *(g_53851c * 0x268 + &g_569224) = Script_GetArg(srcS, 3) * 9.53674316e-07f;
    *(g_53851c * 0x268 + &g_569228) = Script_GetArg(srcS, 4) * 9.53674316e-07f;
    int32_t valA12 = Script_GetArg(srcS, 5);
    int32_t valA13 = g_53851c;
    int32_t v_18 = 1;
    int32_t v_10 = 0;
    int32_t v_c = 0x3ff00000;
    char* v_8 = &g_567c74;
    *(valA13 * 0x268 + &g_56922c) = valA12 * 9.53674316e-07f;
    memcpy(a4, &v_18, 0x18);
    return a4;
}
