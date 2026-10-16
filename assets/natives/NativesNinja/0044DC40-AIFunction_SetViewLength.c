#include "0044DC40-AIFunction_SetViewLength.h"
/* 0x0044dc40 AIFunction_SetViewLength full linked: callers=0 callees=2 */
int32_t AIFunction_SetViewLength(long double a1 @ st0, int32_t a2, float a3 @ 0xc)

// Sig: void AIFunction_SetViewLength(int length)
// Note: Sets this AI's VIEW LENGTH - how far it can see. Param: length = view
// distance in engine units. Use in AI init (AIEVENT_CREATE) to buff/nerf
// vision.
{
    Profile_ValueSet(a3, 0f);
    g_5bda58->pad[0xb0] = a1 * 4096.0;
    struct ai_ctx* eax = g_5bda58;
    long double x87_r0_1 = eax->pad[0xb0];
    long double temp0 = eax->pad[0xb8];
    x87_r0_1 - temp0;

    if (!(*(&((x87_r0_1 < temp0 ? 1 : 0) << 8 | (FCMP_UO(x87_r0_1, temp0) ? 1 : 0) << 0xa
        | (x87_r0_1 == temp0 ? 1 : 0) << 0xe | 0x800) + 1) & 0x41))
    {
        int32_t eax_2;
        eax_2 = eax->pad[0xb0];
        *(&eax_2 + 1) = eax->pad[0xb1];
        *(&eax_2 + 2) = eax->pad[0xb2];
        *(&eax_2 + 3) = eax->pad[0xb3];
        eax->pad[0xb8] = eax_2;
        eax->pad[0xb9] = *(&eax_2 + 1);
        eax->pad[0xba] = *(&eax_2 + 2);
        eax->pad[0xbb] = *(&eax_2 + 3);
        int32_t ecx_2;
        ecx_2 = eax->pad[0xb4];
        *(&ecx_2 + 1) = eax->pad[0xb5];
        *(&ecx_2 + 2) = eax->pad[0xb6];
        *(&ecx_2 + 3) = eax->pad[0xb7];
        eax->pad[0xbc] = ecx_2;
        eax->pad[0xbd] = *(&ecx_2 + 1);
        eax->pad[0xbe] = *(&ecx_2 + 2);
        eax->pad[0xbf] = *(&ecx_2 + 3);
    }

    int32_t var_18 = 1;
    int32_t var_10 = 0;
    int32_t var_c = 0x3ff00000;
    char* var_8 = &g_567c74;
    memcpy(a2, &var_18, 0x18);
    return a2;
}
