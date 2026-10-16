#include "00473510-GunM16A2_LoadParameters.h"
/* 0x00473510 GunM16A2_LoadParameters full linked: callers=0 callees=8 */
struct status_msg* sub_473510(void* a1, void* a2)

{
    float* ebx = *(*(a1 + 0x128) + 0x6e4);
    (*(((sub_460bf0() * 0x180 + sub_477bf0()) << 2) + &g_a96ae0))(a1, a2);
    struct status_msg* result = *(a2 + 0x18);

    if (!result)
        return result;

    float var_28[0xa];
    WeaponType_SetCategory(&var_28, a1 + 0x168);
    long double x87_r7_2 = *ebx * 4096000f;
    float eax_6 = *(a1 + 0x16c);
    float var_34 = *(a1 + 0x168);
    float ecx_1 = *(a1 + 0x170);
    var_34 = x87_r7_2 * var_34 * 9.25925906e-06f;
    float var_30_2 = x87_r7_2 * eax_6 * 9.25925906e-06f;
    float var_2c_2 = x87_r7_2 * ecx_1 * 9.25925906e-06f;
    struct status_msg* eax_8 = sub_4e6b00(sub_4f0ee0(), "m203_launch_1");

    if (eax_8)
        sub_4e6c30(eax_8, a1 + 0x150);

    return sub_476670(sub_4f0ee0(), a1, *(a1 + 0x14), a1 + 0x150, &var_28, &var_34, &ebx[3],
        ebx[1], ebx[2]);
}
