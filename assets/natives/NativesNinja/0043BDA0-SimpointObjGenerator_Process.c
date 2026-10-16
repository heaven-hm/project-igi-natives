#include "0043BDA0-SimpointObjGenerator_Process.h"
/* 0x0043bda0 SimpointObjGenerator_Process full linked: callers=0 callees=6 */
int32_t SimpointObjGenerator_Process(void* a1)

{
    void* eax = sub_4cec10(a1 + 0xf4);

    if (!eax && a1 + 0xf4 && *(a1 + 0xf5) != 0x2a)
    {
        char* var_118_1 = a1 + 0xf4;
        void var_80;
        Game_DataSymbolLoad(&var_80, "Model "%s" not available");
        char* edi_1 = a1 + 0xf4;
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
        void var_100;
        int32_t esi_2;
        int32_t edi_3;
        edi_3 = memcpy(&var_100, edi_1 - ecx_1, ecx_1 & 0xfffffffc);
        memcpy(edi_3, esi_2, ecx_1 & 3);
        void* var_124_1 = &var_100;
        Game_DataSymbolLoad(a1 + 0xf4, "** %s **");
    }

    int32_t result = sub_4c48d0(a1, eax);
    *(a1 + 0xf0) = 0;
    return result;
}
