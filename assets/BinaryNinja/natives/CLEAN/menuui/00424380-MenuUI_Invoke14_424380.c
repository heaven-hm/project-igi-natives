// IGI native provenance: MenuUI_Invoke14_424380 - 0x00424380 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00424380-MenuUI_Invoke14_424380.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "MenuUI_Invoke14_424380.h"

void* MenuUI_Invoke14_424380(void* arg1)

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
            int32_t eax_4 = Menu_LeaveMenus_14();
            int32_t edx_2 = 0;
            edx_2 = i[7];
            result = *(((eax_4 * 0x180 + edx_2) << 2) + &g_a96ae0);

            if (result)
                result = result(i);

            afa7e0_1 = g_afa7e0 - 1;
            g_afa7e0 = afa7e0_1;
            i = *((afa7e0_1 << 2) + &g_afa6e0);
        } while (i);
    }

    return result;
}
