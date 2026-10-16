#include "DynObj_Createterrainmateria.h"
void* DynObj_Createterrainmateria(void* a1, int32_t a2)

{
    Render_ComputeNormals_3();
    int32_t i = 0xffffffff;
    int32_t dstD = a2;

    while (i)
    {
        bool cond_0_1 = 0 != *dstD;
        dstD += 1;
        i -= 1;

        if (!cond_0_1)
            break;
    }

    int32_t objC = ~i;
    void v_80;
    int32_t srcS1;
    int32_t dstD2;
    dstD2 = memcpy(&v_80, dstD - objC, objC & 0xfffffffc);
    memcpy(dstD2, srcS1, objC & 3);
    char* dstD3 = ".bit";
    int32_t i_1 = 0xffffffff;

    while (i_1)
    {
        bool cond_1_1 = 0 != *dstD3;
        dstD3 = &dstD3[1];
        i_1 -= 1;

        if (!cond_1_1)
            break;
    }

    int32_t objC4 = ~i_1;
    void* dstD5 = &v_80;
    int32_t i_2 = 0xffffffff;

    while (i_2)
    {
        bool cond_2_1 = 0 != *dstD5;
        dstD5 += 1;
        i_2 -= 1;

        if (!cond_2_1)
            break;
    }

    int32_t srcS3;
    int32_t dstD7;
    dstD7 = memcpy(dstD5 - 1, dstD3 - objC4, objC4 & 0xfffffffc);
    memcpy(dstD7, srcS3, objC4 & 3);
    void* v_a0 = &v_80;
    int32_t v_88;
    int32_t* valA2 = Resource_Load(&v_88, &v_80, &v_80, &v_88);
    void* dstD8 = &valA2[0x300];
    *(a1 + 0xdcc) = valA2;

    if (v_88 >= 0xc00)
    {
        void* srcS4 = nullptr;

        for (void* i_3 = nullptr; i_3 < 0xc00; )
        {
            *(srcS4 + 0xb81a20) = 1;
            int32_t tmpD1 = *(a1 + 0xdcc);
            int32_t tmpD2 = *(i_3 + tmpD1 + 8);
            v_88 = tmpD2;

            if (tmpD2)
            {
                *(i_3 + tmpD1) = dstD8;
                int32_t valA6 = v_88;
                int32_t valA8;
                int32_t tmpD3;
                tmpD3 = HIGHD(valA6 * valA6);
                valA8 = LOWD(valA6 * valA6);
                dstD8 += (valA8 + (tmpD3 & 7)) >> 3;
            }

            i_3 += 0xc;
            srcS4 += 1;
            *(i_3 + *(a1 + 0xdcc) - 8) = 0;
        }
    }
    else
    {
        void* valA4 = Mem_Alloc(0xc00, 4);
        *(a1 + 0xdcc) = valA4;
        __builtin_memset(valA4, 0, 0xc00);
        __builtin_memset(0xb81a20, 0, 0x100);
    }

    int32_t dstD10 = a2;
    int32_t i_4 = 0xffffffff;

    while (i_4)
    {
        bool cond_4_1 = 0 != *dstD10;
        dstD10 += 1;
        i_4 -= 1;

        if (!cond_4_1)
            break;
    }

    int32_t objC10 = ~i_4;
    int32_t srcS6;
    int32_t dstD12;
    dstD12 = memcpy(&v_80, dstD10 - objC10, objC10 & 0xfffffffc);
    memcpy(dstD12, srcS6, objC10 & 3);
    char* dstD13 = ".hmp";
    int32_t i_5 = 0xffffffff;

    while (i_5)
    {
        bool cond_5_1 = 0 != *dstD13;
        dstD13 = &dstD13[1];
        i_5 -= 1;

        if (!cond_5_1)
            break;
    }

    int32_t objC14 = ~i_5;
    void* dstD15 = &v_80;
    int32_t i_6 = 0xffffffff;

    while (i_6)
    {
        bool cond_6_1 = 0 != *dstD15;
        dstD15 += 1;
        i_6 -= 1;

        if (!cond_6_1)
            break;
    }

    int32_t srcS8;
    int32_t dstD17;
    dstD17 = memcpy(dstD15 - 1, dstD13 - objC14, objC14 & 0xfffffffc);
    memcpy(dstD17, srcS8, objC14 & 3);
    int32_t valA13 = Sys_AllocateMemory_16(&v_80);

    if (!valA13)
        *(a1 + 0xdd0) = 0;
    else
    {
        void* v_a0_1 = &v_80;
        int32_t* valA14 = Resource_Load(valA13, &v_80, &v_88, &v_88);
        *(a1 + 0xdd0) = valA14;
        void* dstD18 = &valA14[0x300];

        if (v_88 >= 0xc00)
        {
            void* srcS9 = nullptr;

            for (int32_t i_7 = 0; i_7 < 0xc00; )
            {
                *(srcS9 + 0xb81920) = 1;
                void** objC21 = *(a1 + 0xdd0) + i_7;
                int32_t tmpD7 = objC21[2];
                v_88 = tmpD7;

                if (tmpD7)
                {
                    *objC21 = dstD18;
                    dstD18 += (v_88 + 1) * (v_88 + 1);
                }

                i_7 += 0xc;
                srcS9 += 1;
                *(*(a1 + 0xdd0) + i_7 - 8) = 0;
            }
        }
        else
        {
            void* valA16 = Mem_Alloc(0xc00, 4);
            *(a1 + 0xdd0) = valA16;
            __builtin_memset(valA16, 0, 0xc00);
            __builtin_memset(0xb81920, 0, 0x100);
        }
    }

    int32_t dstD20 = a2;
    int32_t i_8 = 0xffffffff;

    while (i_8)
    {
        bool cond_11_1 = 0 != *dstD20;
        dstD20 += 1;
        i_8 -= 1;

        if (!cond_11_1)
            break;
    }

    int32_t objC24 = ~i_8;
    int32_t srcS11;
    int32_t dstD22;
    dstD22 = memcpy(&v_80, dstD20 - objC24, objC24 & 0xfffffffc);
    memcpy(dstD22, srcS11, objC24 & 3);
    char* dstD23 = ".cmd";
    int32_t i_9 = 0xffffffff;

    while (i_9)
    {
        bool cond_12_1 = 0 != *dstD23;
        dstD23 = &dstD23[1];
        i_9 -= 1;

        if (!cond_12_1)
            break;
    }

    int32_t objC28 = ~i_9;
    void* dstD25 = &v_80;
    int32_t i_10 = 0xffffffff;

    while (i_10)
    {
        bool cond_13_1 = 0 != *dstD25;
        dstD25 += 1;
        i_10 -= 1;

        if (!cond_13_1)
            break;
    }

    int32_t srcS13;
    int32_t dstD27;
    dstD27 = memcpy(dstD25 - 1, dstD23 - objC28, objC28 & 0xfffffffc);
    void* v_a0_2 = &v_80;
    *(a1 + 8) =
        Resource_Load(&v_80, objC28, memcpy(dstD27, srcS13, objC28 & 3), nullptr);
    int32_t dstD28 = a2;
    int32_t i_11 = 0xffffffff;

    while (i_11)
    {
        bool cond_14_1 = 0 != *dstD28;
        dstD28 += 1;
        i_11 -= 1;

        if (!cond_14_1)
            break;
    }

    int32_t objC34 = ~i_11;
    int32_t srcS15;
    int32_t dstD30;
    dstD30 = memcpy(&v_80, dstD28 - objC34, objC34 & 0xfffffffc);
    memcpy(dstD30, srcS15, objC34 & 3);
    char* dstD31 = ".ctr";
    int32_t i_12 = 0xffffffff;

    while (i_12)
    {
        bool cond_15_1 = 0 != *dstD31;
        dstD31 = &dstD31[1];
        i_12 -= 1;

        if (!cond_15_1)
            break;
    }

    int32_t objC38 = ~i_12;
    void* dstD33 = &v_80;
    int32_t i_13 = 0xffffffff;

    while (i_13)
    {
        bool cond_16_1 = 0 != *dstD33;
        dstD33 += 1;
        i_13 -= 1;

        if (!cond_16_1)
            break;
    }

    int32_t srcS17;
    int32_t dstD35;
    dstD35 = memcpy(dstD33 - 1, dstD31 - objC38, objC38 & 0xfffffffc);
    memcpy(dstD35, srcS17, objC38 & 3);
    void* v_a8 = &v_80;
    int32_t v_84;
    *(a1 + 0xc) = Resource_Load(&v_84, objC38, &v_80, &v_84);
    int32_t dstD36 = a2;
    int32_t i_14 = 0xffffffff;

    while (i_14)
    {
        bool cond_17_1 = 0 != *dstD36;
        dstD36 += 1;
        i_14 -= 1;

        if (!cond_17_1)
            break;
    }

    int32_t objC44 = ~i_14;
    int32_t srcS19;
    int32_t dstD38;
    dstD38 = memcpy(&v_80, dstD36 - objC44, objC44 & 0xfffffffc);
    memcpy(dstD38, srcS19, objC44 & 3);
    char* dstD39 = ".qsc";
    int32_t i_15 = 0xffffffff;

    while (i_15)
    {
        bool cond_18_1 = 0 != *dstD39;
        dstD39 = &dstD39[1];
        i_15 -= 1;

        if (!cond_18_1)
            break;
    }

    int32_t objC48 = ~i_15;
    void* dstD41 = &v_80;
    int32_t i_16 = 0xffffffff;

    while (i_16)
    {
        bool cond_19_1 = 0 != *dstD41;
        dstD41 += 1;
        i_16 -= 1;

        if (!cond_19_1)
            break;
    }

    int32_t srcS21;
    int32_t dstD43;
    dstD43 = memcpy(dstD41 - 1, dstD39 - objC48, objC48 & 0xfffffffc);
    memcpy(dstD43, srcS21, objC48 & 3);
    Game_DefineOptions("CreateTerrainMaterial", CreateTerrainMaterial, 0, 0xe2);
    Game_DefineOptions("CreateTerrainTileMap", Create_TerrainTileMap, 0, 0x41);
    int32_t* valA24 = Qvm_Load(&v_80);
    Qvm_Execute(valA24);
    Qvm_Cleanup(valA24);
    Sys_CloseFileStream_23("CreateTerrainMaterial");
    Sys_CloseFileStream_23("CreateTerrainTileMap");
    uint32_t i_20 = v_84 >> 5;

    if (i_20 > 0)
    {
        int32_t tmpD13 = 0;
        uint32_t i_17;

        do
        {
            int32_t objC53 = *(a1 + 0xc);
            int32_t* objC54 = tmpD13 + objC53 + 0x1c;
            int32_t dstD45 = *(tmpD13 + objC53 + 0x1c) + *(a1 + 8);
            tmpD13 += 0x20;
            i_17 = i_20;
            i_20 -= 1;
            *objC54 = dstD45;
        } while (i_17 != 1);
    }

    *(a1 + 0xdc0) = Mem_Alloc(0x1000, 4);
    *(a1 + 0xdc4) = Mem_Alloc(0x10000, 4);

    for (int32_t i_18 = 0; i_18 < 0x10000; i_18 += 0x100)
    {
        for (int32_t j = 0; j < 0x100; )
        {
            j += 1;
            *(i_18 + *(a1 + 0xdc4) + j - 1) = 0;
        }
    }

    for (int32_t i_19 = 0; i_19 < 0x1000; )
    {
        i_19 += 0x10;
        *(*(a1 + 0xdc0) + i_19 - 0x10) = 0;
    }

    return DynObj_UpdateDynTree_11(a1);
}
