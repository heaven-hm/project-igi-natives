// IGI native provenance: KnifeStab_Update - 0x0046DFB0 - CFG score 91.7% (PASS; structural only); runtime behavior not verified.
// Evidence: 0046DFB0-KnifeStab_Update.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "KnifeStab_Update.h"
int32_t KnifeStab_Update(int32_t* context, float param_2)

{
    int32_t item_e8;
    memset(&item_e8, 0, 0x14);
    void item_b0;
    Sys_OpenFileStream_12(&item_b0, context[5], param_2);
    float item_94;
    double item_f8 = item_94;
    double item_c8;
    memcpy(&item_c8, context[2], 0x18);
    float item_a0;
    double item_100_1 = item_a0 * 8192.0;
    double item_f8_1 = item_f8 * 8192.0;
    int32_t entity_2 = context[1];
    float item_ac;
    double item_88 = item_c8 + item_ac * 8192.0;
    int32_t temp_2 = *context;
    int32_t item_118_1 = 0xffffffff;
    double* item_11c_1 = &item_e8;
    int32_t item_e4 = 0;
    int32_t item_e0 = entity_2;
    double item_c0;
    double item_80 = item_c0 + item_100_1;
    int32_t item_dc = temp_2;
    int32_t item_d8 = 0x3f800000;
    double item_b8;
    double item_78 = item_b8 + item_f8_1;
    char data_1 = Level_StartMission_2();
    int32_t* item_124 = 1;
    double* item_128 = &item_88;
    void* item_70;
    DynObj_FindSymbol_11(Level_StartMission_4(), &item_70, &item_c8, item_128, item_124, data_1, item_11c_1,
        item_118_1);
    int32_t item_18;

    if (item_18)
    {
        int32_t* item_108;
        memset(&item_108, 0, 0x20);
        item_108 = &item_70;
        *(&item_100_1 + 4) = item_a0;
        void* data_5 = context[8];
        *(&item_f8_1 + 4) = 0;
        item_100_1 = item_ac;
        item_f8_1 = item_94;
        void* item_f0_1 = data_5;
        int32_t item_ec_1 = context[9];
        int32_t item_104_1 = *(data_5 + 0x654);

        if (item_70)
        {
            uint32_t data_9 = Level_LoadLevel_3();
            int32_t temp_5 = 0;
            temp_5 = *(item_70 + 0x1c);

            if (*(((data_9 * 0x180 + temp_5) << 2) + &g_a96ae0))
            {
                int16_t data_11 = AI_UpdateOrders_17();
                temp_5 = *(item_70 + 0x1c);

                if (TaskType_IsDerivedFrom(temp_5, data_11))
                {
                    void* data_14 = *(item_70 + 0x800);

                    if (data_14 && !AI_CheckSector_3(data_14))
                        int32_t item_104_2 = 0x447a0000;
                }

                uint32_t data_17 = Level_LoadLevel_3();
                int32_t temp_6 = 0;
                void* data_18 = item_70;
                temp_6 = *(data_18 + 0x1c);
                (*(((data_17 * 0x180 + temp_6) << 2) + &g_a96ae0))(data_18, &item_108);
                return 1;
            }
        }
    }

    return 0;
}
