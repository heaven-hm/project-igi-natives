// IGI native provenance: LevelMission_Invoke6 - 0x00417E20 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00417E20-LevelMission_Invoke6.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "LevelMission_Invoke6.h"

int32_t LevelMission_Invoke6(int32_t* arg1, void* arg2)

{
    int32_t context_val;
    int32_t var_4_1 = context_val;
    int32_t i = 0xffffffff;
    int32_t* frame_ptr = *arg1;
    int32_t* dest_ptr = frame_ptr;

    while (i)
    {
        bool cond:0_1 = 0 != *dest_ptr;
        dest_ptr += 1;
        i -= 1;

        if (!cond:0_1)
            break;
    }

    int32_t result_val = *(arg2 + 0x2664);
    int32_t eax_2 = *(arg2 + 0x2668);
    int32_t eax_3 = *(arg2 + 0x2666);
    int32_t ecx_7 = eax_3 * 5;
    int32_t edx_2 = eax_3 + (ecx_7 << 1);
    int32_t eax_5;
    int32_t ecx_8;
    int32_t edx_3;
    eax_5 = Camera_UpdateTransform_6(arg2 + (edx_2 << 3) + 0x264, edx_2, ecx_7, ~i - 1 + frame_ptr - 3,
        "SPR");
    int32_t edx_4;

    if (eax_5)
    {
        int32_t eax_6;
        int32_t ecx_9;
        int32_t edx_5;
        eax_6 = Camera_UpdateTransform_6(eax_5, edx_3, ecx_8, ~i - 1 + frame_ptr - 3, "PIC");

        if (eax_6)
        {
            int32_t eax_7;
            int32_t ecx_10;
            int32_t edx_6;
            eax_7 = Camera_UpdateTransform_6(eax_6, edx_5, ecx_9, ~i - 1 + frame_ptr - 3, "FNT");

            if (eax_7)
            {
                int32_t eax_8 =
                    Camera_UpdateTransform_6(eax_7, edx_6, ecx_10, ~i - 1 + frame_ptr - 3, "SND");
                int32_t edx_8 = -(eax_8);
                edx_4 = -((edx_8 - edx_8)) + 3;
            }
            else
                edx_4 = 2;
        }
        else
            edx_4 = 1;
    }
    else
        edx_4 = 0;

    int32_t* edi_2 = frame_ptr;
    int32_t i_1 = 0xffffffff;
    char eax_9 = 0;

    while (i_1)
    {
        bool cond:1_1 = 0 != *edi_2;
        edi_2 += 1;
        i_1 -= 1;

        if (!cond:1_1)
            break;
    }

    int32_t i_2;

    for (i_2 = ~i_1 - 2; i_2 > 0; i_2 -= 1)
    {
        eax_9 = *(i_2 + frame_ptr - 1);

        if (eax_9 == 0x2f)
            break;

        if (eax_9 == 0x3a)
            break;

        if (eax_9 == 0x5c)
            break;
    }

    if (!edx_4)
    {
        int32_t edi_14 = *arg1 + i_2;
        int32_t i_3 = 0xffffffff;

        while (i_3)
        {
            bool cond:2_1 = 0 != *edi_14;
            edi_14 += 1;
            i_3 -= 1;

            if (!cond:2_1)
                break;
        }

        int32_t ecx_23 = ~i_3;
        int32_t esi_6;
        int32_t edi_17;
        edi_17 = __builtin_memcpy(arg2 + result_val * 0x58 + 0x7e4, edi_14 - ecx_23, ecx_23 & 0xfffffffc);
        __builtin_memcpy(edi_17, esi_6, ecx_23 & 3);
        eax_9 = Sys_IlfFileCorruptS(arg2 + result_val * 0x58 + 0x824, frame_ptr);
        *(arg2 + 0x2664) += 1;
    }
    else
    {
        if (edx_4 == 1)
        {
            int32_t edi_9 = *arg1 + i_2;
            int32_t i_4 = 0xffffffff;

            while (i_4)
            {
                bool cond:3_1 = 0 != *edi_9;
                edi_9 += 1;
                i_4 -= 1;

                if (!cond:3_1)
                    break;
            }

            int32_t ecx_17 = ~i_4;
            int32_t esi_4;
            int32_t edi_12;
            edi_12 =
                __builtin_memcpy(arg2 + eax_2 * 0x44 + 0x1de4, edi_9 - ecx_17, ecx_17 & 0xfffffffc);
            __builtin_memcpy(edi_12, esi_4, ecx_17 & 3);
            int32_t* eax_14 = Sys_ResolveSymbol_17(frame_ptr);
            *(arg2 + eax_2 * 0x44 + 0x1e24) = eax_14;
            *(arg2 + 0x2668) += 1;
            return eax_14;
        }

        if (edx_4 == 2)
        {
            int32_t edi_4 = *arg1 + i_2;
            int32_t i_5 = 0xffffffff;

            while (i_5)
            {
                bool cond:4_1 = 0 != *edi_4;
                edi_4 += 1;
                i_5 -= 1;

                if (!cond:4_1)
                    break;
            }

            int32_t ecx_12 = ~i_5;
            int32_t esi_2;
            int32_t edi_7;
            edi_7 =
                __builtin_memcpy(arg2 + (edx_2 << 3) + 0x264, edi_4 - ecx_12, ecx_12 & 0xfffffffc);
            __builtin_memcpy(edi_7, esi_2, ecx_12 & 3);
            int32_t* eax_12 = Sys_IlfFileCorruptS(arg2 + (edx_2 << 3) + 0x2a4, frame_ptr);
            *(arg2 + 0x2666) += 1;
            return eax_12;
        }
    }

    return eax_9;
}
