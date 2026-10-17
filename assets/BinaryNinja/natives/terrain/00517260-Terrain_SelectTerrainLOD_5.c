// Original IGI.EXE function: Terrain_SelectTerrainLOD_5 (VA 0x00517260; static CFG gate PASS, CFG score 1.000).
#include "Terrain_SelectTerrainLOD_5.h"
int32_t Terrain_SelectTerrainLOD_5(int32_t context, void** param_2, char* param_3, int32_t param_4)

{
    int32_t data_val = 0;
    char* entity_val = nullptr;
    int32_t dest_val = param_4;
    char* source_val = nullptr;

    if (dest_val)
    {
        int32_t context_1 = context;
        int32_t result = 0;
        char temp_1;

        while (true)
        {
            temp_1 = entity_val[context_1];

            if (temp_1 != 0x20 && temp_1 != 9 && temp_1 != 0xa && temp_1 != 0xd)
                break;

            entity_val = &entity_val[1];
        }

        temp_1 = entity_val[context_1];
        char* flagP1;

        if (temp_1 == 0x22)
        {
            char i = entity_val[context_1 + 1];
            flagP1 = param_3;
            void* entity_1 = &entity_val[1];

            if (i != temp_1)
            {
                do
                {
                    if (!i)
                        return 0;

                    if (i != 0x5c)
                        *(source_val + flagP1) = i;
                    else
                    {
                        i = *(entity_1 + context_1 + 1);
                        entity_1 += 1;

                        if (i - 0x58 > 0x20)
                            *(source_val + flagP1) = i;
                        else
                        {
                            int32_t temp_3 = 0;
                            temp_3 = *(i + 0x517494);

                            switch (temp_3)
                            {
                                case 0:
                                {
                                    i = *(entity_1 + context_1 + 1);

                                    i = i <= 0x39 ? i << 4 : ((i & 0xf) + 9) << 4;

                                    char temp_4 = *(entity_1 + 1 + context_1 + 1);
                                    entity_1 += 2;

                                    temp_4 = temp_4 <= 0x39 ? temp_4 & 0xf : (temp_4 & 0xf) + 9;

                                    *(source_val + flagP1) = i | temp_4;
                                    break;
                                }
                                case 1:
                                {
                                    *(source_val + flagP1) = 8;
                                    break;
                                }
                                case 2:
                                {
                                    *(source_val + flagP1) = 0xa;
                                    break;
                                }
                                case 3:
                                {
                                    *(source_val + flagP1) = 0xd;
                                    break;
                                }
                                case 4:
                                {
                                    *(source_val + flagP1) = 9;
                                    break;
                                }
                                case 5:
                                {
                                    *(source_val + flagP1) = i;
                                    break;
                                }
                            }
                        }
                    }

                    i = *(entity_1 + context_1 + 1);
                    source_val = &source_val[1];
                    entity_1 += 1;
                } while (i != 0x22);
            }

            entity_val = entity_1 + 1;
            result = 1;
            goto label_51733d;
        }

        flagP1 = param_3;
        param_4 = 0;
        context = 0;

        if (temp_1 < 0x30 || temp_1 > 0x39)
        {
            if (temp_1 != 0x24)
                goto label_5173e4;

            source_val = 1;
            entity_val = &entity_val[1];
            int32_t f0_1 = dest_val;
            dest_val -= 1;
            context = 1;
            param_4 = 1;
            *flagP1 = temp_1;

            if (f0_1 == 1)
                return 0;

            goto label_5173e4;
        }

        context = 1;

        if (temp_1 != 0x30)
        {
        label_5173da:
            data_val = 0;
        label_5173e4:

            while (true)
            {
                char temp_7;

                if (!param_4)
                {
                    temp_7 = entity_val[context_1];

                    if (context)
                    {
                        if (temp_7 == 0x2e)
                        {
                            *(source_val + flagP1) = 0x2e;
                            source_val = &source_val[1];
                            entity_val = &entity_val[1];
                            int32_t f2_1 = dest_val;
                            dest_val -= 1;

                            if (f2_1 == 1)
                                return 0;
                        }

                        temp_7 = entity_val[context_1];

                        if (temp_7 == 0x65 || temp_7 == 0x45)
                        {
                            if (data_val)
                                break;

                            *(source_val + flagP1) = temp_7;
                            source_val = &source_val[1];
                            entity_val = &entity_val[1];
                            int32_t f5_1 = dest_val;
                            dest_val -= 1;

                            if (f5_1 == 1)
                                return 0;

                            temp_7 = entity_val[context_1];

                            if (temp_7 == 0x2b || temp_7 == 0x2d)
                            {
                                *(source_val + flagP1) = temp_7;
                                source_val = &source_val[1];
                                entity_val = &entity_val[1];
                                int32_t f6_1 = dest_val;
                                dest_val -= 1;

                                if (f6_1 == 1)
                                    return 0;
                            }

                            data_val = 1;
                        }

                        temp_7 = entity_val[context_1];

                        if (temp_7 < 0x30)
                            break;

                        if (temp_7 > 0x39)
                            break;
                    }
                    else if ((temp_7 < 0x30 || temp_7 > 0x39) && (temp_7 < 0x61 || temp_7 > 0x7a)
                            && (temp_7 < 0x41 || temp_7 > 0x5a) && temp_7 != 0x5f && temp_7 != 0x2e)
                        break;
                }
                else
                {
                    temp_7 = entity_val[context_1];

                    if ((temp_7 < 0x30 || temp_7 > 0x39) && (temp_7 < 0x61 || temp_7 > 0x66))
                    {
                        if (temp_7 < 0x41)
                            break;

                        if (temp_7 > 0x46)
                            break;
                    }
                }

                *(source_val + flagP1) = temp_7;
                source_val = &source_val[1];
                entity_val = &entity_val[1];
                int32_t f3_1 = dest_val;
                dest_val -= 1;

                if (f3_1 == 1)
                    return 0;

                result = 1;
            }

        label_51733d:
            *(source_val + flagP1) = 0;

            if (param_2)
                *param_2 = &entity_val[context_1];

            return result;
        }

        temp_1 = entity_val[context_1 + 1];

        if (temp_1 != 0x78 && temp_1 != 0x58)
            goto label_5173da;

        int32_t dest_2 = dest_val - 1;
        param_4 = 1;
        *flagP1 = 0x30;

        if (dest_val != 1)
        {
            char data_2 = entity_val[1 + context_1];
            entity_val = &entity_val[2];
            dest_val = dest_2 - 1;
            flagP1[1] = data_2;
            source_val = 2;

            if (dest_2 != 1)
                goto label_5173da;
        }
    }

    return 0;
}
