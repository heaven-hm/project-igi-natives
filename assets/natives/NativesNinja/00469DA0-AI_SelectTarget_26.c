#include "00469DA0-AI_SelectTarget_26.h"
/* 0x00469da0 AI_SelectTarget_26 full linked: callers=0 callees=15 */
int32_t sub_469da0(void* a1, int32_t* a2)

{
    void* edi = g_5bdd98;
    sub_46c060();
    int32_t* ecx = a2;
    int32_t result = *(a1 + 0x38);

    if (result == *ecx)
    {
        sub_46c090();
        char eax = sub_46b4f0();
        char edx_1 = *(a1 + 0x80);
        char ebx_2 = eax & 0x10;
        int32_t var_20 = 0x3f800000;
        int32_t var_1c_1 = 0x3f800000;
        int32_t var_18_1 = 0;
        *(a1 + 0x81) = edx_1;
        *(a1 + 0x80) = ebx_2;
        int32_t var_2c_1 = 0;
        int32_t var_28_1 = 0;

        if (ebx_2)
            switch (*(a1 + 0x38) - 3)
            {
                case 0:
                {
                    ecx = sub_46a0a0(edi);
                    int32_t var_28_2 = 0x46d55555;
                    break;
                }
                case 1:
                {
                    ecx = sub_46a0a0(edi);
                    int32_t var_28_3 = 0xc6d55555;
                    break;
                }
                case 2:
                {
                    ecx = sub_46a0a0(edi);
                    int32_t var_2c_2 = 0xc6d55555;
                    break;
                }
                case 3:
                {
                    ecx = sub_46a0a0(edi);
                    int32_t var_2c_3 = 0x46d55555;
                    break;
                }
                case 4:
                {
                    if (!*(a1 + 0x81))
                    {
                        if (g_5bdda0 >= 3)
                            ecx = Sound_EventTrigger("mapcomp_01", 1, &var_20);
                        else
                        {
                            g_5bdda0 += 1;
                        label_469ec2:
                            sub_4682e0(*(edi + 0xa0), 0);
                            sub_4663b0(*(edi + 0x9c));
                            ecx = Sound_EventTrigger("mapcomp_01", 1, &var_20);
                        }
                    }
                    break;
                }
                case 5:
                {
                    if (!*(a1 + 0x81))
                    {
                        if (g_5bdda0)
                        {
                            g_5bdda0 -= 1;
                            goto label_469ec2;
                        }

                        ecx = Sound_EventTrigger("mapcomp_01", 1, &var_20);
                    }
                    break;
                }
            }

        int32_t* var_40_6 = ecx;
        long double st0_1;
        bool c1_1;
        bool c2_1;
        st0_1 = __fptan(*((g_5bdda0 << 2) + &g_53f750));
🚫🚫🚫        /* unimplemented  {fstp st0, st0} */
        /* unimplemented  {fstp st0, st0} */
🚫🚫🚫        float var_40_7 = /* float var_40_7 = unimplemented  {fstp dword [esp], st0} */;
        /* unimplemented  {fstp dword [esp], st0} */
        sub_469fe0(edi, var_40_7);

        if (*(a1 + 0x38) == 9)
        {
            void* eax_8 = sub_46b040();

            if (!ebx_2)
                *(eax_8 + 0x2c) = 0;
            else
            {
                int32_t ecx_2 = *(Config_GetActivePlayerProfileRecord() + 0x538);
🚫🚫                /* unimplemented  {fld st0, dword [ebp+0x1b0]} */
🚫🚫                /* unimplemented  {fld st0, dword [ebp+0x1b4]} */

                if (!ecx_2)
🚫🚫                    /* unimplemented  {fchs } */

🚫🚫🚫🚫                /* unimplemented  {fxch st0, st1} */
                /* unimplemented  {fxch st0, st1} */
🚫🚫                /* unimplemented  {fmul st0, dword [&g_533a38]} */
                *(eax_8 + 0x2c) = 1;
🚫🚫🚫                float var_2c_4 = /* float var_2c_4 = unimplemented  {fstp dword [esp+0x14], st0} */;
                /* unimplemented  {fstp dword [esp+0x14], st0} */
🚫🚫                /* unimplemented  {fmul st0, dword [&g_533a38]} */
🚫🚫🚫                float var_28_4 = /* float var_28_4 = unimplemented  {fstp dword [esp+0x18], st0} */;
                /* unimplemented  {fstp dword [esp+0x18], st0} */
                sub_46a0a0(edi);
            }
        }

🚫🚫        /* unimplemented  {fld st0, dword [edi+0x70]} */
🚫🚫        /* unimplemented  {fld st0, qword [&g_533a30]} */
🚫🚫🚫        result = sub_4a5760();
        /* unimplemented  {call sub_4a5760} */
🚫🚫        /* unimplemented  {fld st0, st0} */
🚫🚫        /* unimplemented  {fmul st0, dword [esp+0x10]} */
        int32_t var_24_1 = 0;
🚫🚫🚫        float var_2c_5 = /* float var_2c_5 = unimplemented  {fstp dword [esp+0xc], st0} */;
        /* unimplemented  {fstp dword [esp+0xc], st0} */
🚫🚫        /* unimplemented  {fmul st0, dword [esp+0x10]} */
🚫🚫        /* unimplemented  {fld st0, dword [esp+0xc]} */
🚫🚫        /* unimplemented  {fadd qword [&g_5bdd78]} */
🚫🚫🚫        g_5bdd78 = /* g_5bdd78 = unimplemented  {fstp qword [&g_5bdd78], st0} */;
        /* unimplemented  {fstp qword [&g_5bdd78], st0} */
🚫🚫        /* unimplemented  {fadd qword [&g_5bdd80]} */
🚫🚫🚫        g_5bdd80 = /* g_5bdd80 = unimplemented  {fstp qword [&g_5bdd80], st0} */;
        /* unimplemented  {fstp qword [&g_5bdd80], st0} */
🚫🚫        /* unimplemented  {fld st0, dword [esp+0x14]} */
🚫🚫        /* unimplemented  {fadd qword [&g_5bdd88]} */
🚫🚫🚫        g_5bdd88 = /* g_5bdd88 = unimplemented  {fstp qword [&g_5bdd88], st0} */;
        /* unimplemented  {fstp qword [&g_5bdd88], st0} */
    }

    return result;
}
