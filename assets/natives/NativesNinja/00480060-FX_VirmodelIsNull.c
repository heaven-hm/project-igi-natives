#include "00480060-FX_VirmodelIsNull.h"
/* 0x00480060 FX_VirmodelIsNull full linked: callers=2 callees=9 */
struct status_msg* sub_480060(double* a1, char* a2, float a3, int32_t a4, int32_t a5, int32_t a6 @ 0x1c, int32_t a7, int32_t a8, int32_t a9)

{
    int32_t kind;
    kind = g_5c1168;
    struct status_msg* result = QTask_HandleInput(sub_4f0ee0(), kind, 0);
    void* eax_1 = sub_4cec10(a2);

    if (eax_1)
    {
        sub_4c48d0(result, eax_1);
        long double x87_r7 = result->head[0x27];
        long double x87_r6 = result->head[0x28];
        x87_r6 - x87_r7;
        long double x87_r7_1;

        if (!(*(&((x87_r6 < x87_r7 ? 1 : 0) << 8 | (FCMP_UO(x87_r6, x87_r7) ? 1 : 0) << 0xa
                | (x87_r6 == x87_r7 ? 1 : 0) << 0xe) + 1) & 1))
            x87_r7_1 = result->head[0x28];
        else
            x87_r7_1 = result->head[0x27];

        long double x87_r6_1 = result->head[0x26];
        x87_r6_1 - x87_r7_1;
        long double x87_r7_3;

        if (*(&((x87_r6_1 < x87_r7_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_1, x87_r7_1) ? 1 : 0) << 0xa
            | (x87_r6_1 == x87_r7_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
        {
            long double x87_r7_4 = result->head[0x27];
            long double x87_r6_2 = result->head[0x28];
            x87_r6_2 - x87_r7_4;

            if (!(*(&((x87_r6_2 < x87_r7_4 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_2, x87_r7_4) ? 1 : 0) << 0xa
                    | (x87_r6_2 == x87_r7_4 ? 1 : 0) << 0xe) + 1) & 1))
                x87_r7_3 = result->head[0x28];
            else
                x87_r7_3 = result->head[0x27];
        }
        else
            x87_r7_3 = result->head[0x26];

        float var_c_2 = sub_4d0950(result->head[0x1b]) * x87_r7_3;
        sub_4c6940(Level_StartMission_4(), result, a1, var_c_2);
        result->sprite[0x54] = a7;
        result->sprite[0x55] = *(&a7 + 1);
        result->sprite[0x56] = *(&a7 + 2);
        result->sprite[0x57] = *(&a7 + 3);
        result->head[0x26] = 0x3a83126f;
        result->head[0x27] = 0x3a83126f;
        result->head[0x28] = 0x3a83126f;
        result->sprite[0x40] = a4;
        result->sprite[0x41] = *(&a4 + 1);
        result->sprite[0x42] = *(&a4 + 2);
        result->sprite[0x43] = *(&a4 + 3);
        result->sprite[0x44] = a4;
        result->sprite[0x45] = *(&a4 + 1);
        result->sprite[0x46] = *(&a4 + 2);
        result->sprite[0x47] = *(&a4 + 3);
        result->sprite[0x48] = a6;
        result->sprite[0x49] = *(&a6 + 1);
        result->sprite[0x4a] = *(&a6 + 2);
        result->sprite[0x4b] = *(&a6 + 3);
        result->sprite[0x4c] = a5;
        result->sprite[0x4d] = *(&a5 + 1);
        result->sprite[0x4e] = *(&a5 + 2);
        result->sprite[0x4f] = *(&a5 + 3);
        result->sprite[0x50] = a5;
        result->sprite[0x51] = *(&a5 + 1);
        result->sprite[0x52] = *(&a5 + 2);
        result->sprite[0x53] = *(&a5 + 3);
        void* var_1c = eax_1;
        result->sprite[0x58] = a3 * 0.00048828125;
        char* var_20 = &result->sprite[0xc];
        result->sprite[0x5c] = a8;
        result->sprite[0x5d] = *(&a8 + 1);
        result->sprite[0x5e] = *(&a8 + 2);
        result->sprite[0x5f] = *(&a8 + 3);
        result->sprite[0x60] = a9;
        result->sprite[0x61] = *(&a9 + 1);
        result->sprite[0x62] = *(&a9 + 2);
        result->sprite[0x63] = *(&a9 + 3);
        return result;
    }

    Error_Show("VirModel is null");

    while (true)
        /* nop */
}
