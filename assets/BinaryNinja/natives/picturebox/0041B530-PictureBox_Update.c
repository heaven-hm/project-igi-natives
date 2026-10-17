// IGI native provenance: PictureBox_Update - 0x0041B530 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0041B530-PictureBox_Update.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "PictureBox_Update.h"
int32_t PictureBox_Update(void* context, int32_t param_2)

{
    Script_Isexists(context + 0x95c, context);
    Script_Isexists(context + 0x9ac, context);
    return (*(((Script_ParseEnumReal32_8() * 0x180 + Menu_PlayMusic_13()) << 2) + &g_a96ae0))(context, param_2);
}
