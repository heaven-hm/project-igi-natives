#include "AnimCam_Process.h"
int32_t* AnimCam_Process(void* a1, int32_t** a2)

{
    char valA = *(a1 + 0x19f);
    *(a1 + 0xd4) = 0;

    if (valA)
        *(a1 + 0xd4) = 1;

    switch (*a2[1])
    {
        case 0:
        {
            *(a1 + 0x100) = AIGraph_LoadParameters;
            *(a1 + 0x1a8) = g_54f444[0];
            *(a1 + 0x1ac) = g_54f444[4][0];
            break;
        }
        case 1:
        {
            *(a1 + 0x100) = AIGraph_LoadParameters;
            *(a1 + 0x1a8) = g_54f42c[0];
            *(a1 + 0x1ac) = g_54f42c[4][0];
            *(a1 + 0x1ae) = g_54f42c[6][0];
            break;
        }
        case 2:
        {
            *(a1 + 0x100) = Light_SampleLightmap_6;
            *(a1 + 0x1a8) = g_54f440;
            break;
        }
        case 3:
        {
            *(a1 + 0x100) = Light_SetLightColor_6;
            *(a1 + 0x1a8) = g_54f434[0];
            *(a1 + 0x1ac) = g_54f434[4][0];
            *(a1 + 0x1b0) = g_54f434[8][0];
            break;
        }
        case 4:
        {
            *(a1 + 0x100) = sub_528ff0;
            *(a1 + 0x1a8) = g_54f424[0];
            *(a1 + 0x1ac) = g_54f424[4][0];
            *(a1 + 0x1ae) = g_54f424[6][0];
            break;
        }
    }

    void* objC7 = a2[1];

    if (*(objC7 + 4) != 0xc479c000)
        *(a1 + 0x108) = *(objC7 + 4);

    void* objC8 = a2[1];

    if (*(objC8 + 8) != 0xc479c000)
        *(a1 + 0x10c) = *(objC8 + 8);

    void* objC10 = a2[1];

    if (*(objC10 + 0xc) != 0xc479c000)
        *(a1 + 0x148) = *(objC10 + 0xc);

    void* objC11 = a2[1];

    if (*(objC11 + 0x10) != 0xc479c000)
        *(a1 + 0x150) = *(objC11 + 0x10);

    void* objC12 = a2[1];

    if (*(objC12 + 0x14) != 0xc479c000)
        *(a1 + 0x158) = *(objC12 + 0x14);

    void* objC13 = a2[1];

    if (*(objC13 + 0x18) != 0xc479c000)
        *(a1 + 0x160) = *(objC13 + 0x18);

    void* objC14 = a2[1];

    if (*(objC14 + 0x1c) != 0xc479c000)
        *(a1 + 0x168) = *(objC14 + 0x1c);

    void* objC15 = a2[1];

    if (*(objC15 + 0x20) != 0xc479c000)
        *(a1 + 0x170) = *(objC15 + 0x20);

    int32_t tmpD7 = a2[1][9];

    if (tmpD7 != 0xc479c000)
        *(a1 + 0x178) = tmpD7;

    int32_t tmpD8 = a2[1][0xa];

    if (tmpD8 != 0xc479c000)
        *(a1 + 0x17c) = tmpD8;

    int32_t tmpD9 = a2[1][0xb];

    if (tmpD9 != 0xc479c000)
        *(a1 + 0x180) = tmpD9;

    int32_t tmpD10 = a2[1][0xc];

    if (tmpD10 != 0xc479c000)
        *(a1 + 0x184) = tmpD10;

    int32_t tmpD11 = a2[1][0xd];

    if (tmpD11 != 0xc479c000)
        *(a1 + 0x188) = tmpD11;

    int32_t tmpD12 = a2[1][0xe];

    if (tmpD12 != 0xc479c000)
        *(a1 + 0x18c) = tmpD12;

    int32_t tmpD13 = a2[1][0xf];

    if (tmpD13 != 0xc479c000)
        *(a1 + 0x190) = tmpD13;

    int32_t tmpD14 = a2[1][0x10];

    if (tmpD14 != 0xc479c000)
        *(a1 + 0x194) = tmpD14;

    int32_t tmpD15 = a2[1][0x11];

    if (tmpD15 != 0xc479c000)
        *(a1 + 0x198) = tmpD15;

    void* objC29 = a2[1];

    if (*(objC29 + 0x48) != 0xc479c000)
        *(a1 + 0x19c) = *(objC29 + 0x48);

    void* objC31 = a2[1];

    if (*(objC31 + 0x4c) != 0xc479c000)
        *(a1 + 0x19d) = *(objC31 + 0x4c);

    void* objC32 = a2[1];

    if (*(objC32 + 0x50) != 0xc479c000)
        *(a1 + 0x19e) = *(objC32 + 0x50);

    void* objC34 = a2[1];

    if (*(objC34 + 0x54) != 0xc479c000)
        *(a1 + 0x1a0) = *(objC34 + 0x54);

    if (!*a2)
        Light_CalculateAttenuation_6(a1);

    int32_t* result = *a2;

    if (result <= 0)
        return result;

    return Light_RenderLensflare_7(a1);
}
