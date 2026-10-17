// Original IGI.EXE function: Camera_ApplyWideScreen_20 (VA 0x004AA682; static CFG gate PASS, CFG score 1.000).
#include "Camera_ApplyWideScreen_20.h"
void* Camera_ApplyWideScreen_20(int32_t* context, int32_t param_2)

{
    if (context <= 0xffffffe0)
    {
        bool flag_1_1;

        do
        {
            void* result = Camera_ApplyPostProcess_20(context);

            if (result || param_2 == result)
                return result;

            flag_1_1 = Camera_ApplyHandiCam_28(context);
        } while (flag_1_1);
    }

    return nullptr;
}
