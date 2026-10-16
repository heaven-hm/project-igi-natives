#include "0051B0B0-Terrain_SampleHeightmap_10.h"
/* 0x0051b0b0 Terrain_SampleHeightmap_10 full linked: callers=1 callees=1 */
void* sub_51b0b0(void* a1)

{
    void* result = sub_4f1030(*(a1 + 0x20));

    if (result)
    {
        int32_t ecx_1 = *(result + 0x1f8);

        if (ecx_1 >= 3)
        {
            long double x87_r7_1 = 0f;

            if (ecx_1 - 1 > 0)
            {
                void** ecx_2 = result + 0x68;
                int32_t i_2 = ecx_1 - 1;
                int32_t i;

                do
                {
                    void* edi_1 = *ecx_2;
                    ecx_2 = &ecx_2[1];
                    i = i_2;
                    i_2 -= 1;
                    x87_r7_1 = x87_r7_1 + *(edi_1 + 0x98);
                } while (i != 1);
            }

            long double x87_r7_2 = x87_r7_1 * *(a1 + 0x40);
            int32_t i_1 = 0;

            if (ecx_1 - 1 > 0)
            {
                void** edi_2 = result + 0x68;

                do
                {
                    void* edx_1 = *edi_2;
                    long double temp1_1 = *(edx_1 + 0x98);
                    x87_r7_2 - temp1_1;
                    result = (x87_r7_2 < temp1_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_2, temp1_1) ? 1 : 0) << 0xa
                        | (x87_r7_2 == temp1_1 ? 1 : 0) << 0xe | 0x3800;

                    if (*(&result + 1) & 0x41)
                    {
                        *(a1 + 0x28) = i_1;
                        *(a1 + 0x38) = x87_r7_2 / *(edx_1 + 0x98);
                        return result;
                    }

                    x87_r7_2 = x87_r7_2 - *(edx_1 + 0x98);
                    i_1 += 1;
                    edi_2 = &edi_2[1];
                } while (i_1 < ecx_1 - 1);
            }
        }
    }

    return result;
}
