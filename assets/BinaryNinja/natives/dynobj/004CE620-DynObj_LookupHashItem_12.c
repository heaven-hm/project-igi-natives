#include "DynObj_LookupHashItem_12.h"
int32_t DynObj_LookupHashItem_12(int32_t a1, int32_t a2)

{
    int32_t valA = a2;
    int32_t ctxB = a1;

    if (!*(ctxB + (valA << 2) + 0xe8))
    {
        void* valA1 = *(ctxB + (valA << 2) + 0x10);
        int32_t objC4 = -(*(ctxB + 0xde4));
        int32_t objC5 = *(ctxB + 0xde8);
        double v_30 = -(*(ctxB + 0xde0));
        int32_t objC7 = 0;
        objC7 = *(valA1 + 0x30);
        double v_28_1 = objC4;
        void v_70;
        int32_t* tmpD1 = &v_70;
        double v_20_1 = -(objC5);
        memcpy(&v_70, valA1, 0x40);
        int32_t i = 0;
        void v_48;
        int32_t* v_10_1 = &v_48;
        int32_t v_14_1 = 0x1e;
        char v_40 = 0;
        int32_t v_8_1 = 7;
        void v_64;
        int32_t* dstD1 = &v_64;
        a1 = valA1 + 0xc;
        int32_t* v_c_1 = valA1 + 0x28;

        do
        {
            *dstD1 = *v_c_1;
            *v_10_1 = *a1;
            v_40 |= (objC7 >> (i & 0x1f) & 1) << (v_8_1 & 0x1f);
            i += 1;
            a1 += 4;
            dstD1 = &dstD1[1];
            v_8_1 -= 1;
            v_c_1 -= 4;
            v_10_1 -= 4;
        } while (i < 4);

        if (v_40)
        {
            uint32_t valA12 = v_40;
            int32_t v_44;

            if ((~(valA12 - 1) & valA12) == valA12 && !v_44)
            {
                char* srcS2 = &v_40;

                do
                {
                    int32_t valA14 = 0;
                    valA14 = *srcS2;
                    int32_t eflags_1;
                    int32_t valA15;
                    valA15 = __bsf_gprv_memv(valA14);
                    tmpD1 = tmpD1[valA15 + 3];
                    int32_t objC25 = *tmpD1;
                    v_30 = ((valA15 & 1) * 2 - 1) * objC25 + v_30;
                    v_28_1 = ((valA15 & 2) - 1) * objC25 + v_28_1;
                    char valA21 = tmpD1[0xc];
                    v_14_1 -= 1;
                    srcS2 = &tmpD1[0xc];
                    v_20_1 = ((valA15 >> 1 & 2) - 1) * objC25 + v_20_1;

                    if (!valA21)
                        break;

                    uint32_t valA22 = valA21;

                    if ((~(valA22 - 1) & valA22) != valA22)
                        break;
                } while (!tmpD1[0xb]);

                *(ctxB + (a2 << 2) + 0x28) = tmpD1;
                memcpy(ctxB + a2 * 0x18 + 0x40, &v_30, 0x18);
                *(ctxB + (a2 << 2) + 0xd0) = v_14_1;
                *(ctxB + (a2 << 2) + 0xe8) = 1;
                return a2;
            }
        }

        valA = a2;
        *(ctxB + (valA << 2) + 0x28) = *(ctxB + (valA << 2) + 0x10);
        memcpy(ctxB + valA * 0x18 + 0x40, &v_30, 0x18);
        *(ctxB + (valA << 2) + 0xd0) = 0x1e;
        *(ctxB + (valA << 2) + 0xe8) = 1;
    }

    return valA;
}
