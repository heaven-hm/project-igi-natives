#include "0044EBB0-AIFunction_AddAnimationEntry.h"
/* 0x0044ebb0 AIFunction_AddAnimationEntry full linked: callers=0 callees=7 */
void AIFunction_AddAnimationEntry(int32_t animationId, double weight)

// Sig: void AIFunction_AddAnimationEntry(int animationId, int data)
// Note: Adds an animation ENTRY to this AI's available set (builds the
// pick-list GetAnimationToPlay draws from). Params: animationId = animation
// resource id, data = entry config value. Use in AIEVENT_CREATE before playing
// custom animations.
{
    float var_30;
    int32_t var_18;

    if (g_5bda58->anim_count >= 5)
    {
        int32_t var_24 = 5;
        Warning_Show("Maximum number of animation entries (#%d) reached");
        float esi = *(&weight + 4);
        int32_t var_2c = 0;
        var_30 = esi;
        sub_4b8a20(var_30, var_2c);
        Profile_ValueSet(esi, 1.40129846e-45f);
        var_18 = 2;
        int32_t var_10 = 0;
        int32_t var_c = 0x40000000;
        char* var_8 = &g_567c74;
        memcpy(animationId, &var_18, 0x18);
        return;
    }

    float esi_1 = *(&weight + 4);
    int32_t eax_1 = sub_4b8a20(esi_1, 0);
    struct ai_ctx* ecx_1 = g_5bda58;
    float var_2c_1 = 1.40129846e-45f;
    var_30 = esi_1;
    ecx_1->entries[ecx_1->anim_count].id = eax_1;
    Profile_ValueSet(var_30, var_2c_1);
    struct ai_ctx* eax_2 = g_5bda58;
    var_18 = 2;
    int32_t var_10_1 = 0;
    int32_t var_c_1 = 0x40000000;
    char* var_8_1 = &g_567c74;
    long double entry_x87_r0;
    *(((eax_2->anim_count + 0x3b1) << 4) + eax_2) = entry_x87_r0;
    struct ai_ctx* eax_3 = g_5bda58;
    eax_3->anim_count += 1;
    memcpy(animationId, &var_18, 0x18);
}
