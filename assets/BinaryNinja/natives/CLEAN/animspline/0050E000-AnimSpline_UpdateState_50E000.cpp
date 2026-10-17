// IGI native provenance: AnimSpline_UpdateState_50E000 - 0x0050E000 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0050E000-AnimSpline_UpdateState_50E000.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AnimSpline_UpdateState_50E000.h"

int32_t AnimSpline_UpdateState_50E000(int32_t* arg1)

{
    int32_t result_val = *arg1;

    if (result_val & 8)
    {
        int32_t* 5ca114_1 = g_5ca114;
        (*(*5ca114_1 + 0x50))(5ca114_1, 0x1b, 1);
        int32_t* 5ca114_2 = g_5ca114;
        (*(*5ca114_2 + 0x50))(5ca114_2, 0x13, 5);
        int32_t* 5ca114_3 = g_5ca114;
        return (*(*5ca114_3 + 0x50))(5ca114_3, 0x14, 2);
    }

    if (result_val & 0x10)
    {
        int32_t* 5ca114_4 = g_5ca114;
        (*(*5ca114_4 + 0x50))(5ca114_4, 0x1b, 1);
        int32_t* 5ca114_5 = g_5ca114;
        (*(*5ca114_5 + 0x50))(5ca114_5, 0x13, 1);
        int32_t* 5ca114_6 = g_5ca114;
        return (*(*5ca114_6 + 0x50))(5ca114_6, 0x14, 4);
    }

    int32_t* 5ca114_7 = g_5ca114;

    if (!(result_val & 0x80000000))
    {
        (*(*5ca114_7 + 0x50))(5ca114_7, 0x1b, 1);
        int32_t* 5ca114_10 = g_5ca114;
        (*(*5ca114_10 + 0x50))(5ca114_10, 0x13, 5);
        int32_t* 5ca114_11 = g_5ca114;
        return (*(*5ca114_11 + 0x50))(5ca114_11, 0x14, 6);
    }

    (*(*5ca114_7 + 0x50))(5ca114_7, 0x1b, 1);
    int32_t* 5ca114_8 = g_5ca114;
    (*(*5ca114_8 + 0x50))(5ca114_8, 0x13, 1);
    int32_t* 5ca114_9 = g_5ca114;
    return (*(*5ca114_9 + 0x50))(5ca114_9, 0x14, 3);
}
