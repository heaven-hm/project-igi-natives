#include "0047D0B0-BulletHole_Setup.h"
/* 0x0047d0b0 BulletHole_Setup full linked: callers=0 callees=2 */
int32_t sub_47d0b0(void* a1, int32_t a2)

{
    void* ebp = a1;
    void* edi = *(ebp + 0xe12c);
    void* var_4 = edi;

    if (*(ebp + 0xe138))
    {
        *(edi + 0x9c) = 0;
        int32_t var_8_1 = 0;

        if (*(ebp + 0x44e8) > 0)
        {
            void* edx_1 = ebp + 0x44;
            bool cond:2_1;

            do
            {
                if (*(edx_1 + 0x24) != 0xffffffff)
                {
                    void* i = *(edx_1 + 0x30);

                    if (i)
                    {
                        do
                        {
                            int32_t eax_9 = *(edi + 0x9c);

                            if (eax_9 < 0x1f4)
                            {
                                int32_t* eax_12 = eax_9 * 0x50 + ebp + 0x44ec;
                                eax_12[0xf] = *(edx_1 - 0x24);
                                eax_12[0x10] = *(edx_1 - 0x20);
                                int32_t ebx_6 = *(edx_1 - 0x1c);
                                *eax_12 = i;
                                ebp = a1;
                                eax_12[0x11] = ebx_6;
                                eax_12[3] = 0x5408f8;
                                eax_12[4] = 0x5408f8;
                                eax_12[5] = 0x5408f8;
                                eax_12[1] = i + 0xc;
                                eax_12[2] = i + 0x18;
                                eax_12[6] = *(i + 0x24);
                                eax_12[7] = *(i + 0x28);
                                eax_12[8] = *(i + 0x2c);
                                eax_12[9] = *(i + 0x30);
                                eax_12[0xa] = *(i + 0x34);
                                eax_12[0xb] = *(i + 0x38);
                                eax_12[0x12] = *(edx_1 + 0x28);
                                edi = var_4;
                                *(edi + 0x9c) += 1;
                            }

                            i = *(i + 0x3c);
                        } while (i);
                    }
                    else
                    {
                        int32_t eax_3 = *(edi + 0x9c);

                        if (eax_3 + 1 < 0x1f4)
                        {
                            void* eax_6 = eax_3 * 0x50 + ebp;
                            *(eax_6 + 0x4528) = *(edx_1 - 0x24);
                            *(eax_6 + 0x452c) = *(edx_1 - 0x20);
                            ebp = a1;
                            *(eax_6 + 0x4530) = *(edx_1 - 0x1c);
                            *(eax_6 + 0x4578) = *(edx_1 - 0x24);
                            *(eax_6 + 0x457c) = *(edx_1 - 0x20);
                            *(eax_6 + 0x4580) = *(edx_1 - 0x1c);
                            *(eax_6 + 0x44f8) = 0x5408f8;
                            *(eax_6 + 0x44fc) = 0x5408f8;
                            *(eax_6 + 0x4500) = 0x5408f8;
                            *(eax_6 + 0x4548) = 0x5408f8;
                            *(eax_6 + 0x454c) = 0x5408f8;
                            *(eax_6 + 0x4550) = 0x5408f8;
                            *(eax_6 + 0x44f0) = edx_1;
                            *(eax_6 + 0x44ec) = edx_1 - 0xc;
                            *(eax_6 + 0x44f4) = edx_1 + 0xc;
                            *(eax_6 + 0x4544) = edx_1 + 0xc;
                            *(eax_6 + 0x453c) = edx_1;
                            *(eax_6 + 0x4540) = edx_1 + 0x18;
                            *(eax_6 + 0x4504) = 0;
                            *(eax_6 + 0x4508) = 0;
                            *(eax_6 + 0x450c) = 0;
                            *(eax_6 + 0x4510) = 0x3f800000;
                            *(eax_6 + 0x4514) = 0x3f800000;
                            *(eax_6 + 0x4518) = 0;
                            *(eax_6 + 0x4554) = 0;
                            *(eax_6 + 0x4558) = 0x3f800000;
                            *(eax_6 + 0x455c) = 0x3f800000;
                            *(eax_6 + 0x4560) = 0x3f800000;
                            *(eax_6 + 0x4564) = 0x3f800000;
                            *(eax_6 + 0x4568) = 0;
                            *(eax_6 + 0x4534) = *(edx_1 + 0x28);
                            *(eax_6 + 0x4584) = *(edx_1 + 0x28);
                            *(edi + 0x9c) += 2;
                        }
                    }
                }

                edx_1 += 0x58;
                cond:2_1 = var_8_1 + 1 < *(ebp + 0x44e8);
                var_8_1 += 1;
            } while (cond:2_1);
        }

        *(ebp + 0xe138) = 0;
    }

    sub_49a430(edi, a2);
    sub_4e0810(edi, a2 + 0x18);
    int32_t ecx_9 = 0;
    ecx_9 = *(edi + 0x1c);
    return (*((ecx_9 << 2) + &g_a982e0))(edi, 0);
}
