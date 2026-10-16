#include "00429A30-Menu_VirmodelSNotAvailabl.h"
/* 0x00429a30 Menu_VirmodelSNotAvailabl full linked: callers=2 callees=29 */
struct status_msg* Menu_VirmodelSNotAvailabl(void* a1, void* a2, void* a3, double* a4, void* a5, float a6, double* a7, void* a8, char* a9, int32_t a10)

{
    struct status_msg* result;

    if (QHash_ValueGet())
        result = QTask_HandleInput(a1, Menu_PlayMusic_20(), 0);
    else
    {
        QHash_ValueSet();
        result = QTask_HandleInput(a1, Menu_PlayMusic_20(), 0);
        sub_4b0d50();
    }

    memcpy(&result->head[0x1c], a5, 0x28);
    char* edi_1 = a9;
    void* eax_6 = sub_4cec10(edi_1);

    if (eax_6)
    {
        sub_4c48d0(result, eax_6);
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

        float var_34_4 = sub_4d0950(result->head[0x1b]) * x87_r7_3;
        sub_4c6940(Level_StartMission_4(), result, a4, var_34_4);
        char* eax_11 = sub_4ee140(edi_1);
        sub_4fb700(result, eax_11);
        *(result + 0x864) = *(*(eax_11 + 0x2d4) + 0x120);
        Menu_RequestScreen_21(result);
        int32_t i = 0xffffffff;

        while (i)
        {
            bool cond:1_1 = 0 != *edi_1;
            edi_1 = &edi_1[1];
            i -= 1;

            if (!cond:1_1)
                break;
        }

        int32_t ecx_3 = ~i;
        int32_t esi_3;
        int32_t edi_4;
        edi_4 = memcpy(&result->sprite[0xa0], edi_1 - ecx_3, ecx_3 & 0xfffffffc);
        memcpy(edi_4, esi_3, ecx_3 & 3);
        *(result + 0x730) = 0x3f800000;
        *(result + 0x720) = 0x3f800000;
        sub_4f4820(result);
        sub_4f4800(result);
        Menu_HandleInput_20(result);
        Menu_DrawWidget_20(result);
        void* ecx_7;
        ecx_7 = result->style[0];
        *(&ecx_7 + 1) = result->style[1];
        *(&ecx_7 + 2) = result->style[2];
        *(&ecx_7 + 3) = result->style[3];
        void* esi_4 = *(ecx_7 + 0x2d4);
        *(result + 0x858) = 0;

        if (a2)
            *(result + 0x858) = QTask_LinkEventHandler_2(a2);

        *(result + 0x85c) = 0;

        if (a3)
            *(result + 0x85c) = QTask_LinkEventHandler_2(a3);

        int32_t esi_5 = *(esi_4 + 0x11c);
        double var_18;
        void* eax_17;

        if (esi_5)
        {
            if (esi_5 == 1)
            {
                *(result + 0x840) = *a7 - *a4;
                *(result + 0x848) = a7[1] - a4[1];
                *(result + 0x850) = a7[2] - a4[2];
                long double x87_r7_20 = *(result + 0x840);
                memcpy(&result->head[0x20a], a4, 0x18);
                *(result + 0x828) = x87_r7_20 + *(result + 0x828);
                *(result + 0x830) = *(result + 0x848) + *(result + 0x830);
                *(result + 0x838) = *(result + 0x850) + *(result + 0x838);
            }
            else if (a8)
                *(result + 0x860) = QTask_LinkEventHandler_2(a8);
            else if (a7)
                memcpy(&result->head[0x20a], a7, 0x18);

            eax_17 = a5;
        }
        else
        {
            eax_17 = a5;
            var_18 = *(eax_17 + 0x10) * 4096000.0;
            double var_10_2 = *(eax_17 + 0x1c) * 4096000.0;
            *(result + 0x828) = *(eax_17 + 4) * 4096000.0 + *a4;
            *(result + 0x830) = var_18 + a4[1];
            *(result + 0x838) = var_10_2 + a4[2];
        }

        var_18 = *(eax_17 + 0x1c);
        long double x87_r7_30 = *(eax_17 + 0x10) * a6;
        result->sprite[0x54] = *(eax_17 + 4) * a6 * 136.53334f;
        result->sprite[0x58] = x87_r7_30 * 136.53334f;
        var_18 = var_18 * a6 * 136.53334f;
        result->sprite[0x5c] = var_18;
        sub_4ecdb0(&result->sprite[0x3c]);
        *(result + 0x894) = a10;
        return result;
    }

    char* var_34_1 = edi_1;
    Error_Show("VirModel "%s" not available");

    while (true)
        /* nop */
}
