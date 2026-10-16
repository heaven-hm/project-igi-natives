#include "004A760B-Camera_ApplyHandiCam_11.h"
/* 0x004a760b Camera_ApplyHandiCam_11 full linked: callers=4 callees=5 */
uint32_t sub_4a760b(int32_t* a1 @ 0x8)

{
    int32_t* esi = a1;
    int32_t eax = esi[3];
    enum WIN32_ERROR ebx = esi[4];

    if (!(eax & 0x82) || eax & 0x40)
    {
        eax |= 0x20;
        esi[3] = eax;
    }
    else
    {
        if (!(eax & 1))
            goto label_4a7643;

        esi[1] = 0;

        if (!(eax & 0x10))
        {
            eax |= 0x20;
            esi[3] = eax;
        }
        else
        {
            eax &= 0xfe;
            *esi = esi[2];
            esi[3] = eax;
        label_4a7643:
            int32_t eax_1 = esi[3];
            esi[1] = 0;
            a1 = nullptr;
            eax_1 &= 0xef;
            eax_1 |= 2;
            esi[3] = eax_1;

            if (!(eax_1 & 0x10c))
            {
                bool cond:3_1;

                if (esi == 0x546860 || esi == 0x546880)
                    cond:3_1 = sub_4ad0ae(ebx);

                if ((esi != 0x546860 && esi != 0x546880) || !cond:3_1)
                    sub_4ac323(esi);
            }

            int32_t arg_4;
            uint32_t edi_2;

            if (!(esi[3] & 0x108))
            {
                edi_2 = 1;
                a1 = sub_4abec7(ebx, &arg_4, 1);
            }
            else
            {
                char* eax_3 = esi[2];
                edi_2 = *esi - eax_3;
                *esi = &eax_3[1];
                esi[1] = esi[6] - 1;

                if (edi_2 <= 0)
                {
                    void* eax_8;

                    if (ebx == ~NO_ERROR)
                        eax_8 = &g_543fb0;
                    else
                        eax_8 = (&g_c32440)[ebx >> 5] + ((ebx & ERROR_GEN_FAILURE) << 3);

                    if (*(eax_8 + 4) & 0x20)
                        sub_4a6d7d(ebx, 0, FILE_END);
                }
                else
                    a1 = sub_4abec7(ebx, eax_3, edi_2);

                *esi[2] = arg_4;
            }

            if (a1 == edi_2)
                return arg_4;

            esi[3] |= 0x20;
        }
    }

    return 0xffffffff;
}
