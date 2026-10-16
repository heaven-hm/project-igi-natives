#include "005253D0-Light_ComputeDirectionalLight_5.h"
/* 0x005253d0 Light_ComputeDirectionalLight_5 full linked: callers=1 callees=1 */
int32_t* sub_5253d0(int32_t* a1)

{
    int32_t* result = a1;
    void* ebx = *result;

    if (ebx)
    {
        result = *(ebx + 0x2c);
        int32_t esi_1 = 0;

        if (result > 0)
        {
            void* edi_1 = ebx + 0x3c;

            do
            {
                sub_525410(edi_1);
                result = *(ebx + 0x2c);
                esi_1 += 1;
                edi_1 += 0x2c;
            } while (esi_1 < result);
        }
    }

    return result;
}
