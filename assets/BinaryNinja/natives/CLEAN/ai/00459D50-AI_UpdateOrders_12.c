// IGI native provenance: AI_UpdateOrders_12 - 0x00459D50 - CFG score 91.7% (PASS; structural only); runtime behavior not verified.
// Evidence: 00459D50-AI_UpdateOrders_12.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AI_UpdateOrders_12.h"
int32_t* AI_UpdateOrders_12(void* context)

{
    void* context_val = context;
    int32_t* result = Script_ExecuteLevelScript_4(*(context_val + 0xd10));

    if (result)
    {
        AI_UpdatePatrol_21(context_val, result);
        context = nullptr;
        uint32_t data_2 = Level_CheckQTaskID_2();
        int32_t temp_1 = 0;
        temp_1 = result[7];
        int32_t data_3 = *(((data_2 * 0x180 + temp_1) << 2) + &g_a96ae0);

        if (data_3)
            data_3(result, &context);

        void* data_4 = context;

        if (data_4 == 2)
            Env_CheckAmbientArea_6(result);
        else if (data_4 - 2 == 1)
        {
            Env_ScanViewCone_9(result);
            void* data_10 = *(context_val + 0x2f0);
            *(context_val + 0x2f8) = *(context_val + 0x2fc);
            *(context_val + 0x2fc) = 0x25;
            int32_t data_11 = *(data_10 + 0x94);
            *(context_val + 0x300) = data_11;
            data_11(context_val + 0x2ec, context_val);
        }
        else if (data_4 - 3 == 3)
        {
            void* data_8 = *(context_val + 0x2f0);
            *(context_val + 0x2f8) = *(context_val + 0x2fc);
            *(context_val + 0x2fc) = 0x24;
            int32_t data_9 = *(data_8 + 0x90);
            *(context_val + 0x300) = data_9;
            data_9(context_val + 0x2ec, context_val);
        }

        void* item_50 = context_val;
        void item_48;
        memcpy(&item_48, context_val + 0x20, 0x18);
        void item_30;
        memcpy(&item_30, context_val + 0x534, 0x1c);
        void* item_14_1 = context_val + 0x1b0;
        void* item_10_1 = context_val + 0x110;
        int32_t item_c_1 = 0;
        uint32_t data_14 = Level_InitSprites_2();
        int32_t temp_5 = 0;
        temp_5 = result[7];
        (*(((data_14 * 0x180 + temp_5) << 2) + &g_a96ae0))(result, &item_50);
        result = *(context_val + 0x7bc) + 1;
        *(context_val + 0x7bc) = result;
    }

    return result;
}
