#include "004F3570-AnimTask_LoadParameters.h"
/* 0x004f3570 AnimTask_LoadParameters full linked: callers=0 callees=4 */
int32_t sub_4f3570(void* a1, int32_t a2)

{
    int32_t* edi = a2;
    int32_t esi = *edi;
    int32_t esi_1 = esi + 1;
    int32_t result = sub_4b8a20(edi[1], esi);
    int32_t ebp = 0;
    *(a1 + 0x20150) = result;

    if (result > 0)
    {
        float* ebx_1 = a1 + 0xf8;

        do
        {
            float esi_2 = esi_1 + 1;
            char eax_3 = sub_4b8a20(edi[1], esi_1);
            ebx_1[-1] = eax_3;

            if (eax_3 != 0x20)
            {
                esi_1 = esi_2 + 1;
                Profile_ValueSet(edi[1], esi_2);
            }
            else
            {
                esi_1 = esi_2 + 1;
                Profile_ValueSet(edi[1], esi_2);
🚫🚫🚫                int32_t var_8_1 = /* int32_t var_8_1 =
                    (unimplemented  {fistp qword [esp+0x18], st0}).d */;
                /* unimplemented  {fistp qword [esp+0x18], st0} */
                a2 = var_8_1;
🚫🚫                /* unimplemented  {fild st0, dword [esp+0x20]} */
            }

            ebp += 1;
🚫🚫🚫            *ebx_1 = /* *ebx_1 = unimplemented  {fstp dword [ebx], st0} */;
            /* unimplemented  {fstp dword [ebx], st0} */
            int16_t top = top + 1;
            result = *(a1 + 0x20150);
            ebx_1 = &ebx_1[2];
        } while (ebp < result);
    }

    *edi = esi_1;
    return result;
}
