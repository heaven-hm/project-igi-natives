// IGI native provenance: Physics_SimulateRigidBody_12 - 0x0050BC00 - CFG score 66.7% (FAIL; structural only); runtime behavior not verified.
// Evidence: 0050BC00-Physics_SimulateRigidBody_12.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Physics_SimulateRigidBody_12.h"
int32_t __stdcall Physics_SimulateRigidBody_12(int32_t context)

{
    if (*(context + 0xc) <= 0x10)
    {
        int32_t entity_1 = *(context + 4);

        if (entity_1 & 0x40)
        {
            int32_t data_1 = 0;

            if (*(context + 0x10) && *(context + 0x14) && *(context + 0x18) && !(entity_1 & 0xffffffbe))
            {
                int32_t entity_2 = g_a7cebc;
                g_a7cebc = entity_2 + 1;
                memcpy(entity_2 * 0x44 + &g_a7c140, context, 0x20);
                int32_t entity_4 = *(context + 0x1c);

                if (!entity_4)
                    *(entity_2 * 0x44 + 0xa7c160) = 0;
                else
                {
                    int32_t eflags_1;
                    int32_t data_2;
                    data_2 = __bsf_gprv_memv(entity_4);
                    *(entity_2 * 0x44 + 0xa7c160) = data_2;
                    int32_t eflags_2;
                    int32_t data_4;
                    data_4 = __bsr_gprv_memv(*(context + 0x1c));
                    data_1 = data_4 - *(entity_2 * 0x44 + 0xa7c160) + 1;
                }

                *(entity_2 * 0x44 + &g_a7c170) = data_1;
                int32_t eflags_3;
                int32_t data_7;
                data_7 = __bsf_gprv_memv(*(context + 0x10));
                *(entity_2 * 0x44 + 0xa7c164) = data_7;
                int32_t eflags_4;
                int32_t data_9;
                data_9 = __bsf_gprv_memv(*(context + 0x14));
                *(entity_2 * 0x44 + 0xa7c168) = data_9;
                int32_t eflags_5;
                int32_t data_11;
                data_11 = __bsf_gprv_memv(*(context + 0x18));
                *(entity_2 * 0x44 + 0xa7c16c) = data_11;
                int32_t eflags_6;
                int32_t data_13;
                data_13 = __bsr_gprv_memv(*(context + 0x10));
                *(entity_2 * 0x44 + 0xa7c174) = data_13;
                int32_t eflags_7;
                int32_t data_15;
                data_15 = __bsr_gprv_memv(*(context + 0x14));
                *(entity_2 * 0x44 + 0xa7c178) = data_15;
                int32_t eflags_8;
                int32_t data_17;
                data_17 = __bsr_gprv_memv(*(context + 0x18));
                int32_t context_2 = *(entity_2 * 0x44 + 0xa7c178);
                int32_t dest_2 = *(entity_2 * 0x44 + 0xa7c174) + 1 - *(entity_2 * 0x44 + 0xa7c164);
                int32_t data_19 = 1 - *(entity_2 * 0x44 + 0xa7c168);
                *(entity_2 * 0x44 + 0xa7c174) = dest_2;
                int32_t context_3 = context_2 + data_19;
                int32_t data_22 = data_17 - *(entity_2 * 0x44 + 0xa7c16c) + 1;
                *(entity_2 * 0x44 + 0xa7c17c) = data_22;
                *(entity_2 * 0x44 + 0xa7c178) = context_3;
                *(entity_2 * 0x44 + &g_a7c180) = data_22 + context_3 + dest_2;
            }
        }
    }

    return 1;
}
