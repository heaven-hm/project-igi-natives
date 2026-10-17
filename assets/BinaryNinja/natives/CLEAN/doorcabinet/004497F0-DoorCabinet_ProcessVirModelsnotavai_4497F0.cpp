// IGI native provenance: DoorCabinet_ProcessVirModelsnotavai_4497F0 - 0x004497F0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004497F0-DoorCabinet_ProcessVirModelsnotavai_4497F0.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "DoorCabinet_ProcessVirModelsnotavai_4497F0.h"

int32_t* DoorCabinet_ProcessVirModelsnotavai_4497F0(float arg1, int32_t* arg2)

{
    void* frame_ptr = arg1;
    DynObj_QtasklistIsFull(Level_InitTextures_4(), frame_ptr);
    void* eax_2 = DynObj_Missing(*arg2);

    if (eax_2)
    {
        __builtin_memcpy(frame_ptr + 0xf0, &arg2[8], 0x18);
        __builtin_memcpy(frame_ptr + 0x108, &arg2[0x18], 0x28);
        DynObj_LookupHashItem_6(arg2[1], frame_ptr, eax_2);
        long double x87_r7 = *(frame_ptr + 0x9c);
        long double x87_r6 = *(frame_ptr + 0xa0);
        x87_r6 - x87_r7;
        long double x87_r7_1;

        if (!(*(&((x87_r6 < x87_r7 ? 1 : 0) << 8 | (FCMP_UO(x87_r6, x87_r7) ? 1 : 0) << 0xa
                | (x87_r6 == x87_r7 ? 1 : 0) << 0xe) + 1) & 1))
            x87_r7_1 = *(frame_ptr + 0xa0);
        else
            x87_r7_1 = *(frame_ptr + 0x9c);

        long double x87_r6_1 = *(frame_ptr + 0x98);
        x87_r6_1 - x87_r7_1;
        long double x87_r7_3;

        if (*(&((x87_r6_1 < x87_r7_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_1, x87_r7_1) ? 1 : 0) << 0xa
            | (x87_r6_1 == x87_r7_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
        {
            long double x87_r7_4 = *(frame_ptr + 0x9c);
            long double x87_r6_2 = *(frame_ptr + 0xa0);
            x87_r6_2 - x87_r7_4;

            if (!(*(&((x87_r6_2 < x87_r7_4 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_2, x87_r7_4) ? 1 : 0) << 0xa
                    | (x87_r6_2 == x87_r7_4 ? 1 : 0) << 0xe) + 1) & 1))
                x87_r7_3 = *(frame_ptr + 0xa0);
            else
                x87_r7_3 = *(frame_ptr + 0x9c);
        }
        else
            x87_r7_3 = *(frame_ptr + 0x98);

        long double x87_r7_6 = Render_ComputeNormals(*(frame_ptr + 0x6c)) * x87_r7_3;
        DynObj_LinkDynamicCube_8(arg2[1], frame_ptr, &arg2[2], x87_r7_6, 2);
        __builtin_memcpy(frame_ptr + 0x70, &arg2[0xe], 0x28);
        *(frame_ptr + 0x13c) = 0;
        *(frame_ptr + 0x140) = 0x3f400000;
        long double x87_r7_8 = Sys_AllocateMemory_14(Level_SetMission_5()) * 0.75f;
        *(frame_ptr + 0x144) = 0;
        *(frame_ptr + 0x140) = x87_r7_8 + *(frame_ptr + 0x140);
        *(frame_ptr + 0x138) = arg2[0x23];
        int32_t ebx_1 = arg2[0x22];
        *(frame_ptr + 0x130) = ebx_1;
        return Car_GunCreate(frame_ptr, frame_ptr, ebx_1);
    }

    int32_t __saved_esi_1 = *arg2;
    Error_Show("VirModel "%s" not available");

    while (true)
        /* nop */
}
