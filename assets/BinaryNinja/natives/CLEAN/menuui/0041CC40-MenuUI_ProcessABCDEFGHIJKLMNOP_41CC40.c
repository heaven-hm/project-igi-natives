// IGI native provenance: MenuUI_ProcessABCDEFGHIJKLMNOP_41CC40 - 0x0041CC40 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0041CC40-MenuUI_ProcessABCDEFGHIJKLMNOP_41CC40.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "MenuUI_ProcessABCDEFGHIJKLMNOP_41CC40.h"

int32_t MenuUI_ProcessABCDEFGHIJKLMNOP_41CC40(void* arg1, int32_t arg2)

{
    int32_t* result_val = *(arg1 + 0xd8);

    if (result_val)
    {
        Sys_ReadFileBlock_18(result_val);
        *(arg1 + 0xd8) = 0;
    }

    void* eax_1 = *(arg1 + 0x44);

    if (eax_1)
    {
        void* eax_2 = Menu_HandleInput_3(eax_1, arg1 + 0x54);
        *(arg1 + 0xd4) = eax_2;

        if (eax_2)
        {
            int32_t** eax_3 = Sys_OpenFileStream_18(eax_2, 0, 0, &g_script_ret_type);
            *(arg1 + 0xd8) = eax_3;
            eax_3[8] = 0;
            Sys_FreeMemory_18(*(arg1 + 0xd8),
                "ABCDEFGHIJKLMNOPQRSTUVWXYZ_abcdefghijklmnopqrstuvwxyz");
            *(arg1 + 0xec) = Sys_AllocateMemory_22(*(arg1 + 0xd8)) + 2;
        }
    }

    AsciiBox_Update(arg1);
    void* dest_ptr = *(arg1 + 0xf4);
    uint32_t eax_8 = Script_ParseEnumReal32_8();
    int32_t edx_2 = 0;
    edx_2 = *(dest_ptr + 0x1c);
    (*(((eax_8 * 0x180 + edx_2) << 2) + &g_a96ae0))(dest_ptr, arg2);
    return (*(((Script_ParseEnumReal32_8() * 0x180 + Menu_PlayMusic_13()) << 2) + &g_a96ae0))(arg1,
        arg2);
}
