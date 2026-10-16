#include "00525380-LightmapInfo_Update.h"
/* 0x00525380 LightmapInfo_Update full linked: callers=0 callees=1 */
int32_t* sub_525380(void* a1)

{
    int32_t* ebp = *(a1 + 0xdc);
    int32_t* result = ebp[8];

    if (!result)
    {
        result = *(a1 + 0x6c);
        int32_t i = 0;

        if (result[0xf] > 0)
        {
            int32_t* edi_1 = ebp;

            do
            {
                result = sub_5253d0(edi_1);
                i += 1;
                edi_1 = &edi_1[9];
            } while (i < *(*(a1 + 0x6c) + 0x3c));
        }

        ebp[8] = 1;
    }

    return result;
}
