#include "00450520-HumanAI_EventQueued.h"
/* 0x00450520 HumanAI_EventQueued full linked: callers=1 callees=4 */
int32_t* sub_450520(void* a1, int32_t* a2)

{
    int32_t* result = *(a1 + 0x810);

    if (!*result || !result)
        return 0;

    sub_4af960(result);
    result[1] = 0;
    *result = 0;
    result[2] = *a2;
    result[3] = a2[1];
    int32_t esi = a2[4];

    if (esi)
        memcpy(&result[4], esi, 0x18);

    void* eax_1 = a2[6];

    if (!eax_1)
        result[0xb] = 0;
    else
        result[0xb] = QTask_LinkEventHandler_2(eax_1);

    void* ebp_1 = a2[5];

    if (!ebp_1)
        result[0xa] = 0;
    else
        result[0xa] = QTask_LinkEventHandler_2(ebp_1);

    *(a1 + 0x8e0) += 1;
    return result;
}
