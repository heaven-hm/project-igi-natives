// IGI native provenance: Display_SetDisplayMode_14 - 0x00497830 - CFG score 66.7% (FAIL; structural only); runtime behavior not verified.
// Evidence: 00497830-Display_SetDisplayMode_14.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Display_SetDisplayMode_14.h"
void Display_SetDisplayMode_14(void** context)

{
    for (void** i = context; i; i = *i)
    {
        int32_t data_val = i[1];

        if (data_val != 0xffffffff)
            (*((data_val << 2) + &g_a94e84))(i);
    }
}
