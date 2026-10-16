#include "ComputerObject_Setup.h"
int32_t* ComputerObject_Setup(double* a1)

{
    int32_t* result = *(a1 + 0x6c);

    if (result)
    {
        result = Render_DrawLightmapMesh_2(*result);

        if (result > 0xa)
        {
            int16_t valA1 = Env_ScanViewCone_8();
            int32_t v_3c;

            if (*(a1 + 0x1c) != valA1)
            {
                v_3c = 0x3f000000;
                int32_t v_38_2 = 0x3f000000;
                int32_t v_34_2 = 0x3f000000;
            }
            else
            {
                v_3c = 0x3f800000;
                int32_t v_38_1 = 0x3f800000;
                int32_t v_34_1 = 0x3f800000;
            }

            double v_18;
            Render_ClipMesh(&v_18, a1, 0xa);
            double v_30;
            Render_ClipMesh(&v_30, a1, 0xb);
            v_18 = v_18 + a1[4];
            double v_10;
            double v_10_1 = v_10 + a1[5];
            double v_8;
            double v_8_1 = v_8 + a1[6];
            v_30 = v_30 + a1[4];
            double v_28;
            double v_28_1 = v_28 + a1[5];
            double v_20;
            double v_20_1 = v_20 + a1[6];
            return SoundSys_LoadSoundDef(&v_18, &v_30, &v_3c, 1f, &v_3c, 1f);
        }
    }

    return result;
}
