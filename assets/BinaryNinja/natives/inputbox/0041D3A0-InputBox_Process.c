// IGI native provenance: InputBox_Process - 0x0041D3A0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0041D3A0-InputBox_Process.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "InputBox_Process.h"
int32_t** InputBox_Process(void* context, int32_t param_2)

{
    Script_Isexists(context + 0xa4, context);
    Script_Isexists(context + 0xf4, context);
    Script_Isexists(context + 0x144, context);
    int32_t* data_1 = *(context + 0x19c);

    if (data_1)
    {
        Sys_ReadFileBlock_18(data_1);
        *(context + 0x19c) = 0;
    }

    (*(((Script_ParseEnumReal32_8() * 0x180 + Menu_PlayMusic_13()) << 2) + &g_a96ae0))(context, param_2);
    int32_t** result = Menu_HandleInput_3(*(context + 0x44), "font1.fnt");
    *(context + 0x198) = result;

    if (result)
    {
        result = Sys_OpenFileStream_18(result, 0, 0, &g_567c74);
        *(context + 0x19c) = result;
    }

    return result;
}
