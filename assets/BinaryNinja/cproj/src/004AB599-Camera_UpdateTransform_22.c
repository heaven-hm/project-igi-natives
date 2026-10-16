#include "gi_platform.h"
#include "004AB599-Camera_UpdateTransform_22.h"
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
    label_4ab5e0: ;
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
                int32_t* valA7 = &lpMem[6];
                lpMem[3] = &lpMem[0x26];
                lpMem[4] = lpAddress;
                lpMem[2] = valA7;

                for (int32_t i = 0; i < 0x400; )
                {
                    int32_t tmpD1 = 0;
                    tmpD1 = i >= 0x10;
                    i += 1;
                    *valA7 = ((tmpD1 - 1) & 0xf1) - 1;
                    valA7[1] = 0xf1;
                    valA7 = &valA7[2];
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
