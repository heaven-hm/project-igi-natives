// Original IGI.EXE function: Fence_Setup (VA 0x0043FC30; static CFG gate PASS, CFG score 0.963).
#include "Fence_Setup.h"
int32_t* Fence_Setup(void* context)

{
    int64_t item_60;

    if (!Script_FormatString_6(context + 0x120))
        *(context + 0x11c) = 0;
    else
    {
        Script_SpawnNewTask_7(context + 0x120, context);
        long double fpu0;
        item_60 = fpu0;
        *(context + 0x11c) = item_60;
    }

    int32_t* result = *(context + 0x170);

    if (!result)
    {
        result = *(context + 0x11c);

        if (result)
        {
            *(context + 0x170) = Env_TriggerAlarm_12(context);
            void* item_54;
            WeaponType_RegisterType_2(&item_54, context, 0);
            WeaponType_RegisterType_2(&item_60, context, 1);
🚫🚫            /* unimplemented  {fld fp0, dword [stack_ptr+0x28]} */
🚫🚫            /* unimplemented  {fadd dword [stack_ptr+0x34]} */
🚫🚫            /* unimplemented  {fmul fp0, dword [&g_533504]} */
🚫🚫            /* unimplemented  {fld fp0, dword [data_val]} */
🚫🚫            /* unimplemented  {fmul fp0, fp1} */
🚫🚫            /* unimplemented  {fld fp0, dword [flagP+0x78]} */
🚫🚫            /* unimplemented  {fmul fp0, qword [&g_533708]} */
            int32_t item_28_1 = 0;
            int32_t item_24_1 = 0x3ffc0000;
            int32_t item_20_1 = 0;
            int32_t item_1c_1 = 0x40000000;
🚫🚫🚫            /* unimplemented  {faddp fp1, fp0} */
            /* unimplemented  {faddp fp1, fp0} */
🚫🚫🚫            double item_18 = /* double item_18 = unimplemented  {fstp qword [stack_ptr+0x74], fp0} */;
            /* unimplemented  {fstp qword [stack_ptr+0x74], fp0} */
🚫🚫            /* unimplemented  {fld fp0, dword [flagP+0x7c]} */
🚫🚫            /* unimplemented  {fmul fp0, fp1} */
🚫🚫            /* unimplemented  {fld fp0, dword [flagP+0x84]} */
🚫🚫            /* unimplemented  {fmul fp0, qword [&g_533708]} */
🚫🚫🚫            /* unimplemented  {faddp fp1, fp0} */
            /* unimplemented  {faddp fp1, fp0} */
🚫🚫🚫            double item_10_1 = /* double item_10_1 = unimplemented  {fstp qword [stack_ptr+0x7c], fp0} */;
            /* unimplemented  {fstp qword [stack_ptr+0x7c], fp0} */
🚫🚫            /* unimplemented  {fld fp0, dword [flagP+0x88]} */
🚫🚫            /* unimplemented  {fmul fp0, fp1} */
🚫🚫            /* unimplemented  {fld fp0, dword [flagP+0x90]} */
🚫🚫            /* unimplemented  {fmul fp0, qword [&g_533708]} */
🚫🚫🚫            /* unimplemented  {faddp fp1, fp0} */
            /* unimplemented  {faddp fp1, fp0} */
🚫🚫🚫            double item_8_1 = /* double item_8_1 = unimplemented  {fstp qword [stack_ptr+0x84], fp0} */;
            /* unimplemented  {fstp qword [stack_ptr+0x84], fp0} */
            double item_48;
            memcpy(&item_48, &item_18, 0x18);
🚫🚫🚫            /* unimplemented  {fstp fp0, fp0} */
            /* unimplemented  {fstp fp0, fp0} */
🚫🚫            /* unimplemented  {fld fp0, qword [stack_ptr+0x74]} */
🚫🚫            /* unimplemented  {fadd qword [flagP+0x20]} */
🚫🚫🚫            item_48 = /* item_48 = unimplemented  {fstp qword [stack_ptr+0x44], fp0} */;
            /* unimplemented  {fstp qword [stack_ptr+0x44], fp0} */
🚫🚫            /* unimplemented  {fld fp0, qword [stack_ptr+0x4c]} */
🚫🚫            /* unimplemented  {fadd qword [flagP+0x28]} */
🚫🚫🚫            double item_40_1 = /* double item_40_1 = unimplemented  {fstp qword [stack_ptr+0x4c], fp0} */;
            /* unimplemented  {fstp qword [stack_ptr+0x4c], fp0} */
🚫🚫            /* unimplemented  {fld fp0, qword [stack_ptr+0x54]} */
🚫🚫            /* unimplemented  {fadd qword [flagP+0x30]} */
            int32_t data_5 = *(context + 0x170);
🚫🚫🚫            double item_38_1 = /* double item_38_1 = unimplemented  {fstp qword [stack_ptr+0x60], fp0} */;
            /* unimplemented  {fstp qword [stack_ptr+0x60], fp0} */
🚫🚫            /* unimplemented  {fld fp0, dword [stack_ptr+0x38]} */
🚫🚫            /* unimplemented  {fsub fp0, dword [stack_ptr+0x44]} */
🚫🚫            /* unimplemented  {fmul fp0, dword [&g_533840]} */
🚫🚫            /* unimplemented  {fadd qword [&g_533838]} */
🚫🚫🚫            double item_30 = /* double item_30 = unimplemented  {fstp qword [stack_ptr+0x6c], fp0} */;
            /* unimplemented  {fstp qword [stack_ptr+0x6c], fp0} */
            Env_UpdateCameraLens_12(data_5, &item_48, context + 0x70, &item_30, "elfence_loop");
            void* source_1 = *(context + 0x170);
            uint32_t data_7 = Script_ParseEnumReal32_8();
            int32_t temp_1 = 0;
            temp_1 = *(source_1 + 0x1c);
            result = *(((data_7 * 0x180 + temp_1) << 2) + &g_a96ae0);

            if (result)
                result = result(source_1, 0);
        }
    }
    else if (!*(context + 0x11c))
    {
        result = QTask_FindType(result);
        *(context + 0x170) = 0;
    }

    int32_t* i = *(context + 8);

    if (*i && i)
    {
        int32_t temp_2 = g_afa7e0;

        do
        {
            int32_t* source_2 = *i;
            void* data_11;

            if (!source_2)
                data_11 = nullptr;
            else
            {
                int32_t data_8 = *source_2;
                int32_t data_9 = -(data_8);
                data_11 = (data_9 - data_9) & source_2;
            }

            *((temp_2 << 2) + &g_afa6e0) = data_11;
            int32_t temp_3 = temp_2 + 1;
            int32_t data_12 = 0;
            g_afa7e0 = temp_3;
            data_12 = i[7];
            result = *((data_12 << 2) + &g_a970e0);

            if (result)
            {
                result = result(i);
                temp_3 = g_afa7e0;
            }

            i = *((temp_3 << 2) + &g_afa6dc);
            temp_2 = temp_3 - 1;
            g_afa7e0 = temp_2;
        } while (i);
    }

    return result;
}
