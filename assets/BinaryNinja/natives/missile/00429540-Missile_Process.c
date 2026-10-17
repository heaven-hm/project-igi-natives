// Original IGI.EXE function: Missile_Process (VA 0x00429540; static CFG gate PASS, CFG score 0.933).
#include "Missile_Process.h"
int32_t* Missile_Process(void* context)

{
    memcpy(context + 0x18c, context + 0x70, 0x28);
    void* data_val = DynObj_Missing(context + 0x154);
    Script_ParseEnumInt32_17(context);

    if (data_val)
    {
        DynObj_CreateMagicObject_5(context, data_val);
        Script_ParseEnumReal32_28(context, SoundSys_EvaluateTrigger_18(context + 0x154));
    }
    else if (*(context + 0x154) && *(context + 0x155) != 0x2a)
    {
        char* item_118_2 = context + 0x154;
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
        int32_t source_3;
        int32_t dest_3;
        dest_3 = memcpy(&item_100, dest_1 - entity_1, entity_1 & 0xfffffffc);
        memcpy(dest_3, source_3, entity_1 & 3);
        void* item_124_2 = &item_100;
        Game_DataSymbolLoad(context + 0x154, "** %s **");
    }

    *(context + 0x730) = *(context + 0x740);
    *(context + 0x720) = *(context + 0x740);
    long double fpu_val_7_2 = *(context + 0x9c);
    long double fpu6 = *(context + 0xa0);
    fpu6 - fpu_val_7_2;
    long double fpu_val_7_3;

    if (!(*(&((fpu6 < fpu_val_7_2 ? 1 : 0) << 8 | (FCMP_UO(fpu6, fpu_val_7_2) ? 1 : 0) << 0xa
            | (fpu6 == fpu_val_7_2 ? 1 : 0) << 0xe) + 1) & 1))
        fpu_val_7_3 = *(context + 0xa0);
    else
        fpu_val_7_3 = *(context + 0x9c);

    long double fpu_val_6_1 = *(context + 0x98);
    fpu_val_6_1 - fpu_val_7_3;
    long double fpu_val_7_5;

    if (*(&((fpu_val_6_1 < fpu_val_7_3 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_1, fpu_val_7_3) ? 1 : 0) << 0xa
        | (fpu_val_6_1 == fpu_val_7_3 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
    {
        long double fpu_val_7_6 = *(context + 0x9c);
        long double fpu_val_6_2 = *(context + 0xa0);
        fpu_val_6_2 - fpu_val_7_6;

        if (!(*(&((fpu_val_6_2 < fpu_val_7_6 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_2, fpu_val_7_6) ? 1 : 0) << 0xa
                | (fpu_val_6_2 == fpu_val_7_6 ? 1 : 0) << 0xe) + 1) & 1))
            fpu_val_7_5 = *(context + 0xa0);
        else
            fpu_val_7_5 = *(context + 0x9c);
    }
    else
        fpu_val_7_5 = *(context + 0x98);

    float item_118_4 = Render_ComputeNormals(*(context + 0x6c)) * fpu_val_7_5;
    WorldObject_CommitTransform(Level_StartMission_4(), context, context + 0x168, item_118_4);
    int32_t* result = CarGun_ConstructPath(context);
    int32_t* i_1 = *(*(context + 0xe8) + 8);

    if (*i_1 && i_1)
    {
        int32_t entity_6 = g_afa7e0;

        do
        {
            int32_t* temp_1 = *i_1;
            void* data_10;

            if (!temp_1)
                data_10 = nullptr;
            else
            {
                int32_t data_7 = *temp_1;
                int32_t data_8 = -(data_7);
                data_10 = (data_8 - data_8) & temp_1;
            }

            *((entity_6 << 2) + &g_afa6e0) = data_10;
            g_afa7e0 = entity_6 + 1;
            uint32_t data_12 = Script_ParseEnumReal32_8();
            int32_t data_13 = 0;
            data_13 = i_1[7];
            result = *(((data_12 * 0x180 + data_13) << 2) + &g_a96ae0);

            if (result)
                result = result(i_1, 0);

            entity_6 = g_afa7e0 - 1;
            g_afa7e0 = entity_6;
            i_1 = *((entity_6 << 2) + &g_afa6e0);
        } while (i_1);
    }

    return result;
}
