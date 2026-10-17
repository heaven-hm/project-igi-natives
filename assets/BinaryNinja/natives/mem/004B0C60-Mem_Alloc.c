// Original IGI.EXE function: Mem_Alloc (VA 0x004B0C60; static CFG gate PASS, CFG score 1.000).
#include "Mem_Alloc.h"
void* Mem_Alloc(int32_t a1, int32_t a2)

// Sig: void* Mem_Alloc(int numBytes,int tag)
// Note: Engine heap allocator. Params: numBytes = bytes to allocate, tag =
// allocation bucket shown in the 'Total allocated by user' accounting. RETURNS
// pointer or 0 on failure (error text: 'Mem_Alloc() failed to allocate %d
// bytes'). Pair with MemoryDealloc/MemDealloc free path.
{
    g_942300 += 1;
    void** srcS2 = Camera_ApplyHandiCam_20(a1 + a2 + 0x1c);

    if (srcS2)
    {
        void* result = (srcS2 + a2 + 0x1b) & ~(a2 - 1);
        *((result - 4) & 0xfffffffc) = srcS2;
        srcS2[1] = 0;
        *srcS2 = nullptr;

        if (!g_9422fc)
            Sys_CloseFileStream_2();

        Camera_SetFieldOfView_33(&g_a960f0, srcS2);
        srcS2[2] = result;
        srcS2[3] = a1 + a2 + 0x1c;
        srcS2[4] = a1;
        return result;
    }

    int32_t* i_1 = g_a960f0;
    int32_t tmpD = 0;
    int32_t* i = *i_1;

    while (i)
    {
        int32_t dstD1 = i_1[3];
        int32_t ctxB1 = i_1[4];
        i_1 = i;
        i = *i;
        tmpD += dstD1;
        srcS2 += ctxB1;
    }

    int32_t v_14_1 = tmpD;
    void** v_18 = srcS2;
    int32_t* v_1c = a1 + a2 + 0x1c;
    Error_Show("Mem_Alloc() failed to allocate %d bytes.\r\nTotal allocated by user: %d.\r\nTotal by "
    "Mem_Alloc():%d.");

    while (true)
        /* nop */
}
