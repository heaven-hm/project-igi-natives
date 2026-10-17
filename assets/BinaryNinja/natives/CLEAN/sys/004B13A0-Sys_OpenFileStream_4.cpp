// IGI native provenance: Sys_OpenFileStream_4 - 0x004B13A0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004B13A0-Sys_OpenFileStream_4.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sys_OpenFileStream_4.h"
int32_t Sys_OpenFileStream_4(char* context)

{
    int32_t context_val;
    int32_t item_4 = context_val;
    int32_t flagP = 0;
    char* dest_val = &g_942330;
    int32_t data_3;

    while (true)
    {
        data_3 = *(dest_val + 0x90);

        if (data_3)
        {
            char* source_1 = context;
            char* data_1 = dest_val;

            while (true)
            {
                char context_1 = *data_1;
                char f0_1 = *source_1;
                bool c_1 = context_1 < f0_1;

                if (context_1 == f0_1)
                {
                    if (!context_1)
                    {
                        data_3 = 0;
                        break;
                    }

                    context_1 = data_1[1];
                    char f3_1 = source_1[1];
                    c_1 = context_1 < f3_1;

                    if (context_1 == f3_1)
                    {
                        data_1 = &data_1[2];
                        source_1 = &source_1[2];

                        if (context_1)
                            continue;

                        data_3 = 0;
                        break;
                    }
                }

                data_3 = data_1 - data_1 + 1;
                break;
            }

            if (!data_3)
            {
                int32_t data_4 = flagP * 9;
                *(((flagP + (data_4 << 2)) << 2) + &g_9423c0) = 0;
                return data_4;
            }
        }

        dest_val = &dest_val[0x94];
        flagP += 1;

        if (dest_val >= &g_9435b0)
            break;
    }

    return data_3;
}
