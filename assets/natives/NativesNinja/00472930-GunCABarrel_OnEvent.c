#include "00472930-GunCABarrel_OnEvent.h"
/* 0x00472930 GunCABarrel_OnEvent full linked: callers=0 callees=8 */
void* sub_472930(double* a1, void* a2)

{
    if (*(a2 + 8) == 5)
    {
        for (int32_t i = 0; i < 6; i += 1)
        {
            double var_20;
            WeaponType_UpdateAnim(&var_20, a1, i);
            float edx_1 = a1[0x10];
            float eax_1 = *(a1 + 0x8c);
            var_20 = var_20 + a1[4];
            double var_18 = var_18 + a1[5];
            double var_10 = var_10 + a1[6];
            float var_28_2 = -(edx_1);
            float var_24_2 = -(eax_1);
            float var_2c = -(*(a1 + 0x74)) * 113f;
            float var_28_3 = var_28_2 * 113f;
            float var_24_3 = var_24_2 * 113f;
            sub_477d10(sub_4f0ee0(), &var_20, &var_2c, &a1[0xe], "113_01_1");
        }

        sub_4c48d0(a1, sub_4cec10("101_02_1"));
    }

    if (*(a2 + 8) != 6)
        return a2;

    void* eax_4 = sub_4cec10("101_05_1");

    if (eax_4)
        return sub_4c48d0(a1, eax_4);

    Error_Show("VirModel is null");

    while (true)
        /* nop */
}
