// Original IGI.EXE function: Fence_Setup (VA 0x0043FC30; static CFG gate PASS, CFG score 0.963).
#include "Fence_Setup.h"
int32_t* Fence_Setup(void* a1)

{
    int64_t v_60;

    if (!Script_FormatString_6(a1 + 0x120))
        *(a1 + 0x11c) = 0;
    else
    {
        Script_SpawnNewTask_7(a1 + 0x120, a1);
        long double fpu0;
        v_60 = fpu0;
        *(a1 + 0x11c) = v_60;
    }

    int32_t* result = *(a1 + 0x170);

    if (!result)
    {
        result = *(a1 + 0x11c);

        if (result)
        {
            *(a1 + 0x170) = Env_TriggerAlarm_12(a1);
            void* v_54;
            WeaponType_RegisterType_2(&v_54, a1, 0);
            WeaponType_RegisterType_2(&v_60, a1, 1);
🚫🚫            /* unimplemented  {fld fp0, dword [esp+0x28]} */
🚫🚫            /* unimplemented  {fadd dword [esp+0x34]} */
🚫🚫            /* unimplemented  {fmul fp0, dword [&g_533504]} */
🚫🚫            /* unimplemented  {fld fp0, dword [valA]} */
🚫🚫            /* unimplemented  {fmul fp0, fp1} */
🚫🚫            /* unimplemented  {fld fp0, dword [flagP+0x78]} */
🚫🚫            /* unimplemented  {fmul fp0, qword [&g_533708]} */
            int32_t v_28_1 = 0;
            int32_t v_24_1 = 0x3ffc0000;
            int32_t v_20_1 = 0;
            int32_t v_1c_1 = 0x40000000;
🚫🚫🚫            /* unimplemented  {faddp fp1, fp0} */
            /* unimplemented  {faddp fp1, fp0} */
🚫🚫🚫            double v_18 = /* double v_18 = unimplemented  {fstp qword [esp+0x74], fp0} */;
            /* unimplemented  {fstp qword [esp+0x74], fp0} */
🚫🚫            /* unimplemented  {fld fp0, dword [flagP+0x7c]} */
🚫🚫            /* unimplemented  {fmul fp0, fp1} */
🚫🚫            /* unimplemented  {fld fp0, dword [flagP+0x84]} */
🚫🚫            /* unimplemented  {fmul fp0, qword [&g_533708]} */
🚫🚫🚫            /* unimplemented  {faddp fp1, fp0} */
            /* unimplemented  {faddp fp1, fp0} */
🚫🚫🚫            double v_10_1 = /* double v_10_1 = unimplemented  {fstp qword [esp+0x7c], fp0} */;
            /* unimplemented  {fstp qword [esp+0x7c], fp0} */
🚫🚫            /* unimplemented  {fld fp0, dword [flagP+0x88]} */
🚫🚫            /* unimplemented  {fmul fp0, fp1} */
🚫🚫            /* unimplemented  {fld fp0, dword [flagP+0x90]} */
🚫🚫            /* unimplemented  {fmul fp0, qword [&g_533708]} */
🚫🚫🚫            /* unimplemented  {faddp fp1, fp0} */
            /* unimplemented  {faddp fp1, fp0} */
🚫🚫🚫            double v_8_1 = /* double v_8_1 = unimplemented  {fstp qword [esp+0x84], fp0} */;
            /* unimplemented  {fstp qword [esp+0x84], fp0} */
            double v_48;
            memcpy(&v_48, &v_18, 0x18);
🚫🚫🚫            /* unimplemented  {fstp fp0, fp0} */
            /* unimplemented  {fstp fp0, fp0} */
🚫🚫            /* unimplemented  {fld fp0, qword [esp+0x74]} */
🚫🚫            /* unimplemented  {fadd qword [flagP+0x20]} */
🚫🚫🚫            v_48 = /* v_48 = unimplemented  {fstp qword [esp+0x44], fp0} */;
            /* unimplemented  {fstp qword [esp+0x44], fp0} */
🚫🚫            /* unimplemented  {fld fp0, qword [esp+0x4c]} */
🚫🚫            /* unimplemented  {fadd qword [flagP+0x28]} */
🚫🚫🚫            double v_40_1 = /* double v_40_1 = unimplemented  {fstp qword [esp+0x4c], fp0} */;
            /* unimplemented  {fstp qword [esp+0x4c], fp0} */
🚫🚫            /* unimplemented  {fld fp0, qword [esp+0x54]} */
🚫🚫            /* unimplemented  {fadd qword [flagP+0x30]} */
            int32_t valA5 = *(a1 + 0x170);
🚫🚫🚫            double v_38_1 = /* double v_38_1 = unimplemented  {fstp qword [esp+0x60], fp0} */;
            /* unimplemented  {fstp qword [esp+0x60], fp0} */
🚫🚫            /* unimplemented  {fld fp0, dword [esp+0x38]} */
🚫🚫            /* unimplemented  {fsub fp0, dword [esp+0x44]} */
🚫🚫            /* unimplemented  {fmul fp0, dword [&g_533840]} */
🚫🚫            /* unimplemented  {fadd qword [&g_533838]} */
🚫🚫🚫            double v_30 = /* double v_30 = unimplemented  {fstp qword [esp+0x6c], fp0} */;
            /* unimplemented  {fstp qword [esp+0x6c], fp0} */
            Env_UpdateCameraLens_12(valA5, &v_48, a1 + 0x70, &v_30, "elfence_loop");
            void* srcS1 = *(a1 + 0x170);
            uint32_t valA7 = Script_ParseEnumReal32_8();
            int32_t tmpD1 = 0;
            tmpD1 = *(srcS1 + 0x1c);
            result = *(((valA7 * 0x180 + tmpD1) << 2) + &g_a96ae0);

            if (result)
                result = result(srcS1, 0);
        }
    }
    else if (!*(a1 + 0x11c))
    {
        result = QTask_FindType(result);
        *(a1 + 0x170) = 0;
    }

    int32_t* i = *(a1 + 8);

    if (*i && i)
    {
        int32_t tmpD2 = g_afa7e0;

        do
        {
            int32_t* srcS2 = *i;
            void* valA11;

            if (!srcS2)
                valA11 = nullptr;
            else
            {
                int32_t valA8 = *srcS2;
                int32_t valA9 = -(valA8);
                valA11 = (valA9 - valA9) & srcS2;
            }

            *((tmpD2 << 2) + &g_afa6e0) = valA11;
            int32_t tmpD3 = tmpD2 + 1;
            int32_t valA12 = 0;
            g_afa7e0 = tmpD3;
            valA12 = i[7];
            result = *((valA12 << 2) + &g_a970e0);

            if (result)
            {
                result = result(i);
                tmpD3 = g_afa7e0;
            }

            i = *((tmpD3 << 2) + &g_afa6dc);
            tmpD2 = tmpD3 - 1;
            g_afa7e0 = tmpD2;
        } while (i);
    }

    return result;
}
