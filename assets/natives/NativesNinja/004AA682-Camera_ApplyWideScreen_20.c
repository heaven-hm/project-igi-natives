#include "004AA682-Camera_ApplyWideScreen_20.h"
/* 0x004aa682 Camera_ApplyWideScreen_20 full linked: callers=1 callees=2 */
void* sub_4aa682(int32_t* a1, int32_t a2)

{
    if (a1 <= 0xffffffe0)
    {
        bool cond:1_1;

        do
        {
            void* result = sub_4aa6ae(a1);

            if (result || a2 == result)
                return result;

            cond:1_1 = sub_4ad722(a1);
        } while (cond:1_1);
    }

    return nullptr;
}
