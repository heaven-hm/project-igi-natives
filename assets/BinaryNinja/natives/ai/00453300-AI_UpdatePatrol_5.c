// IGI native provenance: AI_UpdatePatrol_5 - 0x00453300 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00453300-AI_UpdatePatrol_5.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AI_UpdatePatrol_5.h"
int32_t* AI_UpdatePatrol_5(int32_t context, char param_2)

{
    if (!param_2)
    {
        int32_t* source_1 = g_5bda28;
        int32_t* data_2 = *source_1;

        if (data_2)
        {
            while (source_1[2] != context)
            {
                source_1 = data_2;
                data_2 = *data_2;

                if (!data_2)
                    return data_2;
            }

            Camera_ApplyHandiCam_33(source_1);
            source_1[1] = 0;
            *source_1 = 0;
            Camera_SetFieldOfView_33(&g_57d758, source_1);
        }
    }
    else
    {
        int32_t* source_val = g_57d758;

        if (*source_val)
        {
            Camera_ApplyHandiCam_33(source_val);
            source_val[1] = 0;
            *source_val = 0;
            Camera_SetFieldOfView_33(&g_5bda28, source_val);
            source_val[2] = context;
            return source_val;
        }
    }

    return 0;
}
