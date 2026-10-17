// IGI native provenance: MenuUI_Processfont1fnt - 0x0041A410 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0041A410-MenuUI_Processfont1fnt.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "MenuUI_Processfont1fnt.h"

int32_t MenuUI_Processfont1fnt(void* arg1)

{
    int32_t* i = *(arg1 + 8);

    if (*i && i)
    {
        int32_t afa7e0_1 = g_afa7e0;

        do
        {
            int32_t* edx_1 = *i;
            void* eax_4;

            if (!edx_1)
                eax_4 = nullptr;
            else
            {
                int32_t eax_1 = *edx_1;
                int32_t eax_2 = -(eax_1);
                eax_4 = (eax_2 - eax_2) & edx_1;
            }

            *((afa7e0_1 << 2) + &g_afa6e0) = eax_4;
            g_afa7e0 = afa7e0_1 + 1;
            int32_t eax_5 = Menu_LeaveMenus_14();
            int32_t ecx_2 = 0;
            ecx_2 = i[7];
            int32_t eax_9 = *(((eax_5 * 0x180 + ecx_2) << 2) + &g_a96ae0);

            if (eax_9)
                eax_9(i);

            afa7e0_1 = g_afa7e0 - 1;
            g_afa7e0 = afa7e0_1;
            i = *((afa7e0_1 << 2) + &g_afa6e0);
        } while (i);
    }

    int32_t result = *(arg1 + 0x44);

    if (result)
    {
        result = *(arg1 + 0x5c);
        int32_t ebx_1 = 0;

        if (result > 0)
        {
            int32_t edi_1 = 0;

            do
            {
                void* esi_1 = *(arg1 + 0x58) + edi_1;

                if (!*(esi_1 + 0x18))
                    *(esi_1 + 0x20) = *(esi_1 + 0x1c);
                else
                    *(esi_1 + 0x20) = Menu_LocalSS(*(arg1 + 0x44), *(esi_1 + 0x1c));

                result = *(arg1 + 0x5c);
                ebx_1 += 1;
                edi_1 += 0x24;
            } while (ebx_1 < result);
        }
    }

    return result;
}
