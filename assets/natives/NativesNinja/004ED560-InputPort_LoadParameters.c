#include "004ED560-InputPort_LoadParameters.h"
/* 0x004ed560 InputPort_LoadParameters full linked: callers=0 callees=4 */
int16_t* sub_4ed560(int32_t a1)

{
    sub_490230();
    sub_48fc20();
    sub_509cf0();
    int32_t edi = 0;
    int16_t* result;

    for (int32_t* i = &g_bc20f0; i < 0xbc23b0; )
    {
        result = i[-0x14];

        if (result)
        {
            g_a5ef9c = edi;
            result = sub_507ec0(i, a1);
        }

        i = &i[0x2c];
        edi += 1;
    }

    return result;
}
