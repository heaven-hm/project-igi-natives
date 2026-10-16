#include "004BA880-Sys_ScriptInternalErrorI.h"
/* 0x004ba880 Sys_ScriptInternalErrorI full linked: callers=8 callees=15 */
char* sub_4ba880(int32_t a1, int32_t* a2, int32_t a3, char* a4)

{
    int32_t ecx = 0;

    if (a4)
    {
        int32_t edi_1 = *(a4 + 8);
        int32_t i = 0xffffffff;

        while (i)
        {
            bool cond:1_1 = 0 != *edi_1;
            edi_1 += 1;
            i -= 1;

            if (!cond:1_1)
                break;
        }

        int32_t* edi_2 = a2;
        int32_t i_1 = 0xffffffff;

        while (i_1)
        {
            bool cond:2_1 = 0 != *edi_2;
            edi_2 += 1;
            i_1 -= 1;

            if (!cond:2_1)
                break;
        }

        ecx = ~i - 1 + ~i_1 - 1 + 1;
    }
    else if (a1 == 2 || a1 == 5)
    {
        int32_t* edi_3 = a2;
        int32_t i_2 = 0xffffffff;

        while (i_2)
        {
            bool cond:3_1 = 0 != *edi_3;
            edi_3 += 1;
            i_2 -= 1;

            if (!cond:3_1)
                break;
        }

        ecx = ~i_2;
    }

    char* result = Mem_Alloc(ecx + 0x28, 4);
    __builtin_memset(result, 0, 0x28);
    *result = a1;
    *(result + 0x24) = a3 + 1;

    if (a1 - 1 > 7)
    {
        Error_Show("Script: Internal Error: Illegal expression type.");

        while (true)
            /* nop */

        return;
    }

    void* edx_3;

    switch (a1)
    {
        case 1:
        {
            *(result + 8) = *a2;
            return result;
            break;
        }
        case 2:
        {
            edx_3 = &result[0x28];
            *(result + 8) = edx_3;

            if (!a4)
                goto label_4baa31;

            int32_t edi_5 = *(a4 + 8);
            int32_t i_3 = 0xffffffff;

            while (i_3)
            {
                bool cond:7_1 = 0 != *edi_5;
                edi_5 += 1;
                i_3 -= 1;

                if (!cond:7_1)
                    break;
            }

            int32_t ecx_8 = ~i_3;
            int32_t esi_2;
            int32_t edi_8;
            edi_8 = memcpy(edx_3, edi_5 - ecx_8, ecx_8 & 0xfffffffc);
            memcpy(edi_8, esi_2, ecx_8 & 3);
            int32_t* edi_9 = a2;
            int32_t i_4 = 0xffffffff;

            while (i_4)
            {
                bool cond:8_1 = 0 != *edi_9;
                edi_9 += 1;
                i_4 -= 1;

                if (!cond:8_1)
                    break;
            }

            int32_t ecx_12 = ~i_4;
            int32_t edi_11 = *(result + 8);
            int32_t i_5 = 0xffffffff;

            while (i_5)
            {
                bool cond:9_1 = 0 != *edi_11;
                edi_11 += 1;
                i_5 -= 1;

                if (!cond:9_1)
                    break;
            }

            int32_t esi_4;
            int32_t edi_13;
            edi_13 = memcpy(edi_11 - 1, edi_9 - ecx_12, ecx_12 & 0xfffffffc);
            memcpy(edi_13, esi_4, ecx_12 & 3);
            char* eax_9 = *(a4 + 0x20);

            if (eax_9)
            {
                if (*(eax_9 + 0x18) == a4)
                {
                    *(eax_9 + 0x18) = result;
                    *(result + 0x20) = *(a4 + 0x20);
                    sub_4b9be0(a4);
                    return result;
                }

                if (*(eax_9 + 0x1c) == a4)
                {
                    *(eax_9 + 0x1c) = result;
                    *(result + 0x20) = *(a4 + 0x20);
                    sub_4b9be0(a4);
                    return result;
                }

                if (*eax_9 != 6)
                {
                    Error_Show("Internal error!!!");

                    while (true)
                        /* nop */
                }
                else
                {
                    *(eax_9 + 8) = result;
                    *(result + 0x20) = *(a4 + 0x20);
                }
            }

            sub_4b9be0(a4);
            return result;
            break;
        }
        case 3:
        {
            *(result + 8) = *a2;
            *(result + 0xc) = a2[1];
            return result;
            break;
        }
        case 4:
        case 6:
        {
            *(result + 8) = a2;
            return result;
            break;
        }
        case 5:
        {
            edx_3 = &result[0x28];
            *(result + 8) = 0;
            *(result + 0x10) = edx_3;
            *(result + 0xc) = 0;
        label_4baa31:
            int32_t* edi_14 = a2;
            int32_t i_6 = 0xffffffff;

            while (i_6)
            {
                bool cond:6_1 = 0 != *edi_14;
                edi_14 += 1;
                i_6 -= 1;

                if (!cond:6_1)
                    break;
            }

            int32_t ecx_19 = ~i_6;
            int32_t esi_6;
            int32_t edi_17;
            edi_17 = memcpy(edx_3, edi_14 - ecx_19, ecx_19 & 0xfffffffc);
            memcpy(edi_17, esi_6, ecx_19 & 3);
            return result;
            break;
        }
        case 7:
        {
            result[1] = 0x1d;
            result[2] = sub_4ba3d0(0x1d);
            *(result + 8) = a2;
            return result;
            break;
        }
        case 8:
        {
            char ebx_1 = *a2;
            result[1] = ebx_1;
            result[2] = sub_4ba3d0(ebx_1);
            return result;
            break;
        }
    }
}
