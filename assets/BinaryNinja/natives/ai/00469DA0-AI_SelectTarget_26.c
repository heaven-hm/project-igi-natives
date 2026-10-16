#include "AI_SelectTarget_26.h"
int32_t AI_SelectTarget_26(void* a1, int32_t* a2)

{
    void* dstD = g_5bdd98;
    AI_CombatTarget_29();
    int32_t* objC = a2;
    int32_t result = *(a1 + 0x38);

    if (result == *objC)
    {
        AI_CheckHearing_29();
        char valA = AI_UpdateOrders_28();
        char tmpD1 = *(a1 + 0x80);
        char ctxB2 = valA & 0x10;
        int32_t v_20 = 0x3f800000;
        int32_t v_1c_1 = 0x3f800000;
        int32_t v_18_1 = 0;
        *(a1 + 0x81) = tmpD1;
        *(a1 + 0x80) = ctxB2;
        int32_t v_2c_1 = 0;
        int32_t v_28_1 = 0;

        if (ctxB2)
            switch (*(a1 + 0x38) - 3)
            {
                case 0:
                {
                    objC = AI_CheckSector_26(dstD);
                    int32_t v_28_2 = 0x46d55555;
                    break;
                }
                case 1:
                {
                    objC = AI_CheckSector_26(dstD);
                    int32_t v_28_3 = 0xc6d55555;
                    break;
                }
                case 2:
                {
                    objC = AI_CheckSector_26(dstD);
                    int32_t v_2c_2 = 0xc6d55555;
                    break;
                }
                case 3:
                {
                    objC = AI_CheckSector_26(dstD);
                    int32_t v_2c_3 = 0x46d55555;
                    break;
                }
                case 4:
                {
                    if (!*(a1 + 0x81))
                    {
                        if (g_5bdda0 >= 3)
                            objC = Sound_EventTrigger("mapcomp_01", 1, &v_20);
                        else
                        {
                            g_5bdda0 += 1;
                        label_469ec2:
                            AI_AlertAllies_25(*(dstD + 0xa0), 0);
                            AI_TakeCover_24(*(dstD + 0x9c));
                            objC = Sound_EventTrigger("mapcomp_01", 1, &v_20);
                        }
                    }
                    break;
                }
                case 5:
                {
                    if (!*(a1 + 0x81))
                    {
                        if (g_5bdda0)
                        {
                            g_5bdda0 -= 1;
                            goto label_469ec2;
                        }

                        objC = Sound_EventTrigger("mapcomp_01", 1, &v_20);
                    }
                    break;
                }
            }

        int32_t* v_40_6 = objC;
        long double fp0_1;
        bool c1_1;
        bool c2_1;
        fp0_1 = __fptan(*((g_5bdda0 << 2) + &g_53f750));
🚫🚫🚫        /* unimplemented  {fstp fp0, fp0} */
        /* unimplemented  {fstp fp0, fp0} */
🚫🚫🚫        float v_40_7 = /* float v_40_7 = unimplemented  {fstp dword [esp], fp0} */;
        /* unimplemented  {fstp dword [esp], fp0} */
        mapcomp_05(dstD, v_40_7);

        if (*(a1 + 0x38) == 9)
        {
            void* valA8 = AI_CombatTarget_28();

            if (!ctxB2)
                *(valA8 + 0x2c) = 0;
            else
            {
                int32_t objC2 = *(Config_GetActivePlayerProfileRecord() + 0x538);
🚫🚫                /* unimplemented  {fld fp0, dword [flagP+0x1b0]} */
🚫🚫                /* unimplemented  {fld fp0, dword [flagP+0x1b4]} */

                if (!objC2)
🚫🚫                    /* unimplemented  {fchs } */

🚫🚫🚫🚫                /* unimplemented  {fxch fp0, fp1} */
                /* unimplemented  {fxch fp0, fp1} */
🚫🚫                /* unimplemented  {fmul fp0, dword [&g_533a38]} */
                *(valA8 + 0x2c) = 1;
🚫🚫🚫                float v_2c_4 = /* float v_2c_4 = unimplemented  {fstp dword [esp+0x14], fp0} */;
                /* unimplemented  {fstp dword [esp+0x14], fp0} */
🚫🚫                /* unimplemented  {fmul fp0, dword [&g_533a38]} */
🚫🚫🚫                float v_28_4 = /* float v_28_4 = unimplemented  {fstp dword [esp+0x18], fp0} */;
                /* unimplemented  {fstp dword [esp+0x18], fp0} */
                AI_CheckSector_26(dstD);
            }
        }

🚫🚫        /* unimplemented  {fld fp0, dword [dstD+0x70]} */
🚫🚫        /* unimplemented  {fld fp0, qword [&g_533a30]} */
🚫🚫🚫        result = Camera_ApplyPostProcess_5();
        /* unimplemented  {call Camera_ApplyPostProcess_5} */
🚫🚫        /* unimplemented  {fld fp0, fp0} */
🚫🚫        /* unimplemented  {fmul fp0, dword [esp+0x10]} */
        int32_t v_24_1 = 0;
🚫🚫🚫        float v_2c_5 = /* float v_2c_5 = unimplemented  {fstp dword [esp+0xc], fp0} */;
        /* unimplemented  {fstp dword [esp+0xc], fp0} */
🚫🚫        /* unimplemented  {fmul fp0, dword [esp+0x10]} */
🚫🚫        /* unimplemented  {fld fp0, dword [esp+0xc]} */
🚫🚫        /* unimplemented  {fadd qword [&g_5bdd78]} */
🚫🚫🚫        g_5bdd78 = /* g_5bdd78 = unimplemented  {fstp qword [&g_5bdd78], fp0} */;
        /* unimplemented  {fstp qword [&g_5bdd78], fp0} */
🚫🚫        /* unimplemented  {fadd qword [&g_5bdd80]} */
🚫🚫🚫        g_5bdd80 = /* g_5bdd80 = unimplemented  {fstp qword [&g_5bdd80], fp0} */;
        /* unimplemented  {fstp qword [&g_5bdd80], fp0} */
🚫🚫        /* unimplemented  {fld fp0, dword [esp+0x14]} */
🚫🚫        /* unimplemented  {fadd qword [&g_5bdd88]} */
🚫🚫🚫        g_5bdd88 = /* g_5bdd88 = unimplemented  {fstp qword [&g_5bdd88], fp0} */;
        /* unimplemented  {fstp qword [&g_5bdd88], fp0} */
    }

    return result;
}
