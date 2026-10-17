// IGI native provenance: PictureBox_Process - 0x0041B500 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0041B500-PictureBox_Process.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "PictureBox_Process.h"
char* PictureBox_Process(void* context)

{
    Script_CallNativeHandler_6(context + 0x95c);
    return Script_CallNativeHandler_6(context + 0x9ac);
}
