#include "004D0D30-Render_SkinBones_2.h"
/* 0x004d0d30 Render_SkinBones_2 full linked: callers=1 callees=4 */
void* sub_4d0d30(int32_t* a1)

{
    int32_t ebx = QHash_ValueGet();

    if (!ebx)
        QHash_ValueSet();

    int32_t* esi = a1;
    int32_t i_1 = 5;
    void* result;
    int32_t i;

    do
    {
        result = *esi;

        if (result)
        {
            result = sub_4b0d10(result);
            *esi = 0;
        }

        esi = &esi[1];
        i = i_1;
        i_1 -= 1;
    } while (i != 1);

    if (ebx)
        return result;

    /* tailcall */
    return sub_4b0d50();
}
