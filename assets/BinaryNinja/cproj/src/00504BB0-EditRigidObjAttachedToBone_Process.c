#include "gi_platform.h"
#include "00504BB0-EditRigidObjAttachedToBone_Process.h"
int32_t EditRigidObjAttachedToBone_Process(void* a1)

{
    char valA = (*(int32_t*)(uintptr_t)(a1 + 0x128));

    if (valA != 0x2a && valA)
    {
        void* valA1 = DynObj_Missing(a1 + 0x128);

        if (valA1)
        {
            void* __saved_esi_2 = a1;
            (*(int32_t*)(uintptr_t)(a1 + 0x6c)) = valA1;
            return valA1;
        }

        char* dstD1 = a1 + 0x128;
        int32_t i = 0xffffffff;

        while (i)
        {
            bool cond_0_1 = 0 != *dstD1;
            dstD1 = &dstD1[1];
            i -= 1;

            if (!cond_0_1)
                break;
        }

        int32_t objC1 = ~i;
        char v_10;
        int32_t srcS2;
        int32_t dstD3;
        dstD3 = memcpy(&v_10, dstD1 - objC1, objC1 & 0xfffffffc);
        memcpy(dstD3, srcS2, objC1 & 3);
        void* v_24_1 = &v_10;
        valA = Game_DataSymbolLoad(a1 + 0x128, "*%s");
    }

    void* __saved_esi_3 = a1;
    return valA;
}
