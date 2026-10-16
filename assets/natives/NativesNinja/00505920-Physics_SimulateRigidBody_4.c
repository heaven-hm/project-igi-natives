#include "00505920-Physics_SimulateRigidBody_4.h"
/* 0x00505920 Physics_SimulateRigidBody_4 full linked: callers=3 callees=2 */
void* const __convention("regparm") sub_505920(int32_t a1, int32_t a2, void* a3, void* a4, int32_t a5, int32_t a6)

{
    void* const result_1 = a3;
    void* const result = a4;
    result_1 = nullptr;
    int32_t* i_1 = *(result + 8);

    if (*i_1 && i_1)
    {
        int32_t* i;

        do
        {
            int32_t* eax = *i_1;

            if (!eax)
                i = nullptr;
            else
            {
                int32_t edi_1 = *eax;
                int32_t edi_2 = -(edi_1);
                i = (edi_2 - edi_2) & eax;
            }

            uint32_t eax_2 = sub_505c50();
            int32_t edx = 0;
            edx = i_1[7];
            result = *(((eax_2 * 0x180 + edx) << 2) + &g_a96ae0);

            if (result)
            {
                uint32_t eax_4 = sub_505c50();
                int32_t ecx_3 = 0;
                ecx_3 = i_1[7];
                (*(((eax_4 * 0x180 + ecx_3) << 2) + &g_a96ae0))(i_1, &result_1);
                result = result_1;

                if (result)
                {
                    result = a5(result, a6);
                    result_1 = nullptr;
                }
            }

            i_1 = i;
        } while (i);
    }

    return result;
}
