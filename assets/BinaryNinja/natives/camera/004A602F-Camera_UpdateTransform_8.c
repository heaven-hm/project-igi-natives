// IGI native provenance: Camera_UpdateTransform_8 - 0x004A602F - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004A602F-Camera_UpdateTransform_8.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Camera_UpdateTransform_8.h"
int32_t Camera_UpdateTransform_8()

{
    if (!g_c32548)
        Camera_SetFieldOfView_20();

    char* source_val = g_93604c;
    int32_t dest_val = 0;

    while (true)
    {
        char data_1 = *source_val;

        if (!data_1)
            break;

        if (data_1 != 0x3d)
            dest_val += 1;

        source_val = source_val + Camera_UpdateViewCone_20(source_val) + 1;
    }

    void** source_1 = Camera_ApplyHandiCam_20((dest_val << 2) + 4);
    int32_t* entity_2 = (dest_val << 2) + 4;
    g_93608c = source_1;

    if (!source_1)
    {
        Camera_UpdateViewCone_3(9);
        entity_2 = 9;
    }

    char* dest_1 = g_93604c;

    while (*dest_1)
    {
        entity_2 = dest_1;
        int32_t* flagP2 = Camera_UpdateViewCone_20(dest_1) + 1;

        if (*dest_1 != 0x3d)
        {
            void* data_5 = Camera_ApplyHandiCam_20(flagP2);
            *source_1 = data_5;

            if (!data_5)
                Camera_UpdateViewCone_3(9);

            int32_t* item_14_3 = dest_1;
            Camera_ApplyLineFilter_20(*source_1, item_14_3);
            source_1 = &source_1[1];
            entity_2 = item_14_3;
        }

        dest_1 += flagP2;
    }

    int32_t saved_ebp_3 = g_93604c;
    int32_t result = Camera_UpdateTransform_9(entity_2);
    g_93604c = 0;
    *source_1 = nullptr;
    g_c32544 = 1;
    return result;
}
