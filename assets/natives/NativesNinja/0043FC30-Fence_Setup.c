#include "0043FC30-Fence_Setup.h"
/* 0x0043fc30 Fence_Setup full linked: callers=0 callees=9 */
int32_t* sub_43fc30(void* a1)

{
    int64_t var_60;

    if (!sub_4f16c0(a1 + 0x120))
        *(a1 + 0x11c) = 0;
    else
    {
        sub_4f16e0(a1 + 0x120, a1);
        long double x87_r0;
        var_60 = x87_r0;
        *(a1 + 0x11c) = var_60;
    }

    int32_t* result = *(a1 + 0x170);

    if (!result)
    {
        result = *(a1 + 0x11c);

        if (result)
        {
            *(a1 + 0x170) = sub_44c830(a1);
            void* var_54;
            WeaponType_RegisterType_2(&var_54, a1, 0);
            WeaponType_RegisterType_2(&var_60, a1, 1);
🚫🚫            /* unimplemented  {fld st0, dword [esp+0x28]} */
🚫🚫            /* unimplemented  {fadd dword [esp+0x34]} */
🚫🚫            /* unimplemented  {fmul st0, dword [&g_533504]} */
🚫🚫            /* unimplemented  {fld st0, dword [eax]} */
🚫🚫            /* unimplemented  {fmul st0, st1} */
🚫🚫            /* unimplemented  {fld st0, dword [ebp+0x78]} */
🚫🚫            /* unimplemented  {fmul st0, qword [&g_533708]} */
            int32_t var_28_1 = 0;
            int32_t var_24_1 = 0x3ffc0000;
            int32_t var_20_1 = 0;
            int32_t var_1c_1 = 0x40000000;
🚫🚫🚫            /* unimplemented  {faddp st1, st0} */
            /* unimplemented  {faddp st1, st0} */
🚫🚫🚫            double var_18 = /* double var_18 = unimplemented  {fstp qword [esp+0x74], st0} */;
            /* unimplemented  {fstp qword [esp+0x74], st0} */
🚫🚫            /* unimplemented  {fld st0, dword [ebp+0x7c]} */
🚫🚫            /* unimplemented  {fmul st0, st1} */
🚫🚫            /* unimplemented  {fld st0, dword [ebp+0x84]} */
🚫🚫            /* unimplemented  {fmul st0, qword [&g_533708]} */
🚫🚫🚫            /* unimplemented  {faddp st1, st0} */
            /* unimplemented  {faddp st1, st0} */
🚫🚫🚫            double var_10_1 = /* double var_10_1 = unimplemented  {fstp qword [esp+0x7c], st0} */;
            /* unimplemented  {fstp qword [esp+0x7c], st0} */
🚫🚫            /* unimplemented  {fld st0, dword [ebp+0x88]} */
🚫🚫            /* unimplemented  {fmul st0, st1} */
🚫🚫            /* unimplemented  {fld st0, dword [ebp+0x90]} */
🚫🚫            /* unimplemented  {fmul st0, qword [&g_533708]} */
🚫🚫🚫            /* unimplemented  {faddp st1, st0} */
            /* unimplemented  {faddp st1, st0} */
🚫🚫🚫            double var_8_1 = /* double var_8_1 = unimplemented  {fstp qword [esp+0x84], st0} */;
            /* unimplemented  {fstp qword [esp+0x84], st0} */
            double var_48;
            memcpy(&var_48, &var_18, 0x18);
🚫🚫🚫            /* unimplemented  {fstp st0, st0} */
            /* unimplemented  {fstp st0, st0} */
🚫🚫            /* unimplemented  {fld st0, qword [esp+0x74]} */
🚫🚫            /* unimplemented  {fadd qword [ebp+0x20]} */
🚫🚫🚫            var_48 = /* var_48 = unimplemented  {fstp qword [esp+0x44], st0} */;
            /* unimplemented  {fstp qword [esp+0x44], st0} */
🚫🚫            /* unimplemented  {fld st0, qword [esp+0x4c]} */
🚫🚫            /* unimplemented  {fadd qword [ebp+0x28]} */
🚫🚫🚫            double var_40_1 = /* double var_40_1 = unimplemented  {fstp qword [esp+0x4c], st0} */;
            /* unimplemented  {fstp qword [esp+0x4c], st0} */
🚫🚫            /* unimplemented  {fld st0, qword [esp+0x54]} */
🚫🚫            /* unimplemented  {fadd qword [ebp+0x30]} */
            int32_t eax_5 = *(a1 + 0x170);
🚫🚫🚫            double var_38_1 = /* double var_38_1 = unimplemented  {fstp qword [esp+0x60], st0} */;
            /* unimplemented  {fstp qword [esp+0x60], st0} */
🚫🚫            /* unimplemented  {fld st0, dword [esp+0x38]} */
🚫🚫            /* unimplemented  {fsub st0, dword [esp+0x44]} */
🚫🚫            /* unimplemented  {fmul st0, dword [&g_533840]} */
🚫🚫            /* unimplemented  {fadd qword [&g_533838]} */
🚫🚫🚫            double var_30 = /* double var_30 = unimplemented  {fstp qword [esp+0x6c], st0} */;
            /* unimplemented  {fstp qword [esp+0x6c], st0} */
            sub_44c860(eax_5, &var_48, a1 + 0x70, &var_30, "elfence_loop");
            void* esi_1 = *(a1 + 0x170);
            uint32_t eax_7 = sub_4f1a70();
            int32_t edx_1 = 0;
            edx_1 = *(esi_1 + 0x1c);
            result = *(((eax_7 * 0x180 + edx_1) << 2) + &g_a96ae0);

            if (result)
                result = result(esi_1, 0);
        }
    }
    else if (!*(a1 + 0x11c))
    {
        result = QTask_FindType(result);
        *(a1 + 0x170) = 0;
    }

    int32_t* i = *(a1 + 8);

    if (*i && i)
    {
        int32_t edx_2 = g_afa7e0;

        do
        {
            int32_t* esi_2 = *i;
            void* eax_11;

            if (!esi_2)
                eax_11 = nullptr;
            else
            {
                int32_t eax_8 = *esi_2;
                int32_t eax_9 = -(eax_8);
                eax_11 = (eax_9 - eax_9) & esi_2;
            }

            *((edx_2 << 2) + &g_afa6e0) = eax_11;
            int32_t edx_3 = edx_2 + 1;
            int32_t eax_12 = 0;
            g_afa7e0 = edx_3;
            eax_12 = i[7];
            result = *((eax_12 << 2) + &g_a970e0);

            if (result)
            {
                result = result(i);
                edx_3 = g_afa7e0;
            }

            i = *((edx_3 << 2) + &g_afa6dc);
            edx_2 = edx_3 - 1;
            g_afa7e0 = edx_2;
        } while (i);
    }

    return result;
}
