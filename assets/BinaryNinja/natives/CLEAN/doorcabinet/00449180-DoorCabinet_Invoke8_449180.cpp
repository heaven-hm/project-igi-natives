// IGI native provenance: DoorCabinet_Invoke8_449180 - 0x00449180 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00449180-DoorCabinet_Invoke8_449180.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "DoorCabinet_Invoke8_449180.h"

void* DoorCabinet_Invoke8_449180(void* arg1, char* arg2)

{
    void* result = arg1;
    __builtin_memcpy(result + 0x148, result + 0x70, 0x28);

    if (!arg2 || !*arg2)
    {
        int32_t* i = *(result + 8);

        if (*i && i)
        {
            int32_t afa7e0_1 = g_afa7e0;

            do
            {
                int32_t* edx_1 = *i;
                void* eax_3;

                if (!edx_1)
                    eax_3 = nullptr;
                else
                {
                    int32_t result_val = *edx_1;
                    int32_t eax_1 = -(result_val);
                    eax_3 = (eax_1 - eax_1) & edx_1;
                }

                *((afa7e0_1 << 2) + &g_afa6e0) = eax_3;
                g_afa7e0 = afa7e0_1 + 1;
                uint32_t eax_5 = Script_ParseEnumReal32_8();
                int32_t ecx_2 = 0;
                ecx_2 = i[7];
                result = *(((eax_5 * 0x180 + ecx_2) << 2) + &g_a96ae0);

                if (result)
                    result = result(i, 0);

                afa7e0_1 = g_afa7e0 - 1;
                g_afa7e0 = afa7e0_1;
                i = *((afa7e0_1 << 2) + &g_afa6e0);
            } while (i);
        }
    }

    return result;
}
