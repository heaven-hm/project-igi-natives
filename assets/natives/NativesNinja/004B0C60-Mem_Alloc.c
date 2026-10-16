#include "004B0C60-Mem_Alloc.h"
/* 0x004b0c60 Mem_Alloc full linked: callers=184 callees=4 */
void* Mem_Alloc(int32_t a1, int32_t a2)

// Sig: void* Mem_Alloc(int numBytes,int tag)
// Note: Engine heap allocator. Params: numBytes = bytes to allocate, tag =
// allocation bucket shown in the 'Total allocated by user' accounting. RETURNS
// pointer or 0 on failure (error text: 'Mem_Alloc() failed to allocate %d
// bytes'). Pair with MemoryDealloc/MemDealloc free path.
{
    g_942300 += 1;
    void** esi_2 = sub_4aa670(a1 + a2 + 0x1c);

    if (esi_2)
    {
        void* result = (esi_2 + a2 + 0x1b) & ~(a2 - 1);
        *((result - 4) & 0xfffffffc) = esi_2;
        esi_2[1] = 0;
        *esi_2 = nullptr;

        if (!g_9422fc)
            sub_4b0ba0();

        sub_4af8f0(&g_a960f0, esi_2);
        esi_2[2] = result;
        esi_2[3] = a1 + a2 + 0x1c;
        esi_2[4] = a1;
        return result;
    }

    int32_t* i_1 = g_a960f0;
    int32_t edx = 0;
    int32_t* i = *i_1;

    while (i)
    {
        int32_t edi_1 = i_1[3];
        int32_t ebx_1 = i_1[4];
        i_1 = i;
        i = *i;
        edx += edi_1;
        esi_2 += ebx_1;
    }

    int32_t var_14_1 = edx;
    void** var_18 = esi_2;
    int32_t* var_1c = a1 + a2 + 0x1c;
    Error_Show("Mem_Alloc() failed to allocate %d bytes.\r\nTotal allocated by user: %d.\r\nTotal by "
    "Mem_Alloc():%d.");

    while (true)
        /* nop */
}
