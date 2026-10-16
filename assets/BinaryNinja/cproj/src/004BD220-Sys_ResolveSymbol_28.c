#include "gi_platform.h"
#include "004BD220-Sys_ResolveSymbol_28.h"
void** Sys_ResolveSymbol_28(int32_t* a1, int32_t a2, int32_t a3)

{
    int32_t* __saved_ebp_1 = a1;
    int32_t* saved_frame = __saved_ebp_1;
    void* objC;
    int32_t tmpD;
    int32_t* valA1 = Resource_Load(&a1, tmpD, objC, &a1);

    if (valA1 && a1 >= 0x3c && *valA1 == 0x4c && *(valA1 + 1) == 0x4f && *(valA1 + 2) == 0x4f
        && *(valA1 + 3) == 0x50 && valA1[1] == 8)
    {
        if (valA1[2] >= 5)
        {
            int32_t flagP = a2;

            if (!flagP)
                flagP = valA1[0xd];

            int32_t valA4 = a3;

            if (!valA4)
            {
                valA4 = valA1[0xe];
                a3 = valA4;
            }

            if (!flagP)
                flagP = 0x800;

            if (!valA4)
            {
                valA4 = 0x100;
                a3 = 0x100;
            }

            uint32_t flagP2 = (flagP + 3) >> 2;
            void* dstD = ((flagP2 + (valA1[5] << 1) + valA4) << 2) + 0x46c;
            void** result = Mem_Alloc(dstD, 4);
            __builtin_memset(__builtin_memset(result, 0, dstD & 0xfffffffc), 0, dstD & 3);
            *result = valA1[0xb] + valA1;
            result[1] = valA1[0xc];
            result[9] = &result[0x11b];
            result[0x11a] = valA1;
            void* objC9 = &result[0x11b + flagP2];
            result[0xa] = objC9;
            result[0x9a] = 0;
            void* objC10 = objC9 + (a3 << 2);
            result[0x1a] = 0;
            result[0x18] = objC10;
            int32_t dstD3 = valA1[5];
            result[6] = flagP2;
            result[7] = a3;
            result[2] = flagP2;
            result[0x19] = objC10 + (dstD3 << 2);
            result[3] = a3;

            if (valA1[5])
            {
                result[0x16] = valA1[3] + valA1;
                result[0x17] = valA1[4] + valA1;
                result[0x14] = valA1[5];
                result[0x15] = valA1[6];
            }

            if (valA1[9])
            {
                result[0x10] = valA1[7] + valA1;
                result[0x11] = valA1[8] + valA1;
                result[0xe] = valA1[9];
                result[0xf] = valA1[0xa];
            }

            return result;
        }

        Resource_Unload(__saved_ebp_1);
    }

    return 0;
}
