// IGI native provenance: AI_SelectTarget_26 - 0x00469DA0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00469DA0-AI_SelectTarget_26.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AI_SelectTarget_26.h"
int32_t AI_SelectTarget_26(void* context, int32_t* param_2)

{
    void* dest_val = g_5bdd98;
    AI_CombatTarget_29();
    int32_t* entity_val = param_2;
    int32_t result = *(context + 0x38);

    if (result == *entity_val)
    {
        AI_CheckHearing_29();
        char data_val = AI_UpdateOrders_28();
        char temp_1 = *(context + 0x80);
        char context_2 = data_val & 0x10;
        int32_t item_20 = 0x3f800000;
        int32_t item_1c_1 = 0x3f800000;
        int32_t item_18_1 = 0;
        *(context + 0x81) = temp_1;
        *(context + 0x80) = context_2;
        int32_t item_2c_1 = 0;
        int32_t item_28_1 = 0;

        if (context_2)
            switch (*(context + 0x38) - 3)
            {
                case 0:
                {
                    entity_val = AI_CheckSector_26(dest_val);
                    int32_t item_28_2 = 0x46d55555;
                    break;
                }
                case 1:
                {
                    entity_val = AI_CheckSector_26(dest_val);
                    int32_t item_28_3 = 0xc6d55555;
                    break;
                }
                case 2:
                {
                    entity_val = AI_CheckSector_26(dest_val);
                    int32_t item_2c_2 = 0xc6d55555;
                    break;
                }
                case 3:
                {
                    entity_val = AI_CheckSector_26(dest_val);
                    int32_t item_2c_3 = 0x46d55555;
                    break;
                }
                case 4:
                {
                    if (!*(context + 0x81))
                    {
                        if (g_5bdda0 >= 3)
                            entity_val = Sound_EventTrigger("mapcomp_01", 1, &item_20);
                        else
                        {
                            g_5bdda0 += 1;
                        label_469ec2:
                            AI_AlertAllies_25(*(dest_val + 0xa0), 0);
                            AI_TakeCover_24(*(dest_val + 0x9c));
                            entity_val = Sound_EventTrigger("mapcomp_01", 1, &item_20);
                        }
                    }
                    break;
                }
                case 5:
                {
                    if (!*(context + 0x81))
                    {
                        if (g_5bdda0)
                        {
                            g_5bdda0 -= 1;
                            goto label_469ec2;
                        }

                        entity_val = Sound_EventTrigger("mapcomp_01", 1, &item_20);
                    }
                    break;
                }
            }

        int32_t* item_40_6 = entity_val;
        long double fp0_1;
        bool c1_1;
        bool c2_1;
        fp0_1 = __fptan(*((g_5bdda0 << 2) + &g_53f750));
🚫🚫🚫        /* unimplemented  {fstp fp0, fp0} */
        /* unimplemented  {fstp fp0, fp0} */
🚫🚫🚫        float item_40_7 = /* float item_40_7 = unimplemented  {fstp dword [stack_ptr], fp0} */;
        /* unimplemented  {fstp dword [stack_ptr], fp0} */
        mapcomp_05(dest_val, item_40_7);

        if (*(context + 0x38) == 9)
        {
            void* data_8 = AI_CombatTarget_28();

            if (!context_2)
                *(data_8 + 0x2c) = 0;
            else
            {
                int32_t entity_2 = *(Config_GetActivePlayerProfileRecord() + 0x538);
🚫🚫                /* unimplemented  {fld fp0, dword [flagP+0x1b0]} */
🚫🚫                /* unimplemented  {fld fp0, dword [flagP+0x1b4]} */

                if (!entity_2)
🚫🚫                    /* unimplemented  {fchs } */

🚫🚫🚫🚫                /* unimplemented  {fxch fp0, fp1} */
                /* unimplemented  {fxch fp0, fp1} */
🚫🚫                /* unimplemented  {fmul fp0, dword [&g_533a38]} */
                *(data_8 + 0x2c) = 1;
🚫🚫🚫                float item_2c_4 = /* float item_2c_4 = unimplemented  {fstp dword [stack_ptr+0x14], fp0} */;
                /* unimplemented  {fstp dword [stack_ptr+0x14], fp0} */
🚫🚫                /* unimplemented  {fmul fp0, dword [&g_533a38]} */
🚫🚫🚫                float item_28_4 = /* float item_28_4 = unimplemented  {fstp dword [stack_ptr+0x18], fp0} */;
                /* unimplemented  {fstp dword [stack_ptr+0x18], fp0} */
                AI_CheckSector_26(dest_val);
            }
        }

🚫🚫        /* unimplemented  {fld fp0, dword [dest_val+0x70]} */
🚫🚫        /* unimplemented  {fld fp0, qword [&g_533a30]} */
🚫🚫🚫        result = Camera_ApplyPostProcess_5();
        /* unimplemented  {call Camera_ApplyPostProcess_5} */
🚫🚫        /* unimplemented  {fld fp0, fp0} */
🚫🚫        /* unimplemented  {fmul fp0, dword [stack_ptr+0x10]} */
        int32_t item_24_1 = 0;
🚫🚫🚫        float item_2c_5 = /* float item_2c_5 = unimplemented  {fstp dword [stack_ptr+0xc], fp0} */;
        /* unimplemented  {fstp dword [stack_ptr+0xc], fp0} */
🚫🚫        /* unimplemented  {fmul fp0, dword [stack_ptr+0x10]} */
🚫🚫        /* unimplemented  {fld fp0, dword [stack_ptr+0xc]} */
🚫🚫        /* unimplemented  {fadd qword [&g_5bdd78]} */
🚫🚫🚫        g_5bdd78 = /* g_5bdd78 = unimplemented  {fstp qword [&g_5bdd78], fp0} */;
        /* unimplemented  {fstp qword [&g_5bdd78], fp0} */
🚫🚫        /* unimplemented  {fadd qword [&g_5bdd80]} */
🚫🚫🚫        g_5bdd80 = /* g_5bdd80 = unimplemented  {fstp qword [&g_5bdd80], fp0} */;
        /* unimplemented  {fstp qword [&g_5bdd80], fp0} */
🚫🚫        /* unimplemented  {fld fp0, dword [stack_ptr+0x14]} */
🚫🚫        /* unimplemented  {fadd qword [&g_5bdd88]} */
🚫🚫🚫        g_5bdd88 = /* g_5bdd88 = unimplemented  {fstp qword [&g_5bdd88], fp0} */;
        /* unimplemented  {fstp qword [&g_5bdd88], fp0} */
    }

    return result;
}
