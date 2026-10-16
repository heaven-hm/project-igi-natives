#include "00489290-LevelFlow_LoadParameters.h"
/* 0x00489290 LevelFlow_LoadParameters full linked: callers=0 callees=5 */
int32_t sub_489290(int80_t a1 @ st0, void* a2)

{
    char result = sub_4f1160();

    if (result)
    {
        int32_t* i = *(a2 + 8);
        *(a2 + 0x11c) = *(a2 + 0x61);

        if (*i && i)
        {
            int32_t edx_1 = g_afa7e0;

            do
            {
                int32_t* esi_1 = *i;
                void* eax_4;

                if (!esi_1)
                    eax_4 = nullptr;
                else
                {
                    int32_t eax_1 = *esi_1;
                    int32_t eax_2 = -(eax_1);
                    eax_4 = (eax_2 - eax_2) & esi_1;
                }

                *((edx_1 << 2) + &g_afa6e0) = eax_4;
                int32_t edx_2 = edx_1 + 1;
                int32_t eax_5 = 0;
                g_afa7e0 = edx_2;
                eax_5 = i[7];
                int32_t eax_6 = *((eax_5 << 2) + &g_a970e0);

                if (eax_6)
                {
                    eax_6(i);
                    edx_2 = g_afa7e0;
                }

                i = *((edx_2 << 2) + &g_afa6dc);
                edx_1 = edx_2 - 1;
                g_afa7e0 = edx_1;
            } while (i);
        }

        if (sub_4f16c0(a2 + 0x7c))
        {
            sub_4f16e0(a2 + 0x7c, a2);
            *(a2 + 0x60) = a1;
        }

        if (sub_4f16c0(a2 + 0xcc))
        {
            sub_4f16e0(a2 + 0xcc, a2);
🚫🚫🚫            char var_8_2 = /* char var_8_2 = (unimplemented  {fistp qword [esp+0x10], st0}).b */;
            /* unimplemented  {fistp qword [esp+0x10], st0} */
            *(a2 + 0x61) = var_8_2;
        }

        if (*(a2 + 0x61))
            *(a2 + 0x60) = 0;

        *(a2 + 0x68) += 1;
        char edx_7 = g_c28c65;
        char ecx_4 = g_c28c64 & 0x80;
        g_5c8aa8 = g_c28c6d & 0x80;
        result = g_c28c66 & 0x80;
        g_5c8aa9 = ecx_4;
        ecx_4 = g_c28c67;
        g_5c8aaa = edx_7 & 0x80;
        edx_7 = g_c28c68;
        g_5c8aab = result;
        result = g_c28c69 & 0x80;
        g_5c8aac = ecx_4 & 0x80;
        ecx_4 = g_c28c6a;
        g_5c8aad = edx_7 & 0x80;
        edx_7 = g_c28c6b;
        g_5c8aae = result;
        result = g_c28c6c & 0x80;
        g_5c8aaf = ecx_4 & 0x80;
        g_5c8ab0 = edx_7 & 0x80;
        g_5c8ab1 = result;
    }

    return result;
}
