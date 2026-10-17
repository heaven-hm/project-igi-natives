// IGI native provenance: Camera_ResetMatrix_22 - 0x004ABCAD - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004ABCAD-Camera_ResetMatrix_22.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Camera_ResetMatrix_22.h"
int32_t Camera_ResetMatrix_22()

{
    int32_t result = 0xffffffff;
    int32_t dest_val = 0;
    int32_t source_val = 0;

    for (int32_t* i = &g_c32440; i < &g_c32540; )
    {
        int32_t* data_1 = *i;

        if (!data_1)
        {
            int32_t* data_5 = Camera_ApplyHandiCam_20(0x100);

            if (!data_5)
                break;

            g_c32540 += 0x20;
            void* j = &data_5[0x40];
            (&g_c32440)[dest_val] = data_5;

            for (; data_5 < j; j = (&g_c32440)[dest_val] + 0x100)
            {
                data_5[1] = 0;
                *data_5 = 0xffffffff;
                *(data_5 + 5) = 0xa;
                data_5 = &data_5[2];
            }

            return dest_val << 5;
        }

        while (true)
        {
            if (data_1 >= &data_1[0x40])
                goto label_4abce8;

            if (!(data_1[1] & 1))
                break;

            data_1 = &data_1[2];
        }

        *data_1 = 0xffffffff;
        result = ((data_1 - *i) >> 3) + source_val;

        if (result != 0xffffffff)
            break;

    label_4abce8:
        i = &i[1];
        dest_val += 1;
        source_val += 0x20;
    }

    return result;
}
