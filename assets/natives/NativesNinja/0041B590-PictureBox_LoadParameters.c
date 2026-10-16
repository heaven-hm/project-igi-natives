#include "0041B590-PictureBox_LoadParameters.h"
/* 0x0041b590 PictureBox_LoadParameters full linked: callers=0 callees=2 */
int32_t* PictureBox_LoadParameters(int80_t a1 @ st0, void* a2)

{
    int32_t* result = sub_4f16c0(a2 + 0x9ac);

    if (result)
    {
        sub_4f16e0(a2 + 0x9ac, a2);
        int32_t ecx_1 = *(a2 + 0x958);
        result = nullptr;

        if (ecx_1 > 0)
        {
            int32_t* edx_1 = a2 + 0x94;

            while (a1 != *edx_1)
            {
                result += 1;
                edx_1 = &edx_1[0x12];

                if (result >= ecx_1)
                    return result;
            }

            *(a2 + 0x954) = result;
        }
    }

    return result;
}
