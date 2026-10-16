#include "gi_platform.h"
#include "00491280-Display_CreateSurface_2.h"
char* Display_CreateSurface_2(char* a1, int32_t* a2)

{
    char* flagP = a1;
    int32_t valA = *(flagP + 0x1148);
    *(flagP + 0x1148) = valA + 1;
    (*(int32_t*)(uintptr_t)(flagP + valA * 0x7c + 0x1dc)) = a2[9] * 0x3e8;
    (*(int32_t*)(uintptr_t)(flagP + valA * 0x7c + 0x1e0)) = a2[0xa] * 0x3e8;
    (*(int32_t*)(uintptr_t)(flagP + valA * 0x7c + 0x1d4)) = a2[4];
    (*(int32_t*)(uintptr_t)(flagP + valA * 0x7c + 0x1e4)) = a2[0xb] * 0x3e8;
    (*(int32_t*)(uintptr_t)(flagP + valA * 0x7c + 0x1d8)) = a2[5];
    (*(int32_t*)(uintptr_t)(flagP + valA * 0x7c + 0x1e8)) = a2[0xc] * 0x3e8;
    (*(int32_t*)(uintptr_t)(flagP + valA * 0x7c + 0x1f0)) = a2[6];
    (*(int32_t*)(uintptr_t)(flagP + valA * 0x7c + 0x1f4)) = a2[7];
    (*(int32_t*)(uintptr_t)(flagP + valA * 0x7c + 0x1f8)) = a2[8];
    (*(int32_t*)(uintptr_t)(flagP + valA * 0x7c + 0x1cc)) = a2[2];
    (*(int32_t*)(uintptr_t)(flagP + valA * 0x7c + 0x1d0)) = a2[3];
    (*(int32_t*)(uintptr_t)(flagP + valA * 0x7c + 0x1c8)) = a2[1];
    flagP[valA * 0x7c + 0x240] = a2[0xd];
    void* tmpD7 = *a2;
    void* dstD = tmpD7;
    int32_t i = 0xffffffff;

    while (i)
    {
        bool cond_0_1 = 0 != *dstD;
        dstD += 1;
        i -= 1;

        if (!cond_0_1)
            break;
    }

    int32_t valA19;
    int32_t tmpD8;

    if (~i - 1 < 0x80)
        valA19 = Sys_CheckHeap_16(tmpD7);

    if (~i - 1 >= 0x80 || !valA19)
    {
        int32_t dstD5 = *a2;
        int32_t i_1 = 0xffffffff;

        while (i_1)
        {
            bool cond_1_1 = 0 != *dstD5;
            dstD5 += 1;
            i_1 -= 1;

            if (!cond_1_1)
                break;
        }

        char* valA25 = Mem_Alloc(~i_1 + 4, 4);
        (*(int32_t*)(uintptr_t)(flagP + valA * 0x7c + 0x1fc)) = valA25;
        int32_t v_24_2 = *a2;
        Game_DataSymbolLoad(valA25, "RM: %s");
    }
    else
    {
        void* objC10 = *a2;
        void* v_20 = objC10;
        a1 = nullptr;
        int32_t* dstD1 = Resource_Load(&a1, tmpD8, objC10, &a1);
        a2 = dstD1;

        if (dstD1)
        {
            void* valA22 = Mem_Alloc(a1, 4);
            int32_t i_2 = 0xffffffff;
            (*(int32_t*)(uintptr_t)(flagP + valA * 0x7c + 0x1fc)) = valA22;

            while (i_2)
            {
                bool cond_3_1 = 0 != *dstD1;
                dstD1 += 1;
                i_2 -= 1;

                if (!cond_3_1)
                    break;
            }

            int32_t objC11 = ~i_2;
            int32_t srcS2;
            int32_t dstD4;
            dstD4 = memcpy(valA22, dstD1 - objC11, objC11 & 0xfffffffc);
            memcpy(dstD4, srcS2, objC11 & 3);
            Resource_Flush(a2);
        }
    }

    return Display_OpenDevice_3(flagP, &flagP[valA * 0x7c + 0x1c8]);
}
