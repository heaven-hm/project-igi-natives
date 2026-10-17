// IGI native provenance: CombatState_Invoke16 - 0x0048A730 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0048A730-CombatState_Invoke16.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "CombatState_Invoke16.h"

int32_t CombatState_Invoke16(int32_t arg1, int32_t arg2)

{
    if (arg1 == 0x100)
    {
        if (arg2 - 8 <= 0x26)
        {
            int32_t ecx_1 = 0;
            ecx_1 = *(arg2 + &jump_table_48a844[0xa]);

            switch (ecx_1)
            {
                case 0:
                {
                    FX_SmokeEmit_16(0xfffffffb);
                    break;
                }
                case 1:
                {
                    FX_SmokeEmit_16(0xfffffff5);
                    break;
                }
                case 2:
                {
                    FX_SmokeEmit_16(0xfffffff9);
                    break;
                }
                case 3:
                {
                    FX_SmokeEmit_16(0xfffffff8);
                    break;
                }
                case 4:
                {
                    FX_SmokeEmit_16(0xfffffff6);
                    break;
                }
                case 5:
                {
                    FX_SmokeEmit_16(0xfffffff7);
                    break;
                }
                case 6:
                {
                    FX_SmokeEmit_16(0xffffffff);
                    break;
                }
                case 7:
                {
                    FX_SmokeEmit_16(0xfffffffd);
                    break;
                }
                case 8:
                {
                    FX_SmokeEmit_16(0xfffffffe);
                    break;
                }
                case 9:
                {
                    FX_SmokeEmit_16(0xfffffffc);
                    break;
                }
                case 0xa:
                {
                    FX_SmokeEmit_16(0xfffffffa);
                    break;
                }
            }
        }
    }
    else if (arg1 == 0x102 && arg2 != 8 && arg2 != 0xd && arg2 != 0x1b)
        FX_SmokeEmit_16(arg2);

    return 1;
}
