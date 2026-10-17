// Original IGI.EXE function: Camera_ApplyPostProcess_7 (VA 0x004A5E53; static CFG gate PASS, CFG score 1.000).
#include "Camera_ApplyPostProcess_7.h"
int32_t Camera_ApplyPostProcess_7(int32_t context, EXCEPTION_POINTERS* param_2)

{
    int32_t* data_val = Camera_UpdateViewCone_7(context);

    if (data_val)
    {
        int32_t context_1 = data_val[2];

        if (context_1)
        {
            if (context_1 == 5)
            {
                data_val[2] = 0;
                return 1;
            }

            if (context_1 != 1)
            {
                int32_t entity_1 = g_9360b0;
                g_9360b0 = param_2;
                int32_t entity_3 = data_val[1];

                if (entity_3 != 8)
                {
                    data_val[2] = 0;
                    context_1(entity_3);
                }
                else
                {
                    int32_t entity_4 = g_543fa0;
                    int32_t temp_2 = g_543fa4 + entity_4;

                    if (entity_4 < temp_2)
                    {
                        int32_t i_1 = temp_2 - entity_4;
                        int32_t* source_2 = entity_4 * 0xc + &g_543f30;
                        int32_t i;

                        do
                        {
                            *source_2 = 0;
                            source_2 = &source_2[3];
                            i = i_1;
                            i_1 -= 1;
                        } while (i != 1);
                    }

                    int32_t source_3 = g_543fac;

                    switch (*data_val)
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

                    context_1(8, g_543fac);
                    g_543fac = source_3;
                }

                g_9360b0 = entity_1;
            }

            return 0xffffffff;
        }
    }

    return UnhandledExceptionFilter(param_2);
}
