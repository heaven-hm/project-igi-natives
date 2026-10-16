#include "Light_SampleLightmap_2.h"
int32_t Light_SampleLightmap_2(void* a1)

{
    void* dstD = a1;

    if (*(dstD + 0x38))
    {
        int32_t i = 0;

        if (*(dstD + 0x2c) > 0)
        {
            a1 = nullptr;

            do
            {
                int32_t* srcS2 = a1 + *(dstD + 0x38);
                Sys_ExecuteBytecode_2(srcS2[6]);
                Sys_ExecuteBytecode_2(srcS2[5]);
                Sys_ExecuteBytecode_2(srcS2[1]);
                Sys_ExecuteBytecode_2(*srcS2);
                void* objC2 = srcS2[9];
                __builtin_memset(srcS2, 0, 0x1c);
                Sys_ExecuteBytecode_2(objC2);
                void* tmpD3 = srcS2[4];
                srcS2[9] = 0;
                Sys_ExecuteBytecode_2(tmpD3);
                Sys_ExecuteBytecode_2(srcS2[3]);
                Sys_ExecuteBytecode_2(srcS2[2]);
                i += 1;
                a1 += 0x28;
            } while (i < *(dstD + 0x2c));
        }

        Sys_ExecuteBytecode_2(*(dstD + 0x38));
        *(dstD + 0x38) = 0;
    }

    int32_t i_1 = 0;

    if (*(dstD + 0x2c) > 0)
    {
        int32_t* flagP1 = dstD + 0x3c;

        do
        {
            Light_ComputeDirectionalLight_3(flagP1);
            i_1 += 1;
            flagP1 = &flagP1[0xb];
        } while (i_1 < *(dstD + 0x2c));
    }

    if (*(dstD + 0x24))
        return Resource_Flush(dstD);

    int32_t i_2 = 0;

    if (*(dstD + 0x2c) > 0)
    {
        int32_t* srcS3 = dstD + 0x60;

        do
        {
            Sys_ExecuteBytecode_2(*srcS3);
            *srcS3 = 0;
            i_2 += 1;
            srcS3 = &srcS3[0xb];
        } while (i_2 < *(dstD + 0x2c));
    }

    return Sys_ExecuteBytecode_2(dstD);
}
