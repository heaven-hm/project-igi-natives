// IGI native provenance: ControlsMenu_Process - 0x004232B0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004232B0-ControlsMenu_Process.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "ControlsMenu_Process.h"
int32_t* ControlsMenu_Process(void* context, int32_t param_2)

{
    int32_t i_1 = 0x1b;
    (*((Menu_PlayMusic_13() << 2) + &g_a96ae0))(context, param_2);
    *(context + 0x20) = 0x12c;
    *(context + 0x24) = 0xe6;
    *(context + 0x28) = 0x168;
    *(context + 0x2c) = 0xc8;
    *(context + 0x3c) = 1;
    *(context + 0x40) = 1;
    int32_t* data_3 = context + 0x154;
    int32_t i;

    do
    {
        data_3[-0x40] = 0;
        *data_3 = 0;
        data_3 = &data_3[1];
        i = i_1;
        i_1 -= 1;
    } while (i != 1);
    *(context + 0x354) = 0;
    *(context + 0x358) = 0;
    *(context + 0x35c) = 0xffffffff;
    *(context + 0x359) = 0;
    *(context + 0x35a) = 0;
    return Sys_ResolveSymbol_13(0x57bc48);
}
