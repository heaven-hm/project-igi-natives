// Original IGI.EXE function: CutScene_TaskUpdate (VA 0x004F51D0; static CFG gate PASS, CFG score 1.000).
#include "CutScene_TaskUpdate.h"
int32_t* CutScene_TaskUpdate(int80_t a1 @ fp0, void* a2)

// Sig: int CutScene_TaskUpdate(void* cutsceneTask)
// Note: Per-frame UPDATE of the running CutScene task. Alternative
// cutscene-kill point: force an immediate completion return here and any
// created cutscene ends on frame one. Verified: referenced as update cb inside
// CutScene_TaskCreate 0x4F4B00.
{
    int32_t* i = *(a2 + 8);

    if (*i && i)
    {
        int32_t tmpD = g_afa7e0;

        do
        {
            int32_t* dstD1 = *i;
            void* valA4;

            if (!dstD1)
                valA4 = nullptr;
            else
            {
                int32_t valA1 = *dstD1;
                int32_t valA2 = -(valA1);
                valA4 = (valA2 - valA2) & dstD1;
            }

            *((tmpD << 2) + &g_afa6e0) = valA4;
            int32_t tmpD1 = tmpD + 1;
            int32_t valA5 = 0;
            g_afa7e0 = tmpD1;
            valA5 = i[7];
            int32_t valA6 = *((valA5 << 2) + &g_a970e0);

            if (valA6)
            {
                valA6(i);
                tmpD1 = g_afa7e0;
            }

            i = *((tmpD1 << 2) + &g_afa6dc);
            tmpD = tmpD1 - 1;
            g_afa7e0 = tmpD;
        } while (i);
    }

    if (Script_FormatString_6(a2 + 0x7c))
    {
        Script_SpawnNewTask_7(a2 + 0x7c, a2);
        *(a2 + 0x60) = a1;
    }

    if (Script_FormatString_6(a2 + 0xcc))
    {
        Script_SpawnNewTask_7(a2 + 0xcc, a2);
🚫🚫🚫        char v_8_2 = /* char v_8_2 = (unimplemented  {fistp qword [esp+0x14], fp0}).b */;
        /* unimplemented  {fistp qword [esp+0x14], fp0} */

        if (v_8_2)
        {
            *(a2 + 0x64) = 0;
            *(a2 + 0x61) = 0;
        }
    }

    if (!*(a2 + 0x26d))
        goto label_4f52a8;

    int32_t* valA12;

    if (*(a2 + 0x60))
    {
    label_4f52ae:
        *(a2 + 0x26c) = 0;
        Script_ParseEnumInt32_18(a2);
        valA12 = Script_FormatString_6(a2 + 0x11c);

        if (!valA12)
            *(a2 + 0x64) += 1;
        else
        {
            Script_SpawnNewTask_7(a2 + 0x11c, a2);
🚫🚫            /* unimplemented  {fimul fp0, dword [&g_a76c54]} */
            void* valA13 = *(a2 + 0x64);
🚫🚫🚫            int32_t v_8_3 = /* int32_t v_8_3 =
                (unimplemented  {fistp qword [esp+0xc], fp0}).d */;
            /* unimplemented  {fistp qword [esp+0xc], fp0} */
            valA12 = valA13 + v_8_3;
            *(a2 + 0x64) = valA12;

            if (valA13 + v_8_3 < 0)
                *(a2 + 0x64) = 0;
        }
    }
    else
    {
        *(a2 + 0x270) = SoundSys_SetFrequency_9();
    label_4f52a8:

        if (*(a2 + 0x60))
            goto label_4f52ae;

        valA12 = SoundSys_SetFrequency_9();

        if (*(a2 + 0x270) != valA12)
        {
            int32_t* valA14 = *(a2 + 0x260);

            if (valA14)
            {
                QTask_FindType(valA14);
                *(a2 + 0x260) = 0;
            }

            int32_t* valA15 = *(a2 + 0x25c);

            if (valA15)
            {
                QTask_FindType(valA15);
                *(a2 + 0x25c) = 0;
            }

            int32_t* valA16 = *(a2 + 0x264);

            if (valA16)
            {
                QTask_FindType(valA16);
                *(a2 + 0x264) = 0;
            }

            valA12 = *(a2 + 0x268);

            if (valA12)
            {
                valA12 = QTask_FindType(valA12);
                *(a2 + 0x268) = 0;
            }
        }
    }

    if (*(a2 + 0x26d))
    {
    label_4f539d:

        if (*(a2 + 0x60))
        {
            *(a2 + 0x26d) = *(a2 + 0x60);
            return valA12;
        }

        int32_t* valA17 = Script_FormatString_6(a2 + 0x1bc);

        if (!valA17)
        {
            *(a2 + 0x26d) = *(a2 + 0x60);
            return valA17;
        }

        valA12 = Script_SpawnNewTask_7(a2 + 0x1bc, a2);
🚫🚫🚫        /* unimplemented  {fstp fp0, fp0} */
        /* unimplemented  {fstp fp0, fp0} */
    }
    else
    {
        if (*(a2 + 0x60))
        {
            valA12 = Script_FormatString_6(a2 + 0x16c);

            if (valA12)
            {
                valA12 = Script_SpawnNewTask_7(a2 + 0x16c, a2);
🚫🚫🚫                /* unimplemented  {fstp fp0, fp0} */
                /* unimplemented  {fstp fp0, fp0} */
            }
        }

        if (*(a2 + 0x26d))
            goto label_4f539d;
    }

    valA12 = *(a2 + 0x60);
    *(a2 + 0x26d) = valA12;
    return valA12;
}
