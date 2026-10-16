#include "HumanPlayer_CheckCollision_9.h"
void** HumanPlayer_CheckCollision_9(void* a1, float a2)

{
    void* objC = *(a1 + 0x4ec);
    int32_t flagP = 0;
    int32_t ctxB = 0;
    int32_t srcS = 0xffffffff;
    int32_t dstD = 0xffffffff;
    float v_8 = 0f;
    float v_10 = 0.400000006f;
    float v_c = 0.400000006f;
    *(a1 + 0xd58) = a2;

    if (!a2)
    {
        *(a1 + 0xd5c) = 0;
        return Collision_Reset(a1, 0f);
    }

    void* result;
    int32_t objC2;
    result = Table_GetAt(a1 + 0x4c4, 0);

    if (result)
    {
        int32_t tmpD;
        result = HumanPlayer_LoadParameters_13(result, tmpD, objC2, result);

        if (a2 - 1 <= 9)
        {
            switch (a2)
            {
                case 1:
                case 9:
                {
                    srcS = *(result + 0x67c);
                    dstD = *(result + 0x694);
                    ctxB = 1;
                    flagP = 1;
                    break;
                }
                case 2:
                {
                    srcS = *(result + 0x680);
                    dstD = *(result + 0x698);
                    ctxB = 1;
                    flagP = 1;
                    break;
                }
                case 3:
                {
                    srcS = *(result + 0x680);
                    dstD = *(result + 0x69c);
                    ctxB = 1;
                    flagP = 1;
                    break;
                }
                case 4:
                {
                    srcS = *(result + 0x67c);
                    dstD = *(result + 0x6a0);
                    ctxB = 1;
                    flagP = 1;
                    break;
                }
                case 5:
                {
                    srcS = *(result + 0x67c);
                    dstD = *(result + 0x6a4);
                    ctxB = 1;
                    flagP = 1;
                    break;
                }
                case 6:
                {
                    srcS = *(result + 0x684);
                    dstD = *(result + 0x6a8);
                    v_10 = 0f;
                    v_c = 0f;
                    long double fp0_1;
                    fp0_1 = Sys_AllocateMemory_14(Level_SetMission_5());
                    v_8 = Render_DrawBoneMesh_5() * fp0_1 * 0.174999997f * 30f;
                    break;
                }
                case 7:
                {
                    srcS = *(result + 0x690);
                    dstD = *(result + 0x6ac);
                    v_10 = 0f;
                    v_c = 0f;
                    break;
                }
                case 8:
                {
                    int32_t objC5 = *(a1 + 0x4e8);

                    if (!objC5)
                    {
                        srcS = *(result + 0x684);
                        dstD = *(result + 0x6a8);
                        v_10 = 0f;
                    }
                    else if (objC5 == 1)
                    {
                        srcS = *(result + 0x688);
                        dstD = *(result + 0x6a8);
                        v_10 = 0f;
                    }
                    else if (objC5 != 2)
                        v_10 = 0f;
                    else
                    {
                        srcS = *(result + 0x68c);
                        dstD = *(result + 0x6a8);
                        v_10 = 0f;
                    }

                    v_c = 0f;
                    break;
                }
                case 0xa:
                {
                    srcS = *(result + 0x67c);
                    dstD = *(result + 0x694);
                    ctxB = 1;
                    v_10 = 0f;
                    flagP = 1;
                    v_c = 0f;
                    break;
                }
            }

            if (srcS != 0xffffffff)
            {
                result = FX_FireBallUpdate_15(a1, srcS, ctxB, v_10);
                long double x87_r7_6 = v_8;
                long double f2_1 = 0f;
                x87_r7_6 - f2_1;
                result = (x87_r7_6 < f2_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_6, f2_1) ? 1 : 0) << 0xa
                    | (x87_r7_6 == f2_1 ? 1 : 0) << 0xe;

                if (!(*(&result + 1) & 0x40))
                    result = Render_BindTexture_10(objC + 0x68, 0, v_8);
            }

            if (dstD != 0xffffffff)
                return FX_TrailUpdate_14(a1, dstD, flagP, v_c);
        }
    }

    return result;
}
