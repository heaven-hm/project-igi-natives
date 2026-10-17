// IGI native provenance: ComputerObject_Setup - 0x00467800 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00467800-ComputerObject_Setup.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "ComputerObject_Setup.h"
int32_t* ComputerObject_Setup(double* context)

{
    int32_t* result = *(context + 0x6c);

    if (result)
    {
        result = Render_DrawLightmapMesh_2(*result);

        if (result > 0xa)
        {
            int16_t data_1 = Env_ScanViewCone_8();
            int32_t item_3c;

            if (*(context + 0x1c) != data_1)
            {
                item_3c = 0x3f000000;
                int32_t item_38_2 = 0x3f000000;
                int32_t item_34_2 = 0x3f000000;
            }
            else
            {
                item_3c = 0x3f800000;
                int32_t item_38_1 = 0x3f800000;
                int32_t item_34_1 = 0x3f800000;
            }

            double item_18;
            Render_ClipMesh(&item_18, context, 0xa);
            double item_30;
            Render_ClipMesh(&item_30, context, 0xb);
            item_18 = item_18 + context[4];
            double item_10;
            double item_10_1 = item_10 + context[5];
            double item_8;
            double item_8_1 = item_8 + context[6];
            item_30 = item_30 + context[4];
            double item_28;
            double item_28_1 = item_28 + context[5];
            double item_20;
            double item_20_1 = item_20 + context[6];
            return SoundSys_LoadSoundDef(&item_18, &item_30, &item_3c, 1.0f, &item_3c, 1.0f);
        }
    }

    return result;
}
