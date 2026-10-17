// Original IGI.EXE function: Display_CloseDevice_10 (VA 0x00495DF0; static CFG gate PASS, CFG score 1.000).
#include "Display_CloseDevice_10.h"
int32_t __fastcall Display_CloseDevice_10(int32_t a1)

{
    int32_t v_4 = a1;
    int32_t result;
    result = g_5ca1b4;

    if (result)
    {
        result = g_5ca194;

        if (result)
        {
            int32_t* valA = g_5ca190;
            (*(*valA + 0x10))(valA, &v_4, 0);
            int32_t objC1 = g_5ca1a4;
            result = g_5ca198;

            if (v_4 >= objC1)
            {
                if (!result)
                {
                label_495e3a:

                    if (Display_CreateSurface_9(g_5ca190, result, objC1) && !g_5ca1b0)
                        Display_OpenDevice_10();

                    result = g_5ca198 ^ g_5ca1a4;
                    g_5ca198 = result;
                }
            }
            else if (result)
                goto label_495e3a;
        }
    }

    return result;
}
