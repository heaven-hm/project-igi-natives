// IGI native provenance: AlarmLight_Parsed - 0x0043A450 - CFG score 97.2% (PASS; structural only); runtime behavior not verified.
// Evidence: 0043A450-AlarmLight_Parsed.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AlarmLight_Parsed.h"
int32_t AlarmLight_Parsed(float context, char* param_2)

{
    DynObj_CreateMagicObject_5(context, DynObj_Missing(context + 0x140));
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
    int32_t* data_6 = *(context + 0xe8);
    memcpy(context + 0x70, context + 0x108, 0x28);

    if (data_6)
        QTask_FindType(data_6);

    struct status_msg* data_7 = CarGun_Create(nullptr, context);
    *(context + 0xe8) = data_7;
    Car_GunCreate(data_7, context, context);

    if (!param_2 || !*param_2)
    {
        int32_t* i = *(*(context + 0xe8) + 8);

        if (*i && i)
        {
            int32_t entity_2 = g_afa7e0;

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

                *((entity_2 << 2) + &g_afa6e0) = data_12;
                g_afa7e0 = entity_2 + 1;
                uint32_t data_14 = Script_ParseEnumReal32_8();
                int32_t entity_4 = 0;
                entity_4 = i[7];
                int32_t data_18 = *(((data_14 * 0x180 + entity_4) << 2) + &g_a96ae0);

                if (data_18)
                    data_18(i, 0);

                entity_2 = g_afa7e0 - 1;
                g_afa7e0 = entity_2;
                i = *((entity_2 << 2) + &g_afa6e0);
            } while (i);
        }
    }

    Script_Isexists(context + 0x1a4, context);
    return 0;
}
