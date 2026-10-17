// IGI native provenance: Render_SkinBones_4 - 0x004D2650 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004D2650-Render_SkinBones_4.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Render_SkinBones_4.h"
char* Render_SkinBones_4(int32_t context, char* param_2, int32_t param_3)

{
    g_b12bcc = g_b16c68;
    g_b16c68 = 0;

    if (!*(context + 0xdc8))
    {
        int32_t saved_esi_1 = 0;
        Physics_ApplyImpulse_14(context);
        *(context + 0xdc8) = 1;
    }

    SoundSys_InitSoundSys_4();
    char* result = Render_DrawRigidMesh_13();
    Hazinglayers_OnEvent();

    if (g_bcab38)
    {
        int32_t dest_1 = param_3;

        if (dest_1)
            Render_DrawLightmapMesh_4(context);

        if (*(context + 0xc) && dest_1)
        {
            Physics_UpdateForces_14(context);
            Physics_InterpolateWaypoint_15();
        }

        Render_ClosestZ2F(context, param_2);

        if (*param_2)
            Render_ComputeNormals_4(*(context + 0xd18));

        if (dest_1)
        {
            int32_t item_28_1 = 0;
            void* item_24_1 = nullptr;
            int64_t* item_30 = &g_bcab08;
            int32_t item_2c_1 = 0;
            DynObj_CreateMagicObject_11(context, Render_DrawBoneMesh_4(), &item_30, &g_bcab08, 0xffffffff, 5);
            g_a538d4 = item_28_1;
            void item_20;
            memcpy(0xb16c80, &item_20, 0x18);
            g_a538d0 = item_24_1;
            int32_t item_8;
            g_b04264 = item_8;

            if (item_24_1)
            {
                int32_t temp_1 = 0;
                g_54843c = 0;
                temp_1 = *(item_24_1 + 0x1c);
                (*((temp_1 << 2) + &g_a982e0))(item_24_1, 0);
                g_a538cc = 1;
            }

            dest_1 = param_3;
        }

        if (!*(context + 0xc))
            goto label_4d2795;

        if (dest_1)
        {
            Physics_UpdateForces_14(context);
            Terrain_UpdateWaterWaves();
        label_4d2795:

            if (dest_1)
                Render_ClipMesh_3(context);
        }

        int32_t i = 0;
        void** dest_2 = context + 0xd1c;

        do
        {
            result = param_2;

            if (result[i + 1])
                result = Render_ComputeNormals_4(*dest_2);

            i += 1;
            dest_2 = &dest_2[1];
        } while (i < 8);
    }

    g_a538d4 = 0;
    g_a538d0 = 0;
    g_a538cc = 0;
    g_54843c = 1;
    return result;
}
