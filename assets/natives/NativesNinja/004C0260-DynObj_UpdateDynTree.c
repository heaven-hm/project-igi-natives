#include "004C0260-DynObj_UpdateDynTree.h"
/* 0x004c0260 DynObj_UpdateDynTree full linked: callers=1 callees=0 */
int32_t sub_4c0260(int32_t* a1, int32_t a2, int32_t a3)

{
    int32_t ecx;
    int32_t var_4 = ecx;
    int32_t* ecx_1 = a1;
    int32_t ebp = 0;
    int32_t i = ecx_1[1];
    int32_t i_1 = 0;

    if (i > 0)
    {
        do
        {
            int32_t* j_1 = *(*ecx_1 + ebp);
            int32_t* j = *j_1;

            if (j)
            {
                do
                {
                    a2(j_1[2], j_1[3], a3);
                    j_1 = j;
                    j = *j;
                } while (j);

                ecx_1 = a1;
            }

            i = i_1 + 1;
            ebp += 0xc;
            i_1 = i;
        } while (i < ecx_1[1]);
    }

    return i;
}
