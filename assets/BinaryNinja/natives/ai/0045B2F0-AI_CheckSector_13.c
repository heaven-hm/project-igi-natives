// Original IGI.EXE function: AI_CheckSector_13 (VA 0x0045B2F0; static CFG gate PASS, CFG score 1.000).
#include "AI_CheckSector_13.h"
struct status_msg* AI_CheckSector_13(void* a1, float a2)

{
    float dstD = a2;
    void* ctxB = *(a1 + 8);
    float flagP = *(dstD + 0x800);

    if (!(ctxB & 4))
    {
        void* objC1 = *(a1 + 4);
        *(a1 + 0xc) = *(a1 + 0x10);
        *(a1 + 0x10) = 0x1d;
        int32_t valA1 = *(objC1 + 0x74);
        *(a1 + 0x14) = valA1;
        return valA1(a1, dstD);
    }

    if (ctxB & 0x10000)
    {
        void* valA3 = *(a1 + 4);
        *(a1 + 0xc) = *(a1 + 0x10);
        *(a1 + 0x10) = 0x1e;
        int32_t valA4 = *(valA3 + 0x78);
        *(a1 + 0x14) = valA4;
        return valA4(a1, dstD);
    }

    if (ctxB & 0x20000)
    {
        void* tmpD2 = *(a1 + 4);
        *(a1 + 0xc) = *(a1 + 0x10);
        *(a1 + 0x10) = 0x20;
        int32_t valA6 = *(tmpD2 + 0x80);
        *(a1 + 0x14) = valA6;
        return valA6(a1, dstD);
    }

    struct status_msg* result = AI_CheckSector_3(flagP);

    if (result == 1 && *(dstD + 0x538) == 0xb)
    {
        result = Render_DrawSplineMesh_10(dstD + 0x68, 0);

        if (*(dstD + 0x53c) == result)
        {
            result = *(dstD + 0xd18);

            if (!result)
            {
                a2 = Sys_AllocateMemory_14(Level_SetMission_5()) * *(flagP + 0x3d9c) + *(flagP + 0x3d98);
                long double x87_r7_5 = Sys_AllocateMemory_14(Level_SetMission_5()) * *(flagP + 0x3da4);
                void* valA11 = *(dstD + 0x70);
                int32_t v_54_1 = x87_r7_5 * 30f + *(flagP + 0x3da0);
                double v_40 = *(valA11 + 0x858) + *(dstD + 0x20);
                double v_38_1 = *(valA11 + 0x85c) + *(dstD + 0x28);
                double v_30_1 = *(valA11 + 0x860) + *(dstD + 0x30);
                void v_4c;
                void v_28;
                long double fpu0;
                AI_CheckVisibility_4(fpu0, &v_28, &v_4c, flagP, &v_40, a2);
                int32_t* valA12 = HumanPlayer_CheckCollision_10(*(flagP + 0x3e04));
                result = Throwable_Create(Script_FormatString(), dstD, &v_40, &v_28, &v_4c, valA12,
                    v_54_1);
                *(dstD + 0xd18) = 1;
            }
        }
    }

    if (!(ctxB & 1))
        return result;

    if (!(ctxB & 0x2000000))
    {
        int32_t* valA17 = *(a1 + 4);
        *(a1 + 0xc) = *(a1 + 0x10);
        *(a1 + 0x10) = 0;
        int32_t valA18 = *valA17;
        *(a1 + 0x14) = valA18;
        return valA18(a1, dstD);
    }

    void* objC5 = *(a1 + 4);
    *(a1 + 0xc) = *(a1 + 0x10);
    *(a1 + 0x10) = 0xa;
    int32_t valA15 = *(objC5 + 0x28);
    *(a1 + 0x14) = valA15;
    return valA15(a1, dstD);
}
