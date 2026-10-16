#include "gi_platform.h"
#include "00403CC0-Config_VerifyContentControlPassword.h"
int32_t Config_VerifyContentControlPassword(int32_t a1, float a2 )

// Sig: int Config_VerifyContentControlPassword(char* password)
// Note: Checks a password attempt against the stored content-control password.
// Param: password = string to test. RETURNS non-zero when correct, 0 when
// wrong. Use before unlocking violent-content options.
{
    int32_t ctxB;
    int32_t v_3c = ctxB;
    char* v_48 = 0x20;
    char v_20;
    char* v_4c = &v_20;
    int32_t v_50 = 0;
    Sys_ResolveSymbol_23(a2, v_50, v_4c, v_48);
    char* srcS = &g_bc79c8;
    char* valA = &v_20;
    int32_t valA2;
    char tmpD1;
    char ctxB1;

    while (true)
    {
        tmpD1 = *valA;
        ctxB1 = *srcS;
        bool c_1 = tmpD1 < ctxB1;

        if (tmpD1 == ctxB1)
        {
            if (!tmpD1)
            {
                valA2 = 0;
                break;
            }

            tmpD1 = valA[1];
            ctxB1 = srcS[1];
            c_1 = tmpD1 < ctxB1;

            if (tmpD1 == ctxB1)
            {
                valA = &valA[2];
                srcS = &srcS[2];

                if (tmpD1)
                    continue;

                valA2 = 0;
                break;
            }
        }

        valA2 = valA - valA + 1;
        break;
    }

    int32_t objC1 = 0;
    char* srcS1 = &g_bc79c8;
    objC1 = !valA2;
    int32_t v_38 = objC1;
    char* valA3 = &v_20;
    int32_t valA5;

    while (true)
    {
        tmpD1 = *valA3;
        ctxB1 = *srcS1;
        bool c_3 = tmpD1 < ctxB1;

        if (tmpD1 == ctxB1)
        {
            if (!tmpD1)
            {
                valA5 = 0;
                break;
            }

            tmpD1 = valA3[1];
            ctxB1 = srcS1[1];
            c_3 = tmpD1 < ctxB1;

            if (tmpD1 == ctxB1)
            {
                valA3 = &valA3[2];
                srcS1 = &srcS1[2];

                if (tmpD1)
                    continue;

                valA5 = 0;
                break;
            }
        }

        valA5 = valA3 - valA3 + 1;
        break;
    }

    float objC3 = 0.0f;
    char* v_28 = &g_567c74;
    objC3 = !valA5;
    double v_30 = objC3;
    memcpy(a1, &v_38, 0x18);
    return a1;
}
