// Original IGI.EXE function: QFile_DeviceIndex (VA 0x004B11A0; static CFG gate PASS, CFG score 1.000).
#include "QFile_DeviceIndex.h"
int32_t QFile_DeviceIndex(void* context)

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
                bool flag_0_1 = 0 != *i_1;
                i_1 += 1;
                j -= 1;

                if (!flag_0_1)
                    break;
            }

            if (!Camera_ApplyLineFilter_21(i, context, ~j - 1))
                return result;
        }

        i += 0x8c;
        result += 1;
    }

    return 0;
}
