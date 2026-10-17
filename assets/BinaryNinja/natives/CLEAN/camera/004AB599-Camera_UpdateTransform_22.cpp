// IGI native provenance: Camera_UpdateTransform_22 - 0x004AB599 - CFG score 88.9% (PASS; structural only); runtime behavior not verified.
// Evidence: 004AB599-Camera_UpdateTransform_22.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Camera_UpdateTransform_22.h"
void** Camera_UpdateTransform_22()

{
    void** lpMem;

    if (g_5446c0 != 0xffffffff)
    {
        lpMem = HeapAlloc(g_c32428, HEAP_NONE, 0x2020);

        if (lpMem)
            goto label_4ab5e0;
    }
    else
    {
        lpMem = &g_5446b0;
    label_4ab5e0:
        char* lpAddress = VirtualAlloc(nullptr, &__dos_header, MEM_RESERVE, PAGE_READWRITE);

        if (lpAddress)
        {
            if (VirtualAlloc(lpAddress, 0x10000, MEM_COMMIT, PAGE_READWRITE))
            {
                if (lpMem != &g_5446b0)
                {
                    *lpMem = &g_5446b0;
                    lpMem[1] = g_5446b4;
                    g_5446b4 = lpMem;
                    *lpMem[1] = lpMem;
                }
                else
                {
                    if (!g_5446b0)
                        g_5446b0 = &g_5446b0;

                    if (!g_5446b4)
                        g_5446b4 = &g_5446b0;
                }

                lpMem[5] = lpAddress + &__dos_header;
                int32_t* data_7 = &lpMem[6];
                lpMem[3] = &lpMem[0x26];
                lpMem[4] = lpAddress;
                lpMem[2] = data_7;

                for (int32_t i = 0; i < 0x400; )
                {
                    int32_t temp_1 = 0;
                    temp_1 = i >= 0x10;
                    i += 1;
                    *data_7 = ((temp_1 - 1) & 0xf1) - 1;
                    data_7[1] = 0xf1;
                    data_7 = &data_7[2];
                }

                Camera_ApplyBandFilter_26(lpAddress, 0, 0x10000);

                for (; lpAddress < lpMem[4] + 0x10000; lpAddress = &lpAddress[0x1000])
                {
                    lpAddress[0xf8] = 0xff;
                    *lpAddress = &lpAddress[8];
                    *(lpAddress + 4) = 0xf0;
                }

                return lpMem;
            }

            VirtualFree(lpAddress, 0, MEM_RELEASE);
        }

        if (lpMem != &g_5446b0)
            HeapFree(g_c32428, HEAP_NONE, lpMem);
    }
    return nullptr;
}
