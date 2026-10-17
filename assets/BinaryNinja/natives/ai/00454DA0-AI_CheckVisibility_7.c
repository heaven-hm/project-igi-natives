// Original IGI.EXE function: AI_CheckVisibility_7 (VA 0x00454DA0; static CFG gate PASS, CFG score 0.917).
#include "AI_CheckVisibility_7.h"
int32_t* AI_CheckVisibility_7(void* a1)

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
            void* valA7 = *(ctxB + 0x2f0);
            *(ctxB + 0x2f8) = *(ctxB + 0x2fc);
            *(ctxB + 0x2fc) = 0xc;
            int32_t valA8 = *(valA7 + 0x30);
            *(ctxB + 0x300) = valA8;
            valA8(ctxB + 0x2ec, ctxB);
        }

        void* v_50 = ctxB;
        void v_48;
        memcpy(&v_48, ctxB + 0x20, 0x18);
        void v_30;
        memcpy(&v_30, ctxB + 0x534, 0x1c);
        void* v_14_1 = ctxB + 0x1b0;
        void* v_10_1 = ctxB + 0x110;
        int32_t v_c_1 = 0;
        uint32_t valA11 = Level_InitSprites_2();
        int32_t tmpD4 = 0;
        tmpD4 = result[7];
        (*(((valA11 * 0x180 + tmpD4) << 2) + &g_a96ae0))(result, &v_50);
        result = *(ctxB + 0x7bc) + 1;
        *(ctxB + 0x7bc) = result;
    }

    return result;
}
