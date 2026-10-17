// Original IGI.EXE function: DynObj_InsertHashItem_14 (VA 0x004CF080; static CFG gate PASS, CFG score 1.000).
#include "DynObj_InsertHashItem_14.h"
int32_t* DynObj_InsertHashItem_14(void* a1, int32_t a2, int32_t a3)

{
    void* valA = g_a4ec60;
    void* dstD = a1;
    DynObj_RemoveSymbol_14(dstD);
    void v_100;

    if (a3)
    {
        int32_t __saved_ebx_1 = a2;
        char* v_128_1 = &g_a4ed6c;
        int32_t valA2;
        void* objC1;
        valA2 = Game_DataSymbolLoad(&v_100, "%stextures/%s.res");
        void* v_138_1 = &v_100;
        Resource_Load(valA2, &v_100, objC1, nullptr);
        DynObj_LocalTexturesSTex(dstD);
        DynObj_LinkDynamicCube_14(dstD);
        Resource_Unload(&v_100);
    }

    int32_t __saved_ebx_2 = a2;
    char* v_128_2 = &g_a4ed6c;
    int32_t valA3;
    void* objC2;
    valA3 = Game_DataSymbolLoad(&v_100, "%smodels/%s.res");
    void* v_138_2 = &v_100;
    *(dstD + 0xc) = Resource_Load(valA3, &v_100, objC2, nullptr);
    DynObj_CreateMagicObject_14(dstD);
    DynObj_ParseConfigFile_14(dstD);
    int32_t* valA6 = DynObj_CreateMagicObject_13(*(dstD + 8), 0x564e414d, nullptr);
    int32_t* result_3 = *valA6;
    void* v_104 = &valA6[result_3 + 1];
    int32_t* result = DynObj_CreateMagicObject_13(*(dstD + 8), 0x494e5354, nullptr);
    int32_t* result_2 = result;

    if (result_3 > 0)
    {
        int32_t* result_1 = result_3;

        while (true)
        {
            int32_t valA7 = *result_2;
            int32_t* v_12c_1;
            int32_t v_128_3;

            if (valA7 < 0x2000)
            {
                v_128_3 = valA7;
                v_12c_1 = dstD + 0x10;
            }
            else
            {
                v_128_3 = valA7 - 0x2000;
                v_12c_1 = valA + 0x10;
            }

            int32_t* valA11 = DynObj_LookupHashItem_14(v_12c_1, v_128_3);
            int32_t ctxB1 = result_2[1];
            result_2 = &result_2[2];
            int32_t* valA12 = Mem_Alloc((ctxB1 << 3) + 0x1c, 4);
            valA12[5] = &valA12[ctxB1 + 7];
            valA12[4] = &valA12[7];
            valA12[6] = ctxB1;
            valA12[1] = 0;
            *valA12 = 0;
            Camera_SetFieldOfView_33(a1 + 0x28, valA12);
            valA12[3] = valA11;
            void* dstD3 = v_104;
            int32_t i = 0xffffffff;
            valA12[2] = v_104;

            while (i)
            {
                bool cond_1_1 = 0 != *dstD3;
                dstD3 += 1;
                i -= 1;

                if (!cond_1_1)
                    break;
            }

            v_104 = v_104 + ~i - 1 + 1;
            void* valA17 = DynObj_CreateMagicObject_13(*(a1 + 8), 0x47545420, nullptr) + 4;
            int32_t v_110_1 = 0;

            if (ctxB1 > 0)
            {
                bool cond_3_1;

                do
                {
                    int32_t dstD4 = *result_2;
                    int32_t objC9 = *(valA17 + (dstD4 << 3));
                    int32_t flagP2;

                    if (objC9 < 0x2000)
                    {
                        int32_t tmpD10 = *(a1 + 0x34);

                        flagP2 = !tmpD10 ? 0 : tmpD10 + objC9 * 0x24;
                    }
                    else
                    {
                        int32_t tmpD8 = *(valA + 0x34);

                        flagP2 = !tmpD8 ? 0 : tmpD8 + ((objC9 * 9 - 0x12000) << 2);
                    }

                    int32_t objC12 = *(valA17 + (dstD4 << 3) + 4);
                    int32_t objC14;

                    if (objC12 == 0xffffffff)
                    {
                        int32_t tmpD12 = *(a1 + 0x38);

                        objC14 = !tmpD12 ? 0 : tmpD12 + objC12 * 0xc;
                    }
                    else if (objC12 < 0x2000)
                    {
                        int32_t tmpD16 = *(a1 + 0x3c);

                        objC14 = !tmpD16 ? 0 : tmpD16 + objC12 * 0xc;
                    }
                    else
                    {
                        int32_t tmpD14 = *(valA + 0x38);

                        objC14 = !tmpD14 ? 0 : tmpD14 + ((objC12 * 3 - 0x6000) << 2);
                    }

                    *(valA12[4] + (v_110_1 << 2)) = flagP2;
                    result_2 = &result_2[1];
                    *(valA12[5] + (v_110_1 << 2)) = objC14;
                    cond_3_1 = v_110_1 + 1 < ctxB1;
                    v_110_1 += 1;
                } while (cond_3_1);
            }

            result = result_1 - 1;
            bool cond_0_1 = result_1 != 1;
            result_1 = result;

            if (!cond_0_1)
                break;

            dstD = a1;
        }
    }

    return result;
}
