// IGI native provenance: MenuButton_Process - 0x00421550 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00421550-MenuButton_Process.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "MenuButton_Process.h"
int32_t MenuButton_Process(void* context, int32_t param_2)

{
    void* data_val = *(context + 0x44);

    if (data_val)
    {
        void* data_1 = Menu_DrawWidget_3(data_val, context + 0x54);
        *(context + 0x94) = data_1;

        if (!data_1)
        {
            *(context + 0x28) = 0;
            *(context + 0x2c) = 0;
        }
        else
        {
            *(context + 0x28) = Sys_CloseFileStream_17(data_1);
            *(context + 0x2c) = Sys_ExecuteBytecode_17(data_1);
        }
    }

    return (*(((Script_ParseEnumReal32_8() * 0x180 + Menu_PlayMusic_13()) << 2) + &g_a96ae0))(context, param_2);
}
