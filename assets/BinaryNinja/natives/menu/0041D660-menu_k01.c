// IGI native provenance: menu_k01 - 0x0041D660 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0041D660-menu_k01.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "menu_k01.h"
int32_t menu_k01(void* context, int32_t param_2)

{
    char* data_val = context + param_2 + 0x54;

    if (*(context + param_2 + 0x54))
    {
        char i;

        do
        {
            *data_val = data_val[1];
            i = data_val[1];
            data_val = &data_val[1];
        } while (i);
    }

    *(context + 0x1a0) = param_2;
    return SoundSys_AttachLipsync_8("menu_k01", 0, 0);
}
