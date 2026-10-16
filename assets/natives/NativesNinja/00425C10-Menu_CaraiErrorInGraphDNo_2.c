#include "00425C10-Menu_CaraiErrorInGraphDNo_2.h"
/* 0x00425c10 Menu_CaraiErrorInGraphDNo_2 full linked: callers=3 callees=4 */
int32_t* Menu_CaraiErrorInGraphDNo_2(int32_t* a1, void* a2, int32_t a3, void* a4)

{
    sub_5096f0(&a1, a2, a1);
    int32_t* eax = a1;

    if (eax)
    {
        int32_t ecx_1 = *eax;

        if (ecx_1 != a3)
        {
            int32_t* eax_1 = sub_5096c0(a2, ecx_1, a3);

            if (eax_1)
                return sub_4f9720(a2, *eax_1);

            int32_t var_c_3 = a3;
            int32_t var_10_3 = *a1;
            int32_t var_14_2 = *(a4 + 0x20);
            Warning_Show("CarAI: Error in graph %d. No link between nodes %d and %d.");
            return a1;
        }
    }

    return eax;
}
