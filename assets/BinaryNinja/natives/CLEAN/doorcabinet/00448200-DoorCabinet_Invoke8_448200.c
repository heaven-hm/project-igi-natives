// IGI native provenance: DoorCabinet_Invoke8_448200 - 0x00448200 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00448200-DoorCabinet_Invoke8_448200.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "DoorCabinet_Invoke8_448200.h"

int32_t DoorCabinet_Invoke8_448200(void* arg1, int32_t arg2)

{
    int32_t context_val;
    int32_t var_4_1 = context_val;
    int32_t result_val = StatusScreen_Get();
    (*(((Script_ParseEnumReal32_8() * 0x180 + FX_TrailUpdate()) << 2) + &g_a96ae0))(arg1, arg2);
    int32_t dest_ptr = 0;
    bool cond:0 = !*(arg1 + 0x250);
    *(arg1 + 0x254) = 0;

    if (!cond:0)
    {
        int32_t* ebp_1 = &g_StatusScreenData;

        while (true)
        {
            char* esi_3 = *ebp_1;
            char* eax_7 = *(arg1 + 0x250);
            int32_t eax_9;

            while (true)
            {
                char edx_1 = *eax_7;
                char temp0_1 = *esi_3;
                bool c_1 = edx_1 < temp0_1;

                if (edx_1 == temp0_1)
                {
                    if (!edx_1)
                    {
                        eax_9 = 0;
                        break;
                    }

                    edx_1 = eax_7[1];
                    char temp3_1 = esi_3[1];
                    c_1 = edx_1 < temp3_1;

                    if (edx_1 == temp3_1)
                    {
                        eax_7 = &eax_7[2];
                        esi_3 = &esi_3[2];

                        if (edx_1)
                            continue;

                        eax_9 = 0;
                        break;
                    }
                }

                eax_9 = eax_7 - eax_7 + 1;
                break;
            }

            if (!eax_9)
            {
                *(arg1 + 0x254) = result_val + dest_ptr * 0x18 + 0x3ec;
                break;
            }

            dest_ptr += 1;
            ebp_1 = &ebp_1[1];

            if (dest_ptr >= 0xa)
                break;
        }
    }

    Script_Isexists(arg1 + 0x258, arg1);
    return 0;
}
