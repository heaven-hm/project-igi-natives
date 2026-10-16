#include "gi_platform.h"
#include "004A5760-Camera_ApplyPostProcess_5.h"
int32_t Camera_ApplyPostProcess_5(long double a1 , long double a2 ) __location("fp0")

{
    double v_8 = a1;
    int16_t x87control;
    int16_t x87tag;
    return Camera_UpdateViewCone_5(*(&v_8 + 4), x87control, x87tag, a1, a2, v_8);
}
