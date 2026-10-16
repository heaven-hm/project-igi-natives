#include "Sys_PushStack_9.h"
int32_t Sys_PushStack_9(float a1) __location("fp0")

{
    long double fpu7 = a1;
    long double f0 = -1.0;
    fpu7 - f0;
    double v_8 = fpu7;
    bool c1 = /* bool c1 = unknown  {fst qword [esp], fp0} */;

    if (*(&((fpu7 < f0 ? 1 : 0) << 8 | (c1 ? 1 : 0) << 9
            | (FCMP_UO(fpu7, f0) ? 1 : 0) << 0xa | (fpu7 == f0 ? 1 : 0) << 0xe | 0x3800) + 1)
            & 1)
        return Terrain_CalculateNormals_3(-1.0);

    long double f1 = 1.0;
    fpu7 - f1;

    if (!(*(&((fpu7 < f1 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f1) ? 1 : 0) << 0xa
        | (fpu7 == f1 ? 1 : 0) << 0xe) + 1) & 0x41))
    {
        v_8 = 0;
        *(&v_8 + 4) = 0x3ff00000;
    }

    return Terrain_CalculateNormals_3(v_8);
}
