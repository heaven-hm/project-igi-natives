// IGI native provenance: Sound_Invoke6_4EB930 - 0x004EB930 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004EB930-Sound_Invoke6_4EB930.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sound_Invoke6_4EB930.h"

void* Sound_Invoke6_4EB930(void* arg1, int32_t arg2)

{
    void* result = arg1;
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
            uint32_t eax_5 = SoundSys_Update3DPosition_6();
            int32_t edx_2 = 0;
            edx_2 = i[7];
            result = *(((eax_5 * 0x180 + edx_2) << 2) + &g_a96ae0);

            if (result)
                result = result(i, arg2);

            afa7e0_1 = g_afa7e0 - 1;
            g_afa7e0 = afa7e0_1;
            i = *((afa7e0_1 << 2) + &g_afa6e0);
        } while (i);
    }

    return result;
}
