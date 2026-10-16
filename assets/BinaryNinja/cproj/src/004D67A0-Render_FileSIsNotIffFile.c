#include "gi_platform.h"
#include "004D67A0-Render_FileSIsNotIffFile.h"
int32_t Render_FileSIsNotIffFile(int32_t* a1)

{
    int32_t* saved_frame = a1;
    int32_t valA;
    void* objC;
    int32_t tmpD;
    int32_t* dstD = Terrain_SampleHeightmap_6(Resource_Load(valA, tmpD, objC, nullptr));

    if (!dstD)
    {
        int32_t* saved_obj = a1;
        return Warning_Show("File %s is not IFF file.");
    }

    void** valA4 = Terrain_BuildMipMaps_5(dstD, 0x424f424a);

    if (!valA4)
    {
        int32_t* __saved_ebx_1 = a1;
        return Warning_Show("IFF File %s is not of correct type.");
    }

    void** valA6 = Terrain_BuildMipMaps_5(valA4, 0x424f4248);
    int32_t* valA8 = Terrain_RenderWaterSurface_6(Terrain_SelectTerrainLOD_6(valA6, 0x424f5348));
    int32_t* ctxB = *valA8;
    int32_t flagP = valA8[1];

    if (flagP <= 0)
        Terrain_RenderQuadtree_6(valA6, 0x424f4248);
    else
    {
        int32_t ctxB2 = ctxB * 0xc;
        *(ctxB2 + &g_a542f0) = flagP;
        int32_t flagP2 = flagP * 0xc;
        *(ctxB2 + &g_a542f4) = Mem_Alloc(flagP << 2, 4);
        *(ctxB2 + 0xa542f8) = Mem_Alloc(flagP2, 4);
        void** valA12 = Terrain_SelectTerrainLOD_6(valA6, 0x504c5354);
        void** valA13 = Terrain_SelectTerrainLOD_6(valA6, 0x544c5354);
        int32_t valA14 = Terrain_RenderWaterSurface_6(valA12);
        int32_t objC1 = flagP << 2;
        int32_t srcS3;
        int32_t dstD3;
        dstD3 = memcpy(*(ctxB2 + &g_a542f4), valA14, objC1 & 0xfffffffc);
        memcpy(dstD3, srcS3, objC1 & 3);
        int32_t valA17 = Terrain_RenderWaterSurface_6(valA13);
        int32_t srcS5;
        int32_t dstD5;
        dstD5 = memcpy(*(ctxB2 + 0xa542f8), valA17, flagP2 & 0xfffffffc);
        memcpy(dstD5, srcS5, flagP2 & 3);
        void** valA19 = Terrain_RenderQuadtree_6(valA6, 0x424f414c);
        Terrain_RenderQuadtree_6(valA19, 0x424f4248);
        void** valA20 = Terrain_SelectTerrainLOD_6(valA19, 0x42414c48);
        int32_t* valA21 = Terrain_RenderWaterSurface_6(valA20);
        int32_t objC9 = *valA21;
        int32_t srcS7 = valA21[1];
        int32_t ctxB5 = ctxB * 0x28;
        *(ctxB5 + 0xa53914) = srcS7;
        int32_t srcS8 = srcS7 << 2;
        *(ctxB5 + &g_a538f0) = Mem_Alloc(srcS7 * 0x14, 4);
        void* valA23 = Mem_Alloc(srcS8, 4);
        *(ctxB5 + &g_a538f4) = valA23;
        __builtin_memset(__builtin_memset(valA23, 0, srcS8 & 0xfffffffc), 0, srcS8 & 3);
        void** dstD8 = valA20;

        if (objC9 > 0)
        {
            int32_t v_2c_2 = objC9;
            int32_t srcS10 = flagP << 4;
            int32_t v_24_1 = srcS10;

            while (true)
            {
                dstD8 = Terrain_RenderQuadtree_6(dstD8, 0x424f414e);
                void** v_34_1 = dstD8;
                int32_t* valA27 = Terrain_RenderWaterSurface_6(Terrain_SelectTerrainLOD_6(dstD8, 0x424f4148));
                int32_t tmpD6 = *valA27;
                int32_t valA28 = valA27[1];
                int32_t flagP4 = valA27[2];
                *(*(ctxB5 + &g_a538f4) + (flagP4 << 2)) = *(ctxB5 + &g_a538f0) + flagP4 * 0x14;
                **(*(ctxB5 + &g_a538f4) + (flagP4 << 2)) = tmpD6;
                *(*(*(ctxB5 + &g_a538f4) + (flagP4 << 2)) + 4) = valA28;
                *(*(*(ctxB5 + &g_a538f4) + (flagP4 << 2)) + 8) = Mem_Alloc(8, 4);
                *(*(*(ctxB5 + &g_a538f4) + (flagP4 << 2)) + 0xc) = Mem_Alloc(srcS10, 4);
                *(*(*(ctxB5 + &g_a538f4) + (flagP4 << 2)) + 0x10) = 0;
                void** valA32 = Terrain_SelectTerrainLOD_6(dstD8, 0x424f5448);
                int32_t srcS11 = *Terrain_RenderWaterSurface_6(valA32);
                **(*(*(ctxB5 + &g_a538f4) + (flagP4 << 2)) + 8) = srcS11;
                void** valA44;

                if (srcS11 <= 0)
                    valA44 = valA32;
                else
                {
                    void** valA35 = Terrain_SelectTerrainLOD_6(dstD8, 0x424f5444);
                    int32_t objC26;
                    int32_t srcS12;
                    int32_t dstD10;

                    if (srcS11 <= 1)
                    {
                        int32_t srcS13 = srcS11 << 4;
                        *(*(*(*(ctxB5 + &g_a538f4) + (flagP4 << 2)) + 8) + 4) =
                            Mem_Alloc(srcS13, 4);
                        srcS12 = Terrain_RenderWaterSurface_6(valA35);
                        dstD10 = *(*(*(*(ctxB5 + &g_a538f4) + (flagP4 << 2)) + 8) + 4);
                        objC26 = srcS13;
                    }
                    else
                    {
                        int32_t valA37 = srcS11 * 0x28;
                        *(*(*(*(ctxB5 + &g_a538f4) + (flagP4 << 2)) + 8) + 4) =
                            Mem_Alloc(valA37, 4);
                        srcS12 = Terrain_RenderWaterSurface_6(valA35);
                        dstD10 = *(*(*(*(ctxB5 + &g_a538f4) + (flagP4 << 2)) + 8) + 4);
                        objC26 = valA37;
                    }

                    valA44 = valA35;
                    int32_t srcS14;
                    int32_t dstD11;
                    dstD11 = memcpy(dstD10, srcS12, objC26 & 0xfffffffc);
                    memcpy(dstD11, srcS14, objC26 & 3);
                    dstD8 = v_34_1;
                }

                if (flagP > 0)
                {
                    int32_t dstD12 = 0;
                    int32_t v_30_4 = flagP;
                    int32_t v_38_2 = 0;

                    while (true)
                    {
                        int32_t* valA45 = Terrain_UpdateWaterWaves_6(valA44, 0x424f5248);
                        int32_t srcS15 = *Terrain_RenderWaterSurface_6(valA45);
                        *(*(*(*(ctxB5 + &g_a538f4) + (flagP4 << 2)) + 0xc) + dstD12) = srcS15;

                        if (srcS15 <= 1)
                            *(*(*(*(ctxB5 + &g_a538f4) + (flagP4 << 2)) + 0xc) + dstD12 + 4) =
                                Mem_Alloc(srcS15 * 0x14, 4);
                        else
                            *(*(*(*(ctxB5 + &g_a538f4) + (flagP4 << 2)) + 0xc) + dstD12 + 4) =
                                Mem_Alloc(srcS15 * 0x34, 4);

                        *(*(*(*(ctxB5 + &g_a538f4) + (flagP4 << 2)) + 0xc) + dstD12 + 8) = 0;
                        *(*(*(*(ctxB5 + &g_a538f4) + (flagP4 << 2)) + 0xc) + dstD12 + 0xc) = 0;
                        int32_t* valA55 = Terrain_UpdateWaterWaves_6(valA45, 0x424f5244);
                        int32_t objC49;
                        int32_t srcS19;
                        int32_t dstD14;

                        if (srcS15 <= 1)
                        {
                            int32_t srcS21 = srcS15 * 0x14;
                            int32_t valA59 = Terrain_RenderWaterSurface_6(valA55);
                            dstD14 = memcpy(
                                *(*(*(*(ctxB5 + &g_a538f4) + (flagP4 << 2)) + 0xc) + dstD12 + 4),
                                valA59, srcS21 & 0xfffffffc);
                            objC49 = srcS21;
                        }
                        else
                        {
                            int32_t srcS17 = srcS15 * 0x34;
                            int32_t valA56 = Terrain_RenderWaterSurface_6(valA55);
                            dstD14 = memcpy(
                                *(*(*(*(ctxB5 + &g_a538f4) + (flagP4 << 2)) + 0xc) + dstD12 + 4),
                                valA56, srcS17 & 0xfffffffc);
                            objC49 = srcS17;
                        }

                        valA44 = valA55;
                        memcpy(dstD14, srcS19, objC49 & 3);
                        v_38_2 += 0x10;
                        bool cond_7_1 = v_30_4 != 1;
                        v_30_4 -= 1;

                        if (!cond_7_1)
                            break;

                        dstD12 = v_38_2;
                    }

                    dstD8 = v_34_1;
                }

                int32_t srcS23 = *Terrain_RenderWaterSurface_6(Terrain_SelectTerrainLOD_6(dstD8, 0x424f4548));

                if (srcS23 > 0)
                {
                    *(*(*(ctxB5 + &g_a538f4) + (flagP4 << 2)) + 0x10) = Mem_Alloc(8, 4);
                    int32_t valA66 = srcS23 * 0x18;
                    **(*(*(ctxB5 + &g_a538f4) + (flagP4 << 2)) + 0x10) = srcS23;
                    *(*(*(*(ctxB5 + &g_a538f4) + (flagP4 << 2)) + 0x10) + 4) =
                        Mem_Alloc(valA66, 4);
                    int32_t valA69 = Terrain_RenderWaterSurface_6(Terrain_SelectTerrainLOD_6(dstD8, 0x424f4544));
                    int32_t srcS25;
                    int32_t dstD17;
                    dstD17 = memcpy(
                        *(*(*(*(ctxB5 + &g_a538f4) + (flagP4 << 2)) + 0x10) + 4), valA69,
                        valA66 & 0xfffffffc);
                    memcpy(dstD17, srcS25, valA66 & 3);
                    dstD8 = v_34_1;
                }

                bool cond_4_1 = v_2c_2 != 1;
                v_2c_2 -= 1;

                if (!cond_4_1)
                    break;

                srcS10 = v_24_1;
            }
        }
    }

    Render_DrawSplineMesh_11(ctxB);
    Terrain_CalculateNormals_5(dstD);
    return Resource_Unload(a1);
}
