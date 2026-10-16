#include "00504BB0-EditRigidObjAttachedToBone_Process.h"
/* 0x00504bb0 EditRigidObjAttachedToBone_Process full linked: callers=0 callees=6 */
int32_t sub_504bb0(void* a1)

{
    char eax = *(a1 + 0x128);

    if (eax != 0x2a && eax)
    {
        void* eax_1 = sub_4cec10(a1 + 0x128);

        if (eax_1)
        {
            void* __saved_esi_2 = a1;
            *(a1 + 0x6c) = eax_1;
            return eax_1;
        }

        char* edi_1 = a1 + 0x128;
        int32_t i = 0xffffffff;

        while (i)
        {
            bool cond:0_1 = 0 != *edi_1;
            edi_1 = &edi_1[1];
            i -= 1;

            if (!cond:0_1)
                break;
        }

        int32_t ecx_1 = ~i;
        void var_10;
        int32_t esi_2;
        int32_t edi_3;
        edi_3 = memcpy(&var_10, edi_1 - ecx_1, ecx_1 & 0xfffffffc);
        memcpy(edi_3, esi_2, ecx_1 & 3);
        void* var_24_1 = &var_10;
        eax = Game_DataSymbolLoad(a1 + 0x128, "*%s");
    }

    void* __saved_esi_3 = a1;
    return eax;
}
