#include "gi_platform.h"
#include "004F30A0-EditRigidObj_Cleanup.h"
int32_t EditRigidObj_Cleanup(float a1, void* a2)

{
    int32_t* dstD = a1;
    long double fpu7 = dstD[0x27];
    long double fpu6 = dstD[0x28];
    fpu6 - fpu7;
    long double x87_r7_1;

    if (!(*(&((fpu6 < fpu7 ? 1 : 0) << 8 | (FCMP_UO(fpu6, fpu7) ? 1 : 0) << 0xa
            | (fpu6 == fpu7 ? 1 : 0) << 0xe) + 1) & 1))
        x87_r7_1 = dstD[0x28];
    else
        x87_r7_1 = dstD[0x27];

    long double x87_r6_1 = dstD[0x26];
    x87_r6_1 - x87_r7_1;
    long double x87_r7_3;

    if (*(&((x87_r6_1 < x87_r7_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_1, x87_r7_1) ? 1 : 0) << 0xa
        | (x87_r6_1 == x87_r7_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
    {
        long double x87_r7_4 = dstD[0x27];
        long double x87_r6_2 = dstD[0x28];
        x87_r6_2 - x87_r7_4;

        if (!(*(&((x87_r6_2 < x87_r7_4 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_2, x87_r7_4) ? 1 : 0) << 0xa
                | (x87_r6_2 == x87_r7_4 ? 1 : 0) << 0xe) + 1) & 1))
            x87_r7_3 = dstD[0x28];
        else
            x87_r7_3 = dstD[0x27];
    }
    else
        x87_r7_3 = dstD[0x26];

    long double x87_r7_6 = Render_ComputeNormals(dstD[0x1b]) * x87_r7_3;
    DynObj_LinkDynamicCube_8((*(int32_t*)(uintptr_t)(a2 + 4)), dstD, &dstD[0x3c], x87_r7_6, 2);
    double* valA2 = DynObj_UpdateDynTree_4(dstD);
    Render_ComputeNormals_14((*(int32_t*)(uintptr_t)(a2 + 4)), dstD, valA2);
    int32_t* i = dstD[2];
    int32_t result;

    if (!*i || !i)
        result = g_afa7e0;
    else
    {
        result = g_afa7e0;

        do
        {
            int32_t* tmpD1 = *i;
            void* objC4;

            if (!tmpD1)
                objC4 = nullptr;
            else
            {
                int32_t objC1 = *tmpD1;
                int32_t objC2 = -(objC1);
                objC4 = (objC2 - objC2) & tmpD1;
            }

            *((result << 2) + &g_afa6e0) = objC4;
            g_afa7e0 = result + 1;
            uint32_t valA6 = DynObj_UpdateDynTree_12();
            int32_t tmpD2 = 0;
            tmpD2 = i[7];
            int32_t valA7 = *(((valA6 * 0x180 + tmpD2) << 2) + &g_a96ae0);

            if (valA7)
                valA7(i, a2);

            result = g_afa7e0 - 1;
            g_afa7e0 = result;
            i = *((result << 2) + &g_afa6e0);
        } while (i);
    }

    void* objC8 = dstD[0x3a];

    if (objC8)
    {
        int32_t* i_1 = *(objC8 + 8);

        if (*i_1 && i_1)
        {
            do
            {
                int32_t* tmpD3 = *i_1;
                void* objC12;

                if (!tmpD3)
                    objC12 = nullptr;
                else
                {
                    int32_t objC9 = *tmpD3;
                    int32_t objC10 = -(objC9);
                    objC12 = (objC10 - objC10) & tmpD3;
                }

                *((result << 2) + &g_afa6e0) = objC12;
                g_afa7e0 = result + 1;
                uint32_t valA11 = DynObj_UpdateDynTree_12();
                int32_t objC13 = 0;
                objC13 = i_1[7];
                int32_t valA15 = *(((valA11 * 0x180 + objC13) << 2) + &g_a96ae0);

                if (valA15)
                    valA15(i_1, a2);

                result = g_afa7e0 - 1;
                g_afa7e0 = result;
                i_1 = *((result << 2) + &g_afa6e0);
            } while (i_1);
        }
    }

    dstD[0x66] = 1;
    return result;
}
