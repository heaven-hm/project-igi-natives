// Original IGI.EXE function: Sys_UnexpectedEndOfFile (VA 0x004BF1F0; static CFG gate PASS, CFG score 1.000).
#include "Sys_UnexpectedEndOfFile.h"
int32_t Sys_UnexpectedEndOfFile(int32_t* a1, void** a2)

{
    *a2 = 0;
    int32_t* valA = Mem_Alloc(0x18, 4);
    int32_t* ctxB = a1;
    valA[2] = 1;
    valA[1] = 0;
    *valA = 0;
    valA[3] = &valA[4];
    valA[5] = &valA[3];
    valA[4] = 0;

    if (Sys_While(ctxB) != 1)
        a1 = 1;
    else
    {
        if (!Sys_CloseFileStream_31(ctxB, &ctxB[2]))
        {
            Sys_FreeMemory_22("Unexpected end of file.");
            Sys_UnknownBlockType(valA);
            return 0;
        }

        a1 = nullptr;
    }

    while (true)
    {
        int32_t valA5 = Sys_While(ctxB);
        char* v_4;

        if (!valA5)
        {
            if (Sys_ResolveSymbol_24(ctxB, &v_4, 0, 0))
            {
                int32_t* valA9 = Mem_Alloc(0x10, 4);
                valA9[2] = 7;
                valA9[1] = 0;
                *valA9 = 0;
                valA9[3] = v_4;
                Camera_SetFieldOfView_33(&valA[3], valA9);
            label_4bf2eb:

                if (a1)
                {
                    *a2 = valA;
                    return 1;
                }

                if (Sys_CloseFileStream_31(ctxB, &ctxB[2]))
                    continue;

                Sys_FreeMemory_22("Unexpected end of file.");
            }
            else if (g_a965a8)
                Sys_FreeMemory_22("Script error: Aborting.\n");
        }
        else
        {
            if (valA5 == 2)
                break;

            void** v_8;

            if (Sys_SyntaxErrorInLineD(ctxB, &v_8))
            {
                Camera_SetFieldOfView_33(&valA[3], v_8);
                goto label_4bf2eb;
            }
        }
        Sys_UnknownBlockType(valA);
        return 0;
    }

    if (!a1)
    {
        *a2 = valA;
        return 1;
    }

    int32_t v_20_6 = Sys_AllocateMemory_31(ctxB);
    Sys_FreeMemory_22("Unexpected '}' in line %d");
    Sys_UnknownBlockType(valA);
    return 0;
}
