#include "gi_platform.h"
#include "004DBF30-Render_BindTexture_13.h"
void Render_BindTexture_13(int32_t* a1, void** a2)

{
    void** i = a2;

    while (i)
    {
        int32_t valA1 = MagicObj_GetTypeId();
        int16_t v_c_1 = valA1;
        valA1 = i[7];

        if (TaskType_IsDerivedFrom(valA1, v_c_1))
        {
            int32_t* valA2 = i[0x1b];

            if (valA2 && *(*(*(*valA2 + 0xc) + 0xc) + 0x20) == 3)
                *a1 += valA2[0xf];

            int32_t* objC3 = i[2];
            int32_t valA3 = *objC3;
            int32_t valA4 = -(valA3);
            Render_BindTexture_13(a1, (valA4 - valA4) & objC3);
        }

        i = *i;

        if (!i)
            break;

        if (!*i)
            break;
    }
}
