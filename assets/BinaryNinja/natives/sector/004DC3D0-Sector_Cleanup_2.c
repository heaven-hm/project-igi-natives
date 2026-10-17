// Original IGI.EXE function: Sector_Cleanup_2 (VA 0x004DC3D0; static CFG gate PASS, CFG score 1.000).
#include "Sector_Cleanup_2.h"
int32_t* Sector_Cleanup_2(int32_t* a1, int32_t* a2)

{
    int32_t v_c = 0;
    int32_t* result_1 = nullptr;
    int32_t v_4 = *a2;
    int32_t* i_2 = a1;
    uint32_t valA2 = DynObj_FindSymbol_16();
    int32_t valA3 = 0;
    valA3 = i_2[7];
    (*(((valA2 * 0x180 + valA3) << 2) + &g_a96ae0))(i_2, &v_4);

    if (i_2[0x52])
    {
        int32_t* i = i_2;

        if (i_2)
        {
            do
            {
                void* valA6 = i[0x1b];

                if (valA6)
                {
                    result_1 += *(valA6 + 0x3c);
                    int32_t* objC1 = *(i[0x3a] + 8);
                    int32_t valA8 = *objC1;
                    int32_t valA9 = -(valA8);
                    Render_BindTexture_13(&result_1, (valA9 - valA9) & objC1);
                }

                if (i != i_2)
                {
                    i = *i;

                    if (!i)
                        break;

                    if (!*i)
                        break;
                }
                else
                {
                    void* srcS1 = i[0x52];

                    if (!srcS1)
                        break;

                    i = *(srcS1 + 8);

                    if (!*i)
                        break;
                }
            } while (i);
        }
    }

    int32_t* objC2 = i_2[2];
    int32_t valA12 = *objC2;
    int32_t valA13 = -(valA12);
    Render_ClipMesh_13(&result_1, (valA13 - valA13) & objC2);
    int32_t* result = result_1;

    if (result)
    {
        int32_t** valA17 = Mem_Alloc(result * 0x24 + 0x18, 4);
        *valA17 = result_1;
        valA17[1] = i_2[0x1b];

        if (i_2[0x52])
        {
            int32_t* i_1 = i_2;

            if (i_2)
            {
                do
                {
                    void* tmpD5 = i_1[0x1b];

                    if (tmpD5)
                    {
                        i_1[0x37] = &valA17[v_c * 9 + 6];
                        int32_t j = 0;

                        if (*(tmpD5 + 0x3c) > 0)
                        {
                            int32_t objC5 = v_c;
                            void* ctxB = tmpD5;

                            do
                            {
                                ctxB += 4;
                                valA17[objC5 * 9 + 6] = 0;
                                valA17[v_c * 9 + 8] = i_1;
                                valA17[v_c * 9 + 9] = &i_1[0x1c];
                                valA17[v_c * 9 + 0xa] = &i_1[8];
                                valA17[v_c * 9 + 0xb] = i_1[0x36];
                                valA17[v_c * 9 + 0xc] = j;
                                valA17[v_c * 9 + 0xd] = *(tmpD5 + 0x3c);
                                valA17[v_c * 9 + 7] = *(ctxB - 4);
                                valA17[v_c * 9 + 0xe] = 0;
                                objC5 = v_c + 1;
                                j += 1;
                                v_c = objC5;
                            } while (j < *(tmpD5 + 0x3c));

                            i_2 = a1;
                        }

                        int32_t* objC24 = *(i_1[0x3a] + 8);
                        int32_t valA22 = *objC24;
                        int32_t valA23 = -(valA22);
                        int32_t objC25 = 0;
                        objC25 = i_1 == i_2;
                        Render_DrawRigidMesh_14(&v_c, valA17, (valA23 - valA23) & objC24, objC25);
                    }

                    if (i_1 != i_2)
                    {
                        i_1 = *i_1;

                        if (!i_1)
                            break;

                        if (!*i_1)
                            break;
                    }
                    else
                    {
                        void* dstD3 = i_1[0x52];

                        if (!dstD3)
                            break;

                        i_1 = *(dstD3 + 8);

                        if (!*i_1)
                            break;
                    }
                } while (i_1);
            }
        }

        int32_t* objC26 = i_2[2];
        int32_t valA26 = *objC26;
        int32_t valA27 = -(valA26);
        Render_DrawBoneMesh_14(&v_c, valA17, (valA27 - valA27) & objC26);
        Render_SkinBones_14(i_2, &valA17[3], &valA17[2]);
        result = a2;
        *result = valA17;
    }

    return result;
}
