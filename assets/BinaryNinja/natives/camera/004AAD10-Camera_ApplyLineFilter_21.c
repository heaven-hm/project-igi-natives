// IGI native provenance: Camera_ApplyLineFilter_21 - 0x004AAD10 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004AAD10-Camera_ApplyLineFilter_21.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Camera_ApplyLineFilter_21.h"
int32_t Camera_ApplyLineFilter_21(void* context, void* param_2, int32_t param_3)

{
    int32_t i = param_3;

    if (i)
    {
        int32_t i_2 = i;
        void* dest_1 = context;
        void* source_1 = dest_1;

        while (i)
        {
            bool flag_0_1 = 0 != *dest_1;
            dest_1 += 1;
            i -= 1;

            if (!flag_0_1)
                break;
        }

        int32_t i_1 = -(i) + i_2;
        void* dest_2 = source_1;
        void* source_2 = param_2;

        while (i_1)
        {
            bool flag_1_1 = *source_2 == *dest_2;
            source_2 += 1;
            dest_2 += 1;
            i_1 -= 1;

            if (!flag_1_1)
                break;
        }

        char data_1 = *(source_2 - 1);
        i = 0;
        char f0_1 = *(dest_2 - 1);

        if (data_1 > f0_1)
            return ~i;

        if (data_1 != f0_1)
            return ~0xfffffffe;
    }

    return i;
}
