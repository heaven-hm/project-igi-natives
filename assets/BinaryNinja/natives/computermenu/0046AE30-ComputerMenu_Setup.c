#include "ComputerMenu_Setup.h"
int32_t ComputerMenu_Setup(int32_t a1)

{
    AI_CombatTarget_29();
    int32_t objC = g_c28b48;
    int32_t v_30 = objC;
    int32_t v_34 = objC;
    int32_t result =
        Sys_CloseFileStream_14(0f, 0f, g_c28b44, objC, 0f, 127f, 0f, 0xc0040000, 0xffffffff, 0x44079eb8);
    int32_t* i = *(a1 + 8);

    if (*i && i)
    {
        int32_t objC1 = g_afa7e0;

        do
        {
            int32_t* tmpD1 = *i;
            void* valA4;

            if (!tmpD1)
                valA4 = nullptr;
            else
            {
                int32_t valA1 = *tmpD1;
                int32_t valA2 = -(valA1);
                valA4 = (valA2 - valA2) & tmpD1;
            }

            *((objC1 << 2) + &g_afa6e0) = valA4;
            g_afa7e0 = objC1 + 1;
            int32_t valA5 = StatusScreen_GetEvent();
            int32_t valA6 = 0;
            valA6 = i[7];
            result = *(((valA5 * 0x180 + valA6) << 2) + &g_a96ae0);

            if (result)
                result = result(i);

            objC1 = g_afa7e0 - 1;
            g_afa7e0 = objC1;
            i = *((objC1 << 2) + &g_afa6e0);
        } while (i);
    }

    result = *(a1 + 0x2c);

    if (result)
        return result;

    return Sys_AllocateMemory_15(0x5bddc8, *(a1 + 0x24) - Sys_CloseFileStream_17(0x5bddc8) * 0.5f,
        *(a1 + 0x28) - Sys_ExecuteBytecode_17(0x5bddc8) * 0.5f, 128f, 128f, 128f, 0x3f800000, 0x44001eb8, 0,
        0x400c0000, 0xffffffff);
}
