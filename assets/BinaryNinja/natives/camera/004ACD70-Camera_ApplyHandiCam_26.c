// Original IGI.EXE function: Camera_ApplyHandiCam_26 (VA 0x004ACD70; static CFG gate FAIL, CFG score 0.583).
#include "Camera_ApplyHandiCam_26.h"
char* Camera_ApplyHandiCam_26(char* a1, char* a2, void* a3)

{
    char* srcS = a2;
    char* dstD = a1;

    if (dstD > srcS && dstD < a3 + srcS)
    {
        void* srcS1 = a3 + srcS - 4;
        void* dstD1 = a3 + dstD - 4;
        uint32_t objC4;

        if (!(dstD1 & 3))
        {
            objC4 = a3 >> 2;

            if (objC4 < 8)
❓                /* jump -> (&jump_table_4ad000)[-(objC4)] */

            dstD1 = memcpy(dstD1 - (objC4 << 2), srcS1 - (objC4 << 2), objC4 << 2);

            switch (a3 & 3)
            {
                case nullptr:
                {
                    return a1;
                    break;
                }
                case 1:
                {
                    *(dstD1 + 3) = *(srcS1 + 3);
                    return a1;
                    break;
                }
                case 2:
                {
                    goto label_4ad07b;
                }
                case 3:
                {
                    goto label_4ad08f;
                }
            }
        }
        else if (a3 < 4)
            switch (a3)
            {
                case nullptr:
                {
                    return a1;
                    break;
                }
                case 1:
                {
                    *(dstD1 + 3) = *(srcS1 + 3);
                    return a1;
                    break;
                }
                case 2:
                {
                label_4ad07b:
                    *(dstD1 + 3) = *(srcS1 + 3);
                    *(dstD1 + 2) = *(srcS1 + 2);
                    return a1;
                    break;
                }
                case 3:
                {
                label_4ad08f:
                    *(dstD1 + 3) = *(srcS1 + 3);
                    *(dstD1 + 2) = *(srcS1 + 2);
                    *(dstD1 + 1) = *(srcS1 + 1);
                    return a1;
                    break;
                }
            }
        else
        {
            void* valA21 = dstD1 & 3;
            void* objC6 = a3 - valA21;

            switch (jump_table_4acf58[valA21])
            {
                case 0x4acf68:
                {
                    *(dstD1 + 3) = *(srcS1 + 3);
                    objC4 = objC6 >> 2;

                    if (objC4 < 8)
                        /* jump -> (&jump_table_4ad000)[-(objC4)] */

                    dstD1 = memcpy(dstD1 - 1 - (objC4 << 2), srcS1 - 1 - (objC4 << 2),
                        objC4 << 2);

                    switch (3 & objC6)
                    {
                        case nullptr:
                        {
                            return a1;
                            break;
                        }
                        case 1:
                        {
                            *(dstD1 + 3) = *(srcS1 + 3);
                            return a1;
                            break;
                        }
                        case 2:
                        {
                            goto label_4ad07b;
                        }
                        case 3:
                        {
                            goto label_4ad08f;
                        }
                    }
                    break;
                }
                case 0x4acf88:
                {
                    *(dstD1 + 3) = *(srcS1 + 3);
                    objC4 = objC6 >> 2;
                    *(dstD1 + 2) = *(srcS1 + 2);

                    if (objC4 < 8)
                        /* jump -> (&jump_table_4ad000)[-(objC4)] */

                    dstD1 = memcpy(dstD1 - 2 - (objC4 << 2), srcS1 - 2 - (objC4 << 2),
                        objC4 << 2);

                    switch (3 & objC6)
                    {
                        case nullptr:
                        {
                            return a1;
                            break;
                        }
                        case 1:
                        {
                            *(dstD1 + 3) = *(srcS1 + 3);
                            return a1;
                            break;
                        }
                        case 2:
                        {
                            goto label_4ad07b;
                        }
                        case 3:
                        {
                            goto label_4ad08f;
                        }
                    }
                    break;
                }
                case 0x4acfb0:
                {
                    *(dstD1 + 3) = *(srcS1 + 3);
                    *(dstD1 + 2) = *(srcS1 + 2);
                    objC4 = objC6 >> 2;
                    *(dstD1 + 1) = *(srcS1 + 1);

                    if (objC4 < 8)
                        /* jump -> (&jump_table_4ad000)[-(objC4)] */

                    dstD1 = memcpy(dstD1 - 3 - (objC4 << 2), srcS1 - 3 - (objC4 << 2),
                        objC4 << 2);

                    switch (3 & objC6)
                    {
                        case nullptr:
                        {
                            return a1;
                            break;
                        }
                        case 1:
                        {
                            *(dstD1 + 3) = *(srcS1 + 3);
                            return a1;
                            break;
                        }
                        case 2:
                        {
                            goto label_4ad07b;
                        }
                        case 3:
                        {
                            goto label_4ad08f;
                        }
                    }
                    break;
                }
            }
        }
    }

    uint32_t objC1;
    void* tmpD1;

    if (dstD & 3)
    {
        if (a3 < 4)
❓            /* jump -> *(((a3 - 4) << 2) + &g_4acec8) */

        void* valA3 = dstD & 3;
        void* objC3 = a3 - 4 + valA3;

        switch (jump_table_4acdd0[valA3])
        {
            case 0x4acde0:
            {
                tmpD1 = 3 & objC3;
                *dstD = *srcS;
                dstD[1] = srcS[1];
                objC1 = objC3 >> 2;
                dstD[2] = srcS[2];
                srcS = &srcS[3];
                dstD = &dstD[3];

                if (objC1 >= 8)
                {
                    dstD = memcpy(dstD, srcS, objC1 << 2);

                    switch (tmpD1)
                    {
                        case nullptr:
                        {
                            return a1;
                            break;
                        }
                        case 1:
                        {
                            *dstD = *srcS;
                            return a1;
                            break;
                        }
                        case 2:
                        {
                            goto label_4acede;
                        }
                        case 3:
                        {
                            goto label_4acef2;
                        }
                    }
                }
                break;
            }
            case 0x4ace0c:
            {
                tmpD1 = 3 & objC3;
                *dstD = *srcS;
                objC1 = objC3 >> 2;
                dstD[1] = srcS[1];
                srcS = &srcS[2];
                dstD = &dstD[2];

                if (objC1 >= 8)
                {
                    dstD = memcpy(dstD, srcS, objC1 << 2);

                    switch (tmpD1)
                    {
                        case nullptr:
                        {
                            return a1;
                            break;
                        }
                        case 1:
                        {
                            *dstD = *srcS;
                            return a1;
                            break;
                        }
                        case 2:
                        {
                            goto label_4acede;
                        }
                        case 3:
                        {
                            goto label_4acef2;
                        }
                    }
                }
                break;
            }
            case 0x4ace30:
            {
                tmpD1 = 3 & objC3;
                *dstD = *srcS;
                srcS = &srcS[1];
                objC1 = objC3 >> 2;
                dstD = &dstD[1];

                if (objC1 >= 8)
                {
                    dstD = memcpy(dstD, srcS, objC1 << 2);

                    switch (tmpD1)
                    {
                        case nullptr:
                        {
                            return a1;
                            break;
                        }
                        case 1:
                        {
                            *dstD = *srcS;
                            return a1;
                            break;
                        }
                        case 2:
                        {
                            goto label_4acede;
                        }
                        case 3:
                        {
                            goto label_4acef2;
                        }
                    }
                }
                break;
            }
        }
    }
    else
    {
        objC1 = a3 >> 2;
        tmpD1 = a3 & 3;

        if (objC1 >= 8)
        {
            dstD = memcpy(dstD, srcS, objC1 << 2);

            switch (tmpD1)
            {
                case nullptr:
                {
                    return a1;
                    break;
                }
                case 1:
                {
                    *dstD = *srcS;
                    return a1;
                    break;
                }
                case 2:
                {
                    goto label_4acede;
                }
                case 3:
                {
                    goto label_4acef2;
                }
            }
        }
    }

    switch (objC1)
    {
        case 0:
        {
            goto label_4aceaf;
        }
        case 1:
        {
            goto label_4acea0;
        }
        case 2:
        {
            goto label_4ace98;
        }
        case 3:
        {
            goto label_4ace90;
        }
        case 4:
        {
            goto label_4ace88;
        }
        case 5:
        {
            goto label_4ace80;
        }
        case 6:
        {
            goto label_4ace78;
        }
        case 7:
        {
            *(dstD + (objC1 << 2) - 0x1c) = *(srcS + (objC1 << 2) - 0x1c);
        label_4ace78:
            *(dstD + (objC1 << 2) - 0x18) = *(srcS + (objC1 << 2) - 0x18);
        label_4ace80:
            *(dstD + (objC1 << 2) - 0x14) = *(srcS + (objC1 << 2) - 0x14);
        label_4ace88:
            *(dstD + (objC1 << 2) - 0x10) = *(srcS + (objC1 << 2) - 0x10);
        label_4ace90:
            *(dstD + (objC1 << 2) - 0xc) = *(srcS + (objC1 << 2) - 0xc);
        label_4ace98:
            *(dstD + (objC1 << 2) - 8) = *(srcS + (objC1 << 2) - 8);
        label_4acea0:
            *(dstD + (objC1 << 2) - 4) = *(srcS + (objC1 << 2) - 4);
            uint32_t valA15 = objC1 << 2;
            srcS = &srcS[valA15];
            dstD = &dstD[valA15];
        label_4aceaf:

            switch (tmpD1)
            {
                case nullptr:
                {
                    return a1;
                    break;
                }
                case 1:
                {
                    *dstD = *srcS;
                    return a1;
                    break;
                }
                case 2:
                {
                label_4acede:
                    *dstD = *srcS;
                    dstD[1] = srcS[1];
                    return a1;
                    break;
                }
                case 3:
                {
                label_4acef2:
                    *dstD = *srcS;
                    dstD[1] = srcS[1];
                    dstD[2] = srcS[2];
                    return a1;
                    break;
                }
            }
            break;
        }
    }
}
