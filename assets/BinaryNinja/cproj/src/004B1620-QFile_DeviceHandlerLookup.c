#include "gi_platform.h"
#include "004B1620-QFile_DeviceHandlerLookup.h"
int32_t QFile_DeviceHandlerLookup(char* a1)

// Sig: uint32_t QFile_DeviceHandlerLookup(const char* deviceName)
// Note: Matches a device name against the retail handler-name table and returns
// the corresponding handler value. Ghidra/r2 CFG agreement: 13 basic blocks and
// 18 edges; see assets/IGI1-Native-Name-Evidence.json.
{
    int32_t ctxB;
    int32_t v_4 = ctxB;
    char* srcS = g_546f04;
    int32_t flagP = 0;

    if (srcS)
    {
        int32_t* dstD1 = &g_546f04;

        while (true)
        {
            char* valA1 = a1;
            int32_t valA3;

            while (true)
            {
                char ctxB1 = *valA1;
                char f0_1 = *srcS;
                bool c_1 = ctxB1 < f0_1;

                if (ctxB1 == f0_1)
                {
                    if (!ctxB1)
                    {
                        valA3 = 0;
                        break;
                    }

                    ctxB1 = valA1[1];
                    char f3_1 = srcS[1];
                    c_1 = ctxB1 < f3_1;

                    if (ctxB1 == f3_1)
                    {
                        valA1 = &valA1[2];
                        srcS = &srcS[2];

                        if (ctxB1)
                            continue;

                        valA3 = 0;
                        break;
                    }
                }

                valA3 = valA1 - valA1 + 1;
                break;
            }

            if (!valA3)
                return *((flagP << 2) + &g_534a70);

            srcS = dstD1[1];
            dstD1 = &dstD1[1];
            flagP += 1;

            if (!srcS)
                break;
        }
    }

    return 0;
}
