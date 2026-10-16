#include "00477040-Throwable_Create.h"
/* 0x00477040 Throwable_Create full linked: callers=2 callees=22 */
struct status_msg* Throwable_Create(float a1, void* a2, double* a3, int32_t a4, int32_t* a5, void* a6, int32_t a7)

// Sig: void Throwable_Create(void)
// Note: Creates a GRENADE/THROWABLE projectile: checks+registers it in the hash
// table via QHash_ValueGet(0x4B0DB0)/QHash_ValueSet(0x4B0D40). IGI-MP hooks for
// network throwable sync.
{
    int32_t kind = QHash_ValueGet();
    struct status_msg* result;

    if (kind)
    {
        int32_t kind_1;
        kind_1 = g_54066c;
        result = QTask_HandleInput(a1, kind_1, 0);
    }
    else
    {
        QHash_ValueSet();
        kind = g_54066c;
        result = QTask_HandleInput(a1, kind, 0);
        sub_4b0d50();
    }

    *(result + 0x730) = a6;

    if (!a2)
        *(result + 0x72c) = 0;
    else
        *(result + 0x72c) = QTask_LinkEventHandler_2(a2);

    void* eax_5 = sub_4cec10(a6 + 0x61c);

    if (eax_5)
    {
        sub_4c48d0(result, eax_5);

        if (QHash_ValueGet())
            sub_4fb5f0(result);
        else
        {
            QHash_ValueSet();
            sub_4fb5f0(result);
            sub_4b0d50();
        }

        char* eax_7 = sub_4ee140(a6 + 0x61c);
        int32_t eax_9 = -(a7);
        int32_t var_8 = **(eax_7 + 0x2d4) * -30f;
        *(result + 0x720) = eax_9 - var_8;

        if (eax_9 - var_8 < 0)
            *(result + 0x720) = 0;

        long double x87_r7_2 = result->head[0x27];
        long double x87_r6 = result->head[0x28];
        x87_r6 - x87_r7_2;
        long double x87_r7_3;

        if (!(*(&((x87_r6 < x87_r7_2 ? 1 : 0) << 8 | (FCMP_UO(x87_r6, x87_r7_2) ? 1 : 0) << 0xa
                | (x87_r6 == x87_r7_2 ? 1 : 0) << 0xe) + 1) & 1))
            x87_r7_3 = result->head[0x28];
        else
            x87_r7_3 = result->head[0x27];

        long double x87_r6_1 = result->head[0x26];
        x87_r6_1 - x87_r7_3;
        long double x87_r7_5;

        if (*(&((x87_r6_1 < x87_r7_3 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_1, x87_r7_3) ? 1 : 0) << 0xa
            | (x87_r6_1 == x87_r7_3 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
        {
            long double x87_r7_6 = result->head[0x27];
            long double x87_r6_2 = result->head[0x28];
            x87_r6_2 - x87_r7_6;

            if (!(*(&((x87_r6_2 < x87_r7_6 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_2, x87_r7_6) ? 1 : 0) << 0xa
                    | (x87_r6_2 == x87_r7_6 ? 1 : 0) << 0xe) + 1) & 1))
                x87_r7_5 = result->head[0x28];
            else
                x87_r7_5 = result->head[0x27];
        }
        else
            x87_r7_5 = result->head[0x26];

        float var_18_4 = sub_4d0950(result->head[0x1b]) * x87_r7_5;
        sub_4c6940(Level_StartMission_4(), result, a3, var_18_4);
        sub_4fb700(result, eax_7);
        int32_t eax_14 = *a5;
        result->sprite[0x54] = eax_14;
        result->sprite[0x55] = *(&eax_14 + 1);
        result->sprite[0x56] = *(&eax_14 + 2);
        result->sprite[0x57] = *(&eax_14 + 3);
        int32_t eax_15 = a5[1];
        result->sprite[0x58] = eax_15;
        result->sprite[0x59] = *(&eax_15 + 1);
        result->sprite[0x5a] = *(&eax_15 + 2);
        result->sprite[0x5b] = *(&eax_15 + 3);
        int32_t edx_2 = a5[2];
        result->sprite[0x5c] = edx_2;
        result->sprite[0x5d] = *(&edx_2 + 1);
        result->sprite[0x5e] = *(&edx_2 + 2);
        result->sprite[0x5f] = *(&edx_2 + 3);
        sub_4ecdb0(&result->sprite[0x3c]);
        memcpy(&result->head[0x1c], a4, 0x28);
        sub_476d40(result, 0x11, 1, 0xbf800000);
        return result;
    }

    Error_Show("VirModel is null");

    while (true)
        /* nop */
}
