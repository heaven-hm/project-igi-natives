// Original IGI.EXE function: Display_CloseDevice_20 (VA 0x0049DDF0; static CFG gate PASS, CFG score 1.000).
#include "Display_CloseDevice_20.h"
int32_t Display_CloseDevice_20()

{
    int32_t data_val = g_b46d04;
    int32_t* data_1 = g_5ca114;
    (*(*data_1 + 0x50))(data_1, 0x22,
        g_b818f4 * 255.0f - ((((g_b818ec * -255.0f) << 8) + g_b818f0 * -255.0f) << 8));
    int32_t* data_2 = g_5ca114;
    (*(*data_2 + 0x50))(data_2, 0x26, data_val);
    int32_t* data_3 = g_5ca114;
    (*(*data_3 + 0x50))(data_3, 0x23, 0);
    int32_t* data_4 = g_5ca114;
    (*(*data_4 + 0x50))(data_4, 0x8c, 3);
    int32_t* data_5 = g_5ca114;
    (*(*data_5 + 0x50))(data_5, 0x1c, g_5470b4);
    int32_t* data_6 = g_5ca114;
    (*(*data_6 + 0x50))(data_6, 0x2f, 3);
    int32_t* data_7 = g_5ca114;
    (*(*data_7 + 0x50))(data_7, 0x1d, 0);
    int32_t* data_8 = g_5ca114;
    (*(*data_8 + 0x50))(data_8, 0x16, 3);
    int32_t* data_9 = g_5ca114;
    (*(*data_9 + 0x50))(data_9, 0x89, 0);
    int32_t* data_10 = g_5ca114;
    (*(*data_10 + 0x50))(data_10, 0x8d, 0);
    int32_t* data_11 = g_5ca114;
    (*(*data_11 + 0x50))(data_11, 0x1a, 1);
    int32_t* data_12 = g_5ca114;
    (*(*data_12 + 0x50))(data_12, 0xf, 1);
    int32_t* data_13 = g_5ca114;
    (*(*data_13 + 0x50))(data_13, 7, g_bcad78);
    int32_t* data_14 = g_5ca114;
    (*(*data_14 + 0x50))(data_14, 0xe, 0);
    int32_t* data_15 = g_5ca114;
    (*(*data_15 + 0x50))(data_15, 0x17, 4);
    int32_t* data_16 = g_5ca114;
    (*(*data_16 + 0x50))(data_16, 0x18, 1);
    int32_t* data_17 = g_5ca114;
    return (*(*data_17 + 0x50))(data_17, 0x19, 5);
}
