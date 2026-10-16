#include "00466240-AI_FireWeapon_24.h"
/* 0x00466240 AI_FireWeapon_24 full linked: callers=1 callees=6 */
struct status_msg* sub_466240(uint32_t a1, uint32_t a2, int32_t a3, void** a4, int32_t* a5, int32_t* a6, uint32_t a7)

{
    int32_t kind;
    kind = g_53f520;
    int32_t* ebx;
    int32_t* var_14 = ebx;
    struct status_msg* result = QTask_HandleInput(a1, kind, 0);
    result->head[0x16] = a7;
    result->head[8] = 0;
    result->head[9] = a2;
    result->head[0x10] = 0;
    result->head[0x1c] = 0;
    result->head[0xd] = *a5;
    result->head[0xe] = a5[1];
    result->head[0xf] = a5[2];
    result->head[0xa] = *a6;
    result->head[0xb] = a6[1];
    uint32_t edx_4 = a6[2];
    result->head[0xc] = edx_4;

    if (a2 > 0)
    {
        void** edi_4 = a4;
        int32_t** esi_1 = &result->head[0x17];
        ebx = a3 - edi_4;
        a1 = a2;
        bool cond:1_1;

        do
        {
            int32_t eax_1 = *(ebx + edi_4);
            esi_1[-6] = eax_1;
            void* ecx_3 = *edi_4;
            void* var_28_1 = ecx_3;
            int32_t* eax_2;
            eax_2 = Resource_Load(eax_1, edx_4, ecx_3, nullptr);
            *esi_1 = eax_2;
            esi_1[6] = 0;
            edi_4 = &edi_4[1];
            esi_1 = &esi_1[1];
            cond:1_1 = a1 != 1;
            a1 -= 1;
        } while (cond:1_1);
    }

    int32_t var_10 = 0x10;
    int32_t var_c = 0x10000;
    int32_t var_8 = 0x44;
    int32_t var_4 = 0x32;
    result->head[0x22] = 0;
    int32_t* ecx_4 = g_5ca110;
    (*(*ecx_4 + 0x14))(ecx_4, &var_10, &result->head[0x22], 0);
    char eax_6 = QHash_ValueGet();

    if (!eax_6)
        QHash_ValueSet();

    result->head[0x23] = 0;
    result->head[0x23] = sub_4b7000("LOCAL:computer/font3.fnt");

    if (!eax_6)
        sub_4b0d50();

    return result;
}
