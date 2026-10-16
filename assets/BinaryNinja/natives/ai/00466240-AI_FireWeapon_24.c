#include "AI_FireWeapon_24.h"
struct status_msg* AI_FireWeapon_24(uint32_t a1, uint32_t a2, int32_t a3, void** a4, int32_t* a5, int32_t* a6, uint32_t a7)

{
    int32_t kind;
    kind = g_53f520;
    int32_t* ctxB;
    int32_t* v_14 = ctxB;
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
    uint32_t tmpD4 = a6[2];
    result->head[0xc] = tmpD4;

    if (a2 > 0)
    {
        void** dstD4 = a4;
        int32_t** srcS1 = &result->head[0x17];
        ctxB = a3 - dstD4;
        a1 = a2;
        bool cond_1_1;

        do
        {
            int32_t valA1 = *(ctxB + dstD4);
            srcS1[-6] = valA1;
            void* objC3 = *dstD4;
            void* v_28_1 = objC3;
            int32_t* valA2;
            valA2 = Resource_Load(valA1, tmpD4, objC3, nullptr);
            *srcS1 = valA2;
            srcS1[6] = 0;
            dstD4 = &dstD4[1];
            srcS1 = &srcS1[1];
            cond_1_1 = a1 != 1;
            a1 -= 1;
        } while (cond_1_1);
    }

    int32_t v_10 = 0x10;
    int32_t v_c = 0x10000;
    int32_t v_8 = 0x44;
    int32_t v_4 = 0x32;
    result->head[0x22] = 0;
    int32_t* objC4 = g_5ca110;
    (*(*objC4 + 0x14))(objC4, &v_10, &result->head[0x22], 0);
    char valA6 = QHash_ValueGet();

    if (!valA6)
        QHash_ValueSet();

    result->head[0x23] = 0;
    result->head[0x23] = Sys_DispatchOpcode_18("LOCAL:computer/font3.fnt");

    if (!valA6)
        Sys_DispatchOpcode_2();

    return result;
}
