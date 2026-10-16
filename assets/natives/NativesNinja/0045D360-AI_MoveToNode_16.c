#include "0045D360-AI_MoveToNode_16.h"
/* 0x0045d360 AI_MoveToNode_16 full linked: callers=4 callees=4 */
void* sub_45d360(void* a1)

{
    void* ebx = a1;
    void* result = Table_GetAt(ebx + 0x4c4, 0);

    if (!result)
    {
        int32_t esi_1 = 0;
        result = HumanPlayer_UpdateAnimation_10();
        int32_t edi_2 = result + 1;

        if (result != 0xffffffff)
        {
            a1 = edi_2;
            bool cond:0_1;

            do
            {
                esi_1 += 1;

                if (esi_1 >= edi_2)
                    esi_1 = 0;

                int32_t* eax = HumanPlayer_UpdateMotion_11(esi_1, edi_2, ebx, esi_1);

                if (eax)
                    sub_4f2070(ebx + 0x4c4, nullptr, eax);

                result = a1 - 1;
                cond:0_1 = a1 != 1;
                a1 = result;
            } while (cond:0_1);
        }
    }

    return result;
}
