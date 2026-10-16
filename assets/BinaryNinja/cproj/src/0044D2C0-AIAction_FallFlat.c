#include "gi_platform.h"
#include "0044D2C0-AIAction_FallFlat.h"
int32_t AIAction_FallFlat(long double a1 , int32_t a2, float a3 )

// Sig: void AIAction_FallFlat(int param1, int param2)
// Note: Knocks the AI flat on the ground (ragdoll-ish fall, e.g. after
// explosion/surrender). Params: two ints observed in retail calls (pass 0,0
// unless mapping specific values). Use for scripted knockdowns.
{
    void* valA16 = g_5bda58;
    void* valA = Script_ExecuteLevelScript_23(*(valA16 + 0x3b6c), *(valA16 + 0x3e2c));
    int32_t valA1 = Physics_CalculateSplineLength_9();
    void* v_30 = valA;
    int32_t v_18;

    if (Physics_InterpolateWaypoint_9(v_30, valA1))
    {
        v_18 = 2;
        int32_t v_10 = 0;
        int32_t v_c = 0x40000000;
        char* v_8 = &g_567c74;
        memcpy(a2, &v_18, 0x18);
        return a2;
    }

    int32_t* valA5 = *(Env_CheckAmbientArea_12() + 0x2c);

    if (valA5)
    {
        int32_t srcS1 = *valA5;

        if (srcS1)
        {
            double* valA7 = DynObj_UpdateDynTree_4(*(g_5bda58 + 0x14));
            long double fp0_1 = Sys_DispatchOpcode_11(DynObj_UpdateDynTree_4(srcS1), valA7);
            long double f0_1 = *(g_5bda58 + 0x3db8);
            fp0_1 - f0_1;

            if (*(&((fp0_1 < f0_1 ? 1 : 0) << 8 | (FCMP_UO(fp0_1, f0_1) ? 1 : 0) << 0xa
                | (fp0_1 == f0_1 ? 1 : 0) << 0xe) + 1) & 1)
            {
                v_18 = 2;
                int32_t v_10_1 = 0;
                int32_t v_c_1 = 0x40000000;
                char* v_8_1 = &g_567c74;
                memcpy(a2, &v_18, 0x18);
                return a2;
            }
        }
    }

    int32_t* valA13 = AI_CheckVisibility_2(g_5bda58);
    Profile_ValueSet(a3, 0.0f);
    valA13[2] = a1;
    v_30 = 1;
    AI_SelectTarget(sub_48eb40, valA13, Script_GetArg(a3, v_30));
    v_18 = 2;
    int32_t v_10_2 = 0;
    int32_t v_c_2 = 0x40000000;
    char* v_8_2 = &g_567c74;
    memcpy(a2, &v_18, 0x18);
    return a2;
}
