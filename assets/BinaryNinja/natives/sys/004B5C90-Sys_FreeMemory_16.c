// IGI native provenance: Sys_FreeMemory_16 - 0x004B5C90 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004B5C90-Sys_FreeMemory_16.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sys_FreeMemory_16.h"
int32_t Sys_FreeMemory_16(int32_t* context)

{
    int32_t result = context[9];
    int32_t* temp_1;
    int32_t source_1;

    switch (result)
    {
        case 0:
        {
            int32_t* i_1 = context[5];

            for (int32_t* i = *i_1; i; i = *i)
            {
                Sys_FreeMemory_16(i_1[2]);
                i_1 = i;
            }

            Camera_ApplyHandiCam_33(context);
            Sys_OpenFileStream_5(context[0xd]);
            goto label_4b5cf2;
        }
        case 1:
        case 4:
        {
            Camera_ApplyHandiCam_33(&context[2]);
            goto label_4b5ced;
        }
        case 2:
        {
            Sys_OpenFileStream_5(context[0xd]);
        label_4b5ced:
            Camera_ApplyHandiCam_33(context);
        label_4b5cf2:
            temp_1 = g_943e34;
            result = g_943e28 - 1;
            source_1 = *(temp_1 + context);
            g_943e28 = result;

            if (source_1 != result)
                goto label_4b5d30;
            break;
        }
        case 3:
        {
            Camera_ApplyHandiCam_33(context);
            temp_1 = g_943e34;
            result = g_943e28 - 1;
            source_1 = *(temp_1 + context);
            g_943e28 = result;

            if (source_1 != result)
            {
            label_4b5d30:
                int32_t entity_2 = g_943e24;
                result = *(entity_2 + (result << 2)) * g_943e30 + g_943e20;
                int32_t dest_2 = *(entity_2 + (source_1 << 2));
                int32_t temp_2 = *(temp_1 + result);
                *(entity_2 + (source_1 << 2)) = *(entity_2 + (temp_2 << 2));
                *(g_943e24 + (temp_2 << 2)) = dest_2;
                *(g_943e34 + result) = source_1;
            }
            break;
        }
    }

    return result;
}
