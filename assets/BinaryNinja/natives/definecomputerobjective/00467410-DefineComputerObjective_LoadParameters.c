// Original IGI.EXE function: DefineComputerObjective_LoadParameters (VA 0x00467410; static CFG gate PASS, CFG score 1.000).
#include "DefineComputerObjective_LoadParameters.h"
char DefineComputerObjective_LoadParameters(int80_t a1 @ fp0, void* a2)

{
    char valA = Script_FormatString_6(a2 + 0x20);
    char result;
    int16_t idx;

    if (valA)
    {
        Script_SpawnNewTask_7(a2 + 0x20, a2);
        idx = 1;
        result = a1;
    }

    if (!valA || result)
    {
        g_5bdc78 = a2;
        int32_t* srcS1 = a2 + 0x134;
        int32_t i_1 = 6;
        int32_t i;

        do
        {
            if (!Script_FormatString_6(&srcS1[-0x28]))
                *srcS1 = 0;
            else
            {
                Script_SpawnNewTask_7(&srcS1[-0x28], a2);
🚫🚫🚫                char v_8_2 = /* char v_8_2 =
                    (unimplemented  {fistp qword [esp+0x18], fp0}).b */;
                /* unimplemented  {fistp qword [esp+0x18], fp0} */
                idx += 1;
                *srcS1 = v_8_2;
            }

            result = Script_FormatString_6(&srcS1[-0x14]);

            if (!result)
                srcS1[1] = 0;
            else
            {
                result = Script_SpawnNewTask_7(&srcS1[-0x14], a2);
🚫🚫🚫                char v_8_3 = /* char v_8_3 =
                    (unimplemented  {fistp qword [esp+0x18], fp0}).b */;
                /* unimplemented  {fistp qword [esp+0x18], fp0} */
                idx += 1;
                srcS1[1] = v_8_3;
            }

            srcS1 = &srcS1[0x33];
            i = i_1;
            i_1 -= 1;
        } while (i != 1);
    }

    return result;
}
