// IGI native provenance: Plane_Update - 0x00434770 - CFG score 94.4% (PASS; structural only); runtime behavior not verified.
// Evidence: 00434770-Plane_Update.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Plane_Update.h"
int32_t Plane_Update(float context)

{
    void* data_val = DynObj_Missing(context + 0x154);
    Script_ParseEnumInt32_17(context);

    if (data_val)
    {
        DynObj_CreateMagicObject_5(context, data_val);
        Script_ParseEnumReal32_28(context, SoundSys_EvaluateTrigger_18(context + 0x154));
        Vehicle_UpdateRudder_3(context);
    }
    else if (*(context + 0x154) && *(context + 0x155) != 0x2a)
    {
        char* item_124_2 = context + 0x154;
        void item_80;
        Game_DataSymbolLoad(&item_80, "Model "%s" not available");
        char* dest_1 = context + 0x154;
        int32_t i = 0xffffffff;

        while (i)
        {
            bool flag_0_1 = 0 != *dest_1;
            dest_1 = &dest_1[1];
            i -= 1;

            if (!flag_0_1)
                break;
        }

        int32_t entity_1 = ~i;
        void item_100;
        int32_t source_2;
        int32_t dest_3;
        dest_3 = memcpy(&item_100, dest_1 - entity_1, entity_1 & 0xfffffffc);
        memcpy(dest_3, source_2, entity_1 & 3);
        void* item_130_2 = &item_100;
        Game_DataSymbolLoad(context + 0x154, "** %s **");
    }

    *(context + 0x730) = *(context + 0x740);
    float item_110 = *(context + 0x740);
    long double fpu_val_7_2 = *(context + 0x180);
    long double f0 = 0.0f;
    fpu_val_7_2 - f0;
    *(context + 0x720) = item_110;
    void* data_7;
    float* entity_5;

    if (!(*(&((fpu_val_7_2 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_2, f0) ? 1 : 0) << 0xa
        | (fpu_val_7_2 == f0 ? 1 : 0) << 0xe) + 1) & 0x40))
    {
    label_4348c6:
        data_7 = context + 0xf0;
        entity_5 = data_7 + 0x18;
        *(data_7 + 0x18) = *(context + 0x180);
        entity_5[1] = *(context + 0x184);
        entity_5[2] = *(context + 0x188);
        SoundSys_InitSoundSys_17(data_7);
    }
    else
    {
        long double fpu_val_7_3 = *(context + 0x184);
        long double f1_1 = 0.0f;
        fpu_val_7_3 - f1_1;

        if (!(*(&((fpu_val_7_3 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_3, f1_1) ? 1 : 0) << 0xa
                | (fpu_val_7_3 == f1_1 ? 1 : 0) << 0xe) + 1) & 0x40))
            goto label_4348c6;

        long double fpu_val_7_4 = *(context + 0x188);
        long double f2_1 = 0.0f;
        fpu_val_7_4 - f2_1;

        if (!(*(&((fpu_val_7_4 < f2_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_4, f2_1) ? 1 : 0) << 0xa
                | (fpu_val_7_4 == f2_1 ? 1 : 0) << 0xe) + 1) & 0x40))
            goto label_4348c6;

        float data_5 = *(context + 0x1b4);

        if (data_5)
        {
            data_7 = context + 0xf0;
            long double fpu_val_7_7 = item_110 * **(data_5 + 0x2d4) * 30.3407402f;
            entity_5 = data_7 + 0x18;
            float item_108_1 = fpu_val_7_7 * *(context + 0x80);
            long double fpu_val_7_8 = fpu_val_7_7 * *(context + 0x8c);
            *entity_5 = fpu_val_7_7 * *(context + 0x74);
            entity_5[1] = item_108_1;
            entity_5[2] = fpu_val_7_8;
            SoundSys_InitSoundSys_17(data_7);
        }
    }
    long double fpu_val_7_9 = *(context + 0x9c);
    long double fpu_val_6_5 = *(context + 0xa0);
    fpu_val_6_5 - fpu_val_7_9;
    long double fpu_val_7_10;

    if (!(*(&((fpu_val_6_5 < fpu_val_7_9 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_5, fpu_val_7_9) ? 1 : 0) << 0xa
            | (fpu_val_6_5 == fpu_val_7_9 ? 1 : 0) << 0xe) + 1) & 1))
        fpu_val_7_10 = *(context + 0xa0);
    else
        fpu_val_7_10 = *(context + 0x9c);

    long double fpu_val_6_6 = *(context + 0x98);
    fpu_val_6_6 - fpu_val_7_10;
    long double fpu_val_7_12;

    if (*(&((fpu_val_6_6 < fpu_val_7_10 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_6, fpu_val_7_10) ? 1 : 0) << 0xa
        | (fpu_val_6_6 == fpu_val_7_10 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
    {
        long double fpu_val_7_13 = *(context + 0x9c);
        long double fpu_val_6_7 = *(context + 0xa0);
        fpu_val_6_7 - fpu_val_7_13;

        if (!(*(&((fpu_val_6_7 < fpu_val_7_13 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_6_7, fpu_val_7_13) ? 1 : 0) << 0xa
                | (fpu_val_6_7 == fpu_val_7_13 ? 1 : 0) << 0xe) + 1) & 1))
            fpu_val_7_12 = *(context + 0xa0);
        else
            fpu_val_7_12 = *(context + 0x9c);
    }
    else
        fpu_val_7_12 = *(context + 0x98);

    float item_124_5 = Render_ComputeNormals(*(context + 0x6c)) * fpu_val_7_12;
    WorldObject_CommitTransform(Level_StartMission_4(), context, context + 0x168, item_124_5);
    memcpy(context + 0x70, context + 0x18c, 0x28);
    CarGun_ConstructPath(context);
    int32_t* i_1 = *(*(context + 0xe8) + 8);

    if (*i_1 && i_1)
    {
        int32_t entity_7 = g_afa7e0;

        do
        {
            int32_t* temp_7 = *i_1;
            void* data_14;

            if (!temp_7)
                data_14 = nullptr;
            else
            {
                int32_t data_11 = *temp_7;
                int32_t data_12 = -(data_11);
                data_14 = (data_12 - data_12) & temp_7;
            }

            *((entity_7 << 2) + &g_afa6e0) = data_14;
            g_afa7e0 = entity_7 + 1;
            uint32_t data_16 = Script_ParseEnumReal32_8();
            int32_t entity_9 = 0;
            entity_9 = i_1[7];
            int32_t data_20 = *(((data_16 * 0x180 + entity_9) << 2) + &g_a96ae0);

            if (data_20)
                data_20(i_1, 0);

            entity_7 = g_afa7e0 - 1;
            g_afa7e0 = entity_7;
            i_1 = *((entity_7 << 2) + &g_afa6e0);
        } while (i_1);
    }

    Script_Isexists(context + 0x838, context);
    return 0;
}
