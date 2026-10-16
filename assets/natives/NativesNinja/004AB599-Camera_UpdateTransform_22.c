#include "004AB599-Camera_UpdateTransform_22.h"
/* 0x004ab599 Camera_UpdateTransform_22 full linked: callers=2 callees=6 */
void** sub_4ab599()

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
                int32_t* eax_7 = &lpMem[6];
                lpMem[3] = &lpMem[0x26];
                lpMem[4] = lpAddress;
                lpMem[2] = eax_7;

                for (int32_t i = 0; i < 0x400; )
                {
                    int32_t edx_1 = 0;
                    edx_1 = i >= 0x10;
                    i += 1;
                    *eax_7 = ((edx_1 - 1) & 0xf1) - 1;
                    eax_7[1] = 0xf1;
                    eax_7 = &eax_7[2];
                }

                sub_4acd10(lpAddress, 0, 0x10000);

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
