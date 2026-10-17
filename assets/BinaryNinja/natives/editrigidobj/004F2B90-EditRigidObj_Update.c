// IGI native provenance: EditRigidObj_Update - 0x004F2B90 - CFG score 97.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004F2B90-EditRigidObj_Update.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "EditRigidObj_Update.h"
float* EditRigidObj_Update(float context)

{
    uint32_t context_val = context;
    *(context_val + 0xa8) = *(context_val + 0x140);
    *(context_val + 0xac) = *(context_val + 0x144);
    *(context_val + 0xb0) = *(context_val + 0x148);
    *(context_val + 0xb4) = *(context_val + 0x14c);
    *(context_val + 0xb8) = *(context_val + 0x150);
    *(context_val + 0xbc) = *(context_val + 0x154);
    memcpy(context_val + 0x70, context_val + 0x108, 0x28);
    void* data_4 = DynObj_Missing(context_val + 0x130);

    if (data_4)
        DynObj_CreateMagicObject_5(context_val, data_4);

    long double fpu7 = *(context_val + 0x9c);
    long double fpu6 = *(context_val + 0xa0);
    fpu6 - fpu7;
    long double fpu_val_7_1;

    if (!(*(&((fpu6 < fpu7 ? 1 : 0) << 8 | (FCMP_UO(fpu6, fpu7) ? 1 : 0) << 0xa
            | (fpu6 == fpu7 ? 1 : 0) << 0xe) + 1) & 1))
        fpu_val_7_1 = *(context_val + 0xa0);
    else
        fpu_val_7_1 = *(context_val + 0x9c);

    long double fpu_val_6_1 = *(context_val + 0x98);
    fpu_val_6_1 - fpu_val_7_1;
    long double fpu_val_7_3;

    if (*(&((fpu_val_6_1 < fpu_val_7_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_1, fpu_val_7_1) ? 1 : 0) << 0xa
        | (fpu_val_6_1 == fpu_val_7_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
    {
        long double fpu_val_7_4 = *(context_val + 0x9c);
        long double fpu_val_6_2 = *(context_val + 0xa0);
        fpu_val_6_2 - fpu_val_7_4;

        if (!(*(&((fpu_val_6_2 < fpu_val_7_4 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_2, fpu_val_7_4) ? 1 : 0) << 0xa
                | (fpu_val_6_2 == fpu_val_7_4 ? 1 : 0) << 0xe) + 1) & 1))
            fpu_val_7_3 = *(context_val + 0xa0);
        else
            fpu_val_7_3 = *(context_val + 0x9c);
    }
    else
        fpu_val_7_3 = *(context_val + 0x98);

    long double fpu_val_7_6 = Render_ComputeNormals(*(context_val + 0x6c)) * fpu_val_7_3;
    WorldObject_CommitTransform(*(context_val + 0x68), context_val, context_val + 0xf0, fpu_val_7_6);
    Render_BindTexture_14(*(context_val + 0x68), context_val, context_val + 0xf0);
    int32_t* data_7 = *(context_val + 0xe8);

    if (data_7)
        QTask_FindType(data_7);

    struct status_msg* data_8 = CarGun_Create(nullptr, context_val);
    *(context_val + 0xe8) = data_8;
    Car_GunCreate(data_8, context_val, context_val);
    int32_t* i = *(*(context_val + 0xe8) + 8);

    if (*i && i)
    {
        int32_t entity_4 = g_afa7e0;

        do
        {
            int32_t* temp_5 = *i;
            void* data_13;

            if (!temp_5)
                data_13 = nullptr;
            else
            {
                int32_t data_10 = *temp_5;
                int32_t data_11 = -(data_10);
                data_13 = (data_11 - data_11) & temp_5;
            }

            *((entity_4 << 2) + &g_afa6e0) = data_13;
            g_afa7e0 = entity_4 + 1;
            uint32_t data_15 = Script_ParseEnumReal32_8();
            int32_t temp_6 = 0;
            temp_6 = i[7];
            int32_t data_16 = *(((data_15 * 0x180 + temp_6) << 2) + &g_a96ae0);

            if (data_16)
                data_16(i, 0);

            entity_4 = g_afa7e0 - 1;
            g_afa7e0 = entity_4;
            i = *((entity_4 << 2) + &g_afa6e0);
        } while (i);
    }

    return Script_ParseEnumString_13(context_val);
}
