// IGI native provenance: VehiclePhysics_ProcessVirModelsnotavai_435460 - 0x00435460 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00435460-VehiclePhysics_ProcessVirModelsnotavai_435460.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "VehiclePhysics_ProcessVirModelsnotavai_435460.h"

int32_t VehiclePhysics_ProcessVirModelsnotavai_435460(int32_t* arg1, float arg2)

{
    int32_t* frame_ptr = arg2;
    void* eax_1 = DynObj_Missing(*frame_ptr);

    if (eax_1)
    {
        __builtin_memcpy(&arg1[0x3c], &frame_ptr[8], 0x18);
        __builtin_memcpy(&arg1[0x42], &frame_ptr[0x18], 0x28);
        DynObj_LookupHashItem_6(frame_ptr[1], arg1, eax_1);
        long double x87_r7 = arg1[0x27];
        long double x87_r6 = arg1[0x28];
        x87_r6 - x87_r7;
        long double x87_r7_1;

        if (!(*(&((x87_r6 < x87_r7 ? 1 : 0) << 8 | (FCMP_UO(x87_r6, x87_r7) ? 1 : 0) << 0xa
                | (x87_r6 == x87_r7 ? 1 : 0) << 0xe) + 1) & 1))
            x87_r7_1 = arg1[0x28];
        else
            x87_r7_1 = arg1[0x27];

        long double x87_r6_1 = arg1[0x26];
        x87_r6_1 - x87_r7_1;
        long double x87_r7_3;

        if (*(&((x87_r6_1 < x87_r7_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_1, x87_r7_1) ? 1 : 0) << 0xa
            | (x87_r6_1 == x87_r7_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
        {
            long double x87_r7_4 = arg1[0x27];
            long double x87_r6_2 = arg1[0x28];
            x87_r6_2 - x87_r7_4;

            if (!(*(&((x87_r6_2 < x87_r7_4 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_2, x87_r7_4) ? 1 : 0) << 0xa
                    | (x87_r6_2 == x87_r7_4 ? 1 : 0) << 0xe) + 1) & 1))
                x87_r7_3 = arg1[0x28];
            else
                x87_r7_3 = arg1[0x27];
        }
        else
            x87_r7_3 = arg1[0x26];

        long double x87_r7_6 = Render_ComputeNormals(arg1[0x1b]) * x87_r7_3;
        DynObj_LinkDynamicCube_8(frame_ptr[1], arg1, &frame_ptr[2], x87_r7_6, 2);
        __builtin_memcpy(&arg1[0x1c], &frame_ptr[0xe], 0x28);
        void* eax_5 = frame_ptr[0x22];
        arg1[0x4c] = eax_5;
        float* ebp_1 = frame_ptr[0x23];
        arg1[0x4e] = ebp_1;
        long double x87_r7_7;

        if (!*(eax_5 + 0x82d))
            x87_r7_7 = *ebp_1 * 0.0174532924f;
        else
            x87_r7_7 = 0f;

        arg1[0x4f] = x87_r7_7;
        return Vehicle_InitHeli_5(arg1, eax_5 + 0x70);
    }

    int32_t var_14_1 = *frame_ptr;
    Error_Show("VirModel "%s" not available");

    while (true)
        /* nop */
}
