// Original IGI.EXE function: GlobalLight_Process (VA 0x005282C0; static CFG gate PASS, CFG score 1.000).
#include "GlobalLight_Process.h"
int32_t GlobalLight_Process(void* a1)

{
    void* srcS = a1;

    if (*(srcS + 0x1a0))
    {
        if (!*(srcS + 0xd0))
        {
            int32_t* valA2 = srcS + 0x8c;
            int32_t i_3 = 5;
            int32_t i;

            do
            {
                *valA2 = 0xffffffff;
                valA2 = &valA2[0x11];
                i = i_3;
                i_3 -= 1;
            } while (i != 1);
        }
        else
        {
            int32_t i_1 = 0;
            int32_t* objC1 = srcS + 0x8c;

            do
            {
                int32_t tmpD1 = i_1 - 1;
                i_1 += 1;
                *objC1 = tmpD1;
                objC1 = &objC1[0x11];
            } while (i_1 < 5);
        }

        *(srcS + 0x1a0) = 0;
    }

    if (!g_a84380)
        g_a84380 = srcS;

    long double fpu7 = *(srcS + 0x44);
    *(srcS + 0x48) = fpu7;
    g_a83ea0 = fpu7;
    void* valA4 = *(srcS + 0x14);

    if (valA4 && *(valA4 + 0x1c) == g_a8408c)
    {
        void* dstD1 = *(srcS + 0x14);
        uint32_t valA7 = Script_ParseEnumReal32_8();
        int32_t tmpD2 = 0;
        tmpD2 = *(dstD1 + 0x1c);
        (*(((valA7 * 0x180 + tmpD2) << 2) + &g_a96ae0))(dstD1, srcS);
    }

    a1 = 5;
    bool cond_0_1;

    do
    {
        int32_t* valA9 = srcS + 0x4c;
        int32_t i_4 = 5;
        int32_t i_2;

        do
        {
            int32_t objC5 = valA9[0x10];

            if (objC5 >= 0 && objC5 < 5)
            {
                void* objC6 = srcS + objC5 * 0x44;
                *valA9 = *(objC6 + 0x4c);
                valA9[1] = *(objC6 + 0x50);
                valA9[2] = *(objC6 + 0x54);
                valA9[3] = *(objC6 + 0x58);
                valA9[4] = *(objC6 + 0x5c);
                valA9[5] = *(objC6 + 0x60);
                valA9[6] = *(objC6 + 0x64);
            }

            valA9 = &valA9[0x11];
            i_2 = i_4;
            i_4 -= 1;
        } while (i_2 != 1);
        cond_0_1 = a1 != 1;
        a1 -= 1;
    } while (cond_0_1);
    int32_t result = g_a84380;

    if (result == srcS)
        g_a84380 = 0;

    return result;
}
