#include "gi_platform.h"
#include "00488220-FX_SmokeEmit_10.h"
int32_t FX_SmokeEmit_10(void* a1)

{
    void* dstD = a1;
    void** flagP = nullptr;
    void** v_10 = nullptr;
    int32_t* srcS = (*(int32_t*)(uintptr_t)(dstD + 8));

    if (*srcS)
    {
        int32_t* v_18_1 = srcS;

        if (srcS)
        {
            while (true)
            {
                int32_t* v_14 = nullptr;
                uint32_t valA2 = Script_ParseEnumInt32_8();
                int32_t objC1 = 0;
                objC1 = srcS[7];
                int32_t valA6 = *(((valA2 * 0x180 + objC1) << 2) + &g_a96ae0);

                if (valA6)
                    valA6(srcS, &v_14);

                if (!v_14)
                {
    label_48836e: ;
                    int32_t* valA20 = *srcS;

                    if (!valA20 || !*valA20)
                    {
                        int32_t* srcS3 = srcS[5];
                        v_18_1 = srcS3;

                        if (srcS3[5] == dstD)
                            break;

                        v_10 = v_10[5];
                    }
                    else
                        v_18_1 = valA20;
                }
                else
                {
                    void** valA8 = FX_DebrisSpawn_10(flagP, srcS);

                    if (!flagP)
                        (*(int32_t*)(uintptr_t)(dstD + 0x7c)) = valA8;

                    valA8[9] = v_14;
                    valA8[0xa] = Mem_Alloc(*v_14 << 2, 4);
                    int32_t* valA11 = valA8[9];
                    int32_t i = 0;

                    if (*valA11 > 0)
                    {
                        int32_t v_c_1 = 0;

                        do
                        {
                            void** srcS2 = valA11[2] + v_c_1;
                            void* dstD2 = *srcS2 + v_18_1;
                            char valA13 = Script_SpawnNewTask_9();
                            int32_t v_8;
                            Script_ParseEnumString_8(dstD2, srcS2[1], valA13, &v_8);
                            int32_t valA14 = v_8;

                            if (valA14)
                            {
                                *(valA8[0xa] + (i << 2)) = Mem_Alloc(valA14, 4);
                                int32_t v_4 = *(valA8[0xa] + (i << 2));
                                char valA17 = Script_ParseEnumInt32_9();
                                Script_ParseEnumString_8(dstD2, srcS2[1], valA17, &v_4);
                            }

                            valA11 = valA8[9];
                            i += 1;
                            v_c_1 += 0x10;
                        } while (i < *valA11);

                        dstD = a1;
                        srcS = v_18_1;
                    }

                    int32_t* valA19 = srcS[2];

                    if (!*valA19 || !valA19)
                        goto label_48836e;

                    v_18_1 = valA19;
                    v_10 = valA8;
                }

                if (!v_18_1)
                    break;

                srcS = v_18_1;
                flagP = v_10;
            }
        }
    }

    int32_t* objC8 = (*(int32_t*)(uintptr_t)(dstD + 8));
    int32_t valA22 = *objC8;
    int32_t valA23 = -(valA22);
    return QTask_FindType((valA23 - valA23) & objC8);
}
