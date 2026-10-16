#include "gi_platform.h"
#include "004DCBA0-Render_TransformVertices_14.h"
void* Render_TransformVertices_14(int32_t* a1, void* a2)

{
    void* result = a2;
    int32_t* i = *(result + 8);

    if (*i && i)
    {
        do
        {
            int32_t tmpD2 = a1[2];
            void* objC2 = *(*(*i[0x1b] + 0xc) + 0xc);
            int32_t* valA4 = (*(int32_t*)(uintptr_t)(a1[1] + (tmpD2 << 2))) * a1[4] + *a1;
            (*(int32_t*)(uintptr_t)(a1[5] + valA4)) = tmpD2;
            a1[2] += 1;
            *valA4 = *(objC2 + 0x50);
            valA4[1] = *(objC2 + 0x54);
            valA4[2] = *(objC2 + 0x58);
            valA4[3] = *(objC2 + 0x5c);
            result = Render_TransformVertices_14(a1, i);
            i = *i;

            if (!i)
                break;

            if (!*i)
                break;
        } while (i);
    }

    return result;
}
