#include "00496280-Display_SwapBuffers_10.h"
/* 0x00496280 Display_SwapBuffers_10 full linked: callers=2 callees=0 */
int32_t sub_496280(char* a1, char* a2, int32_t a3, int16_t* a4)

{
    int16_t* ebp = a4;
    int32_t esi = ebp[3];
    int16_t edx = ebp[2];
    int32_t var_18 = ebp[1];
    int32_t ecx_1 = ebp[4];
    int32_t var_8 = *((esi << 1) + &g_543930);
    char* var_1c = a2;
    int32_t var_4 = *((ecx_1 << 1) + &g_543930);
    int16_t edx_3;
    edx_3 = ebp[5];
    a2 = a1;
    int32_t var_10 = esi;

    if (edx_3)
    {
        char* edx_4 = nullptr;
        edx_4 = *a1;
        a1 = edx_4;
        a2 = &a1[1];
    }

    int32_t result = a3;

    if (result > 0)
    {
        a3 = result;
        bool cond:1_1;

        do
        {
            int32_t i = 0;

            if (*ebp > 0)
            {
                do
                {
                    bool ecx_3 = ebp[5];
                    char* eax_3;

                    if (!ecx_3)
                    {
                        char* eax_4 = nullptr;
                        eax_4 = *a2;
                        a1 = eax_4;
                        a2 = &a2[1];
                        eax_3 = eax_4 >> 4;
                    }
                    else
                        eax_3 = a1;

                    void* eax_5 = eax_3 & 0xf;
                    ebp[5] = !ecx_3;
                    int32_t ecx_4 = (&var_10)[i];
                    int32_t edx_7 = *(eax_5 + 0x543920);
                    int32_t ecx_5 = ecx_4 + edx_7;
                    (&var_10)[i] = ecx_5;
                    int32_t ebx_1;

                    if (ecx_4 + edx_7 >= 0)
                    {
                        ebx_1 = 0x58;

                        if (ecx_5 <= 0x58)
                            ebx_1 = ecx_5;
                    }
                    else
                        ebx_1 = 0;

                    int32_t esi_1 = (&var_8)[i];
                    char eax_6 = eax_5 & 7;
                    (&var_10)[i] = ebx_1;
                    int32_t ecx_7 = esi_1 >> 3;

                    if (eax_6 & 4)
                        ecx_7 += esi_1;

                    if (eax_6 & 2)
                    {
                        ecx_7 += esi_1 >> 1;
                        ebp = a4;
                    }

                    if (eax_6 & 1)
                        ecx_7 += esi_1 >> 2;

                    int32_t eax_7 = (&var_18)[i];
                    int32_t eax_8;

                    eax_8 = !(eax_5 & 8) ? eax_7 + ecx_7 : eax_7 - ecx_7;

                    (&var_18)[i] = eax_8;

                    if (eax_8 < 0xffff8000)
                        eax_8 = 0xffff8000;
                    else if (eax_8 > 0x7fff)
                        eax_8 = 0x7fff;

                    (&var_18)[i] = eax_8;
                    int16_t ecx_2 = (&var_18)[i];
                    (&var_8)[i] = *((ebx_1 << 1) + &g_543930);
                    *var_1c = ecx_2;
                    i += 1;
                    var_1c = &var_1c[2];
                } while (i < *ebp);
            }

            result = a3 - 1;
            cond:1_1 = a3 != 1;
            a3 = result;
        } while (cond:1_1);
        esi = var_10;
    }

    result = var_18;
    ebp[3] = esi;
    ebp[1] = result;
    ebp[2] = edx;
    ebp[4] = ecx_1;
    return result;
}
