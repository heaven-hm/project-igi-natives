// IGI native provenance: HumanPlayer_ApplyRecoil_8 - 0x0040FBE0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0040FBE0-HumanPlayer_ApplyRecoil_8.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "HumanPlayer_ApplyRecoil_8.h"
int32_t* HumanPlayer_ApplyRecoil_8(void* context, void* param_2)

{
    int32_t context_val = *(param_2 + 0x4ec);
    void* data_val;
    int32_t entity_val;
    data_val = Table_GetAt(param_2 + 0x4c4, 0);
    void* data_1;
    int32_t temp_val;
    int32_t temp_1;
    data_1 = HumanPlayer_LoadParameters_13(data_val, temp_val, entity_val, data_val);
    long double fpu7 = *(param_2 + 0x1c8);
    long double f1 = 0.0f;
    fpu7 - f1;

    if (*(&((fpu7 < f1 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f1) ? 1 : 0) << 0xa
        | (fpu7 == f1 ? 1 : 0) << 0xe) + 1) & 0x40)
    {
        void* data_3;
        int32_t entity_1;
        data_3 = Table_GetAt(param_2 + 0x4c4, 0);
        Bones_PlayAnimation(context_val + 0x68, 0,
            *(HumanPlayer_LoadParameters_13(data_3, temp_1, entity_1, data_3) + 0x68c), 0, 0.0f);
        *(context + 0x14) = sub_40fd70;
    }

    int32_t data_6 = *(param_2 + 0xd6c);
    int32_t* data_8;

    if (data_6)
    {
        data_8 = data_6 - 1;
        *(param_2 + 0xd6c) = data_8;
    }
    else
    {
        data_8 = Weapon_UpdateMuzzleFlash_8(param_2 + 0x340, Weapon_FireBullet_8("AMMO_ID_MEDIPACK"));

        if (data_8)
        {
            int32_t temp_3 = data_8[1];

            if (temp_3)
            {
                long double fpu_val_7_1 = *(param_2 + 0x254);
                long double f2_1 = 0.0f;
                fpu_val_7_1 - f2_1;

                if (!(*(&((fpu_val_7_1 < f2_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_1, f2_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_1 == f2_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                {
                    float* data_10 = *(data_1 + 0x6e4);
                    data_8[1] = temp_3 - 1;
                    long double fpu_val_7_4 = *(param_2 + 0x254) - *(param_2 + 0x258) * *data_10;
                    long double f3 = 0.0f;
                    fpu_val_7_4 - f3;
                    *(param_2 + 0x254) = fpu_val_7_4;
                    bool c1 = /* bool c1 = unknown  {fst dword [source_val+0x254], fp0} */;

                    if (!(*(&((fpu_val_7_4 < f3 ? 1 : 0) << 8 | (c1 ? 1 : 0) << 9
                        | (FCMP_UO(fpu_val_7_4, f3) ? 1 : 0) << 0xa
                        | (fpu_val_7_4 == f3 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
                    {
                        long double fpu_val_6_1 = *(param_2 + 0x258);
                        fpu_val_7_4 - fpu_val_6_1;

                        if (!(*(&((fpu_val_7_4 < fpu_val_6_1 ? 1 : 0) << 8
                                | (FCMP_UO(fpu_val_7_4, fpu_val_6_1) ? 1 : 0) << 0xa
                                | (fpu_val_7_4 == fpu_val_6_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                            *(param_2 + 0x254) = *(param_2 + 0x258);
                    }
                    else
                        *(param_2 + 0x254) = 0;

                    int32_t item_8 = 60.0 / *(data_1 + 0x644) * 30.0;
                    *(param_2 + 0xd6c) = item_8;
                    return item_8;
                }
            }

            void* data_13;
            int32_t entity_4;
            data_13 = Table_GetAt(param_2 + 0x4c4, 0);
            int32_t data_15 = Bones_PlayAnimation(context_val + 0x68, 0,
                *(HumanPlayer_LoadParameters_13(data_13, temp_3, entity_4, data_13) + 0x68c), 0, 0.0f);
            *(context + 0x14) = sub_40fd70;
            return data_15;
        }
    }

    return data_8;
}
