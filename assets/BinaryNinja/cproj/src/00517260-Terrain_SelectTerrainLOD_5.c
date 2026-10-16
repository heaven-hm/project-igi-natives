#include "gi_platform.h"
#include "00517260-Terrain_SelectTerrainLOD_5.h"
int32_t Terrain_SelectTerrainLOD_5(int32_t a1, void** a2, char* a3, int32_t a4)

{
    int32_t valA = 0;
    char* objC = nullptr;
    int32_t dstD = a4;
    char* srcS = nullptr;

    if (dstD)
    {
        int32_t ctxB1 = a1;
        int32_t result = 0;
        char tmpD1;

        while (true)
        {
            tmpD1 = objC[ctxB1];

            if (tmpD1 != 0x20 && tmpD1 != 9 && tmpD1 != 0xa && tmpD1 != 0xd)
                break;

            objC = &objC[1];
        }

        tmpD1 = objC[ctxB1];
        char* flagP1;

        if (tmpD1 == 0x22)
        {
            char i = objC[ctxB1 + 1];
            flagP1 = a3;
            void* objC1 = &objC[1];

            if (i != tmpD1)
            {
                do
                {
                    if (!i)
                        return 0;

                    if (i != 0x5c)
                        (*(int32_t*)(uintptr_t)(srcS + flagP1)) = i;
                    else
                    {
                        i = *(objC1 + ctxB1 + 1);
                        objC1 += 1;

                        if (i - 0x58 > 0x20)
                            (*(int32_t*)(uintptr_t)(srcS + flagP1)) = i;
                        else
                        {
                            int32_t tmpD3 = 0;
                            tmpD3 = *(i + 0x517494);

                            switch (tmpD3)
                            {
                                case 0:
                                {
                                    i = *(objC1 + ctxB1 + 1);

                                    i = i <= 0x39 ? i << 4 : ((i & 0xf) + 9) << 4;

                                    char tmpD4 = *(objC1 + 1 + ctxB1 + 1);
                                    objC1 += 2;

                                    tmpD4 = tmpD4 <= 0x39 ? tmpD4 & 0xf : (tmpD4 & 0xf) + 9;

                                    (*(int32_t*)(uintptr_t)(srcS + flagP1)) = i | tmpD4;
                                    break;
                                }
                                case 1:
                                {
                                    (*(int32_t*)(uintptr_t)(srcS + flagP1)) = 8;
                                    break;
                                }
                                case 2:
                                {
                                    (*(int32_t*)(uintptr_t)(srcS + flagP1)) = 0xa;
                                    break;
                                }
                                case 3:
                                {
                                    (*(int32_t*)(uintptr_t)(srcS + flagP1)) = 0xd;
                                    break;
                                }
                                case 4:
                                {
                                    (*(int32_t*)(uintptr_t)(srcS + flagP1)) = 9;
                                    break;
                                }
                                case 5:
                                {
                                    (*(int32_t*)(uintptr_t)(srcS + flagP1)) = i;
                                    break;
                                }
                            }
                        }
                    }

                    i = *(objC1 + ctxB1 + 1);
                    srcS = &srcS[1];
                    objC1 += 1;
                } while (i != 0x22);
            }

            objC = objC1 + 1;
            result = 1;
            goto label_51733d;
        }

        flagP1 = a3;
        a4 = 0;
        a1 = 0;

        if (tmpD1 < 0x30 || tmpD1 > 0x39)
        {
            if (tmpD1 != 0x24)
                goto label_5173e4;

            srcS = 1;
            objC = &objC[1];
            int32_t f0_1 = dstD;
            dstD -= 1;
            a1 = 1;
            a4 = 1;
            *flagP1 = tmpD1;

            if (f0_1 == 1)
                return 0;

            goto label_5173e4;
        }

        a1 = 1;

        if (tmpD1 != 0x30)
        {
    label_5173da: ;
            valA = 0;
    label_5173e4: ;
            while (true)
            {
                char tmpD7;

                if (!a4)
                {
                    tmpD7 = objC[ctxB1];

                    if (a1)
                    {
                        if (tmpD7 == 0x2e)
                        {
                            (*(int32_t*)(uintptr_t)(srcS + flagP1)) = 0x2e;
                            srcS = &srcS[1];
                            objC = &objC[1];
                            int32_t f2_1 = dstD;
                            dstD -= 1;

                            if (f2_1 == 1)
                                return 0;
                        }

                        tmpD7 = objC[ctxB1];

                        if (tmpD7 == 0x65 || tmpD7 == 0x45)
                        {
                            if (valA)
                                break;

                            (*(int32_t*)(uintptr_t)(srcS + flagP1)) = tmpD7;
                            srcS = &srcS[1];
                            objC = &objC[1];
                            int32_t f5_1 = dstD;
                            dstD -= 1;

                            if (f5_1 == 1)
                                return 0;

                            tmpD7 = objC[ctxB1];

                            if (tmpD7 == 0x2b || tmpD7 == 0x2d)
                            {
                                (*(int32_t*)(uintptr_t)(srcS + flagP1)) = tmpD7;
                                srcS = &srcS[1];
                                objC = &objC[1];
                                int32_t f6_1 = dstD;
                                dstD -= 1;

                                if (f6_1 == 1)
                                    return 0;
                            }

                            valA = 1;
                        }

                        tmpD7 = objC[ctxB1];

                        if (tmpD7 < 0x30)
                            break;

                        if (tmpD7 > 0x39)
                            break;
                    }
                    else if ((tmpD7 < 0x30 || tmpD7 > 0x39) && (tmpD7 < 0x61 || tmpD7 > 0x7a)
                            && (tmpD7 < 0x41 || tmpD7 > 0x5a) && tmpD7 != 0x5f && tmpD7 != 0x2e)
                        break;
                }
                else
                {
                    tmpD7 = objC[ctxB1];

                    if ((tmpD7 < 0x30 || tmpD7 > 0x39) && (tmpD7 < 0x61 || tmpD7 > 0x66))
                    {
                        if (tmpD7 < 0x41)
                            break;

                        if (tmpD7 > 0x46)
                            break;
                    }
                }

                (*(int32_t*)(uintptr_t)(srcS + flagP1)) = tmpD7;
                srcS = &srcS[1];
                objC = &objC[1];
                int32_t f3_1 = dstD;
                dstD -= 1;

                if (f3_1 == 1)
                    return 0;

                result = 1;
            }
    label_51733d: ;
            (*(int32_t*)(uintptr_t)(srcS + flagP1)) = 0;

            if (a2)
                *a2 = &objC[ctxB1];

            return result;
        }

        tmpD1 = objC[ctxB1 + 1];

        if (tmpD1 != 0x78 && tmpD1 != 0x58)
            goto label_5173da;

        int32_t dstD2 = dstD - 1;
        a4 = 1;
        *flagP1 = 0x30;

        if (dstD != 1)
        {
            char valA2 = objC[1 + ctxB1];
            objC = &objC[2];
            dstD = dstD2 - 1;
            flagP1[1] = valA2;
            srcS = 2;

            if (dstD2 != 1)
                goto label_5173da;
        }
    }

    return 0;
}
