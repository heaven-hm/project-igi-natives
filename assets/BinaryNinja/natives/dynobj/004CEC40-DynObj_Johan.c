// IGI native provenance: DynObj_Johan - 0x004CEC40 - CFG score 86.7% (PASS; structural only); runtime behavior not verified.
// Evidence: 004CEC40-DynObj_Johan.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "DynObj_Johan.h"
void* DynObj_Johan(char* context)

{
    int32_t context_val;
    int32_t item_4 = context_val;
    Camera_UpdateViewCone_6(context, "johan");
    int32_t flagP = g_a4edec;
    int32_t dest_val = 0;

    if (flagP > 0)
    {
        char* temp_1 = &g_a443b4;

        while (true)
        {
            char* data_val = context;
            char* source_1 = temp_1;
            int32_t data_2;

            while (true)
            {
                char context_1 = *data_val;
                char f0_1 = *source_1;
                bool c_1 = context_1 < f0_1;

                if (context_1 == f0_1)
                {
                    if (!context_1)
                    {
                        data_2 = 0;
                        break;
                    }

                    context_1 = data_val[1];
                    char f3_1 = source_1[1];
                    c_1 = context_1 < f3_1;

                    if (context_1 == f3_1)
                    {
                        data_val = &data_val[2];
                        source_1 = &source_1[2];

                        if (context_1)
                            continue;

                        data_2 = 0;
                        break;
                    }
                }

                data_2 = data_val - data_val + 1;
                break;
            }

            if (!data_2)
            {
                int32_t data_4 = dest_val * 0x48;

                if (*(data_4 + &g_a443dc))
                    return data_4 + &g_a443a0;

                goto label_4ced39;
            }

            dest_val += 1;
            temp_1 = &temp_1[0x48];

            if (dest_val >= flagP)
                break;
        }
    }

    if (flagP < 0x258)
    {
        char* dest_1 = context;
        int32_t i = 0xffffffff;

        while (i)
        {
            bool flag_0_1 = 0 != *dest_1;
            dest_1 = &dest_1[1];
            i -= 1;

            if (!flag_0_1)
                break;
        }

        int32_t entity_3 = ~i;
        int32_t source_3;
        int32_t dest_4;
        dest_4 = memcpy(flagP * 0x48 + &g_a443b4, dest_1 - entity_3, entity_3 & 0xfffffffc);
        memcpy(dest_4, source_3, entity_3 & 3);
        DynObj_Johan_2(g_a4edec * 0x48 + &g_a443a0);
        int32_t data_8 = g_a4edec;

        if (*(data_8 * 0x48 + &g_a443dc))
        {
            g_a4edec = data_8 + 1;
            return flagP * 0x48 + &g_a443a0;
        }

    label_4ced39:
        return 0;
    }

    int32_t item_14_1 = 0x258;
    Error_Show("MTP_nLODVirModel >= %d");

    while (true)
        /* nop */
}
