#include "Terrain_SampleHeightmap_10.h"
void* Terrain_SampleHeightmap_10(void* a1)

{
    void* result = Script_ExecuteLevelScript_4(*(a1 + 0x20));

    if (result)
    {
        int32_t objC1 = *(result + 0x1f8);

        if (objC1 >= 3)
        {
            long double x87_r7_1 = 0f;

            if (objC1 - 1 > 0)
            {
                void** objC2 = result + 0x68;
                int32_t i_2 = objC1 - 1;
                int32_t i;

                do
                {
                    void* dstD1 = *objC2;
                    objC2 = &objC2[1];
                    i = i_2;
                    i_2 -= 1;
                    x87_r7_1 = x87_r7_1 + *(dstD1 + 0x98);
                } while (i != 1);
            }

            long double x87_r7_2 = x87_r7_1 * *(a1 + 0x40);
            int32_t i_1 = 0;

            if (objC1 - 1 > 0)
            {
                void** dstD2 = result + 0x68;

                do
                {
                    void* tmpD1 = *dstD2;
                    long double f1_1 = *(tmpD1 + 0x98);
                    x87_r7_2 - f1_1;
                    result = (x87_r7_2 < f1_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_2, f1_1) ? 1 : 0) << 0xa
                        | (x87_r7_2 == f1_1 ? 1 : 0) << 0xe | 0x3800;

                    if (*(&result + 1) & 0x41)
                    {
                        *(a1 + 0x28) = i_1;
                        *(a1 + 0x38) = x87_r7_2 / *(tmpD1 + 0x98);
                        return result;
                    }

                    x87_r7_2 = x87_r7_2 - *(tmpD1 + 0x98);
                    i_1 += 1;
                    dstD2 = &dstD2[1];
                } while (i_1 < objC1 - 1);
            }
        }
    }

    return result;
}
