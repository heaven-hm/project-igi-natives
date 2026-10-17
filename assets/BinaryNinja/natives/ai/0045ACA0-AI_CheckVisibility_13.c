// Original IGI.EXE function: AI_CheckVisibility_13 (VA 0x0045ACA0; static CFG gate PASS, CFG score 1.000).
#include "AI_CheckVisibility_13.h"
void* AI_CheckVisibility_13(void* context, float param_2)

{
    float source_val = param_2;
    *(source_val + 0x33d) = 0;
    *(source_val + 0x696) = 0;
    param_2 = Render_TransformVertices_10(source_val + 0x68, 0.0f);
    Human_StateAnimation(source_val, *(context + 0x10), 0.0f);
    int32_t data_1 = *(context + 0xc);
    void* result;

    if (data_1 != 1 && data_1 != 3)
        result = data_1 - 0x11;

    if (data_1 == 1 || data_1 == 3 || data_1 == 0x11)
        result = Render_BindTexture_10(source_val + 0x68, 0, Render_DrawLightmapMesh_10(source_val + 0x68, 0) * param_2);

    *(context + 0x14) = sub_45ad10;
    return result;
}
