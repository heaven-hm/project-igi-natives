// IGI native provenance: PickupTrigger_Invoke25_4685C0 - 0x004685C0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004685C0-PickupTrigger_Invoke25_4685C0.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "PickupTrigger_Invoke25_4685C0.h"

int32_t PickupTrigger_Invoke25_4685C0(void* arg1)

{
    AI_SelectTarget_25(arg1);
    int32_t base_val = 0;
    bool cond:0 = !*(arg1 + 0x88);
    *(arg1 + 0x290) = 0;

    if (!cond:0)
    {
        int32_t edi_1 = 0x4b0;

        while (true)
        {
            int32_t eax_1 = AI_MoveToNode_28();
            char* esi_1 = *(&g_5bddb0 + edi_1);
            char* ecx_1 = *(arg1 + 0x88);
            int32_t eax_3;

            while (true)
            {
                char edx_1 = *ecx_1;
                eax_1 = edx_1;
                char temp0_1 = *esi_1;
                bool c_1 = edx_1 < temp0_1;

                if (edx_1 == temp0_1)
                {
                    if (!eax_1)
                    {
                        eax_3 = 0;
                        break;
                    }

                    edx_1 = ecx_1[1];
                    eax_1 = edx_1;
                    char temp3_1 = esi_1[1];
                    c_1 = edx_1 < temp3_1;

                    if (edx_1 == temp3_1)
                    {
                        ecx_1 = &ecx_1[2];
                        esi_1 = &esi_1[2];

                        if (eax_1)
                            continue;

                        eax_3 = 0;
                        break;
                    }
                }

                eax_3 = eax_1 - eax_1 + 1;
                break;
            }

            if (!eax_3)
            {
                *(arg1 + 0x290) = &(&g_5bddb0)[(base_val * 3 + 0x5d) * 2];
                break;
            }

            edi_1 += 4;
            base_val += 1;

            if (edi_1 >= 0x4fc)
                break;
        }
    }

    Qhash_Init(1);
    *(arg1 + 0x2b4) = Sys_CheckHeap_22(arg1 + 0x294);
    *(arg1 + 0x2d8) = Sys_CheckHeap_22(arg1 + 0x2b8);
    Qhash_Reset();
    Script_Isexists(arg1 + 0x38, arg1);
    return 0;
}
