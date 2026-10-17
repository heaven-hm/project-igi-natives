// Original IGI.EXE function: HumanPlayer_PlaySound_5 (VA 0x0040CD30; static CFG gate PASS, CFG score 1.000).
#include "HumanPlayer_PlaySound_5.h"
int32_t* HumanPlayer_PlaySound_5(void* context, int32_t param_2)

{
    AI_UpdatePatrol_21(context, AI_CheckHearing_21(context));
    AI_AlertAllies_20(context);
    void* data_2 = param_2 - 1;
    *(context + 0x7bc) = 0;

    switch (data_2)
    {
        case nullptr:
        {
            AI_FireWeapon_18(AI_CombatTarget_21(context));
            AI_SelectTarget_20(context);
            return AI_UpdatePatrol_21(context, nullptr);
            break;
        }
        case 1:
        {
            Env_CheckAmbientArea_6(AI_CombatTarget_21(context));
            AI_SelectTarget_20(context);
            return AI_UpdatePatrol_21(context, nullptr);
            break;
        }
        case 2:
        {
            void* data_6 = AI_CombatTarget_21(context);

            if (!Env_InitLadder_9(data_6))
            {
                Env_ScanViewCone_9(data_6);
                HumanPlayer_ApplyRecoil_4(data_6, context);
                AI_SelectTarget_20(context);
                return AI_UpdatePatrol_21(context, nullptr);
            }

            data_2 = Env_InitLadder_9(data_6);

            if (data_2)
            {
                data_2 = Env_TriggerAlarm_9(data_6);

                if (data_2)
                {
                    void* temp_val = *(context + 0x2f0);
                    *(context + 0x2f8) = *(context + 0x2fc);
                    *(context + 0x2fc) = 0x1e;
                    int32_t data_9 = *(temp_val + 0x78);
                    *(context + 0x300) = data_9;
                    return data_9(context + 0x2ec, context);
                }
            }
            break;
        }
        case 3:
        {
            void* entity_1 = *(context + 0x2f0);
            *(context + 0x2f8) = *(context + 0x2fc);
            *(context + 0x2fc) = 0x1f;
            int32_t data_12 = *(entity_1 + 0x7c);
            *(context + 0x300) = data_12;
            return data_12(context + 0x2ec, context);
            break;
        }
        case 4:
        {
            void* data_14 = *(context + 0x2f0);
            *(context + 0x2f8) = *(context + 0x2fc);
            *(context + 0x2fc) = 0x20;
            int32_t data_15 = *(data_14 + 0x80);
            *(context + 0x300) = data_15;
            return data_15(context + 0x2ec, context);
            break;
        }
        case 5:
        {
            void* temp_2 = *(context + 0x2f0);
            *(context + 0x2f8) = *(context + 0x2fc);
            *(context + 0x2fc) = 0x21;
            int32_t data_17 = *(temp_2 + 0x84);
            *(context + 0x300) = data_17;
            return data_17(context + 0x2ec, context);
            break;
        }
        case 6:
        {
            void* entity_3 = *(context + 0x2f0);
            *(context + 0x2f8) = *(context + 0x2fc);
            *(context + 0x2fc) = 0x22;
            int32_t data_20 = *(entity_3 + 0x88);
            *(context + 0x300) = data_20;
            return data_20(context + 0x2ec, context);
            break;
        }
        case 8:
        {
            int32_t data_28 = Vehicle_UpdateCockpit_10(AI_CombatTarget_21(context));

            if (!data_28)
            {
                *(context + 0xd93) = 1;
                return data_28;
            }

            *(context + 0xda0) = 1;
            return data_28;
            break;
        }
        case 9:
        {
            *(context + 0xd78) = 1;
            break;
        }
        case 0xa:
        {
            *(context + 0xd90) = 1;
            break;
        }
        case 0xb:
        {
            void* data_22 = *(context + 0x2f0);
            *(context + 0x2f8) = *(context + 0x2fc);
            *(context + 0x2fc) = 0x23;
            int32_t data_23 = *(data_22 + 0x8c);
            *(context + 0x300) = data_23;
            return data_23(context + 0x2ec, context);
            break;
        }
        case 0xc:
        {
            void* temp_4 = *(context + 0x2f0);
            *(context + 0x2f8) = *(context + 0x2fc);
            *(context + 0x2fc) = 0x24;
            int32_t data_25 = *(temp_4 + 0x90);
            *(context + 0x300) = data_25;
            return data_25(context + 0x2ec, context);
            break;
        }
    }

    return data_2;
}
