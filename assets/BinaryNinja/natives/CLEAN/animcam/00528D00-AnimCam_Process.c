// IGI native provenance: AnimCam_Process - 0x00528D00 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00528D00-AnimCam_Process.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AnimCam_Process.h"
int32_t* AnimCam_Process(void* context, int32_t** param_2)

{
    char data_val = *(context + 0x19f);
    *(context + 0xd4) = 0;

    if (data_val)
        *(context + 0xd4) = 1;

    switch (*param_2[1])
    {
        case 0:
        {
            *(context + 0x100) = AIGraph_LoadParameters;
            *(context + 0x1a8) = g_54f444[0];
            *(context + 0x1ac) = g_54f444[4][0];
            break;
        }
        case 1:
        {
            *(context + 0x100) = AIGraph_LoadParameters;
            *(context + 0x1a8) = g_54f42c[0];
            *(context + 0x1ac) = g_54f42c[4][0];
            *(context + 0x1ae) = g_54f42c[6][0];
            break;
        }
        case 2:
        {
            *(context + 0x100) = Light_SampleLightmap_6;
            *(context + 0x1a8) = g_54f440;
            break;
        }
        case 3:
        {
            *(context + 0x100) = Light_SetLightColor_6;
            *(context + 0x1a8) = g_54f434[0];
            *(context + 0x1ac) = g_54f434[4][0];
            *(context + 0x1b0) = g_54f434[8][0];
            break;
        }
        case 4:
        {
            *(context + 0x100) = sub_528ff0;
            *(context + 0x1a8) = g_54f424[0];
            *(context + 0x1ac) = g_54f424[4][0];
            *(context + 0x1ae) = g_54f424[6][0];
            break;
        }
    }

    void* entity_7 = param_2[1];

    if (*(entity_7 + 4) != 0xc479c000)
        *(context + 0x108) = *(entity_7 + 4);

    void* entity_8 = param_2[1];

    if (*(entity_8 + 8) != 0xc479c000)
        *(context + 0x10c) = *(entity_8 + 8);

    void* entity_10 = param_2[1];

    if (*(entity_10 + 0xc) != 0xc479c000)
        *(context + 0x148) = *(entity_10 + 0xc);

    void* entity_11 = param_2[1];

    if (*(entity_11 + 0x10) != 0xc479c000)
        *(context + 0x150) = *(entity_11 + 0x10);

    void* entity_12 = param_2[1];

    if (*(entity_12 + 0x14) != 0xc479c000)
        *(context + 0x158) = *(entity_12 + 0x14);

    void* entity_13 = param_2[1];

    if (*(entity_13 + 0x18) != 0xc479c000)
        *(context + 0x160) = *(entity_13 + 0x18);

    void* entity_14 = param_2[1];

    if (*(entity_14 + 0x1c) != 0xc479c000)
        *(context + 0x168) = *(entity_14 + 0x1c);

    void* entity_15 = param_2[1];

    if (*(entity_15 + 0x20) != 0xc479c000)
        *(context + 0x170) = *(entity_15 + 0x20);

    int32_t temp_7 = param_2[1][9];

    if (temp_7 != 0xc479c000)
        *(context + 0x178) = temp_7;

    int32_t temp_8 = param_2[1][0xa];

    if (temp_8 != 0xc479c000)
        *(context + 0x17c) = temp_8;

    int32_t temp_9 = param_2[1][0xb];

    if (temp_9 != 0xc479c000)
        *(context + 0x180) = temp_9;

    int32_t temp_10 = param_2[1][0xc];

    if (temp_10 != 0xc479c000)
        *(context + 0x184) = temp_10;

    int32_t temp_11 = param_2[1][0xd];

    if (temp_11 != 0xc479c000)
        *(context + 0x188) = temp_11;

    int32_t temp_12 = param_2[1][0xe];

    if (temp_12 != 0xc479c000)
        *(context + 0x18c) = temp_12;

    int32_t temp_13 = param_2[1][0xf];

    if (temp_13 != 0xc479c000)
        *(context + 0x190) = temp_13;

    int32_t temp_14 = param_2[1][0x10];

    if (temp_14 != 0xc479c000)
        *(context + 0x194) = temp_14;

    int32_t temp_15 = param_2[1][0x11];

    if (temp_15 != 0xc479c000)
        *(context + 0x198) = temp_15;

    void* entity_29 = param_2[1];

    if (*(entity_29 + 0x48) != 0xc479c000)
        *(context + 0x19c) = *(entity_29 + 0x48);

    void* entity_31 = param_2[1];

    if (*(entity_31 + 0x4c) != 0xc479c000)
        *(context + 0x19d) = *(entity_31 + 0x4c);

    void* entity_32 = param_2[1];

    if (*(entity_32 + 0x50) != 0xc479c000)
        *(context + 0x19e) = *(entity_32 + 0x50);

    void* entity_34 = param_2[1];

    if (*(entity_34 + 0x54) != 0xc479c000)
        *(context + 0x1a0) = *(entity_34 + 0x54);

    if (!*param_2)
        Light_CalculateAttenuation_6(context);

    int32_t* result = *param_2;

    if (result <= 0)
        return result;

    return Light_RenderLensflare_7(context);
}
