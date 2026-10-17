// IGI native provenance: DoorCabinet_ProcessVirModelsnotavai - 0x00448B70 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00448B70-DoorCabinet_ProcessVirModelsnotavai.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "DoorCabinet_ProcessVirModelsnotavai.h"

struct status_msg* DoorCabinet_ProcessVirModelsnotavai(void* arg1, float arg2)

{
    int32_t* frame_ptr = arg2;
    void* eax_1 = DynObj_Missing(*frame_ptr);

    if (eax_1)
    {
        __builtin_memcpy(arg1 + 0xf0, &frame_ptr[8], 0x18);
        __builtin_memcpy(arg1 + 0x108, &frame_ptr[0x18], 0x28);
        DynObj_LookupHashItem_6(frame_ptr[1], arg1, eax_1);
        long double x87_r7 = *(arg1 + 0x9c);
        long double x87_r6 = *(arg1 + 0xa0);
        x87_r6 - x87_r7;
        long double x87_r7_1;

        if (!(*(&((x87_r6 < x87_r7 ? 1 : 0) << 8 | (FCMP_UO(x87_r6, x87_r7) ? 1 : 0) << 0xa
                | (x87_r6 == x87_r7 ? 1 : 0) << 0xe) + 1) & 1))
            x87_r7_1 = *(arg1 + 0xa0);
        else
            x87_r7_1 = *(arg1 + 0x9c);

        long double x87_r6_1 = *(arg1 + 0x98);
        x87_r6_1 - x87_r7_1;
        long double x87_r7_3;

        if (*(&((x87_r6_1 < x87_r7_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_1, x87_r7_1) ? 1 : 0) << 0xa
            | (x87_r6_1 == x87_r7_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
        {
            long double x87_r7_4 = *(arg1 + 0x9c);
            long double x87_r6_2 = *(arg1 + 0xa0);
            x87_r6_2 - x87_r7_4;

            if (!(*(&((x87_r6_2 < x87_r7_4 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_2, x87_r7_4) ? 1 : 0) << 0xa
                    | (x87_r6_2 == x87_r7_4 ? 1 : 0) << 0xe) + 1) & 1))
                x87_r7_3 = *(arg1 + 0xa0);
            else
                x87_r7_3 = *(arg1 + 0x9c);
        }
        else
            x87_r7_3 = *(arg1 + 0x98);

        long double x87_r7_6 = Render_ComputeNormals(*(arg1 + 0x6c)) * x87_r7_3;
        DynObj_LinkDynamicCube_8(frame_ptr[1], arg1, &frame_ptr[2], x87_r7_6, 2);
        __builtin_memcpy(arg1 + 0x70, &frame_ptr[0xe], 0x28);
        __builtin_memcpy(arg1 + 0x148, &frame_ptr[0xe], 0x28);
        void* eax_6 = frame_ptr[0x23];
        *(arg1 + 0x138) = eax_6;
        void* ecx_2 = *(arg1 + 0x138);
        *(arg1 + 0x13c) = *(eax_6 + 0x20);
        *(arg1 + 0x140) = *(ecx_2 + 0x20);
        *(arg1 + 0x144) = 0;
        *(arg1 + 0x174) = 0;
        int32_t ebp_1 = frame_ptr[0x22];
        *(arg1 + 0x130) = ebp_1;
        Car_GunCreate(arg1, arg1, ebp_1);
        *(arg1 + 0x178) = SoundSys_Update3DPosition_7(1);
        struct status_msg* result = SoundSys_SetMasterVolume_7(arg1, *(arg1 + 0x138));

        if (result)
        {
            result = QTask_LinkEventHandler_2(result);
            *(arg1 + 0x174) = result;
        }

        return result;
    }

    int32_t var_14_1 = *frame_ptr;
    Error_Show("VirModel "%s" not available");

    while (true)
        /* nop */
}
