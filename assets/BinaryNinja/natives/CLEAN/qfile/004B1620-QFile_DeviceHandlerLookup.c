// IGI native provenance: QFile_DeviceHandlerLookup - 0x004B1620 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004B1620-QFile_DeviceHandlerLookup.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "QFile_DeviceHandlerLookup.h"
int32_t QFile_DeviceHandlerLookup(char* context)

// Sig: uint32_t QFile_DeviceHandlerLookup(const char* deviceName)
// Note: Matches a device name against the retail handler-name table and returns
// the corresponding handler value. Ghidra/r2 CFG agreement: 13 basic blocks and
// 18 edges; see assets/IGI1-Native-Name-Evidence.json.
{
    int32_t context_val;
    int32_t item_4 = context_val;
    char* source_val = g_546f04;
    int32_t flagP = 0;

    if (source_val)
    {
        int32_t* dest_1 = &g_546f04;

        while (true)
        {
            char* data_1 = context;
            int32_t data_3;

            while (true)
            {
                char context_1 = *data_1;
                char f0_1 = *source_val;
                bool c_1 = context_1 < f0_1;

                if (context_1 == f0_1)
                {
                    if (!context_1)
                    {
                        data_3 = 0;
                        break;
                    }

                    context_1 = data_1[1];
                    char f3_1 = source_val[1];
                    c_1 = context_1 < f3_1;

                    if (context_1 == f3_1)
                    {
                        data_1 = &data_1[2];
                        source_val = &source_val[2];

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
                return *((flagP << 2) + &g_534a70);

            source_val = dest_1[1];
            dest_1 = &dest_1[1];
            flagP += 1;

            if (!source_val)
                break;
        }
    }

    return 0;
}
