// IGI native provenance: Train_Setup - 0x0042A150 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0042A150-Train_Setup.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Train_Setup.h"
int32_t Train_Setup(void* context, char* param_2)

{
    int32_t source_val;

    if (!param_2 || !*param_2)
        source_val = 0;
    else
        source_val = 1;

    *(context + 0x768) = *(context + 0x76c);
    DynObj_CreateMagicObject_5(context, DynObj_Missing(context + 0x780));
    float item_18;
    WeaponType_RegisterType_2(&item_18, context, 0);
    float item_c;
    WeaponType_RegisterType_2(&item_c, context, 1);
    long double fpu_val_7_1 = item_18 - item_c;
    long double f0 = 0.0f;
    fpu_val_7_1 - f0;

    if (*(&((fpu_val_7_1 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_1, f0) ? 1 : 0) << 0xa
            | (fpu_val_7_1 == f0 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
        fpu_val_7_1 = -(fpu_val_7_1);

    *(context + 0x74c) = fpu_val_7_1;
    long double fpu6 = item_18;
    long double f1 = 0.0f;
    fpu6 - f1;
    long double fpu_val_6_1 = item_18;

    if (*(&((fpu6 < f1 ? 1 : 0) << 8 | (FCMP_UO(fpu6, f1) ? 1 : 0) << 0xa
            | (fpu6 == f1 ? 1 : 0) << 0xe | 0x3000) + 1) & 1)
        fpu_val_6_1 = -(fpu_val_6_1);

    *(context + 0x748) = fpu_val_6_1 / fpu_val_7_1;
    Script_ParseEnumReal32_28(context, nullptr);
    Script_CallNativeHandler_16(context);
    Script_ParseEnumInt32_17(context);
    CarGun_ConstructPath(context);
    void* data_4 = *(context + 0x14);
    void* item_2c_2;

    if (*(data_4 + 0x1c) == g_57bcb8)
        item_2c_2 = data_4;
    else
        item_2c_2 = context;

    Menu_LeaveMenus_21(item_2c_2, source_val);
    int32_t* i = *(*(context + 0xe8) + 8);

    if (*i && i)
    {
        int32_t entity_3 = g_afa7e0;

        do
        {
            int32_t* temp_1 = *i;
            void* data_8;

            if (!temp_1)
                data_8 = nullptr;
            else
            {
                int32_t data_5 = *temp_1;
                int32_t data_6 = -(data_5);
                data_8 = (data_6 - data_6) & temp_1;
            }

            *((entity_3 << 2) + &g_afa6e0) = data_8;
            g_afa7e0 = entity_3 + 1;
            uint32_t data_10 = Script_ParseEnumReal32_8();
            int32_t entity_5 = 0;
            entity_5 = i[7];
            int32_t data_14 = *(((data_10 * 0x180 + entity_5) << 2) + &g_a96ae0);

            if (data_14)
                data_14(i, param_2);

            entity_3 = g_afa7e0 - 1;
            g_afa7e0 = entity_3;
            i = *((entity_3 << 2) + &g_afa6e0);
        } while (i);
    }

    Script_Isexists(context + 0x890, context);
    return 0;
}
