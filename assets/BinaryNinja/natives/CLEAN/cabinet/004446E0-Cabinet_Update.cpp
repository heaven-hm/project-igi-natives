// IGI native provenance: Cabinet_Update - 0x004446E0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004446E0-Cabinet_Update.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Cabinet_Update.h"
char* Cabinet_Update(float context, char* param_2)

{
    DynObj_CreateMagicObject_5(context, DynObj_Missing(context + 0x10c));
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
    double* data_5 = DynObj_UpdateDynTree_4(context);
    Render_BindTexture_14(*(context + 0x68), context, data_5);
    Sys_DispatchOpcode_12(context + 0x70, *(context + 0x108));
    int32_t* data_7 = *(context + 0xe8);

    if (data_7)
        QTask_FindType(data_7);

    struct status_msg* data_8 = CarGun_Create(nullptr, context);
    *(context + 0xe8) = data_8;
    Car_GunCreate(data_8, context, context);
    char* result = param_2;

    if (!result || !*result)
    {
        int32_t* i = *(*(context + 0xe8) + 8);

        if (*i && i)
        {
            int32_t entity_3 = g_afa7e0;

            do
            {
                int32_t* temp_2 = *i;
                void* data_12;

                if (!temp_2)
                    data_12 = nullptr;
                else
                {
                    int32_t data_9 = *temp_2;
                    int32_t data_10 = -(data_9);
                    data_12 = (data_10 - data_10) & temp_2;
                }

                *((entity_3 << 2) + &g_afa6e0) = data_12;
                g_afa7e0 = entity_3 + 1;
                uint32_t data_14 = Script_ParseEnumReal32_8();
                int32_t data_15 = 0;
                data_15 = i[7];
                result = *(((data_14 * 0x180 + data_15) << 2) + &g_a96ae0);

                if (result)
                    result = result(i, 0);

                entity_3 = g_afa7e0 - 1;
                g_afa7e0 = entity_3;
                i = *((entity_3 << 2) + &g_afa6e0);
            } while (i);
        }
    }

    return result;
}
