// Original IGI.EXE function: PictureBox_Process (VA 0x0041B500; static CFG gate PASS, CFG score 1.000).
#include "PictureBox_Process.h"
char* PictureBox_Process(void* context)

{
    Script_CallNativeHandler_6(context + 0x95c);
    return Script_CallNativeHandler_6(context + 0x9ac);
}
