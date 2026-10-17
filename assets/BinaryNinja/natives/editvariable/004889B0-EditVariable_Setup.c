// Original IGI.EXE function: EditVariable_Setup (VA 0x004889B0; static CFG gate PASS, CFG score 1.000).
#include "EditVariable_Setup.h"
int32_t* EditVariable_Setup(int80_t a1 @ fp0, void* a2)

{
    if (Script_FormatString_6(a2 + 0x38))
    {
        Script_SpawnNewTask_7(a2 + 0x38, a2);
        *(a2 + 0xd8) += a1;
    }

    int32_t* result = Script_FormatString_6(a2 + 0x88);

    if (result)
    {
        Script_SpawnNewTask_7(a2 + 0x88, a2);
🚫🚫🚫        int32_t v_8_2 = /* int32_t v_8_2 = (unimplemented  {fistp qword [esp+0x8], fp0}).d */;
        /* unimplemented  {fistp qword [esp+0x8], fp0} */
        result = *(a2 + 0xd8) - v_8_2;
        *(a2 + 0xd8) = result;
    }

    return result;
}
