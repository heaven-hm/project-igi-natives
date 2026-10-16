#include "AIFunction_AddAnimationEntry.h"
int32_t AIFunction_AddAnimationEntry(long double a1 @ fp0, int32_t a2, float a3 @ 0xc)

// Sig: void AIFunction_AddAnimationEntry(int animationId, int data)
// Note: Adds an animation ENTRY to this AI's available set (builds the
// pick-list GetAnimationToPlay draws from). Params: animationId = animation
// resource id, data = entry config value. Use in AIEVENT_CREATE before playing
// custom animations.
{
    float v_30;
    int32_t v_18;

    if (*(g_5bda58 + 0x3b64) >= 5)
    {
        int32_t v_24 = 5;
        Warning_Show("Maximum number of animation entries (#%d) reached");
        int32_t v_2c = 0;
        v_30 = a3;
        Script_GetArg(v_30, v_2c);
        Profile_ValueSet(a3, 1.40129846e-45f);
        v_18 = 2;
        int32_t v_10 = 0;
        int32_t v_c = 0x40000000;
        char* v_8 = &g_567c74;
        memcpy(a2, &v_18, 0x18);
        return a2;
    }

    int32_t valA1 = Script_GetArg(a3, 0);
    void* objC1 = g_5bda58;
    float v_2c_1 = 1.40129846e-45f;
    v_30 = a3;
    *((*(objC1 + 0x3b64) << 4) + objC1 + 0x3b08) = valA1;
    Profile_ValueSet(v_30, v_2c_1);
    void* valA2 = g_5bda58;
    v_18 = 2;
    int32_t v_10_1 = 0;
    int32_t v_c_1 = 0x40000000;
    char* v_8_1 = &g_567c74;
    *(((*(valA2 + 0x3b64) + 0x3b1) << 4) + valA2) = a1;
    void* valA3 = g_5bda58;
    *(valA3 + 0x3b64) += 1;
    memcpy(a2, &v_18, 0x18);
    return a2;
}
