#include "gi_platform.h"
#include "004B7160-Sys_CheckHeap_18.h"
int32_t Sys_CheckHeap_18()

{
    int32_t flagP;
    int32_t v_4 = flagP;
    Camera_UpdateTransform_5(0x1014);
    int32_t i_6;
    int32_t i_4 = i_6;
    void* __return_addr_1;
    __return_addr = __return_addr_1;
    int32_t dstD;
    v_4 = dstD;
    int32_t v_1018[0x100];
    __builtin_memset(&v_1018, 0, 0x1000);
    int32_t* entry_ebx;

    if (i_4 > 0)
    {
        int32_t i_3 = i_4;
        int32_t* tmpD1 = &entry_ebx[2];
        int32_t i;

        do
        {
            int32_t valA2 = *tmpD1;
            int24_t v_8_1 = valA2;

            if (!(valA2 & 0x80000000))
            {
                valA2 ^= 0x7fffffff;
                v_8_1 = valA2;
            }

            *tmpD1 = valA2;
            uint32_t objC2 = valA2;
            tmpD1 = &tmpD1[3];
            (&v_4)[objC2 - 0x405] = v_1018[objC2] + 1;
            int32_t objC4 = 0;
            objC4 = *(&valA2 + 1);
            int32_t v_c18[0x100];
            (&v_4)[objC4 - 0x305] = v_c18[objC4] + 1;
            int32_t objC6 = 0;
            objC6 = *(&v_8_1 + 2);
            int32_t v_818[0x200];
            (&v_4)[objC6 - 0x205] = v_818[objC6] + 1;
            i = i_3;
            i_3 -= 1;
            (&v_4)[(valA2 >> 0x18) - 0x105] += 1;
        } while (i != 1);
    }

    int32_t (* tmpD2)[0x100] = &v_1018;
    int32_t i_2 = 4;
    int32_t i_1;

    do
    {
        int32_t objC8 = 0;
        int32_t j_1 = 0x100;
        int32_t j;

        do
        {
            int32_t valA6 = objC8 + *tmpD2;
            *tmpD2 = objC8;
            tmpD2 = &(*tmpD2)[1];
            j = j_1;
            j_1 -= 1;
            objC8 = valA6;
        } while (j != 1);
        i_1 = i_2;
        i_2 -= 1;
    } while (i_1 != 1);
    int32_t valA9 = i_4 * 0xc + 3;
    valA9 &= 0xfc;
    Camera_UpdateTransform_5(valA9);
    int32_t* srcS8 = entry_ebx;
    int32_t* dstD1 = &i_6;
    int32_t* v_18 = &i_6;
    int32_t* v_c = srcS8;
    int32_t* v_10 = &i_6;
    int32_t (* tmpD3)[0x100] = &v_1018;
    int32_t* arg_4 = nullptr;
    int32_t result_1 = 4;
    int32_t result;
    bool cond_4_1;

    do
    {
        if (i_4 > 0)
        {
            int32_t i_5 = i_4;

            while (true)
            {
                uint32_t valA12 = srcS8[2] >> (arg_4 & 0x1f);
                int32_t* objC12 = &dstD1[(*tmpD3)[valA12] * 3];
                int32_t* dstD2 = srcS8;
                srcS8 = &srcS8[3];
                *objC12 = *dstD2;
                objC12[1] = dstD2[1];
                objC12[2] = dstD2[2];
                (*tmpD3)[valA12] += 1;
                bool cond_5_1 = i_5 != 1;
                i_5 -= 1;

                if (!cond_5_1)
                    break;

                dstD1 = v_18;
            }

            i_4 = i_6;
            srcS8 = v_c;
        }

        dstD1 = srcS8;
        srcS8 = v_10;
        tmpD3 = &tmpD3[1];
        result = result_1 - 1;
        cond_4_1 = result_1 != 1;
        v_18 = dstD1;
        v_c = srcS8;
        v_10 = dstD1;
        arg_4 = &arg_4[2];
        result_1 = result;
    } while (cond_4_1);
    return result;
}
