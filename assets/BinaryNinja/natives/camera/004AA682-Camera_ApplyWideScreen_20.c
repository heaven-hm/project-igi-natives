#include "Camera_ApplyWideScreen_20.h"
void* Camera_ApplyWideScreen_20(int32_t* a1, int32_t a2)

{
    if (a1 <= 0xffffffe0)
    {
        bool cond_1_1;

        do
        {
            void* result = Camera_ApplyPostProcess_20(a1);

            if (result || a2 == result)
                return result;

            cond_1_1 = Camera_ApplyHandiCam_28(a1);
        } while (cond_1_1);
    }

    return nullptr;
}
