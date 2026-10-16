#include "00425B80-Menu_CaraiErrorInGraphDNo.h"
/* 0x00425b80 Menu_CaraiErrorInGraphDNo full linked: callers=2 callees=6 */
double* Menu_CaraiErrorInGraphDNo(double* a1, void* a2, int32_t* a3, int32_t a4, void* a5)

{
    double* result = sub_5096f0(&a3, a2, a3);
    int32_t* ecx = a3;

    if (!ecx)
        return result;

    int32_t eax = *ecx;

    if (eax == a4)
        return sub_4f9770(a1, ecx);

    int32_t* eax_1 = sub_5096c0(a2, eax, a4);

    if (eax_1)
        return sub_4f9770(a1, sub_4f9720(a2, *eax_1));

    int32_t var_c_3 = a4;
    int32_t var_10_3 = *a3;
    int32_t var_14_3 = *(a5 + 0x20);
    return Warning_Show("CarAI: Error in graph %d. No link between nodes %d and %d.");
}
