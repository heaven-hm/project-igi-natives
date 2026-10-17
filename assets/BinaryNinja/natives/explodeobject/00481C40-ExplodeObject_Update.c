// Original IGI.EXE function: ExplodeObject_Update (VA 0x00481C40; static CFG gate PASS, CFG score 0.907).
#include "ExplodeObject_Update.h"
float* ExplodeObject_Update(void* a1)

{
    void* valA = DynObj_Missing(a1 + 0x170);
    void* valA2 = DynObj_Missing(a1 + 0x180);
    void v_100;
    void v_80;

    if (!valA)
    {
        if (*(a1 + 0x170) && *(a1 + 0x171) != 0x2a)
        {
            char* v_11c_1 = a1 + 0x170;
            Game_DataSymbolLoad(&v_80, "Model "%s" not available");
            char* dstD1 = a1 + 0x170;
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
            int32_t srcS2;
            int32_t dstD3;
            dstD3 = memcpy(&v_100, dstD1 - objC1, objC1 & 0xfffffffc);
            memcpy(dstD3, srcS2, objC1 & 3);
            void* v_128_1 = &v_100;
            Game_DataSymbolLoad(a1 + 0x170, "** %s **");
        }

        if (!valA2)
            goto label_481ce9;
    }
    else if (!valA2)
    {
    label_481ce9:
        void* dstD4 = a1 + 0x180;

        if (*(a1 + 0x180) && *(a1 + 0x181) != 0x2a)
        {
            void* v_11c_2 = dstD4;
            Game_DataSymbolLoad(&v_80, "Model "%s" not available");
            int32_t i_1 = 0xffffffff;

            while (i_1)
            {
                bool cond_2_1 = 0 != *dstD4;
                dstD4 += 1;
                i_1 -= 1;

                if (!cond_2_1)
                    break;
            }

            int32_t objC5 = ~i_1;
            int32_t srcS4;
            int32_t dstD6;
            dstD6 = memcpy(&v_100, dstD4 - objC5, objC5 & 0xfffffffc);
            memcpy(dstD6, srcS4, objC5 & 3);
            void* v_128_2 = &v_100;
            Game_DataSymbolLoad(a1 + 0x180, "** %s **");
        }
    }
    DynObj_CreateMagicObject_5(a1, valA);
    long double fpu7 = *(a1 + 0x9c);
    long double fpu6 = *(a1 + 0xa0);
    fpu6 - fpu7;
    long double x87_r7_1;

    if (!(*(&((fpu6 < fpu7 ? 1 : 0) << 8 | (FCMP_UO(fpu6, fpu7) ? 1 : 0) << 0xa
            | (fpu6 == fpu7 ? 1 : 0) << 0xe) + 1) & 1))
        x87_r7_1 = *(a1 + 0xa0);
    else
        x87_r7_1 = *(a1 + 0x9c);

    long double x87_r6_1 = *(a1 + 0x98);
    x87_r6_1 - x87_r7_1;
    long double x87_r7_3;

    if (*(&((x87_r6_1 < x87_r7_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_1, x87_r7_1) ? 1 : 0) << 0xa
        | (x87_r6_1 == x87_r7_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
    {
        long double x87_r7_4 = *(a1 + 0x9c);
        long double x87_r6_2 = *(a1 + 0xa0);
        x87_r6_2 - x87_r7_4;

        if (!(*(&((x87_r6_2 < x87_r7_4 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_2, x87_r7_4) ? 1 : 0) << 0xa
                | (x87_r6_2 == x87_r7_4 ? 1 : 0) << 0xe) + 1) & 1))
            x87_r7_3 = *(a1 + 0xa0);
        else
            x87_r7_3 = *(a1 + 0x9c);
    }
    else
        x87_r7_3 = *(a1 + 0x98);

    long double x87_r7_6 = Render_ComputeNormals(*(a1 + 0x6c)) * x87_r7_3;
    WorldObject_CommitTransform(*(a1 + 0x68), a1, a1 + 0xf0, x87_r7_6);
    double* valA10 = DynObj_UpdateDynTree_4(a1);
    Render_BindTexture_14(*(a1 + 0x68), a1, valA10);
    int32_t tmpD2 = *(a1 + 0x204);
    memcpy(a1 + 0x70, a1 + 0x108, 0x28);
    int32_t objC10 = *(a1 + 0x1f0);
    *(a1 + 0x1e4) = 0;
    *(a1 + 0x190) = 0;
    *(a1 + 0x1e8) = 0;
    *(a1 + 0x1f4) = 0xffffffff;
    *(a1 + 0x1ec) = objC10;
    *(a1 + 0x200) = tmpD2;
    Script_Isexists(a1 + 0x194, a1);
    return Env_CheckAmbientArea_7(a1);
}
