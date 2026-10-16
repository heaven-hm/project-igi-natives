#include "00517260-Terrain_SelectTerrainLOD_5.h"
/* 0x00517260 Terrain_SelectTerrainLOD_5 full linked: callers=3 callees=0 */
int32_t sub_517260(int32_t a1, void** a2, char* a3, int32_t a4)

{
    int32_t eax = 0;
    char* ecx = nullptr;
    int32_t edi = a4;
    char* esi = nullptr;

    if (edi)
    {
        int32_t ebx_1 = a1;
        int32_t result = 0;
        char edx_1;

        while (true)
        {
            edx_1 = ecx[ebx_1];

            if (edx_1 != 0x20 && edx_1 != 9 && edx_1 != 0xa && edx_1 != 0xd)
                break;

            ecx = &ecx[1];
        }

        edx_1 = ecx[ebx_1];
        char* ebp_1;

        if (edx_1 == 0x22)
        {
            char i = ecx[ebx_1 + 1];
            ebp_1 = a3;
            void* ecx_1 = &ecx[1];

            if (i != edx_1)
            {
                do
                {
                    if (!i)
                        return 0;

                    if (i != 0x5c)
                        *(esi + ebp_1) = i;
                    else
                    {
                        i = *(ecx_1 + ebx_1 + 1);
                        ecx_1 += 1;

                        if (i - 0x58 > 0x20)
                            *(esi + ebp_1) = i;
                        else
                        {
                            int32_t edx_3 = 0;
                            edx_3 = *(i + 0x517494);

                            switch (edx_3)
                            {
                                case 0:
                                {
                                    i = *(ecx_1 + ebx_1 + 1);

                                    i = i <= 0x39 ? i << 4 : ((i & 0xf) + 9) << 4;

                                    char edx_4 = *(ecx_1 + 1 + ebx_1 + 1);
                                    ecx_1 += 2;

                                    edx_4 = edx_4 <= 0x39 ? edx_4 & 0xf : (edx_4 & 0xf) + 9;

                                    *(esi + ebp_1) = i | edx_4;
                                    break;
                                }
                                case 1:
                                {
                                    *(esi + ebp_1) = 8;
                                    break;
                                }
                                case 2:
                                {
                                    *(esi + ebp_1) = 0xa;
                                    break;
                                }
                                case 3:
                                {
                                    *(esi + ebp_1) = 0xd;
                                    break;
                                }
                                case 4:
                                {
                                    *(esi + ebp_1) = 9;
                                    break;
                                }
                                case 5:
                                {
                                    *(esi + ebp_1) = i;
                                    break;
                                }
                            }
                        }
                    }

                    i = *(ecx_1 + ebx_1 + 1);
                    esi = &esi[1];
                    ecx_1 += 1;
                } while (i != 0x22);
            }

            ecx = ecx_1 + 1;
            result = 1;
            goto label_51733d;
        }

        ebp_1 = a3;
        a4 = 0;
        a1 = 0;

        if (edx_1 < 0x30 || edx_1 > 0x39)
        {
            if (edx_1 != 0x24)
                goto label_5173e4;

            esi = 1;
            ecx = &ecx[1];
            int32_t temp0_1 = edi;
            edi -= 1;
            a1 = 1;
            a4 = 1;
            *ebp_1 = edx_1;

            if (temp0_1 == 1)
                return 0;

            goto label_5173e4;
        }

        a1 = 1;

        if (edx_1 != 0x30)
        {
        label_5173da:
            eax = 0;
        label_5173e4:

            while (true)
            {
                char edx_7;

                if (!a4)
                {
                    edx_7 = ecx[ebx_1];

                    if (a1)
                    {
                        if (edx_7 == 0x2e)
                        {
                            *(esi + ebp_1) = 0x2e;
                            esi = &esi[1];
                            ecx = &ecx[1];
                            int32_t temp2_1 = edi;
                            edi -= 1;

                            if (temp2_1 == 1)
                                return 0;
                        }

                        edx_7 = ecx[ebx_1];

                        if (edx_7 == 0x65 || edx_7 == 0x45)
                        {
                            if (eax)
                                break;

                            *(esi + ebp_1) = edx_7;
                            esi = &esi[1];
                            ecx = &ecx[1];
                            int32_t temp5_1 = edi;
                            edi -= 1;

                            if (temp5_1 == 1)
                                return 0;

                            edx_7 = ecx[ebx_1];

                            if (edx_7 == 0x2b || edx_7 == 0x2d)
                            {
                                *(esi + ebp_1) = edx_7;
                                esi = &esi[1];
                                ecx = &ecx[1];
                                int32_t temp6_1 = edi;
                                edi -= 1;

                                if (temp6_1 == 1)
                                    return 0;
                            }

                            eax = 1;
                        }

                        edx_7 = ecx[ebx_1];

                        if (edx_7 < 0x30)
                            break;

                        if (edx_7 > 0x39)
                            break;
                    }
                    else if ((edx_7 < 0x30 || edx_7 > 0x39) && (edx_7 < 0x61 || edx_7 > 0x7a)
                            && (edx_7 < 0x41 || edx_7 > 0x5a) && edx_7 != 0x5f && edx_7 != 0x2e)
                        break;
                }
                else
                {
                    edx_7 = ecx[ebx_1];

                    if ((edx_7 < 0x30 || edx_7 > 0x39) && (edx_7 < 0x61 || edx_7 > 0x66))
                    {
                        if (edx_7 < 0x41)
                            break;

                        if (edx_7 > 0x46)
                            break;
                    }
                }

                *(esi + ebp_1) = edx_7;
                esi = &esi[1];
                ecx = &ecx[1];
                int32_t temp3_1 = edi;
                edi -= 1;

                if (temp3_1 == 1)
                    return 0;

                result = 1;
            }

        label_51733d:
            *(esi + ebp_1) = 0;

            if (a2)
                *a2 = &ecx[ebx_1];

            return result;
        }

        edx_1 = ecx[ebx_1 + 1];

        if (edx_1 != 0x78 && edx_1 != 0x58)
            goto label_5173da;

        int32_t edi_2 = edi - 1;
        a4 = 1;
        *ebp_1 = 0x30;

        if (edi != 1)
        {
            char eax_2 = ecx[1 + ebx_1];
            ecx = &ecx[2];
            edi = edi_2 - 1;
            ebp_1[1] = eax_2;
            esi = 2;

            if (edi_2 != 1)
                goto label_5173da;
        }
    }

    return 0;
}
