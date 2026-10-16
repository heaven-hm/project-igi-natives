#include "Render_SkinBones_4.h"
char* Render_SkinBones_4(int32_t a1, char* a2, int32_t a3)

{
    g_b12bcc = g_b16c68;
    g_b16c68 = 0;

    if (!*(a1 + 0xdc8))
    {
        int32_t __saved_esi_1 = 0;
        Physics_ApplyImpulse_14(a1);
        *(a1 + 0xdc8) = 1;
    }

    SoundSys_InitSoundSys_4();
    char* result = Render_DrawRigidMesh_13();
    Hazinglayers_OnEvent();

    if (g_bcab38)
    {
        int32_t dstD1 = a3;

        if (dstD1)
            Render_DrawLightmapMesh_4(a1);

        if (*(a1 + 0xc) && dstD1)
        {
            Physics_UpdateForces_14(a1);
            Physics_InterpolateWaypoint_15();
        }

        Render_ClosestZ2F(a1, a2);

        if (*a2)
            Render_ComputeNormals_4(*(a1 + 0xd18));

        if (dstD1)
        {
            int32_t v_28_1 = 0;
            void* v_24_1 = nullptr;
            int64_t* v_30 = &g_bcab08;
            int32_t v_2c_1 = 0;
            DynObj_CreateMagicObject_11(a1, Render_DrawBoneMesh_4(), &v_30, &g_bcab08, 0xffffffff, 5);
            g_a538d4 = v_28_1;
            void v_20;
            memcpy(0xb16c80, &v_20, 0x18);
            g_a538d0 = v_24_1;
            int32_t v_8;
            g_b04264 = v_8;

            if (v_24_1)
            {
                int32_t tmpD1 = 0;
                g_54843c = 0;
                tmpD1 = *(v_24_1 + 0x1c);
                (*((tmpD1 << 2) + &g_a982e0))(v_24_1, 0);
                g_a538cc = 1;
            }

            dstD1 = a3;
        }

        if (!*(a1 + 0xc))
            goto label_4d2795;

        if (dstD1)
        {
            Physics_UpdateForces_14(a1);
            Terrain_UpdateWaterWaves();
        label_4d2795:

            if (dstD1)
                Render_ClipMesh_3(a1);
        }

        int32_t i = 0;
        void** dstD2 = a1 + 0xd1c;

        do
        {
            result = a2;

            if (result[i + 1])
                result = Render_ComputeNormals_4(*dstD2);

            i += 1;
            dstD2 = &dstD2[1];
        } while (i < 8);
    }

    g_a538d4 = 0;
    g_a538d0 = 0;
    g_a538cc = 0;
    g_54843c = 1;
    return result;
}
