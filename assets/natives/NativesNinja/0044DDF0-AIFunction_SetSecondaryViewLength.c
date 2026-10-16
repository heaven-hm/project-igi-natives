#include "0044DDF0-AIFunction_SetSecondaryViewLength.h"
/* 0x0044ddf0 AIFunction_SetSecondaryViewLength full linked: callers=0 callees=2 */
int32_t AIFunction_SetSecondaryViewLength(long double a1 @ st0, int32_t a2, float a3 @ 0xc)

// Sig: void AIFunction_SetSecondaryViewLength(int length)
// Note: Sets SECONDARY view length (peripheral/short-range channel). Param:
// length = distance in engine units.
{
    Profile_ValueSet(a3, 0f);
    g_5bda58->pad[0xd0] = a1 * 4096.0;
    struct ai_ctx* eax = g_5bda58;
    long double x87_r0_1 = eax->pad[0xd0];
    long double temp0 = eax->pad[0xd8];
    x87_r0_1 - temp0;

    if (!(*(&((x87_r0_1 < temp0 ? 1 : 0) << 8 | (FCMP_UO(x87_r0_1, temp0) ? 1 : 0) << 0xa
        | (x87_r0_1 == temp0 ? 1 : 0) << 0xe | 0x800) + 1) & 0x41))
    {
        int32_t eax_2;
        eax_2 = eax->pad[0xd0];
        *(&eax_2 + 1) = eax->pad[0xd1];
        *(&eax_2 + 2) = eax->pad[0xd2];
        *(&eax_2 + 3) = eax->pad[0xd3];
        eax->pad[0xd8] = eax_2;
        eax->pad[0xd9] = *(&eax_2 + 1);
        eax->pad[0xda] = *(&eax_2 + 2);
        eax->pad[0xdb] = *(&eax_2 + 3);
        int32_t ecx_2;
        ecx_2 = eax->pad[0xd4];
        *(&ecx_2 + 1) = eax->pad[0xd5];
        *(&ecx_2 + 2) = eax->pad[0xd6];
        *(&ecx_2 + 3) = eax->pad[0xd7];
        eax->pad[0xdc] = ecx_2;
        eax->pad[0xdd] = *(&ecx_2 + 1);
        eax->pad[0xde] = *(&ecx_2 + 2);
        eax->pad[0xdf] = *(&ecx_2 + 3);
    }

    int32_t var_18 = 1;
    int32_t var_10 = 0;
    int32_t var_c = 0x3ff00000;
    char* var_8 = &g_567c74;
    memcpy(a2, &var_18, 0x18);
    return a2;
}
