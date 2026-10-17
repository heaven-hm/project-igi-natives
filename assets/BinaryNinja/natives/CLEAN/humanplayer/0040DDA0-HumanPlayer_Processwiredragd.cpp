// IGI native provenance: HumanPlayer_Processwiredragd - 0x0040DDA0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0040DDA0-HumanPlayer_Processwiredragd.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "HumanPlayer_Processwiredragd.h"

struct status_msg* HumanPlayer_Processwiredragd(void* arg1, void* arg2)

{
    int16_t base_val = *(arg1 + 8);

    if (*(arg2 + 0x538) == 8)
    {
        long double x87_r7_1 = *(arg2 + 0x540);
        long double temp0_1 = *(arg2 + 0xd98);
        x87_r7_1 - temp0_1;

        if (!(*(&((x87_r7_1 < temp0_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, temp0_1) ? 1 : 0) << 0xa
            | (x87_r7_1 == temp0_1 ? 1 : 0) << 0xe) + 1) & 0x40))
        {
            Render_SetupLighting_10(arg2 + 0x68, 0, 0f);
            *(arg2 + 0xd98) = *(arg2 + 0x540);
            *(arg2 + 0xd84) = 0;
        }
    }

    struct status_msg* result = *(arg2 + 0xd84);

    if (!result)
    {
        if (base_val & 0x80)
        {
            *(arg2 + 0xd84) = 1;
            Render_SetupLighting_10(arg2 + 0x68, 0, 1f);
        }

        if (*(&base_val + 1) & 1)
        {
            *(arg2 + 0xd84) = 0xffffffff;
            Render_SetupLighting_10(arg2 + 0x68, 0, -1f);
        }

        result = *(arg2 + 0xd84);

        if (result)
        {
            int32_t eax_2 = *(arg2 + 0xd9c);
            int32_t var_2c_1 = *((eax_2 << 2) + &data_538c48) + 1;
            *(arg2 + 0xd9c) = (eax_2 - 1) & 1;
            char var_20[0x20];
            Game_DataSymbolLoad(&var_20, "wire_drag_%d");
            return SoundSys_SetMasterVolume_7(arg2, &var_20);
        }
    }

    return result;
}
