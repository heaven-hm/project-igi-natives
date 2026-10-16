#include "gi_platform.h"
#include "004AA7B0-Camera_ResetMatrix_20.h"
char* Camera_ResetMatrix_20(char* a1, char* a2, void* a3)

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
                /* jump -> (&jump_table_4aaa40)[-(objC4)] */

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
                    goto label_4aaabb;
                }
                case 3:
                {
                    goto label_4aaacf;
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
    label_4aaabb: ;
                    *(dstD1 + 3) = *(srcS1 + 3);
                    *(dstD1 + 2) = *(srcS1 + 2);
                    return a1;
                    break;
                }
                case 3:
                {
    label_4aaacf: ;
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

            switch (jump_table_4aa998[valA21])
            {
                case 0x4aa9a8:
                {
                    *(dstD1 + 3) = *(srcS1 + 3);
                    objC4 = objC6 >> 2;

                    if (objC4 < 8)
                        /* jump -> (&jump_table_4aaa40)[-(objC4)] */

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
                            goto label_4aaabb;
                        }
                        case 3:
                        {
                            goto label_4aaacf;
                        }
                    }
                    break;
                }
                case 0x4aa9c8:
                {
                    *(dstD1 + 3) = *(srcS1 + 3);
                    objC4 = objC6 >> 2;
                    *(dstD1 + 2) = *(srcS1 + 2);

                    if (objC4 < 8)
                        /* jump -> (&jump_table_4aaa40)[-(objC4)] */

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
                            goto label_4aaabb;
                        }
                        case 3:
                        {
                            goto label_4aaacf;
                        }
                    }
                    break;
                }
                case 0x4aa9f0:
                {
                    *(dstD1 + 3) = *(srcS1 + 3);
                    *(dstD1 + 2) = *(srcS1 + 2);
                    objC4 = objC6 >> 2;
                    *(dstD1 + 1) = *(srcS1 + 1);

                    if (objC4 < 8)
                        /* jump -> (&jump_table_4aaa40)[-(objC4)] */

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
                            goto label_4aaabb;
                        }
                        case 3:
                        {
                            goto label_4aaacf;
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
            /* jump -> (*(int32_t*)(uintptr_t)(((a3 - 4) << 2) + &g_4aa908)) */

        void* valA3 = dstD & 3;
        void* objC3 = a3 - 4 + valA3;

        switch (jump_table_4aa810[valA3])
        {
            case 0x4aa820:
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
                            goto label_4aa91e;
                        }
                        case 3:
                        {
                            goto label_4aa932;
                        }
                    }
                }
                break;
            }
            case 0x4aa84c:
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
                            goto label_4aa91e;
                        }
                        case 3:
                        {
                            goto label_4aa932;
                        }
                    }
                }
                break;
            }
            case 0x4aa870:
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
                            goto label_4aa91e;
                        }
                        case 3:
                        {
                            goto label_4aa932;
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
                    goto label_4aa91e;
                }
                case 3:
                {
                    goto label_4aa932;
                }
            }
        }
    }

    switch (objC1)
    {
        case 0:
        {
            goto label_4aa8ef;
        }
        case 1:
        {
            goto label_4aa8e0;
        }
        case 2:
        {
            goto label_4aa8d8;
        }
        case 3:
        {
            goto label_4aa8d0;
        }
        case 4:
        {
            goto label_4aa8c8;
        }
        case 5:
        {
            goto label_4aa8c0;
        }
        case 6:
        {
            goto label_4aa8b8;
        }
        case 7:
        {
            (*(int32_t*)(uintptr_t)(dstD + (objC1 << 2) - 0x1c)) = (*(int32_t*)(uintptr_t)(srcS + (objC1 << 2) - 0x1c));
    label_4aa8b8: ;
            (*(int32_t*)(uintptr_t)(dstD + (objC1 << 2) - 0x18)) = (*(int32_t*)(uintptr_t)(srcS + (objC1 << 2) - 0x18));
    label_4aa8c0: ;
            (*(int32_t*)(uintptr_t)(dstD + (objC1 << 2) - 0x14)) = (*(int32_t*)(uintptr_t)(srcS + (objC1 << 2) - 0x14));
    label_4aa8c8: ;
            (*(int32_t*)(uintptr_t)(dstD + (objC1 << 2) - 0x10)) = (*(int32_t*)(uintptr_t)(srcS + (objC1 << 2) - 0x10));
    label_4aa8d0: ;
            (*(int32_t*)(uintptr_t)(dstD + (objC1 << 2) - 0xc)) = (*(int32_t*)(uintptr_t)(srcS + (objC1 << 2) - 0xc));
    label_4aa8d8: ;
            (*(int32_t*)(uintptr_t)(dstD + (objC1 << 2) - 8)) = (*(int32_t*)(uintptr_t)(srcS + (objC1 << 2) - 8));
    label_4aa8e0: ;
            (*(int32_t*)(uintptr_t)(dstD + (objC1 << 2) - 4)) = (*(int32_t*)(uintptr_t)(srcS + (objC1 << 2) - 4));
            uint32_t valA15 = objC1 << 2;
            srcS = &srcS[valA15];
            dstD = &dstD[valA15];
    label_4aa8ef: ;
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
    label_4aa91e: ;
                    *dstD = *srcS;
                    dstD[1] = srcS[1];
                    return a1;
                    break;
                }
                case 3:
                {
    label_4aa932: ;
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
