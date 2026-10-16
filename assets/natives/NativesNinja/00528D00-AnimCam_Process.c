#include "00528D00-AnimCam_Process.h"
/* 0x00528d00 AnimCam_Process full linked: callers=0 callees=2 */
int32_t* sub_528d00(void* a1, int32_t** a2)

{
    char eax = *(a1 + 0x19f);
    *(a1 + 0xd4) = 0;

    if (eax)
        *(a1 + 0xd4) = 1;

    switch (*a2[1])
    {
        case 0:
        {
            *(a1 + 0x100) = sub_4d3710;
            *(a1 + 0x1a8) = g_54f444[0];
            *(a1 + 0x1ac) = g_54f444[4][0];
            break;
        }
        case 1:
        {
            *(a1 + 0x100) = sub_4d3710;
            *(a1 + 0x1a8) = g_54f42c[0];
            *(a1 + 0x1ac) = g_54f42c[4][0];
            *(a1 + 0x1ae) = g_54f42c[6][0];
            break;
        }
        case 2:
        {
            *(a1 + 0x100) = sub_529010;
            *(a1 + 0x1a8) = g_54f440;
            break;
        }
        case 3:
        {
            *(a1 + 0x100) = sub_528930;
            *(a1 + 0x1a8) = g_54f434[0];
            *(a1 + 0x1ac) = g_54f434[4][0];
            *(a1 + 0x1b0) = g_54f434[8][0];
            break;
        }
        case 4:
        {
            *(a1 + 0x100) = sub_528ff0;
            *(a1 + 0x1a8) = g_54f424[0];
            *(a1 + 0x1ac) = g_54f424[4][0];
            *(a1 + 0x1ae) = g_54f424[6][0];
            break;
        }
    }

    void* ecx_7 = a2[1];

    if (*(ecx_7 + 4) != 0xc479c000)
        *(a1 + 0x108) = *(ecx_7 + 4);

    void* ecx_8 = a2[1];

    if (*(ecx_8 + 8) != 0xc479c000)
        *(a1 + 0x10c) = *(ecx_8 + 8);

    void* ecx_10 = a2[1];

    if (*(ecx_10 + 0xc) != 0xc479c000)
        *(a1 + 0x148) = *(ecx_10 + 0xc);

    void* ecx_11 = a2[1];

    if (*(ecx_11 + 0x10) != 0xc479c000)
        *(a1 + 0x150) = *(ecx_11 + 0x10);

    void* ecx_12 = a2[1];

    if (*(ecx_12 + 0x14) != 0xc479c000)
        *(a1 + 0x158) = *(ecx_12 + 0x14);

    void* ecx_13 = a2[1];

    if (*(ecx_13 + 0x18) != 0xc479c000)
        *(a1 + 0x160) = *(ecx_13 + 0x18);

    void* ecx_14 = a2[1];

    if (*(ecx_14 + 0x1c) != 0xc479c000)
        *(a1 + 0x168) = *(ecx_14 + 0x1c);

    void* ecx_15 = a2[1];

    if (*(ecx_15 + 0x20) != 0xc479c000)
        *(a1 + 0x170) = *(ecx_15 + 0x20);

    int32_t edx_7 = a2[1][9];

    if (edx_7 != 0xc479c000)
        *(a1 + 0x178) = edx_7;

    int32_t edx_8 = a2[1][0xa];

    if (edx_8 != 0xc479c000)
        *(a1 + 0x17c) = edx_8;

    int32_t edx_9 = a2[1][0xb];

    if (edx_9 != 0xc479c000)
        *(a1 + 0x180) = edx_9;

    int32_t edx_10 = a2[1][0xc];

    if (edx_10 != 0xc479c000)
        *(a1 + 0x184) = edx_10;

    int32_t edx_11 = a2[1][0xd];

    if (edx_11 != 0xc479c000)
        *(a1 + 0x188) = edx_11;

    int32_t edx_12 = a2[1][0xe];

    if (edx_12 != 0xc479c000)
        *(a1 + 0x18c) = edx_12;

    int32_t edx_13 = a2[1][0xf];

    if (edx_13 != 0xc479c000)
        *(a1 + 0x190) = edx_13;

    int32_t edx_14 = a2[1][0x10];

    if (edx_14 != 0xc479c000)
        *(a1 + 0x194) = edx_14;

    int32_t edx_15 = a2[1][0x11];

    if (edx_15 != 0xc479c000)
        *(a1 + 0x198) = edx_15;

    void* ecx_29 = a2[1];

    if (*(ecx_29 + 0x48) != 0xc479c000)
        *(a1 + 0x19c) = *(ecx_29 + 0x48);

    void* ecx_31 = a2[1];

    if (*(ecx_31 + 0x4c) != 0xc479c000)
        *(a1 + 0x19d) = *(ecx_31 + 0x4c);

    void* ecx_32 = a2[1];

    if (*(ecx_32 + 0x50) != 0xc479c000)
        *(a1 + 0x19e) = *(ecx_32 + 0x50);

    void* ecx_34 = a2[1];

    if (*(ecx_34 + 0x54) != 0xc479c000)
        *(a1 + 0x1a0) = *(ecx_34 + 0x54);

    if (!*a2)
        sub_528850(a1);

    int32_t* result = *a2;

    if (result <= 0)
        return result;

    return sub_529a10(a1);
}
