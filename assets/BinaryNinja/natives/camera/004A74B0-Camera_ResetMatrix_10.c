#include "Camera_ResetMatrix_10.h"
char* Camera_ResetMatrix_10(double* a1, char* a2, int32_t a3, int32_t a4)

{
    int32_t objC;
    int32_t v_14 = objC;
    int32_t v_18 = objC;
    v_18 = *a1;
    Camera_SetFieldOfView_26();
    g_9361c0 = &g_936238;
    g_9361c8 = g_93623c - 1;
    void* objC3 = nullptr;
    objC3 = g_936238 == 0x2d;
    char* srcS = objC3 + a2;
    Camera_UpdateTransform_26(srcS, a3, &g_936238);
    void* valA = g_9361c0;
    bool objC7 = g_9361c8 < *(valA + 4) - 1;
    g_9361cc = objC7;
    int32_t valA2 = *(valA + 4) - 1;
    g_9361c8 = valA2;

    if (valA2 < 0xfffffffc || valA2 >= a3)
        return Camera_UpdateTransform_11(a1, a2, a3, a4);

    if (objC7)
    {
        char i;

        do
        {
            i = *srcS;
            srcS = &srcS[1];
        } while (i);

        srcS[0xfffffffe] &= i;
    }

    return Camera_SetFieldOfView_11(a1, a2, a3);
}
