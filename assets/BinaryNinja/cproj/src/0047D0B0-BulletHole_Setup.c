#include "gi_platform.h"
#include "0047D0B0-BulletHole_Setup.h"
int32_t BulletHole_Setup(void* a1, int32_t a2)

{
    void* flagP = a1;
    void* dstD = *(flagP + 0xe12c);
    void* v_4 = dstD;

    if (*(flagP + 0xe138))
    {
        (*(int32_t*)(uintptr_t)(dstD + 0x9c)) = 0;
        int32_t v_8_1 = 0;

        if (*(flagP + 0x44e8) > 0)
        {
            void* tmpD1 = flagP + 0x44;
            bool cond_2_1;

            do
            {
                if (*(tmpD1 + 0x24) != 0xffffffff)
                {
                    void* i = *(tmpD1 + 0x30);

                    if (i)
                    {
                        do
                        {
                            int32_t valA9 = (*(int32_t*)(uintptr_t)(dstD + 0x9c));

                            if (valA9 < 0x1f4)
                            {
                                int32_t* valA12 = valA9 * 0x50 + flagP + 0x44ec;
                                valA12[0xf] = *(tmpD1 - 0x24);
                                valA12[0x10] = *(tmpD1 - 0x20);
                                int32_t ctxB6 = *(tmpD1 - 0x1c);
                                *valA12 = i;
                                flagP = a1;
                                valA12[0x11] = ctxB6;
                                valA12[3] = 0x5408f8;
                                valA12[4] = 0x5408f8;
                                valA12[5] = 0x5408f8;
                                valA12[1] = i + 0xc;
                                valA12[2] = i + 0x18;
                                valA12[6] = *(i + 0x24);
                                valA12[7] = *(i + 0x28);
                                valA12[8] = *(i + 0x2c);
                                valA12[9] = *(i + 0x30);
                                valA12[0xa] = *(i + 0x34);
                                valA12[0xb] = *(i + 0x38);
                                valA12[0x12] = *(tmpD1 + 0x28);
                                dstD = v_4;
                                (*(int32_t*)(uintptr_t)(dstD + 0x9c)) += 1;
                            }

                            i = *(i + 0x3c);
                        } while (i);
                    }
                    else
                    {
                        int32_t valA3 = (*(int32_t*)(uintptr_t)(dstD + 0x9c));

                        if (valA3 + 1 < 0x1f4)
                        {
                            void* valA6 = valA3 * 0x50 + flagP;
                            *(valA6 + 0x4528) = *(tmpD1 - 0x24);
                            *(valA6 + 0x452c) = *(tmpD1 - 0x20);
                            flagP = a1;
                            *(valA6 + 0x4530) = *(tmpD1 - 0x1c);
                            *(valA6 + 0x4578) = *(tmpD1 - 0x24);
                            *(valA6 + 0x457c) = *(tmpD1 - 0x20);
                            *(valA6 + 0x4580) = *(tmpD1 - 0x1c);
                            *(valA6 + 0x44f8) = 0x5408f8;
                            *(valA6 + 0x44fc) = 0x5408f8;
                            *(valA6 + 0x4500) = 0x5408f8;
                            *(valA6 + 0x4548) = 0x5408f8;
                            *(valA6 + 0x454c) = 0x5408f8;
                            *(valA6 + 0x4550) = 0x5408f8;
                            *(valA6 + 0x44f0) = tmpD1;
                            *(valA6 + 0x44ec) = tmpD1 - 0xc;
                            *(valA6 + 0x44f4) = tmpD1 + 0xc;
                            *(valA6 + 0x4544) = tmpD1 + 0xc;
                            *(valA6 + 0x453c) = tmpD1;
                            *(valA6 + 0x4540) = tmpD1 + 0x18;
                            *(valA6 + 0x4504) = 0;
                            *(valA6 + 0x4508) = 0;
                            *(valA6 + 0x450c) = 0;
                            *(valA6 + 0x4510) = 0x3f800000;
                            *(valA6 + 0x4514) = 0x3f800000;
                            *(valA6 + 0x4518) = 0;
                            *(valA6 + 0x4554) = 0;
                            *(valA6 + 0x4558) = 0x3f800000;
                            *(valA6 + 0x455c) = 0x3f800000;
                            *(valA6 + 0x4560) = 0x3f800000;
                            *(valA6 + 0x4564) = 0x3f800000;
                            *(valA6 + 0x4568) = 0;
                            *(valA6 + 0x4534) = *(tmpD1 + 0x28);
                            *(valA6 + 0x4584) = *(tmpD1 + 0x28);
                            (*(int32_t*)(uintptr_t)(dstD + 0x9c)) += 2;
                        }
                    }
                }

                tmpD1 += 0x58;
                cond_2_1 = v_8_1 + 1 < *(flagP + 0x44e8);
                v_8_1 += 1;
            } while (cond_2_1);
        }

        *(flagP + 0xe138) = 0;
    }

    Display_ClearSurfaces_18(dstD, a2);
    SoundSys_PlaySoundSample(dstD, a2 + 0x18);
    int32_t objC9 = 0;
    objC9 = (*(int32_t*)(uintptr_t)(dstD + 0x1c));
    return ((int(*)())(uintptr_t)(*((objC9 << 2) + &g_a982e0)))(dstD, 0);
}
