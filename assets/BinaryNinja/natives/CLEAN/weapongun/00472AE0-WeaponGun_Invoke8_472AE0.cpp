// IGI native provenance: WeaponGun_Invoke8_472AE0 - 0x00472AE0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00472AE0-WeaponGun_Invoke8_472AE0.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "WeaponGun_Invoke8_472AE0.h"

int32_t WeaponGun_Invoke8_472AE0(int32_t* arg1, int32_t* arg2)

{
    int32_t context_val;
    int32_t var_4_1 = context_val;
    int32_t* source_ptr = arg1;
    int32_t* result_val = *arg2;
    void* ecx_1 = source_ptr[0x4a];
    int32_t* frame_ptr = source_ptr[0x4b];
    void* dest_ptr = source_ptr[5];
    arg1 = nullptr;
    uint32_t eax_2 = Weapon_ReloadClip_8();
    int32_t eax_3 = 0;
    eax_3 = *(dest_ptr + 0x1c);
    int32_t eax_4 = *(((eax_2 * 0x180 + eax_3) << 2) + &g_a96ae0);

    if (eax_4)
        eax_4(dest_ptr, &arg1);

    int32_t* eax_6 = Weapon_UpdateMuzzleFlash_8(arg1, *frame_ptr);
    arg2[8] = 0;
    int32_t eax_9;

    if (!eax_6 || !eax_6[1])
        eax_9 = source_ptr[0x6b];

    if ((!eax_6 || !eax_6[1]) && !eax_9)
        arg2[8] = 1;
    else
    {
        eax_9 = source_ptr[0x6b];

        switch (eax_9)
        {
            case 0:
            {
                int32_t eax_8 = FX_FireBallUpdate_15(result_val, 0x3d, 0, 0.400000006f);
                source_ptr[0x6b] = 1;
                return eax_8;
                break;
            }
            case 1:
            {
                eax_9 = FX_FragmentSimulate_15(result_val);

                if (eax_9)
                {
                    int32_t eax_10 = FX_FireBallUpdate_15(result_val, 0x3e, 0, 0f);
                    source_ptr[0x6b] = 2;
                    return eax_10;
                }
                break;
            }
            case 2:
            {
                eax_9 = FX_FragmentSimulate_15(result_val);

                if (eax_9)
                {
                    int32_t ecx_5 = source_ptr[0x51];
                    int32_t eax_11 = *(ecx_1 + 0x648);

                    if (eax_11 != ecx_5)
                    {
                        int32_t ecx_6 = eax_6[1];

                        if (ecx_6)
                        {
                            eax_6[1] = ecx_6 - 1;
                            source_ptr[0x51] += 1;

                            if (eax_11 - ecx_5 != 1)
                                return FX_FireBallUpdate_15(result_val, 0x3e, 0, 0f);
                        }
                    }

                    int32_t eax_15 = FX_FireBallUpdate_15(result_val, 0x3f, 0, 0f);
                    source_ptr[0x6b] = 3;
                    return eax_15;
                }
                break;
            }
            case 3:
            {
                eax_9 = FX_FragmentSimulate_15(result_val);

                if (eax_9)
                {
                    arg2[8] = 1;
                    source_ptr[0x6b] = 0;
                }
                break;
            }
        }
    }

    return eax_9;
}
