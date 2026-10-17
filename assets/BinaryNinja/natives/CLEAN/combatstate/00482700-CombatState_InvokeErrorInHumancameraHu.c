// IGI native provenance: CombatState_InvokeErrorInHumancameraHu - 0x00482700 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00482700-CombatState_InvokeErrorInHumancameraHu.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "CombatState_InvokeErrorInHumancameraHu.h"

int32_t* CombatState_InvokeErrorInHumancameraHu(void* arg1)

{
    float base_val = 0f;
    int32_t dest_ptr = 0;
    int32_t* result_val = *(arg1 + 0x68);

    if (result_val)
    {
        void* eax_1 = *result_val;

        if (eax_1)
        {
            int32_t context_val = 0;
            int32_t data_val = 0;
            context_val = g_540992;
            data_val = *(eax_1 + 0x1c);
            (*(((context_val * 0x180 + data_val) << 2) + &g_a96ae0))(eax_1, arg1 + 0x70);
            int32_t eax_3 = *(arg1 + 0xe0);

            if (*(arg1 + 0xe8) != eax_3)
                dest_ptr = 1;

            *(arg1 + 0xe8) = eax_3;

            if (eax_3 - 1 <= 4)
                switch (eax_3)
                {
                    case 1:
                    {
                        if (dest_ptr)
                            FX_TrailUpdate_2(arg1);

                        void* var_10_3 = arg1;
                        Camera_FirstPerson_Update(arg1);
                        base_val = 1.40129846fe-45f;
                        break;
                    }
                    case 2:
                    {
                        if (dest_ptr)
                            FX_FireBallUpdate_3(arg1);

                        Camera_ThirdPerson_Update(arg1);
                        FX_SmokeEmit_3(arg1);
                        break;
                    }
                    case 3:
                    {
                        if (dest_ptr)
                            FX_TrailUpdate_3(arg1);

                        Camera_Sniper_Update(arg1);
                        FX_FireBallUpdate_4(arg1);
                        break;
                    }
                    case 4:
                    {
                        if (dest_ptr)
                            void* var_10_8 = arg1;

                        void* var_10_9 = arg1;
                        Camera_FirstPerson_Update(arg1);
                        break;
                    }
                    case 5:
                    {
                        if (dest_ptr)
                            FX_SmokeEmit_4(arg1);

                        Camera_Binocular_Update(arg1);
                        Camera_Binocular_DrawOverlay(arg1);
                        int32_t eax_5 = *(arg1 + 0x124);
                        eax_5 &= 0xfe;
                        *(arg1 + 0x124) = eax_5;
                        break;
                    }
                }

            Human_FindNextCamera(arg1);
🚫🚫            int32_t ecx_5 = FX_TrailUpdate_11();
            /* unimplemented  {call FX_TrailUpdate_11} */
            int32_t var_14_6 = ecx_5;
🚫🚫🚫            float var_14_7 = /* float var_14_7 = unimplemented  {fstp dword [stack_ptr], st0} */;
            /* unimplemented  {fstp dword [stack_ptr], st0} */
            int32_t* eax_6 = SoundSys_SetFrequency_9();
            int32_t var_20 = 0x43960000;
            int32_t* result = Camera_SubmitFrame(*(arg1 + 0x64), arg1 + 0x20, arg1 + 0x38,
                *(arg1 + 0x60), 0x3f800000, eax_6, arg1, var_14_7, base_val);
🚫🚫            /* unimplemented  {fld st0, dword [source_ptr+0xdc]} */
🚫🚫🚫            g_b81700 = /* g_b81700 = unimplemented  {fstp dword [&g_b81700], st0} */;
            /* unimplemented  {fstp dword [&g_b81700], st0} */
            return result;
        }
    }

    return FX_ErrorInHumancameraHu(arg1);
}
