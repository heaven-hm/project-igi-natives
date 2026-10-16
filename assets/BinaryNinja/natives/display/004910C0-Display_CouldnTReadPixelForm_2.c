#include "Display_CouldnTReadPixelForm_2.h"
int32_t Display_CouldnTReadPixelForm_2(void* a1)

{
    int32_t v_47c;
    __builtin_memset(&v_47c, 0, 0x7c);
    int32_t* valA = g_5ca100;
    int32_t v_434 = 0x20;
    int32_t valA1 = (*(*valA + 0x54))(valA, &v_434);
    void v_400;

    if (valA1)
    {
        Game_DataSymbolLoad(&v_400, "Couldn't read pixel format");
        int32_t v_4a8 = DDERR_GENERIC(valA1);
        void* v_4ac = &v_400;
        Error_Show("%s\n\nDirectX error message: %s");

        while (true)
            /* nop */

        return;
    }

    v_47c = 0x7c;
    int32_t v_478 = 0x80f;
    int32_t v_414 = 0x1800;
    void* valA3 = *(a1 + 0x154);
    int32_t v_470 = *(valA3 + 4);
    int32_t objC1 = *(valA3 + 8);

    if (objC1 < 0)
        objC1 = -(objC1);

    int32_t v_474 = objC1;
    int32_t v_458 = *(a1 + 0x164);
    int32_t v_428;
    uint32_t v_46c = (*(valA3 + 4) * v_428) >> 3;
    int32_t* valA7 = g_5ca10c;
    int32_t* v_490;
    int32_t valA8 = (*(*valA7 + 0x18))(valA7, &v_47c, &v_490, 0);

    if (!valA8)
    {
        void* valA10 = *(a1 + 0x154);
        int32_t v_48c = 0;
        int32_t v_488 = 0;
        int32_t v_484 = *(valA10 + 4);
        int32_t valA11 = *(valA10 + 8);

        if (valA11 < 0)
            valA11 = -(valA11);

        int32_t v_480 = valA11;
        int32_t* valA12 = g_5ca100;
        (*(*valA12 + 0x14))(valA12, 0, v_490, &v_48c, 0x8000200, 0);
        int32_t* valA13 = v_490;
        return (*(*valA13 + 8))(valA13);
    }

    Game_DataSymbolLoad(&v_400, "Couldn't create texture surface");
    int32_t v_4a8_2 = DDERR_GENERIC(valA8);
    void* v_4ac_1 = &v_400;
    Error_Show("%s\n\nDirectX error message: %s");

    while (true)
        /* nop */
}
