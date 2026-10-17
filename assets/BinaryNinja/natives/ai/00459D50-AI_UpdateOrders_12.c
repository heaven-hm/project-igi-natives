// Original IGI.EXE function: AI_UpdateOrders_12 (VA 0x00459D50; static CFG gate PASS, CFG score 0.917).
#include "AI_UpdateOrders_12.h"
int32_t* AI_UpdateOrders_12(void* a1)

{
    void* ctxB = a1;
    int32_t* result = Script_ExecuteLevelScript_4(*(ctxB + 0xd10));

    if (result)
    {
        AI_UpdatePatrol_21(ctxB, result);
        a1 = nullptr;
        uint32_t valA2 = Level_CheckQTaskID_2();
        int32_t tmpD1 = 0;
        tmpD1 = result[7];
        int32_t valA3 = *(((valA2 * 0x180 + tmpD1) << 2) + &g_a96ae0);

        if (valA3)
            valA3(result, &a1);

        void* valA4 = a1;

        if (valA4 == 2)
            Env_CheckAmbientArea_6(result);
        else if (valA4 - 2 == 1)
        {
            Env_ScanViewCone_9(result);
            void* valA10 = *(ctxB + 0x2f0);
            *(ctxB + 0x2f8) = *(ctxB + 0x2fc);
            *(ctxB + 0x2fc) = 0x25;
            int32_t valA11 = *(valA10 + 0x94);
            *(ctxB + 0x300) = valA11;
            valA11(ctxB + 0x2ec, ctxB);
        }
        else if (valA4 - 3 == 3)
        {
            void* valA8 = *(ctxB + 0x2f0);
            *(ctxB + 0x2f8) = *(ctxB + 0x2fc);
            *(ctxB + 0x2fc) = 0x24;
            int32_t valA9 = *(valA8 + 0x90);
            *(ctxB + 0x300) = valA9;
            valA9(ctxB + 0x2ec, ctxB);
        }

        void* v_50 = ctxB;
        void v_48;
        memcpy(&v_48, ctxB + 0x20, 0x18);
        void v_30;
        memcpy(&v_30, ctxB + 0x534, 0x1c);
        void* v_14_1 = ctxB + 0x1b0;
        void* v_10_1 = ctxB + 0x110;
        int32_t v_c_1 = 0;
        uint32_t valA14 = Level_InitSprites_2();
        int32_t tmpD5 = 0;
        tmpD5 = result[7];
        (*(((valA14 * 0x180 + tmpD5) << 2) + &g_a96ae0))(result, &v_50);
        result = *(ctxB + 0x7bc) + 1;
        *(ctxB + 0x7bc) = result;
    }

    return result;
}
