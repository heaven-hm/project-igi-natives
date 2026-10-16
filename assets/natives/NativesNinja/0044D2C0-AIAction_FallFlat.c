#include "0044D2C0-AIAction_FallFlat.h"
/* 0x0044d2c0 AIAction_FallFlat full linked: callers=0 callees=14 */
int32_t AIAction_FallFlat(long double a1 @ st0, int32_t a2, float a3 @ 0xc)

// Sig: void AIAction_FallFlat(int param1, int param2)
// Note: Knocks the AI flat on the ground (ragdoll-ish fall, e.g. after
// explosion/surrender). Params: two ints observed in retail calls (pass 0,0
// unless mapping specific values). Use for scripted knockdowns.
{
    struct ai_ctx* eax_16 = g_5bda58;
    void* eax = sub_4f9720(*(eax_16 + 0x3b6c), *(eax_16 + 0x3e2c));
    int32_t eax_1 = sub_509880();
    void* var_30 = eax;
    int32_t var_18;

    if (sub_509890(var_30, eax_1))
    {
        var_18 = 2;
        int32_t var_10 = 0;
        int32_t var_c = 0x40000000;
        char* var_8 = &g_567c74;
        memcpy(a2, &var_18, 0x18);
        return a2;
    }

    int32_t* eax_5 = *(sub_44c8c0() + 0x2c);

    if (eax_5)
    {
        int32_t esi_1 = *eax_5;

        if (esi_1)
        {
            struct ai_ctx* eax_6 = g_5bda58;
            int32_t ecx_1;
            ecx_1 = eax_6->pad[0x14];
            *(&ecx_1 + 1) = eax_6->pad[0x15];
            *(&ecx_1 + 2) = eax_6->pad[0x16];
            *(&ecx_1 + 3) = eax_6->pad[0x17];
            double* eax_7 = sub_4c3440(ecx_1);
            long double st0_1 = sub_4b32b0(sub_4c3440(esi_1), eax_7);
            long double temp0_1 = *(g_5bda58 + 0x3db8);
            st0_1 - temp0_1;

            if (*(&((st0_1 < temp0_1 ? 1 : 0) << 8 | (FCMP_UO(st0_1, temp0_1) ? 1 : 0) << 0xa
                | (st0_1 == temp0_1 ? 1 : 0) << 0xe) + 1) & 1)
            {
                var_18 = 2;
                int32_t var_10_1 = 0;
                int32_t var_c_1 = 0x40000000;
                char* var_8_1 = &g_567c74;
                memcpy(a2, &var_18, 0x18);
                return a2;
            }
        }
    }

    int32_t* eax_13 = sub_451030(g_5bda58);
    Profile_ValueSet(a3, 0f);
    eax_13[2] = a1;
    var_30 = 1;
    sub_450e10(sub_48eb40, eax_13, sub_4b8a20(a3, var_30));
    var_18 = 2;
    int32_t var_10_2 = 0;
    int32_t var_c_2 = 0x40000000;
    char* var_8_2 = &g_567c74;
    memcpy(a2, &var_18, 0x18);
    return a2;
}
