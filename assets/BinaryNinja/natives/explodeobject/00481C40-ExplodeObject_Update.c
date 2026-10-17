// Original IGI.EXE function: ExplodeObject_Update (VA 0x00481C40; static CFG gate PASS, CFG score 0.907).
#include "ExplodeObject_Update.h"
float* ExplodeObject_Update(void* context)

{
    void* data_val = DynObj_Missing(context + 0x170);
    void* data_2 = DynObj_Missing(context + 0x180);
    void item_100;
    void item_80;

    if (!data_val)
    {
        if (*(context + 0x170) && *(context + 0x171) != 0x2a)
        {
            char* item_11c_1 = context + 0x170;
            Game_DataSymbolLoad(&item_80, "Model "%s" not available");
            char* dest_1 = context + 0x170;
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
            int32_t source_2;
            int32_t dest_3;
            dest_3 = memcpy(&item_100, dest_1 - entity_1, entity_1 & 0xfffffffc);
            memcpy(dest_3, source_2, entity_1 & 3);
            void* item_128_1 = &item_100;
            Game_DataSymbolLoad(context + 0x170, "** %s **");
        }

        if (!data_2)
            goto label_481ce9;
    }
    else if (!data_2)
    {
    label_481ce9:
        void* dest_4 = context + 0x180;

        if (*(context + 0x180) && *(context + 0x181) != 0x2a)
        {
            void* item_11c_2 = dest_4;
            Game_DataSymbolLoad(&item_80, "Model "%s" not available");
            int32_t i_1 = 0xffffffff;

            while (i_1)
            {
                bool flag_2_1 = 0 != *dest_4;
                dest_4 += 1;
                i_1 -= 1;

                if (!flag_2_1)
                    break;
            }

            int32_t entity_5 = ~i_1;
            int32_t source_4;
            int32_t dest_6;
            dest_6 = memcpy(&item_100, dest_4 - entity_5, entity_5 & 0xfffffffc);
            memcpy(dest_6, source_4, entity_5 & 3);
            void* item_128_2 = &item_100;
            Game_DataSymbolLoad(context + 0x180, "** %s **");
        }
    }
    DynObj_CreateMagicObject_5(context, data_val);
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

    long double fpu_val_7_6 = Render_ComputeNormals(*(context + 0x6c)) * fpu_val_7_3;
    WorldObject_CommitTransform(*(context + 0x68), context, context + 0xf0, fpu_val_7_6);
    double* data_10 = DynObj_UpdateDynTree_4(context);
    Render_BindTexture_14(*(context + 0x68), context, data_10);
    int32_t temp_2 = *(context + 0x204);
    memcpy(context + 0x70, context + 0x108, 0x28);
    int32_t entity_10 = *(context + 0x1f0);
    *(context + 0x1e4) = 0;
    *(context + 0x190) = 0;
    *(context + 0x1e8) = 0;
    *(context + 0x1f4) = 0xffffffff;
    *(context + 0x1ec) = entity_10;
    *(context + 0x200) = temp_2;
    Script_Isexists(context + 0x194, context);
    return Env_CheckAmbientArea_7(context);
}
