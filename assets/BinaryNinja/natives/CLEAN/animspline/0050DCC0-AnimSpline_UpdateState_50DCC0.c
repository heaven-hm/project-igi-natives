// IGI native provenance: AnimSpline_UpdateState_50DCC0 - 0x0050DCC0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0050DCC0-AnimSpline_UpdateState_50DCC0.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AnimSpline_UpdateState_50DCC0.h"

int32_t AnimSpline_UpdateState_50DCC0(int32_t* arg1)

{
    int32_t* 5ca114_16 = g_5ca114;
    (*(*5ca114_16 + 0x50))(5ca114_16, 0x2f, 0);
    int32_t* 5ca114_1 = g_5ca114;
    (*(*5ca114_1 + 0x50))(5ca114_1, 0x1c, 0);
    int32_t* 5ca114_2 = g_5ca114;
    (*(*5ca114_2 + 0x50))(5ca114_2, 0x1d, 0);
    int32_t* 5ca114_3 = g_5ca114;
    (*(*5ca114_3 + 0x50))(5ca114_3, 0x16, 1);
    int32_t* 5ca114_4 = g_5ca114;
    (*(*5ca114_4 + 0x50))(5ca114_4, 0x89, 0);
    int32_t* 5ca114_5 = g_5ca114;
    (*(*5ca114_5 + 0x50))(5ca114_5, 0x1a, 1);
    int32_t* 5ca114_6 = g_5ca114;
    (*(*5ca114_6 + 0x50))(5ca114_6, 0x8d, 1);
    int32_t* 5ca114_7 = g_5ca114;

    if (!(*arg1 & 0x8000003c))
        (*(*5ca114_7 + 0x50))(5ca114_7, 0xf, 0);
    else
    {
        (*(*5ca114_7 + 0x50))(5ca114_7, 0xf, 1);
        int32_t* 5ca114_8 = g_5ca114;
        (*(*5ca114_8 + 0x50))(5ca114_8, 0x18, 0xa);
        int32_t* 5ca114_9 = g_5ca114;
        (*(*5ca114_9 + 0x50))(5ca114_9, 0x19, 5);
    }

    int32_t esi_1 = *arg1;

    if (esi_1 & 0x20000)
    {
        int32_t* 5ca114_10 = g_5ca114;
        (*(*5ca114_10 + 0x50))(5ca114_10, 0x17, 4);
        int32_t* 5ca114_11 = g_5ca114;
        (*(*5ca114_11 + 0x50))(5ca114_11, 7, g_bcad78);
        int32_t* 5ca114_12 = g_5ca114;
        return (*(*5ca114_12 + 0x50))(5ca114_12, 0xe, 1);
    }

    int32_t* 5ca114_13 = g_5ca114;
    int32_t edx_7 = *5ca114_13;

    if (!(esi_1 & 0x40000))
        return (*(edx_7 + 0x50))(5ca114_13, 7, 0);

    (*(edx_7 + 0x50))(5ca114_13, 0x17, 4);
    int32_t* 5ca114_14 = g_5ca114;
    (*(*5ca114_14 + 0x50))(5ca114_14, 7, g_bcad78);
    int32_t* 5ca114_15 = g_5ca114;
    return (*(*5ca114_15 + 0x50))(5ca114_15, 0xe, 0);
}
