// IGI native provenance: BulletHole_Setup - 0x0047D0B0 - CFG score 88.9% (PASS; structural only); runtime behavior not verified.
// Evidence: 0047D0B0-BulletHole_Setup.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "BulletHole_Setup.h"
int32_t BulletHole_Setup(void* context, int32_t param_2)

{
    void* flagP = context;
    void* dest_val = *(flagP + 0xe12c);
    void* item_4 = dest_val;

    if (*(flagP + 0xe138))
    {
        *(dest_val + 0x9c) = 0;
        int32_t item_8_1 = 0;

        if (*(flagP + 0x44e8) > 0)
        {
            void* temp_1 = flagP + 0x44;
            bool flag_2_1;

            do
            {
                if (*(temp_1 + 0x24) != 0xffffffff)
                {
                    void* i = *(temp_1 + 0x30);

                    if (i)
                    {
                        do
                        {
                            int32_t data_9 = *(dest_val + 0x9c);

                            if (data_9 < 0x1f4)
                            {
                                int32_t* data_12 = data_9 * 0x50 + flagP + 0x44ec;
                                data_12[0xf] = *(temp_1 - 0x24);
                                data_12[0x10] = *(temp_1 - 0x20);
                                int32_t context_6 = *(temp_1 - 0x1c);
                                *data_12 = i;
                                flagP = context;
                                data_12[0x11] = context_6;
                                data_12[3] = 0x5408f8;
                                data_12[4] = 0x5408f8;
                                data_12[5] = 0x5408f8;
                                data_12[1] = i + 0xc;
                                data_12[2] = i + 0x18;
                                data_12[6] = *(i + 0x24);
                                data_12[7] = *(i + 0x28);
                                data_12[8] = *(i + 0x2c);
                                data_12[9] = *(i + 0x30);
                                data_12[0xa] = *(i + 0x34);
                                data_12[0xb] = *(i + 0x38);
                                data_12[0x12] = *(temp_1 + 0x28);
                                dest_val = item_4;
                                *(dest_val + 0x9c) += 1;
                            }

                            i = *(i + 0x3c);
                        } while (i);
                    }
                    else
                    {
                        int32_t data_3 = *(dest_val + 0x9c);

                        if (data_3 + 1 < 0x1f4)
                        {
                            void* data_6 = data_3 * 0x50 + flagP;
                            *(data_6 + 0x4528) = *(temp_1 - 0x24);
                            *(data_6 + 0x452c) = *(temp_1 - 0x20);
                            flagP = context;
                            *(data_6 + 0x4530) = *(temp_1 - 0x1c);
                            *(data_6 + 0x4578) = *(temp_1 - 0x24);
                            *(data_6 + 0x457c) = *(temp_1 - 0x20);
                            *(data_6 + 0x4580) = *(temp_1 - 0x1c);
                            *(data_6 + 0x44f8) = 0x5408f8;
                            *(data_6 + 0x44fc) = 0x5408f8;
                            *(data_6 + 0x4500) = 0x5408f8;
                            *(data_6 + 0x4548) = 0x5408f8;
                            *(data_6 + 0x454c) = 0x5408f8;
                            *(data_6 + 0x4550) = 0x5408f8;
                            *(data_6 + 0x44f0) = temp_1;
                            *(data_6 + 0x44ec) = temp_1 - 0xc;
                            *(data_6 + 0x44f4) = temp_1 + 0xc;
                            *(data_6 + 0x4544) = temp_1 + 0xc;
                            *(data_6 + 0x453c) = temp_1;
                            *(data_6 + 0x4540) = temp_1 + 0x18;
                            *(data_6 + 0x4504) = 0;
                            *(data_6 + 0x4508) = 0;
                            *(data_6 + 0x450c) = 0;
                            *(data_6 + 0x4510) = 0x3f800000;
                            *(data_6 + 0x4514) = 0x3f800000;
                            *(data_6 + 0x4518) = 0;
                            *(data_6 + 0x4554) = 0;
                            *(data_6 + 0x4558) = 0x3f800000;
                            *(data_6 + 0x455c) = 0x3f800000;
                            *(data_6 + 0x4560) = 0x3f800000;
                            *(data_6 + 0x4564) = 0x3f800000;
                            *(data_6 + 0x4568) = 0;
                            *(data_6 + 0x4534) = *(temp_1 + 0x28);
                            *(data_6 + 0x4584) = *(temp_1 + 0x28);
                            *(dest_val + 0x9c) += 2;
                        }
                    }
                }

                temp_1 += 0x58;
                flag_2_1 = item_8_1 + 1 < *(flagP + 0x44e8);
                item_8_1 += 1;
            } while (flag_2_1);
        }

        *(flagP + 0xe138) = 0;
    }

    Display_ClearSurfaces_18(dest_val, param_2);
    SoundSys_PlaySoundSample(dest_val, param_2 + 0x18);
    int32_t entity_9 = 0;
    entity_9 = *(dest_val + 0x1c);
    return (*((entity_9 << 2) + &g_a982e0))(dest_val, 0);
}
