#include "gi_platform.h"
#include "004C0260-DynObj_UpdateDynTree.h"
int32_t DynObj_UpdateDynTree(int32_t* a1, int32_t a2, int32_t a3)

{
    int32_t objC;
    int32_t v_4 = objC;
    int32_t* objC1 = a1;
    int32_t flagP = 0;
    int32_t i = objC1[1];
    int32_t i_1 = 0;

    if (i > 0)
    {
        do
        {
            int32_t* j_1 = *(*objC1 + flagP);
            int32_t* j = *j_1;

            if (j)
            {
                do
                {
                    a2(j_1[2], j_1[3], a3);
                    j_1 = j;
                    j = *j;
                } while (j);

                objC1 = a1;
            }

            i = i_1 + 1;
            flagP += 0xc;
            i_1 = i;
        } while (i < objC1[1]);
    }

    return i;
}
