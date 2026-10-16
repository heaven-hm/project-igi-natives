#include "gi_platform.h"
#include "004A5E53-Camera_ApplyPostProcess_7.h"
int32_t Camera_ApplyPostProcess_7(int32_t a1, EXCEPTION_POINTERS* a2)

{
    int32_t* valA = Camera_UpdateViewCone_7(a1);

    if (valA)
    {
        int32_t ctxB1 = valA[2];

        if (ctxB1)
        {
            if (ctxB1 == 5)
            {
                valA[2] = 0;
                return 1;
            }

            if (ctxB1 != 1)
            {
                int32_t objC1 = g_9360b0;
                g_9360b0 = a2;
                int32_t objC3 = valA[1];

                if (objC3 != 8)
                {
                    valA[2] = 0;
                    ctxB1(objC3);
                }
                else
                {
                    int32_t objC4 = g_543fa0;
                    int32_t tmpD2 = g_543fa4 + objC4;

                    if (objC4 < tmpD2)
                    {
                        int32_t i_1 = tmpD2 - objC4;
                        int32_t* srcS2 = objC4 * 0xc + &g_543f30;
                        int32_t i;

                        do
                        {
                            *srcS2 = 0;
                            srcS2 = &srcS2[3];
                            i = i_1;
                            i_1 -= 1;
                        } while (i != 1);
                    }

                    int32_t srcS3 = g_543fac;

                    switch (*valA)
                    {
                        case 0xc000008d:
                        {
                            g_543fac = 0x82;
                            break;
                        }
                        case 0xc000008e:
                        {
                            g_543fac = 0x83;
                            break;
                        }
                        case 0xc000008f:
                        {
                            g_543fac = 0x86;
                            break;
                        }
                        case 0xc0000090:
                        {
                            g_543fac = 0x81;
                            break;
                        }
                        case 0xc0000091:
                        {
                            g_543fac = 0x84;
                            break;
                        }
                        case 0xc0000092:
                        {
                            g_543fac = 0x8a;
                            break;
                        }
                        case 0xc0000093:
                        {
                            g_543fac = 0x85;
                            break;
                        }
                    }

                    ctxB1(8, g_543fac);
                    g_543fac = srcS3;
                }

                g_9360b0 = objC1;
            }

            return 0xffffffff;
        }
    }

    return UnhandledExceptionFilter(a2);
}
