#include "gi_platform.h"
#include "0041C9D0-AsciiBox_Update.h"
int32_t* AsciiBox_Update(void* a1)

{
    if ((*(int32_t*)(uintptr_t)(a1 + 0xdc)))
    {
        Qhash_Init(1);
        Sys_ExecuteBytecode_2((*(int32_t*)(uintptr_t)(a1 + 0xdc)));
        (*(int32_t*)(uintptr_t)(a1 + 0xdc)) = 0;
        Qhash_Reset();
    }

    int32_t* result = (*(int32_t*)(uintptr_t)(a1 + 0x44));
    (*(int32_t*)(uintptr_t)(a1 + 0xdc)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0xe4)) = 0;

    if (result && (*(int32_t*)(uintptr_t)(a1 + 0xd4)))
    {
        result = QFile_ReadWrite(a1 + 0x94, "r");

        if (result)
        {
            int32_t valA2 = Sys_PushStack_4(result);
            Qhash_Init(1);
            (*(int32_t*)(uintptr_t)(a1 + 0xdc)) = Mem_Alloc(valA2 + 2, 4);
            Qhash_Reset();
            Resource_Unpack(result, (*(int32_t*)(uintptr_t)(a1 + 0xdc)) + 1, valA2);
            Sys_ReadFileBlock_4(result);
            (*(int32_t*)(uintptr_t)(*(a1 + 0xdc) + valA2 + 1)) = 0;
            *(*(int32_t*)(uintptr_t)(a1 + 0xdc)) = 0;
            int32_t v_3c_1 = (*(int32_t*)(uintptr_t)(a1 + 0xd4));
            result =
                Menu_UpdateLanguage_8((*(int32_t*)(uintptr_t)(a1 + 0xd8)), (*(int32_t*)(uintptr_t)(a1 + 0xdc)) + 1, (*(int32_t*)(uintptr_t)(a1 + 0x28)) - 0x1c);
            (*(int32_t*)(uintptr_t)(a1 + 0xe4)) = result;
        }
    }

    int32_t objC5 = (*(int32_t*)(uintptr_t)(a1 + 0xdc));
    (*(int32_t*)(uintptr_t)(a1 + 0xe8)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0xe0)) = objC5 + 1;
    int32_t* i = (*(int32_t*)(uintptr_t)(a1 + 8));

    if (*i && i)
    {
        int32_t objC7 = g_afa7e0;

        do
        {
            int32_t* tmpD4 = *i;
            void* valA12;

            if (!tmpD4)
                valA12 = nullptr;
            else
            {
                int32_t valA9 = *tmpD4;
                int32_t valA10 = -(valA9);
                valA12 = (valA10 - valA10) & tmpD4;
            }

            *((objC7 << 2) + &g_afa6e0) = valA12;
            g_afa7e0 = objC7 + 1;
            int32_t valA13 = Menu_LeaveMenus_14();
            int32_t valA14 = 0;
            valA14 = i[7];
            result = *(((valA13 * 0x180 + valA14) << 2) + &g_a96ae0);

            if (result)
                result = result(i);

            objC7 = g_afa7e0 - 1;
            g_afa7e0 = objC7;
            i = *((objC7 << 2) + &g_afa6e0);
        } while (i);
    }

    return result;
}
