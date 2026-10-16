#include "004F6C00-RainDynCubeObj_LoadParameters.h"
/* 0x004f6c00 RainDynCubeObj_LoadParameters full linked: callers=0 callees=4 */
int32_t* sub_4f6c00(void* a1)

{
    *(a1 + 0x2c40) = 0;
    *(a1 + 0x2c3c) = 0x407f4000;
    *(a1 + 0x2c44) = 0x407f4000;
    *(a1 + 0x2ca8) = 0;
    __builtin_memset(a1 + 0x2c08, 0, 0x34);
    *(a1 + 0x2c84) = 0;
    *(a1 + 0x2cb0) = 0;
    *(a1 + 0x2cac) = 0;
    *(a1 + 0x2c74) = 0;
    *(a1 + 0x2c78) = 0;
    *(a1 + 0x2c54) = 0;
    *(a1 + 0x2c58) = 0;
    *(a1 + 0x2c5c) = 0;
    *(a1 + 0x2c98) = 0x41700000;
    *(a1 + 0x2c9c) = 0x3e800000;
    *(a1 + 0x2ca0) = 0x3f000000;
    *(a1 + 0x2c6c) = 0xbe4ccccd;
    *(a1 + 0x2c70) = 0x3dcccccd;
    *(a1 + 0x2ca4) = 0x3f800000;
    *(a1 + 0x2cb4) = 1;
    *(a1 + 0x2ba8) = 0;
    *(a1 + 0x2bac) = 0x10;
    *(a1 + 0x2bb0) = 0x3f800000;
    *(a1 + 0x2bb4) = 0x3f800000;
    *(a1 + 0x2bb8) = 0;
    *(a1 + 0x2ba0) = sub_497450("gen_32");
    *(a1 + 0x2ba4) = sub_497410("gen_32");
    *(a1 + 0x2d0c) = 0;
    sub_4f1320(a1 + 0x2cb8);
    *(a1 + 0x4288) = 0;
    int32_t ecx = 0;
    int32_t* i;

    for (i = &g_a76ca4; i < &g_a76cc4; )
    {
        if (!*i)
        {
            *((ecx << 2) + &g_a76ca4) = a1;
            return i;
        }

        i = &i[1];
        ecx += 1;
    }

    return i;
}
