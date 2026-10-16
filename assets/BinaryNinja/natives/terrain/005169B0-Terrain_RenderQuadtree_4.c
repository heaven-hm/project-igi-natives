#include "Terrain_RenderQuadtree_4.h"
char* Terrain_RenderQuadtree_4(char* a1, char* a2, int32_t a3)

{
    int32_t i_3 = a3;

    if (i_3)
    {
        char* dstD1 = a1;
        int32_t* dstD2;

        while (dstD1 & 3)
        {
            char valA1 = *dstD1;
            dstD1 = &dstD1[1];

            if (!valA1)
            {
            label_516a0b:
                dstD2 = dstD1 - 1;
                goto label_516a1b;
            }
        }

        while (true)
        {
            int32_t valA2 = *dstD1;
            dstD1 = &dstD1[4];

            if ((valA2 ^ 0xffffffff ^ (0x7efefeff + valA2)) & 0x81010100)
            {
                int32_t valA5 = *(dstD1 - 4);

                if (!valA5)
                {
                    dstD2 = dstD1 - 4;
                    break;
                }

                if (!*(&valA5 + 1))
                {
                    dstD2 = dstD1 - 3;
                    break;
                }

                if (!(valA5 & 0xff0000))
                {
                    dstD2 = dstD1 - 2;
                    break;
                }

                if (!(valA5 & 0xff000000))
                    goto label_516a0b;
            }
        }

    label_516a1b:
        char* srcS1 = a2;
        int32_t i_4;
        uint32_t i_2;
        int32_t tmpD1;

        if (srcS1 & 3)
        {
            do
            {
                tmpD1 = *srcS1;
                srcS1 = &srcS1[1];

                if (!tmpD1)
                {
                label_516a6a:
                    *dstD2 = tmpD1;
                    return a1;
                }

                *dstD2 = tmpD1;
                dstD2 += 1;
                int32_t i_5 = i_3;
                i_3 -= 1;

                if (i_5 == 1)
                    goto label_516a60;
            } while (srcS1 & 3);

            i_4 = i_3;
            i_2 = i_3 >> 2;

            if (i_2)
                goto label_516a7a;
        }
        else
        {
            i_4 = i_3;
            i_2 = i_3 >> 2;

            if (i_2)
            {
            label_516a7a:
                uint32_t i;

                do
                {
                    int32_t valA8 = *srcS1;
                    tmpD1 = *srcS1;
                    srcS1 = &srcS1[4];

                    if ((valA8 ^ 0xffffffff ^ (0x7efefeff + valA8)) & 0x81010100)
                    {
                        if (!tmpD1)
                            goto label_516a6a;

                        if (!*(&tmpD1 + 1))
                        {
                            *dstD2 = tmpD1;
                            return a1;
                        }

                        if (!(tmpD1 & 0xff0000))
                        {
                            *dstD2 = tmpD1;
                            *(dstD2 + 2) = 0;
                            return a1;
                        }

                        if (!(tmpD1 & 0xff000000))
                        {
                            *dstD2 = tmpD1;
                            return a1;
                        }
                    }

                    *dstD2 = tmpD1;
                    dstD2 = &dstD2[1];
                    i = i_2;
                    i_2 -= 1;
                } while (i != 1);
            }
        }
        i_3 = i_4 & 3;

        if (i_3)
        {
            int32_t i_1;

            do
            {
                char tmpD2 = *srcS1;
                srcS1 = &srcS1[1];
                *dstD2 = tmpD2;
                dstD2 += 1;

                if (!tmpD2)
                    return a1;

                i_1 = i_3;
                i_3 -= 1;
            } while (i_1 != 1);
        }

    label_516a60:
        *dstD2 = i_3;
    }

    return a1;
}
