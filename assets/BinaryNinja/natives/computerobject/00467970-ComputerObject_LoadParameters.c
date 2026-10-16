#include "ComputerObject_LoadParameters.h"
int32_t* ComputerObject_LoadParameters(void* a1)

{
    void* valA1 = SoundSys_Update3DPosition_12(AI_CheckVisibility_29());
    void* v_2c = valA1 + 0x28;
    void* v_28 = valA1;
    int32_t* result = 0xffffffff;
    int32_t v_10 = 0xffffffff;
    int32_t v_c = 0xffffffff;
    result = *(a1 + 0x20);
    int32_t i = 0;
    int32_t v_24 = *(valA1 + 0x40);
    int32_t v_14 = 0;
    int32_t v_20 = 0;
    int32_t v_18 = 0;
    int32_t v_8 = 0;
    int32_t v_4 = 0;

    if (result & 1)
    {
        result = AI_CombatTarget_18();

        if (*result > 0)
        {
            int32_t srcS1 = 8;

            do
            {
                int32_t objC1 = 0;
                objC1 = *(*(AI_CombatTarget_18() + srcS1) + 0x1c);
                uint32_t valA5 = AI_CheckHearing_25();
                (*(((objC1 + valA5 * 0x180) << 2) + &g_a96ae0))(*(AI_CombatTarget_18() + srcS1),
                    &v_2c);
                i += 1;
                srcS1 += 4;
                result = AI_CombatTarget_18();
            } while (i < *result);
        }
    }

    if (*(a1 + 0x20) & 2)
    {
        int32_t i_1 = 0;
        result = Level_InitSprites_4();

        if (*result > 0)
        {
            int32_t srcS2 = 8;

            do
            {
                int32_t valA8 = 0;
                valA8 = *(*(Level_InitSprites_4() + srcS2) + 0x1c);
                uint32_t valA10 = AI_CheckHearing_25();
                (*(((valA8 + valA10 * 0x180) << 2) + &g_a96ae0))(
                    *(Level_InitSprites_4() + srcS2), &v_2c);
                i_1 += 1;
                srcS2 += 4;
                result = Level_InitSprites_4();
            } while (i_1 < *result);
        }
    }

    if (*(a1 + 0x20) & 4)
    {
        int32_t i_2 = 0;
        result = AI_CheckSector_25();

        if (*result > 0)
        {
            int32_t srcS3 = 8;

            do
            {
                int32_t tmpD4 = 0;
                tmpD4 = *(*(AI_CheckSector_25() + srcS3) + 0x1c);
                uint32_t valA15 = AI_CheckHearing_25();
                (*(((tmpD4 + valA15 * 0x180) << 2) + &g_a96ae0))(*(AI_CheckSector_25() + srcS3),
                    &v_2c);
                i_2 += 1;
                srcS3 += 4;
                result = AI_CheckSector_25();
            } while (i_2 < *result);
        }
    }

    if (*(a1 + 0x20) & 8)
    {
        result = AI_SelectTarget_27();

        if (result >= 1)
        {
            int32_t i_3 = 0;

            if (*Env_ActivateEntity_2() > 0)
            {
                int32_t srcS4 = 8;
                int32_t* valA25;

                do
                {
                    int32_t objC6 = 0;
                    objC6 = *(*(Env_ActivateEntity_2() + srcS4) + 0x1c);
                    uint32_t valA23 = AI_CheckHearing_25();
                    (*(((objC6 + valA23 * 0x180) << 2) + &g_a96ae0))(*(Env_ActivateEntity_2() + srcS4),
                        &v_2c);
                    i_3 += 1;
                    srcS4 += 4;
                    valA25 = Env_ActivateEntity_2();
                } while (i_3 < *valA25);
            }

            result = AI_UpdateOrders_27();
            void* objC8 = result[0x29];

            if (objC8)
            {
                uint32_t valA27 = AI_FireWeapon_25();
                int32_t valA28 = 0;
                valA28 = *(objC8 + 0x1c);
                result = (*(((valA27 * 0x180 + valA28) << 2) + &g_a96ae0))(objC8, &v_2c);
            }
        }
    }

    if (*(a1 + 0x20) & 0x10)
    {
        int32_t i_4 = 0;

        if (*Level_LoadLevel_4() > 0)
        {
            int32_t ctxB = 8;
            int32_t* valA37;

            do
            {
                int32_t valA32 = 0;
                valA32 = *(*(Level_LoadLevel_4() + ctxB) + 0x1c);
                int32_t srcS8 = *(((valA32 + AI_CheckHearing_25() * 0x180) << 2) + &g_a96ae0);

                if (srcS8)
                    srcS8(*(Level_LoadLevel_4() + ctxB), &v_2c);

                i_4 += 1;
                ctxB += 4;
                valA37 = Level_LoadLevel_4();
            } while (i_4 < *valA37);
        }

        int32_t i_5 = 0;
        result = AI_CheckHearing_30();

        if (*result > 0)
        {
            int32_t srcS9 = 8;

            do
            {
                int32_t tmpD12 = 0;
                tmpD12 = *(*(AI_CheckHearing_30() + srcS9) + 0x1c);
                uint32_t valA40 = AI_CheckHearing_25();
                (*(((tmpD12 + valA40 * 0x180) << 2) + &g_a96ae0))(*(AI_CheckHearing_30() + srcS9),
                    &v_2c);
                i_5 += 1;
                srcS9 += 4;
                result = AI_CheckHearing_30();
            } while (i_5 < *result);
        }
    }

    return result;
}
