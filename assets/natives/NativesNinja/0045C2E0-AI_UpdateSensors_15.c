#include "0045C2E0-AI_UpdateSensors_15.h"
/* 0x0045c2e0 AI_UpdateSensors_15 full linked: callers=0 callees=3 */
void* sub_45c2e0(void* a1, void* a2)

{
    *(a2 + 0x33d) = 0;
    *(a2 + 0x696) = 1;
    sub_4d61d0(a2 + 0x68, 0, *(sub_489e10(a2 + 0x254, *(a2 + 0x2e8)) + 4), 0, 0f);
    void* result = sub_48a330(a2);
    *(a1 + 0x14) = sub_4592f0;
    return result;
}
