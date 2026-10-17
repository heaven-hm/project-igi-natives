// Original IGI.EXE function: Terrain_RenderQuadtree_4 (VA 0x005169B0; static CFG gate PASS, CFG score 1.000).
#include "Terrain_RenderQuadtree_4.h"
char* Terrain_RenderQuadtree_4(char* context, char* param_2, int32_t param_3)

{
    int32_t i_3 = param_3;

    if (i_3)
    {
        char* dest_1 = context;
        int32_t* dest_2;

        while (dest_1 & 3)
        {
            char data_1 = *dest_1;
            dest_1 = &dest_1[1];

            if (!data_1)
            {
            label_516a0b:
                dest_2 = dest_1 - 1;
                goto label_516a1b;
            }
        }

        while (true)
        {
            int32_t data_2 = *dest_1;
            dest_1 = &dest_1[4];

            if ((data_2 ^ 0xffffffff ^ (0x7efefeff + data_2)) & 0x81010100)
            {
                int32_t data_5 = *(dest_1 - 4);

                if (!data_5)
                {
                    dest_2 = dest_1 - 4;
                    break;
                }

                if (!*(&data_5 + 1))
                {
                    dest_2 = dest_1 - 3;
                    break;
                }

                if (!(data_5 & 0xff0000))
                {
                    dest_2 = dest_1 - 2;
                    break;
                }

                if (!(data_5 & 0xff000000))
                    goto label_516a0b;
            }
        }

    label_516a1b:
        char* source_1 = param_2;
        int32_t i_4;
        uint32_t i_2;
        int32_t temp_1;

        if (source_1 & 3)
        {
            do
            {
                temp_1 = *source_1;
                source_1 = &source_1[1];

                if (!temp_1)
                {
                label_516a6a:
                    *dest_2 = temp_1;
                    return context;
                }

                *dest_2 = temp_1;
                dest_2 += 1;
                int32_t i_5 = i_3;
                i_3 -= 1;

                if (i_5 == 1)
                    goto label_516a60;
            } while (source_1 & 3);

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
                    int32_t data_8 = *source_1;
                    temp_1 = *source_1;
                    source_1 = &source_1[4];

                    if ((data_8 ^ 0xffffffff ^ (0x7efefeff + data_8)) & 0x81010100)
                    {
                        if (!temp_1)
                            goto label_516a6a;

                        if (!*(&temp_1 + 1))
                        {
                            *dest_2 = temp_1;
                            return context;
                        }

                        if (!(temp_1 & 0xff0000))
                        {
                            *dest_2 = temp_1;
                            *(dest_2 + 2) = 0;
                            return context;
                        }

                        if (!(temp_1 & 0xff000000))
                        {
                            *dest_2 = temp_1;
                            return context;
                        }
                    }

                    *dest_2 = temp_1;
                    dest_2 = &dest_2[1];
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
                char temp_2 = *source_1;
                source_1 = &source_1[1];
                *dest_2 = temp_2;
                dest_2 += 1;

                if (!temp_2)
                    return context;

                i_1 = i_3;
                i_3 -= 1;
            } while (i_1 != 1);
        }

    label_516a60:
        *dest_2 = i_3;
    }

    return context;
}
