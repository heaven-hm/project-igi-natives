#include "005169B0-Terrain_RenderQuadtree_4.h"
/* 0x005169b0 Terrain_RenderQuadtree_4 full linked: callers=1 callees=0 */
char* sub_5169b0(char* a1, char* a2, int32_t a3)

{
    int32_t i_3 = a3;

    if (i_3)
    {
        char* edi_1 = a1;
        int32_t* edi_2;

        while (edi_1 & 3)
        {
            char eax_1 = *edi_1;
            edi_1 = &edi_1[1];

            if (!eax_1)
            {
            label_516a0b:
                edi_2 = edi_1 - 1;
                goto label_516a1b;
            }
        }

        while (true)
        {
            int32_t eax_2 = *edi_1;
            edi_1 = &edi_1[4];

            if ((eax_2 ^ 0xffffffff ^ (0x7efefeff + eax_2)) & 0x81010100)
            {
                int32_t eax_5 = *(edi_1 - 4);

                if (!eax_5)
                {
                    edi_2 = edi_1 - 4;
                    break;
                }

                if (!*(&eax_5 + 1))
                {
                    edi_2 = edi_1 - 3;
                    break;
                }

                if (!(eax_5 & 0xff0000))
                {
                    edi_2 = edi_1 - 2;
                    break;
                }

                if (!(eax_5 & 0xff000000))
                    goto label_516a0b;
            }
        }

    label_516a1b:
        char* esi_1 = a2;
        int32_t i_4;
        uint32_t i_2;
        int32_t edx_1;

        if (esi_1 & 3)
        {
            do
            {
                edx_1 = *esi_1;
                esi_1 = &esi_1[1];

                if (!edx_1)
                {
                label_516a6a:
                    *edi_2 = edx_1;
                    return a1;
                }

                *edi_2 = edx_1;
                edi_2 += 1;
                int32_t i_5 = i_3;
                i_3 -= 1;

                if (i_5 == 1)
                    goto label_516a60;
            } while (esi_1 & 3);

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
                    int32_t eax_8 = *esi_1;
                    edx_1 = *esi_1;
                    esi_1 = &esi_1[4];

                    if ((eax_8 ^ 0xffffffff ^ (0x7efefeff + eax_8)) & 0x81010100)
                    {
                        if (!edx_1)
                            goto label_516a6a;

                        if (!*(&edx_1 + 1))
                        {
                            *edi_2 = edx_1;
                            return a1;
                        }

                        if (!(edx_1 & 0xff0000))
                        {
                            *edi_2 = edx_1;
                            *(edi_2 + 2) = 0;
                            return a1;
                        }

                        if (!(edx_1 & 0xff000000))
                        {
                            *edi_2 = edx_1;
                            return a1;
                        }
                    }

                    *edi_2 = edx_1;
                    edi_2 = &edi_2[1];
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
                char edx_2 = *esi_1;
                esi_1 = &esi_1[1];
                *edi_2 = edx_2;
                edi_2 += 1;

                if (!edx_2)
                    return a1;

                i_1 = i_3;
                i_3 -= 1;
            } while (i_1 != 1);
        }

    label_516a60:
        *edi_2 = i_3;
    }

    return a1;
}
