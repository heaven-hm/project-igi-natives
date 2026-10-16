#include "0042DB00-Menu_LeaveMenus_22.h"
/* 0x0042db00 Menu_LeaveMenus_22 full linked: callers=0 callees=16 */
char* Menu_LeaveMenus_22(int32_t a1, int32_t* a2)

{
    int32_t* esi = a2;
    void* ebp = *esi;
    float edi = esi[1];
    (*(((sub_4ee0e0() * 0x180 + sub_4f45f0()) << 2) + &g_a96ae0))(a1, esi);
    int32_t eax_5 = esi[2];
    esi[2] = eax_5 + 1;
    int32_t eax_6 = sub_4b8a20(edi, eax_5);
    *(ebp + 0x118) = eax_6;
    a2 = nullptr;

    if (eax_6 > 0)
    {
        char* ebx_3 = ebp + 0x11d;
        bool cond:2_1;

        do
        {
            int32_t eax_7 = esi[2];
            esi[2] = eax_7 + 1;
            ebx_3[0xffffffff] = sub_4b8a20(edi, eax_7);
            int32_t eax_9 = esi[2];
            esi[2] = eax_9 + 1;
            *ebx_3 = sub_4b8a20(edi, eax_9);
            float eax_11 = esi[2];
            esi[2] = eax_11 + 1;
            Profile_ValueSet(edi, eax_11);
🚫🚫🚫            *(ebx_3 + 3) = /* *(ebx_3 + 3) = unimplemented  {fstp dword [ebx+0x3], st0} */;
            /* unimplemented  {fstp dword [ebx+0x3], st0} */
            int32_t eax_12 = esi[2];
            esi[2] = eax_12 + 1;
            *(ebx_3 + 7) = sub_4b8a20(edi, eax_12);
            float eax_14 = esi[2];
            esi[2] = eax_14 + 1;
            Profile_ValueSet(edi, eax_14);
🚫🚫            /* unimplemented  {fmul st0, dword [&g_5333b8]} */
🚫🚫🚫            *(ebx_3 + 0xb) = /* *(ebx_3 + 0xb) = unimplemented  {fstp dword [ebx+0xb], st0} */;
            /* unimplemented  {fstp dword [ebx+0xb], st0} */
            float eax_15 = esi[2];
            esi[2] = eax_15 + 1;
            Profile_ValueSet(edi, eax_15);
🚫🚫🚫            *(ebx_3 + 0xf) = /* *(ebx_3 + 0xf) = unimplemented  {fstp dword [ebx+0xf], st0} */;
            /* unimplemented  {fstp dword [ebx+0xf], st0} */
            int16_t top = top + 3;
            ebx_3 = &ebx_3[0x14];
            cond:2_1 = a2 + 1 < *(ebp + 0x118);
            a2 += 1;
        } while (cond:2_1);
    }

    float eax_18 = esi[2];
    esi[2] = eax_18 + 1;
    Profile_ValueSet(edi, eax_18);
🚫🚫    /* unimplemented  {fmul st0, dword [&g_5333b8]} */
🚫🚫🚫    *(ebp + 0x25c) = /* *(ebp + 0x25c) = unimplemented  {fstp dword [ebp+0x25c], st0} */;
    /* unimplemented  {fstp dword [ebp+0x25c], st0} */
    int32_t eax_19 = esi[2];
    esi[2] = eax_19 + 1;
    *(ebp + 0x260) = sub_4b8a20(edi, eax_19);
    int32_t eax_21 = esi[2];
    esi[2] = eax_21 + 1;
    *(ebp + 0x261) = sub_4b8a20(edi, eax_21);
    int32_t eax_23 = esi[2];
    esi[2] = eax_23 + 1;
    sub_4b8a80(edi, eax_23, ebp + 0x262, 0x20);
    int32_t eax_24 = esi[2];
    esi[2] = eax_24 + 1;
    int32_t eax_25 = sub_4b8a20(edi, eax_24);
    int32_t i = 0;
    *(ebp + 0x2ac) = eax_25;

    if (eax_25 > 0)
    {
        a2 = ebp + 0x284;

        do
        {
            int32_t eax_27 = esi[2];
            esi[2] = eax_27 + 1;
            i += 1;
            *a2 = sub_4b8a20(edi, eax_27);
            a2 = &a2[1];
        } while (i < *(ebp + 0x2ac));
    }

    int32_t eax_30 = esi[2];
    esi[2] = eax_30 + 1;
    return sub_4b8a80(edi, eax_30, ebp + 0x2b0, 0x10);
}
