// IGI native provenance: FX_UnableToRemoveWinpro - 0x0048F4F0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0048F4F0-FX_UnableToRemoveWinpro.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "FX_UnableToRemoveWinpro.h"
int32_t* FX_UnableToRemoveWinpro(int32_t context)

{
    int32_t* i_1 = g_5c8df0;

    for (int32_t* i = *i_1; i; i = *i)
    {
        if (i_1[2] == context)
        {
            int32_t* result = Camera_ApplyHandiCam_33(i_1);
            i_1[2] = 0;
            return result;
        }

        i_1 = i;
    }

    Error_Show("Unable to remove WinProc callback");

    while (true)
        /* nop */
}
