#include "004B11A0-QFile_DeviceIndex.h"
/* 0x004b11a0 QFile_DeviceIndex full linked: callers=10 callees=1 */
int32_t QFile_DeviceIndex(void* a1)

// Sig: int QFile_DeviceIndex(const char* path)
// Note: Scans the retail QFile device table and returns its 1-based matching
// device index, or zero. Ghidra/r2 CFG agreement: 6 basic blocks and 7 edges;
// see assets/IGI1-Native-Name-Evidence.json.
{
    int32_t result = 1;

    for (void* i = &g_9437b8; i < 0x9439e8; )
    {
        if (*(i - 0x24))
        {
            void* i_1 = i;
            int32_t j = 0xffffffff;

            while (j)
            {
                bool cond:0_1 = 0 != *i_1;
                i_1 += 1;
                j -= 1;

                if (!cond:0_1)
                    break;
            }

            if (!sub_4aad10(i, a1, ~j - 1))
                return result;
        }

        i += 0x8c;
        result += 1;
    }

    return 0;
}
