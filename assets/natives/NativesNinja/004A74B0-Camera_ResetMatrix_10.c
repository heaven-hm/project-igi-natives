#include "004A74B0-Camera_ResetMatrix_10.h"
/* 0x004a74b0 Camera_ResetMatrix_10 full linked: callers=1 callees=4 */
char* sub_4a74b0(double* a1, char* a2, int32_t a3, int32_t a4)

{
    int32_t ecx;
    int32_t var_14 = ecx;
    int32_t var_18 = ecx;
    var_18 = *a1;
    sub_4acbe9();
    g_9361c0 = &g_936238;
    g_9361c8 = g_93623c - 1;
    void* ecx_3 = nullptr;
    ecx_3 = g_936238 == 0x2d;
    char* esi = ecx_3 + a2;
    sub_4acb72(esi, a3, &g_936238);
    void* eax = g_9361c0;
    bool ecx_7 = g_9361c8 < *(eax + 4) - 1;
    g_9361cc = ecx_7;
    int32_t eax_2 = *(eax + 4) - 1;
    g_9361c8 = eax_2;

    if (eax_2 < 0xfffffffc || eax_2 >= a3)
        return sub_4a754b(a1, a2, a3, a4);

    if (ecx_7)
    {
        char i;

        do
        {
            i = *esi;
            esi = &esi[1];
        } while (i);

        esi[0xfffffffe] &= i;
    }

    return sub_4a7572(a1, a2, a3);
}
