// Original IGI.EXE function: Vehicle_InitHeli_6 (VA 0x00437150; static CFG gate PASS, CFG score 0.933).
#include "Vehicle_InitHeli_6.h"
int32_t Vehicle_InitHeli_6(void* context)

{
    int32_t result_1;
    int32_t item_448[0x8];
    int32_t item_428[0x8];
    Script_ParseEnumInt32_21(&item_428, &item_448, &result_1);
    int32_t* i = QTask_DeleteTask_2(context, SoundSys_SetMasterVolume_13());
    int32_t context_val = 0;

    for (; i; i = QTask_TriggerEvent_2(i, SoundSys_SetMasterVolume_13()))
    {
        if (i != *(context + 0x38))
        {
            long double fpu_val_7_2 = i[0x32] - 0.0199999996f;
            long double f0_1 = 0.0f;
            fpu_val_7_2 - f0_1;

            if (*(&((fpu_val_7_2 < f0_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_2, f0_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_2 == f0_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
                fpu_val_7_2 = 0.0f;

            i[0x32] = fpu_val_7_2;
        }
    }

    int32_t result = result_1;
    int32_t temp_val = 0;
    int32_t item_450 = 0;

    if (result > 0)
    {
        while (true)
        {
            int32_t source_1 = item_448[temp_val];

            if (source_1)
            {
                int32_t item_45c_1 = 0;
                void item_388;
                memset(&item_388, 0, 0x80);
                void item_408;
                memset(&item_408, 0, 0x80);
                void item_300;
                int32_t* data_4 = &item_300;
                int32_t i_3 = 0x20;
                int32_t i_1;

                do
                {
                    data_4[-2] = 0;
                    data_4[-1] = 0;
                    *data_4 = 0;
                    data_4[1] = 0;
                    data_4[2] = 0;
                    data_4[3] = 0;
                    data_4 = &data_4[6];
                    i_1 = i_3;
                    i_3 -= 1;
                } while (i_1 != 1);

                if (source_1 > 0)
                {
                    void item_308;
                    void* item_458_1 = &item_308;
                    int32_t* temp_2 = item_428[temp_val] + 0x4c;
                    int32_t item_454_1 = source_1;
                    bool flag_2_1;

                    do
                    {
                        if (temp_2[3])
                        {
                            int32_t i_2 = *temp_2;

                            if (i_2)
                            {
                                int32_t data_6 = 0;

                                if (context_val > 0)
                                {
                                    int32_t* entity_1 = &item_388;

                                    while (*entity_1 != i_2)
                                    {
                                        data_6 += 1;
                                        entity_1 = &entity_1[1];

                                        if (data_6 >= item_45c_1)
                                            break;
                                    }
                                }

                                if (data_6 != item_45c_1)
                                {
                                    int32_t data_8 = data_6 * 0x18;
                                    int32_t saved_target;
                                    *(&saved_target + data_8 + 0x160) =
                                        *(temp_2 - 0x44) + *(&item_308 + data_8);
                                    *(&saved_target + data_8 + 0x168) =
                                        *(temp_2 - 0x3c) + *(&saved_target + data_8 + 0x168);
                                    *(&saved_target + data_8 + 0x170) =
                                        *(temp_2 - 0x34) + *(&saved_target + data_8 + 0x170);
                                    *(&saved_target + data_8 + 0x160) =
                                        *(&saved_target + data_8 + 0x160) * 0.5;
                                    *(&saved_target + data_8 + 0x168) =
                                        *(&saved_target + data_8 + 0x168) * 0.5;
                                    *(&saved_target + data_8 + 0x170) =
                                        *(&saved_target + data_8 + 0x170) * 0.5;
                                    *(&item_408 + context_val) += 1;
                                }
                                else
                                {
                                    *(&item_388 + context_val) = i_2;
                                    memcpy(item_458_1, &temp_2[-0x11], 0x18);
                                    *(&item_408 + context_val) += 1;
                                    item_45c_1 += 1;
                                    item_458_1 += 0x18;
                                    context_val += 4;
                                }
                            }
                        }

                        temp_2 = &temp_2[0x1c];
                        flag_2_1 = item_454_1 != 1;
                        item_454_1 -= 1;
                    } while (flag_2_1);

                    if (item_45c_1 > 0)
                    {
                        void* item_458_2 = &item_308;
                        int32_t* item_45c_2 = &item_388;
                        int32_t item_454_2 = item_45c_1;

                        while (true)
                        {
                            void* context_1 = *item_45c_2;
                            struct status_msg* dest_3 = QTask_DeleteTask_2(context, SoundSys_SetMasterVolume_13());
                            long double fpu_val_7_17;

                            if (!dest_3)
                            {
                            label_4373cd:
                                dest_3 = SoundSys_SetMasterVolume_7(context, *item_45c_2 + 0x134);

                                if (dest_3)
                                {
                                    SoundSys_StopSoundSample_7(dest_3, item_458_2);
                                    fpu_val_7_17 = dest_3->sprite[0x14] + 0.120000005f;
                                    dest_3->sprite[0x14] = fpu_val_7_17;
                                    long double fpu_val_6_1 = 0.0f;
                                    fpu_val_6_1 - fpu_val_7_17;

                                    if (*(&((fpu_val_6_1 < fpu_val_7_17 ? 1 : 0) << 8
                                        | (FCMP_UO(fpu_val_6_1, fpu_val_7_17) ? 1 : 0) << 0xa
                                        | (fpu_val_6_1 == fpu_val_7_17 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
                                    {
                                        long double fpu_val_6_4 = 1.0f;
                                        fpu_val_6_4 - fpu_val_7_17;

                                        if (!(*(&((fpu_val_6_4 < fpu_val_7_17 ? 1 : 0) << 8
                                                | (FCMP_UO(fpu_val_6_4, fpu_val_7_17) ? 1 : 0) << 0xa
                                                | (fpu_val_6_4 == fpu_val_7_17 ? 1 : 0) << 0xe | 0x3800) + 1)
                                                & 1))
                                            dest_3->sprite[0x14] = fpu_val_7_17;
                                        else
                                            dest_3->sprite[0x14] = 1.0f;
                                    }
                                    else
                                        dest_3->sprite[0x14] = 0.0f;
                                }
                            }
                            else
                            {
                                while (true)
                                {
                                    char* source_7 = &dest_3->sprite[0x4b];
                                    char* data_16 = context_1 + 0x134;
                                    int32_t data_18;

                                    while (true)
                                    {
                                        char temp_3 = *data_16;
                                        char f4_1 = ADJ(source_7)->sprite[0x4b];
                                        bool c_1 = temp_3 < f4_1;

                                        if (temp_3 == f4_1)
                                        {
                                            if (!temp_3)
                                            {
                                                data_18 = 0;
                                                break;
                                            }

                                            temp_3 = data_16[1];
                                            char f7_1 = ADJ(source_7)->sprite[0x4c];
                                            c_1 = temp_3 < f7_1;

                                            if (temp_3 == f7_1)
                                            {
                                                data_16 = &data_16[2];
                                                source_7 = &source_7[2];

                                                if (temp_3)
                                                    continue;

                                                data_18 = 0;
                                                break;
                                            }
                                        }

                                        data_18 = data_16 - data_16 + 1;
                                        break;
                                    }

                                    if (!data_18)
                                        break;

                                    dest_3 = QTask_TriggerEvent_2(dest_3, SoundSys_SetMasterVolume_13());

                                    if (!dest_3)
                                        goto label_4373cd;
                                }

                                SoundSys_StopSoundSample_7(dest_3, item_458_2);
                                fpu_val_7_17 = dest_3->sprite[0x14] + 0.120000005f;
                                dest_3->sprite[0x14] = fpu_val_7_17;
                                long double fpu_val_6_2 = 0.0f;
                                fpu_val_6_2 - fpu_val_7_17;

                                if (*(&((fpu_val_6_2 < fpu_val_7_17 ? 1 : 0) << 8
                                    | (FCMP_UO(fpu_val_6_2, fpu_val_7_17) ? 1 : 0) << 0xa
                                    | (fpu_val_6_2 == fpu_val_7_17 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
                                {
                                    long double fpu_val_6_3 = 1.0f;
                                    fpu_val_6_3 - fpu_val_7_17;

                                    if (!(*(&((fpu_val_6_3 < fpu_val_7_17 ? 1 : 0) << 8
                                            | (FCMP_UO(fpu_val_6_3, fpu_val_7_17) ? 1 : 0) << 0xa
                                            | (fpu_val_6_3 == fpu_val_7_17 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
                                        dest_3->sprite[0x14] = fpu_val_7_17;
                                    else
                                        dest_3->sprite[0x14] = 1.0f;
                                }
                                else
                                    dest_3->sprite[0x14] = 0.0f;
                            }
                            bool flag_3_1 = item_454_2 != 1;
                            item_45c_2 = &item_45c_2[1];
                            item_458_2 += 0x18;
                            item_454_2 -= 1;

                            if (!flag_3_1)
                                break;
                        }
                    }

                    temp_val = item_450;
                    context_val = 0;
                }
            }

            result = result_1;
            temp_val += 1;
            item_450 = temp_val;

            if (temp_val >= result)
                break;
        }
    }

    return result;
}
