// IGI native provenance: MenuUI_ProcessABCDEFGHIJKLMNOP - 0x0041BCA0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0041BCA0-MenuUI_ProcessABCDEFGHIJKLMNOP.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "MenuUI_ProcessABCDEFGHIJKLMNOP.h"

int32_t MenuUI_ProcessABCDEFGHIJKLMNOP(void* arg1, int32_t arg2)

{
    void* eax_1 = Menu_HandleInput_3(*(arg1 + 0x44), arg1 + 0x125c);
    int32_t* eax_2 = *(arg1 + 0x12ac);

    if (eax_2)
    {
        Sys_ReadFileBlock_18(eax_2);
        *(arg1 + 0x12ac) = 0;
    }

    if (eax_1)
    {
        int32_t** eax_3 =
            Sys_OpenFileStream_18(eax_1, 0, 0, "ABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789");
        *(arg1 + 0x12ac) = eax_3;
        eax_3[8] = 0;
        *(arg1 + 0x13f0) = Sys_AllocateMemory_22(*(arg1 + 0x12ac)) + 1;
    }

    void* eax_6 = *(arg1 + 0x13f8);
    int32_t ecx_1 = *(arg1 + 0x28);
    *(arg1 + 0x12a9) = 0;
    *(eax_6 + 0x28) = ecx_1;
    *(*(arg1 + 0x13f8) + 0x2c) = *(arg1 + 0x2c);
    *(*(arg1 + 0x13f8) + 0x20) = *(arg1 + 0x20);
    *(*(arg1 + 0x13f8) + 0x24) = *(arg1 + 0x24);
    Script_Isexists(arg1 + 0x12b0, arg1);
    Script_Isexists(arg1 + 0x1300, arg1);
    Script_Isexists(arg1 + 0x1350, arg1);
    Script_Isexists(arg1 + 0x13a0, arg1);
    void* edi_1 = *(arg1 + 0x13f4);
    uint32_t eax_11 = Script_ParseEnumReal32_8();
    int32_t ecx_5 = 0;
    ecx_5 = *(edi_1 + 0x1c);
    (*(((eax_11 * 0x180 + ecx_5) << 2) + &g_a96ae0))(edi_1, arg2);
    return (*(((Script_ParseEnumReal32_8() * 0x180 + Menu_PlayMusic_13()) << 2) + &g_a96ae0))(arg1,
        arg2);
}
