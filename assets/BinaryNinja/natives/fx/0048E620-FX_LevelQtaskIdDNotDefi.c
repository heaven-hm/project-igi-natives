#include "FX_LevelQtaskIdDNotDefi.h"
int32_t* FX_LevelQtaskIdDNotDefi(int32_t* a1, void* const a2)

{
    int32_t objC;
    int32_t v_4_1 = objC;
    void* const valA = a2;
    void* srcS = *(valA + 0x28);
    int32_t* dstD = a1;
    *(valA + 0x18) = FX_DebrisSpawn_20;
    *(valA + 0x20) = FX_TrailUpdate_20;
    char ctxB = 0;
    int32_t v_4 = 0;

    if (*(srcS + 8) == dstD[0xeb0])
    {
        int32_t valA2 = Script_ExecuteLevelScript_4(dstD[0xeb1]);
        v_4 = valA2;

        if (!valA2)
        {
            int32_t v_18_2 = dstD[0xeb1];
            int32_t valA3 = Warning_Show("Level QTask ID #%d not defined (AI Activate)");
            *(srcS + 0xc) = 0xffffffff;
            return valA3;
        }

        ctxB = 1;
    }

    void* valA5 = Script_ExecuteLevelScript_4(*(srcS + 8));

    if (!valA5)
    {
        int32_t v_18_4 = *(srcS + 8);
        int32_t valA6 = Warning_Show("Level QTask ID #%d not defined (AI Activate)");
        *(srcS + 0xc) = 0xffffffff;
        return valA6;
    }

    *(srcS + 0xc) = 0xffffffff;
    *(srcS + 0x10) = 0xffffffff;
    int32_t* valA7 = AI_CheckSector_4(valA5);

    if (!valA7)
    {
        if (ctxB)
            valA7 = AI_CheckSector_4(v_4);

        if (!ctxB || !valA7)
        {
            int32_t valA8 = DynObj_LookupHashItem_5();
            int16_t v_18_7 = valA8;
            valA8 = *(valA5 + 0x1c);
            valA7 = TaskType_IsDerivedFrom(valA8, v_18_7);

            if (valA7)
            {
                Physics_ApplyImpulse_8(&a1, dstD[0xedb], valA5 + 0x20);
                valA7 = a1;

                if (valA7)
                {
                    a2 = 0xffffffff;

                    if (FX_FireBallUpdate_20(dstD, valA7, 0xa, sub_48e7a0, &a2))
                    {
                        void* const objC7 = a2;
                        int32_t valA10 = *a1;

                        if (valA10 != objC7)
                        {
                            *(srcS + 0xc) = valA10;
                            *(srcS + 0x10) = a2;
                        }
                        else
                            *(srcS + 0xc) = objC7;
                    }

                    valA7 = AI_UpdatePatrol_5(valA5, 1);
                    dstD[0xeac] = valA7;

                    if (ctxB)
                    {
                        valA7 = AI_UpdatePatrol_5(v_4, 1);
                        dstD[0xead] = valA7;
                    }
                }
            }
        }
    }

    return valA7;
}
