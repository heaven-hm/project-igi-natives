// IGI native provenance: AIConfig_ProcessStep_406B70 - 0x00406B70 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00406B70-AIConfig_ProcessStep_406B70.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AIConfig_ProcessStep_406B70.h"

int32_t AIConfig_ProcessStep_406B70(void* arg1, int32_t* arg2)

{
    if (!arg2)
    {
        *(arg1 + 0x128) = 0;
        *(arg1 + 0x28) = 0;
    }
    else
    {
        int32_t edi_1 = arg2[1];
        int32_t i = 0xffffffff;

        while (i)
        {
            bool cond:1_1 = 0 != *edi_1;
            edi_1 += 1;
            i -= 1;

            if (!cond:1_1)
                break;
        }

        int32_t ecx_1 = ~i;
        int32_t esi_3;
        int32_t edi_4;
        edi_4 = __builtin_memcpy(arg1 + 0x128, edi_1 - ecx_1, ecx_1 & 0xfffffffc);
        __builtin_memcpy(edi_4, esi_3, ecx_1 & 3);
        int32_t edi_5 = *arg2;
        int32_t i_1 = 0xffffffff;

        while (i_1)
        {
            bool cond:2_1 = 0 != *edi_5;
            edi_5 += 1;
            i_1 -= 1;

            if (!cond:2_1)
                break;
        }

        int32_t ecx_5 = ~i_1;
        int32_t esi_6;
        int32_t edi_8;
        edi_8 = __builtin_memcpy(arg1 + 0x28, edi_5 - ecx_5, ecx_5 & 0xfffffffc);
        __builtin_memcpy(edi_8, esi_6, ecx_5 & 3);
    }

    *(arg1 + 0x24) = 0;
    *(arg1 + 0x20) = 0;
    *(arg1 + 0x264) = 0;
    *(arg1 + 0x2a4) = 0x3ea8f5c3;
    __builtin_memcpy(arg1 + 0x268,
        "\x00\x00\x20\x41\x00\x00\x70\x41\x00\x00\x70\x41\xcd\xcc\x4c\x3e\xc3\xf5\xa8\x3e\xcd\xcc\xcc\x"
    "3d\x00\x00\x20\x41\x00\x00\x70\x42\x00\x00\x00\x3f\x00\x00\x00\x3f\x9a\x99\x99\x3e",
        0x2c);
    __builtin_memcpy(arg1 + 0x228,
        "\x1e\x00\x00\x00\xc3\xf5\xa8\x3e\x00\x00\x80\x3f\x9a\x99\x99\x3e\x00\x00\x00\x3f\x00\x00\x00\x"
    "3f\x00\x00\x00\x3f\x00\x00\x00\x3f\x00\x00\x80\x3f\x00\x00\x80\x3e\xcd\xcc\xcc\x3d\xcd\xcc\x4c"
    "3e\x00\x00\xc0\x3f\x00\x00\x80\x3f\xcd\xcc\xcc\x3d",
        0x3c);
    __builtin_strncpy(arg1 + 0x294, "333?", 4);
    *(arg1 + 0x298) = 0x3ecccccd;
    *(arg1 + 0x29c) = 0x3f000000;
    *(arg1 + 0x2a0) = 0x3f800000;
    return 0x3f000000;
}
