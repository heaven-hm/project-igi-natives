// Original IGI.EXE function: Camera_ResetMatrix_20 (VA 0x004AA7B0; static CFG gate FAIL, CFG score 0.583).
#include "Camera_ResetMatrix_20.h"
char* Camera_ResetMatrix_20(char* context, char* param_2, void* param_3)

{
    char* source_val = param_2;
    char* dest_val = context;

    if (dest_val > source_val && dest_val < param_3 + source_val)
    {
        void* source_1 = param_3 + source_val - 4;
        void* dest_1 = param_3 + dest_val - 4;
        uint32_t entity_4;

        if (!(dest_1 & 3))
        {
            entity_4 = param_3 >> 2;

            if (entity_4 < 8)
❓                /* jump -> (&jump_table_4aaa40)[-(entity_4)] */

            dest_1 = memcpy(dest_1 - (entity_4 << 2), source_1 - (entity_4 << 2), entity_4 << 2);

            switch (param_3 & 3)
            {
                case nullptr:
                {
                    return context;
                    break;
                }
                case 1:
                {
                    *(dest_1 + 3) = *(source_1 + 3);
                    return context;
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
        else if (param_3 < 4)
            switch (param_3)
            {
                case nullptr:
                {
                    return context;
                    break;
                }
                case 1:
                {
                    *(dest_1 + 3) = *(source_1 + 3);
                    return context;
                    break;
                }
                case 2:
                {
                label_4aaabb:
                    *(dest_1 + 3) = *(source_1 + 3);
                    *(dest_1 + 2) = *(source_1 + 2);
                    return context;
                    break;
                }
                case 3:
                {
                label_4aaacf:
                    *(dest_1 + 3) = *(source_1 + 3);
                    *(dest_1 + 2) = *(source_1 + 2);
                    *(dest_1 + 1) = *(source_1 + 1);
                    return context;
                    break;
                }
            }
        else
        {
            void* data_21 = dest_1 & 3;
            void* entity_6 = param_3 - data_21;

            switch (jump_table_4aa998[data_21])
            {
                case 0x4aa9a8:
                {
                    *(dest_1 + 3) = *(source_1 + 3);
                    entity_4 = entity_6 >> 2;

                    if (entity_4 < 8)
                        /* jump -> (&jump_table_4aaa40)[-(entity_4)] */

                    dest_1 = memcpy(dest_1 - 1 - (entity_4 << 2), source_1 - 1 - (entity_4 << 2),
                        entity_4 << 2);

                    switch (3 & entity_6)
                    {
                        case nullptr:
                        {
                            return context;
                            break;
                        }
                        case 1:
                        {
                            *(dest_1 + 3) = *(source_1 + 3);
                            return context;
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
                    *(dest_1 + 3) = *(source_1 + 3);
                    entity_4 = entity_6 >> 2;
                    *(dest_1 + 2) = *(source_1 + 2);

                    if (entity_4 < 8)
                        /* jump -> (&jump_table_4aaa40)[-(entity_4)] */

                    dest_1 = memcpy(dest_1 - 2 - (entity_4 << 2), source_1 - 2 - (entity_4 << 2),
                        entity_4 << 2);

                    switch (3 & entity_6)
                    {
                        case nullptr:
                        {
                            return context;
                            break;
                        }
                        case 1:
                        {
                            *(dest_1 + 3) = *(source_1 + 3);
                            return context;
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
                    *(dest_1 + 3) = *(source_1 + 3);
                    *(dest_1 + 2) = *(source_1 + 2);
                    entity_4 = entity_6 >> 2;
                    *(dest_1 + 1) = *(source_1 + 1);

                    if (entity_4 < 8)
                        /* jump -> (&jump_table_4aaa40)[-(entity_4)] */

                    dest_1 = memcpy(dest_1 - 3 - (entity_4 << 2), source_1 - 3 - (entity_4 << 2),
                        entity_4 << 2);

                    switch (3 & entity_6)
                    {
                        case nullptr:
                        {
                            return context;
                            break;
                        }
                        case 1:
                        {
                            *(dest_1 + 3) = *(source_1 + 3);
                            return context;
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

    uint32_t entity_1;
    void* temp_1;

    if (dest_val & 3)
    {
        if (param_3 < 4)
❓            /* jump -> *(((param_3 - 4) << 2) + &g_4aa908) */

        void* data_3 = dest_val & 3;
        void* entity_3 = param_3 - 4 + data_3;

        switch (jump_table_4aa810[data_3])
        {
            case 0x4aa820:
            {
                temp_1 = 3 & entity_3;
                *dest_val = *source_val;
                dest_val[1] = source_val[1];
                entity_1 = entity_3 >> 2;
                dest_val[2] = source_val[2];
                source_val = &source_val[3];
                dest_val = &dest_val[3];

                if (entity_1 >= 8)
                {
                    dest_val = memcpy(dest_val, source_val, entity_1 << 2);

                    switch (temp_1)
                    {
                        case nullptr:
                        {
                            return context;
                            break;
                        }
                        case 1:
                        {
                            *dest_val = *source_val;
                            return context;
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
                temp_1 = 3 & entity_3;
                *dest_val = *source_val;
                entity_1 = entity_3 >> 2;
                dest_val[1] = source_val[1];
                source_val = &source_val[2];
                dest_val = &dest_val[2];

                if (entity_1 >= 8)
                {
                    dest_val = memcpy(dest_val, source_val, entity_1 << 2);

                    switch (temp_1)
                    {
                        case nullptr:
                        {
                            return context;
                            break;
                        }
                        case 1:
                        {
                            *dest_val = *source_val;
                            return context;
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
                temp_1 = 3 & entity_3;
                *dest_val = *source_val;
                source_val = &source_val[1];
                entity_1 = entity_3 >> 2;
                dest_val = &dest_val[1];

                if (entity_1 >= 8)
                {
                    dest_val = memcpy(dest_val, source_val, entity_1 << 2);

                    switch (temp_1)
                    {
                        case nullptr:
                        {
                            return context;
                            break;
                        }
                        case 1:
                        {
                            *dest_val = *source_val;
                            return context;
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
        entity_1 = param_3 >> 2;
        temp_1 = param_3 & 3;

        if (entity_1 >= 8)
        {
            dest_val = memcpy(dest_val, source_val, entity_1 << 2);

            switch (temp_1)
            {
                case nullptr:
                {
                    return context;
                    break;
                }
                case 1:
                {
                    *dest_val = *source_val;
                    return context;
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

    switch (entity_1)
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
            *(dest_val + (entity_1 << 2) - 0x1c) = *(source_val + (entity_1 << 2) - 0x1c);
        label_4aa8b8:
            *(dest_val + (entity_1 << 2) - 0x18) = *(source_val + (entity_1 << 2) - 0x18);
        label_4aa8c0:
            *(dest_val + (entity_1 << 2) - 0x14) = *(source_val + (entity_1 << 2) - 0x14);
        label_4aa8c8:
            *(dest_val + (entity_1 << 2) - 0x10) = *(source_val + (entity_1 << 2) - 0x10);
        label_4aa8d0:
            *(dest_val + (entity_1 << 2) - 0xc) = *(source_val + (entity_1 << 2) - 0xc);
        label_4aa8d8:
            *(dest_val + (entity_1 << 2) - 8) = *(source_val + (entity_1 << 2) - 8);
        label_4aa8e0:
            *(dest_val + (entity_1 << 2) - 4) = *(source_val + (entity_1 << 2) - 4);
            uint32_t data_15 = entity_1 << 2;
            source_val = &source_val[data_15];
            dest_val = &dest_val[data_15];
        label_4aa8ef:

            switch (temp_1)
            {
                case nullptr:
                {
                    return context;
                    break;
                }
                case 1:
                {
                    *dest_val = *source_val;
                    return context;
                    break;
                }
                case 2:
                {
                label_4aa91e:
                    *dest_val = *source_val;
                    dest_val[1] = source_val[1];
                    return context;
                    break;
                }
                case 3:
                {
                label_4aa932:
                    *dest_val = *source_val;
                    dest_val[1] = source_val[1];
                    dest_val[2] = source_val[2];
                    return context;
                    break;
                }
            }
            break;
        }
    }
}
