// Original IGI.EXE function: GenericPhysicsObj_Process (VA 0x0043EC80; static CFG gate PASS, CFG score 0.923).
#include "GenericPhysicsObj_Process.h"
int32_t GenericPhysicsObj_Process(void* context)

{
    memcpy(context + 0x70, context + 0x18c, 0x28);
    void* data_val = DynObj_Missing(context + 0x154);

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
        int32_t source_2;
        int32_t dest_3;
        dest_3 = memcpy(&item_100, dest_1 - entity_1, entity_1 & 0xfffffffc);
        memcpy(dest_3, source_2, entity_1 & 3);
        void* item_124_2 = &item_100;
        Game_DataSymbolLoad(context + 0x154, "** %s **");
    }

    *(context + 0x108) = *(context + 0x180);
    *(context + 0x10c) = *(context + 0x184);
    *(context + 0x110) = *(context + 0x188);
    SoundSys_InitSoundSys_17(context + 0xf0);
    long double fpu7 = *(context + 0x9c);
    long double fpu6 = *(context + 0xa0);
    fpu6 - fpu7;
    long double fpu_val_7_1;

    if (!(*(&((fpu6 < fpu7 ? 1 : 0) << 8 | (FCMP_UO(fpu6, fpu7) ? 1 : 0) << 0xa
            | (fpu6 == fpu7 ? 1 : 0) << 0xe) + 1) & 1))
        fpu_val_7_1 = *(context + 0xa0);
    else
        fpu_val_7_1 = *(context + 0x9c);

    long double fpu_val_6_1 = *(context + 0x98);
    fpu_val_6_1 - fpu_val_7_1;
    long double fpu_val_7_3;

    if (*(&((fpu_val_6_1 < fpu_val_7_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_1, fpu_val_7_1) ? 1 : 0) << 0xa
        | (fpu_val_6_1 == fpu_val_7_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
    {
        long double fpu_val_7_4 = *(context + 0x9c);
        long double fpu_val_6_2 = *(context + 0xa0);
        fpu_val_6_2 - fpu_val_7_4;

        if (!(*(&((fpu_val_6_2 < fpu_val_7_4 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_2, fpu_val_7_4) ? 1 : 0) << 0xa
                | (fpu_val_6_2 == fpu_val_7_4 ? 1 : 0) << 0xe) + 1) & 1))
            fpu_val_7_3 = *(context + 0xa0);
        else
            fpu_val_7_3 = *(context + 0x9c);
    }
    else
        fpu_val_7_3 = *(context + 0x98);

    float item_118_5 = Render_ComputeNormals(*(context + 0x6c)) * fpu_val_7_3;
    return WorldObject_CommitTransform(Level_StartMission_4(), context, context + 0x168, item_118_5);
}
