// IGI native provenance: Sound_Invoke13_4E85E0 - 0x004E85E0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004E85E0-Sound_Invoke13_4E85E0.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sound_Invoke13_4E85E0.h"

int32_t Sound_Invoke13_4E85E0(void* arg1, int32_t* arg2)

{
    SoundSys_PlaySoundSample_13(arg1);

    if (!arg2)
        *(arg1 + 0xdd) = 1;
    else
    {
        void* edx_1 = *arg2;
        __builtin_memcpy(arg1 + 0xa0, edx_1 + 0xa0, 0x18);
        __builtin_memcpy(arg1 + 0x88, edx_1 + 0xa0, 0x18);
        void* edi_3 = edx_1 + 0xdf;
        *(arg1 + 0xb8) = *(edx_1 + 0xb8);
        *(arg1 + 0xbc) = *(edx_1 + 0xbc);
        *(arg1 + 0xc0) = *(edx_1 + 0xc0);
        *(arg1 + 0xc4) = *(edx_1 + 0xc4);
        *(arg1 + 0xc8) = *(edx_1 + 0xc8);
        *(arg1 + 0xcc) = *(edx_1 + 0xcc);
        *(arg1 + 0xd0) = *(edx_1 + 0xd0);
        *(arg1 + 0xd4) = *(edx_1 + 0xd4);
        *(arg1 + 0xd8) = *(edx_1 + 0xd8);
        *(arg1 + 0x124) = *(edx_1 + 0x124);
        *(arg1 + 0xdc) = *(edx_1 + 0xdc);
        *(arg1 + 0xdd) = arg2[1];
        int32_t i = 0xffffffff;

        while (i)
        {
            bool cond:0_1 = 0 != *edi_3;
            edi_3 += 1;
            i -= 1;

            if (!cond:0_1)
                break;
        }

        int32_t ecx_7 = ~i;
        int32_t esi_4;
        int32_t edi_6;
        edi_6 = __builtin_memcpy(arg1 + 0xdf, edi_3 - ecx_7, ecx_7 & 0xfffffffc);
        __builtin_memcpy(edi_6, esi_4, ecx_7 & 3);
        void* edi_7 = edx_1 + 0xff;
        int32_t i_1 = 0xffffffff;

        while (i_1)
        {
            bool cond:1_1 = 0 != *edi_7;
            edi_7 += 1;
            i_1 -= 1;

            if (!cond:1_1)
                break;
        }

        int32_t ecx_11 = ~i_1;
        int32_t esi_6;
        int32_t edi_10;
        edi_10 = __builtin_memcpy(arg1 + 0xff, edi_7 - ecx_11, ecx_11 & 0xfffffffc);
        __builtin_memcpy(edi_10, esi_6, ecx_11 & 3);
        *(arg1 + 0x128) = Display_CheckCapabilities_12(arg1 + 0xff);
        *(arg1 + 0x12c) = Display_RestoreDevice_12(arg1 + 0xff);
    }

    *(arg1 + 0x120) = 0;
    *(arg1 + 0x20) = 0;
    *(arg1 + 0x24) = 0;
    *(arg1 + 0x28) = 0;
    *(arg1 + 0xde) = 0;
    *(arg1 + 0x2c) = 2;
    Display_SetGammaRamp_12(arg1 + 0x30);

    if (!*(arg1 + 0xdd))
        SoundSys_InitSoundSys_8(arg1);

    return SoundSys_SetFrequency_13(arg1);
}
