// IGI native provenance: Camera_UpdateTransform_15 - 0x004A8AD0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004A8AD0-Camera_UpdateTransform_15.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Camera_UpdateTransform_15.h"
int32_t __fastcall __trandisp1(int32_t context, void* param_2, void* param_3 , long double param_4 )

{
    int16_t context_val;

    if (*(param_2 + 0xe) != 5)
        context_val = 0x133f;
    else
    {
        context_val = *(param_3 - 0xa4);
        *(&context_val + 1) |= 2;
        *(&context_val + 1) &= 0xfe;
        context_val = 0x3f;
    }

    *(param_3 - 0xa2) = context_val;
    int16_t fpu_control;
    int16_t x87status;
    fpu_control = __fldcw_memmem16(*(param_3 - 0xa2));
    bool c0;
    bool c1;
    bool c2;
    bool c3;
    c0 = __fxam(param_4);
    *(param_3 - 0x94) = param_2;
    *(param_3 - 0xa0) =
        (c0 ? 1 : 0) << 8 | (c1 ? 1 : 0) << 9 | (c2 ? 1 : 0) << 0xa | (c3 ? 1 : 0) << 0xe;
    *(param_3 - 0x90) = 0;
    context = *(param_3 - 0x9f);
    context <<= 1;
    context s>>= 1;
    context = ROLB(context, 1);
    int32_t data_val;
    data_val = context;
    data_val &= 0xf;
❓    /* jump -> *(param_2 + *(&g_5443cd + data_val) + 0x10) */
}
