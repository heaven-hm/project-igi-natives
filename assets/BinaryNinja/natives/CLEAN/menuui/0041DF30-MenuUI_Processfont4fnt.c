// IGI native provenance: MenuUI_Processfont4fnt - 0x0041DF30 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0041DF30-MenuUI_Processfont4fnt.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "MenuUI_Processfont4fnt.h"

int32_t MenuUI_Processfont4fnt(void* arg1, int32_t arg2)

{
    void* eax_1 = Menu_HandleInput_3(*(arg1 + 0x44), "font4.fnt");
    void* base_val = *(arg1 + 0x44);
    int32_t* eax_2 = *(arg1 + 0x9c);

    if (eax_2)
        Sys_ReadFileBlock_18(eax_2);

    int32_t* eax_3 = *(arg1 + 0xa0);

    if (eax_3)
        Sys_ReadFileBlock_18(eax_3);

    if (eax_1)
    {
        *(arg1 + 0x9c) = Sys_OpenFileStream_18(eax_1, 0, 0, Menu_LocalSS(base_val, &data_53b688));
        int32_t** eax_7 = Sys_OpenFileStream_18(eax_1, 0, 0, Menu_LocalSS(base_val, &data_53b684));
        void* ecx_1 = *(arg1 + 0x9c);
        *(arg1 + 0xa0) = eax_7;
        *(ecx_1 + 0x20) = 0;
        *(*(arg1 + 0xa0) + 0x20) = 0;
    }

    Script_Isexists(arg1 + 0xac, arg1);
    Script_Isexists(arg1 + 0xfc, arg1);
    return (*(((Script_ParseEnumReal32_8() * 0x180 + Menu_PlayMusic_13()) << 2) + &g_a96ae0))(arg1,
        arg2);
}
