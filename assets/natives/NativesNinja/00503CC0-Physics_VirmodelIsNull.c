#include "00503CC0-Physics_VirmodelIsNull.h"
/* 0x00503cc0 Physics_VirmodelIsNull full linked: callers=2 callees=6 */
struct status_msg* sub_503cc0(void* a1, int32_t a2, int32_t a3, int32_t a4, int32_t* a5)

{
    struct status_msg* result = QTask_HandleInput(a1, a2, 0);
    void* eax = sub_4cec10(a1 + 0x24);

    if (eax)
    {
        sub_4c48d0(result, eax);
        memcpy(&result->head[8], a3, 0x18);
        memcpy(&result->head[0x1c], a4, 0x28);
        int32_t ecx_1 = *a5;
        result->sprite[0x3c] = ecx_1;
        result->sprite[0x3d] = *(&ecx_1 + 1);
        result->sprite[0x3e] = *(&ecx_1 + 2);
        result->sprite[0x3f] = *(&ecx_1 + 3);
        int32_t ecx_2 = a5[1];
        result->sprite[0x40] = ecx_2;
        result->sprite[0x41] = *(&ecx_2 + 1);
        result->sprite[0x42] = *(&ecx_2 + 2);
        result->sprite[0x43] = *(&ecx_2 + 3);
        int32_t eax_2 = a5[2];
        result->sprite[0x44] = eax_2;
        result->sprite[0x45] = *(&eax_2 + 1);
        result->sprite[0x46] = *(&eax_2 + 2);
        result->sprite[0x47] = *(&eax_2 + 3);
        int32_t ecx_3 = *(a1 + 0x20);
        result->sprite[0x48] = ecx_3;
        result->sprite[0x49] = *(&ecx_3 + 1);
        result->sprite[0x4a] = *(&ecx_3 + 2);
        result->sprite[0x4b] = *(&ecx_3 + 3);
        return result;
    }

    Error_Show("VirModel is null");

    while (true)
        /* nop */
}
