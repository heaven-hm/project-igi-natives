#include "004637C0-AI_MoveToNode_21.h"
/* 0x004637c0 AI_MoveToNode_21 full linked: callers=13 callees=11 */
uint32_t sub_4637c0(void* a1, int32_t a2, int32_t a3)

{
    void* edi = nullptr;
    uint32_t result = Frames_GetUpdateCounter();

    if (result >= *(a1 + 0x844))
    {
        int32_t* eax = *(a1 + 0x840);

        if (eax)
        {
            edi = *eax;

            if (edi)
                sub_4e6c00(edi);

            Qtask_UpdateList(*(a1 + 0x840));
            *(a1 + 0x840) = 0;
        }

        *(a1 + 0x844) =
            0x1e - sub_4b4770(Level_SetMission_5()) * -30f + Frames_GetUpdateCounter();
        int32_t var_40_1 = sub_4b47c0(Level_SetMission_5(), a3) + 1;
        int32_t var_44_1 = a2;
        char var_20[0x20];
        Game_DataSymbolLoad(&var_20, "%s%d");
        result = sub_4e6b00(*(a1 + 0x4ec), &var_20);

        if (edi)
        {
            result = QTask_LinkEventHandler_2(edi);
            *(a1 + 0x840) = result;
        }
    }

    return result;
}
