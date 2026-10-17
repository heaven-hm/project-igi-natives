// IGI native provenance: Is_ResourceLoaded - 0x004B5B90 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004B5B90-Is_ResourceLoaded.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Is_ResourceLoaded.h"
int32_t Is_ResourceLoaded(void* context, void** param_2)

// Sig: int Is_ResourceLoaded(char* resourcePath, char** outEntry)
// Note: Checks whether a resource path is ALREADY LOADED in the resource
// manager (walks path handling backslash 0x5C segments against the registry).
// Params: resourcePath = virtual path, outEntry = receives matching entry.
// RETURNS non-zero + fills outEntry when found. Resource_Load calls this first
// - use it to avoid double-loading.
{
    int32_t context_val;
    int32_t item_108 = context_val;
    int32_t source_val = 0;

    while (true)
    {
        void item_80;
        source_val = QFile_AliasResolve(&item_80, context, source_val);
        int32_t item_104_1 = source_val;
        char i_1;
        Sys_ResolveSymbol_15(&i_1, &item_80);
        char i = i_1;

        if (i)
        {
            char* data_3 = &i_1;

            do
            {
                char entity_2 = 0x2f;

                if (i != 0x5c)
                    entity_2 = *data_3;

                *data_3 = entity_2;
                i = data_3[1];
                data_3 = &data_3[1];
            } while (i);
        }

        uint32_t data_4 = Sys_CheckHeap_15(&i_1);
        void* entity_3 = g_943e40;
        void* flagP1 = entity_3;
        void* dest_1 = *(entity_3 + 4);

        if (dest_1)
        {
            while (true)
            {
                if (*(flagP1 + 0x20) == data_4)
                {
                    char* source_1 = &i_1;
                    char* entity_4 = flagP1 + 0x38;
                    int32_t entity_6;

                    while (true)
                    {
                        char context_1 = *entity_4;
                        char f0_1 = *source_1;
                        bool c_1 = context_1 < f0_1;

                        if (context_1 == f0_1)
                        {
                            if (!context_1)
                            {
                                entity_6 = 0;
                                break;
                            }

                            context_1 = entity_4[1];
                            char f3_1 = source_1[1];
                            c_1 = context_1 < f3_1;

                            if (context_1 == f3_1)
                            {
                                entity_4 = &entity_4[2];
                                source_1 = &source_1[2];

                                if (context_1)
                                    continue;

                                entity_6 = 0;
                                break;
                            }
                        }

                        entity_6 = entity_4 - entity_4 + 1;
                        break;
                    }

                    if (!entity_6)
                    {
                        if (param_2)
                            *param_2 = flagP1;

                        return 1;
                    }

                    source_val = item_104_1;
                }

                flagP1 = dest_1;
                dest_1 = *(dest_1 + 4);

                if (!dest_1)
                    break;
            }
        }

        if (!source_val)
            break;
    }

    return 0;
}
