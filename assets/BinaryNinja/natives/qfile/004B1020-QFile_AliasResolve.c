// IGI native provenance: QFile_AliasResolve - 0x004B1020 - CFG score 77.8% (FAIL; structural only); runtime behavior not verified.
// Evidence: 004B1020-QFile_AliasResolve.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "QFile_AliasResolve.h"
int32_t QFile_AliasResolve(char* context, void* param_2, int32_t param_3)

// Sig: int QFile_AliasResolve(char* outputPath, const char* inputPath, int
// maxDepth)
// Note: Resolves semicolon-separated QFile path aliases, copies the resolved
// path, and returns the alias depth. Ghidra/r2 CFG agreement: 17 basic blocks
// and 25 edges; see assets/IGI1-Native-Name-Evidence.json.
{
    int32_t entity_val;
    int32_t item_4_1 = entity_val;
    int32_t context_val = 0;

    for (void* i = &g_942330; i < &g_9435b0; )
    {
        if (*(i + 0x90))
        {
            void* i_3 = i;
            int32_t j = 0xffffffff;

            while (j)
            {
                bool flag_0_1 = 0 != *i_3;
                i_3 += 1;
                j -= 1;

                if (!flag_0_1)
                    break;
            }

            if (!Camera_ApplyLineFilter_21(param_2, i, ~j - 1))
            {
                int32_t context_2 = param_3;
                char* source_4 = context_val * 0x94 + &g_942340;

                if (context_2)
                {
                    while (true)
                    {
                        char* item_1c_2 = source_4;
                        void* data_4 = Camera_ApplyLineFilter_19(0x3b);

                        if (!data_4)
                        {
                            char* item_18_2 = context_val * 0x94 + &g_942340;
                            Error_Show("Error in alias path: %s");

                            while (true)
                                /* nop */
                        }
                        else
                        {
                            source_4 = data_4 + 1;
                            int32_t f0_1 = context_2;
                            context_2 -= 1;

                            if (f0_1 == 1)
                                break;
                        }
                    }
                }

                char* item_1c_3 = source_4;
                int32_t result;

                if (!Camera_ApplyLineFilter_19(0x3b))
                    result = 0;
                else
                    result = param_3 + 1;

                char j_1 = *source_4;
                char* temp_3 = context;

                if (j_1 != 0x3b)
                {
                    while (j_1)
                    {
                        *temp_3 = j_1;
                        j_1 = source_4[1];
                        temp_3 = &temp_3[1];
                        source_4 = &source_4[1];

                        if (j_1 == 0x3b)
                            break;
                    }
                }

                int32_t j_2 = 0xffffffff;
                void* dest_9 = param_2 + ~j - 1;

                while (j_2)
                {
                    bool flag_4_1 = 0 != *dest_9;
                    dest_9 += 1;
                    j_2 -= 1;

                    if (!flag_4_1)
                        break;
                }

                int32_t entity_13 = ~j_2;
                int32_t source_7;
                int32_t dest_12;
                dest_12 = memcpy(temp_3, dest_9 - entity_13, entity_13 & 0xfffffffc);
                memcpy(dest_12, source_7, entity_13 & 3);
                char* dest_13 = context;
                int32_t j_3 = 0xffffffff;

                while (j_3)
                {
                    bool flag_5_1 = 0 != *dest_13;
                    dest_13 = &dest_13[1];
                    j_3 -= 1;

                    if (!flag_5_1)
                        break;
                }

                int32_t entity_17 = ~j_3;
                int32_t source_9;
                int32_t dest_15;
                dest_15 = memcpy(&g_943a18, dest_13 - entity_17, entity_17 & 0xfffffffc);
                memcpy(dest_15, source_9, entity_17 & 3);
                return result;
            }
        }

        i += 0x94;
        context_val += 1;
    }

    int32_t i_1 = 0xffffffff;
    void* dest_1 = param_2;

    while (i_1)
    {
        bool flag_1_1 = 0 != *dest_1;
        dest_1 += 1;
        i_1 -= 1;

        if (!flag_1_1)
            break;
    }

    int32_t entity_4 = ~i_1;
    int32_t source_1;
    int32_t dest_4;
    dest_4 = memcpy(context, dest_1 - entity_4, entity_4 & 0xfffffffc);
    memcpy(dest_4, source_1, entity_4 & 3);
    void* dest_5 = param_2;
    int32_t i_2 = 0xffffffff;

    while (i_2)
    {
        bool flag_2_1 = 0 != *dest_5;
        dest_5 += 1;
        i_2 -= 1;

        if (!flag_2_1)
            break;
    }

    int32_t entity_8 = ~i_2;
    int32_t source_3;
    int32_t dest_7;
    dest_7 = memcpy(&g_943a18, dest_5 - entity_8, entity_8 & 0xfffffffc);
    memcpy(dest_7, source_3, entity_8 & 3);
    return 0;
}
