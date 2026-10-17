// Original IGI.EXE function: Train_Update (VA 0x0042B700; static CFG gate PASS, CFG score 1.000).
#include "Train_Update.h"
uint32_t Train_Update(long double context , void* param_2)

{
    void* dest_val = param_2;
    uint32_t result = Frames_GetUpdateCounter();

    if (*(dest_val + 0x888) != result)
    {
        *(dest_val + 0x888) = Frames_GetUpdateCounter();
        char data_1 = Script_FormatString_6(dest_val + 0x890);
        int16_t idx;

        if (data_1)
        {
            Script_SpawnNewTask_7(dest_val + 0x890, dest_val);
            idx = 1;
        }

        if (data_1 && !context)
        {
            int32_t* data_7 = *(dest_val + 0x88c);

            if (data_7)
            {
                QTask_FindType(data_7);
                *(dest_val + 0x88c) = 0;
            }
        }
        else if (!*(dest_val + 0x88c))
        {
            char* data_5 = "train_loop_1";

            if (!*(dest_val + 0x778))
                data_5 = "train_loop_2";

            struct status_msg* data_6 = SoundSys_SetMasterVolume_7(dest_val, data_5);

            if (data_6)
                *(dest_val + 0x88c) = data_6;
        }

        void* entity_1 = *(dest_val + 0x884);

        if (entity_1)
        {
            void* data_8 = *(dest_val + 0x14);
            int16_t top_1;

            if (*(data_8 + 0x1c) != g_57bcb8)
            {
🚫🚫                top_1 = idx - 1;
                /* unimplemented  {fld fp0, dword [dest_val+0x720]} */
🚫🚫                /* unimplemented  {fmul fp0, dword [&g_5336d0]} */
                param_2 = *(dest_val + 0x720);
            }
            else
            {
🚫🚫                top_1 = idx - 1;
                /* unimplemented  {fld fp0, dword [data_val+0x720]} */
🚫🚫                /* unimplemented  {fmul fp0, dword [&g_5336d0]} */
                param_2 = *(data_8 + 0x720);
            }

🚫🚫            /* unimplemented  {fld fp0, dword [&g_5336cc]} */
⋯            /* unimplemented  {fcomp fp0, fp1} f- unimplemented  {fcomp fp0, fp1} */
                - /* unimplemented  {fcomp fp0, fp1} f- unimplemented  {fcomp fp0, fp1} */;
            bool c0_1 = /* bool c0_1 =
                unimplemented  {fcomp fp0, fp1} f< unimplemented  {fcomp fp0, fp1} */
                < /* bool c0_1 = unimplemented  {fcomp fp0, fp1} f< unimplemented  {fcomp fp0, fp1} */;
            bool c2_1 = FCMP_UO(/* bool c2_1 = is_unordered.t(unimplemented  {fcomp fp0, fp1},
                unimplemented  {fcomp fp0, fp1}) */, /* bool c2_1 = is_unordered.t(
                unimplemented  {fcomp fp0, fp1}, unimplemented  {fcomp fp0, fp1}) */);
            bool c3_1 = /* bool c3_1 =
                unimplemented  {fcomp fp0, fp1} f== unimplemented  {fcomp fp0, fp1} */
                == /* bool c3_1 =
                unimplemented  {fcomp fp0, fp1} f== unimplemented  {fcomp fp0, fp1} */;
            /* unimplemented  {fcomp fp0, fp1} */
            int16_t top_5;

            if (*(&((c0_1 ? 1 : 0) << 8 | (c2_1 ? 1 : 0) << 0xa | (c3_1 ? 1 : 0) << 0xe
                | (top_1 & 7) << 0xb) + 1) & 0x41)
            {
🚫🚫                /* unimplemented  {fld fp0, dword [&g_5333e0]} */
⋯                /* unimplemented  {fcomp fp0, fp1} f- unimplemented  {fcomp fp0, fp1} */
                    - /* unimplemented  {fcomp fp0, fp1} f- unimplemented  {fcomp fp0, fp1} */;
                bool c0_2 = /* bool c0_2 =
                    unimplemented  {fcomp fp0, fp1} f< unimplemented  {fcomp fp0, fp1} */
                    < /* bool c0_2 =
                    unimplemented  {fcomp fp0, fp1} f< unimplemented  {fcomp fp0, fp1} */;
                bool c2_2 = FCMP_UO(/* bool c2_2 = is_unordered.t(unimplemented  {fcomp fp0, fp1},
                    unimplemented  {fcomp fp0, fp1}) */, /* bool c2_2 = is_unordered.t(
                    unimplemented  {fcomp fp0, fp1}, unimplemented  {fcomp fp0, fp1}) */);
                bool c3_2 = /* bool c3_2 =
                    unimplemented  {fcomp fp0, fp1} f== unimplemented  {fcomp fp0, fp1} */
                    == /* bool c3_2 =
                    unimplemented  {fcomp fp0, fp1} f== unimplemented  {fcomp fp0, fp1} */;
                /* unimplemented  {fcomp fp0, fp1} */
                top_5 = top_1;

                if (*(&((c0_2 ? 1 : 0) << 8 | (c2_2 ? 1 : 0) << 0xa | (c3_2 ? 1 : 0) << 0xe
                    | (top_5 & 7) << 0xb) + 1) & 1)
                {
🚫🚫🚫                    /* unimplemented  {fstp fp0, fp0} */
                    /* unimplemented  {fstp fp0, fp0} */
🚫🚫                    /* unimplemented  {fld fp0, dword [&g_5333e0]} */
                }
            }
            else
            {
🚫🚫🚫                /* unimplemented  {fstp fp0, fp0} */
                /* unimplemented  {fstp fp0, fp0} */
🚫🚫                top_5 = top_1;
                /* unimplemented  {fld fp0, dword [&g_5336cc]} */
            }

🚫🚫🚫            *(entity_1 + 4) =
            /* unimplemented  {fstp dword [entity_val+0x4], fp0} */
🚫🚫            /* unimplemented  {fld fp0, dword [stack_ptr+0x14]} */
⋯            long double f1_1 = 0.00100000005f;
            /* unimplemented  {fcomp fp0, dword [&g_5336c0]} f- f1_1 */ - f1_1;
            bool c0_3 = /* bool c0_3 =
                unimplemented  {fcomp fp0, dword [&g_5336c0]} f< f1_1 */ < f1_1;
            bool c2_3 = FCMP_UO(/* bool c2_3 =
                is_unordered.t(unimplemented  {fcomp fp0, dword [&g_5336c0]}, f1_1) */,
                f1_1);
            bool c3_3 = /* bool c3_3 =
                unimplemented  {fcomp fp0, dword [&g_5336c0]} f== f1_1 */ == f1_1;
            /* unimplemented  {fcomp fp0, dword [&g_5336c0]} */
            param_2 = 1;

            if (*(&((c0_3 ? 1 : 0) << 8 | (c2_3 ? 1 : 0) << 0xa | (c3_3 ? 1 : 0) << 0xe
                    | ((top_5 + 1) & 7) << 0xb) + 1) & 0x41)
                param_2 = nullptr;

🚫🚫            /* unimplemented  {fild fp0, dword [stack_ptr+0x14]} */
🚫🚫🚫            *(*(dest_val + 0x884) + 8) = /* *(*(dest_val + 0x884) + 8) =
                unimplemented  {fstp dword [data_val+0x8], fp0} */;
            /* unimplemented  {fstp dword [data_val+0x8], fp0} */
        }

        int32_t* i = *(dest_val + 8);

        if (!*i || !i)
            result = g_afa7e0;
        else
        {
            result = g_afa7e0;

            do
            {
                int32_t* source_2 = *i;
                void* entity_5;

                if (!source_2)
                    entity_5 = nullptr;
                else
                {
                    int32_t entity_2 = *source_2;
                    int32_t entity_3 = -(entity_2);
                    entity_5 = (entity_3 - entity_3) & source_2;
                }

                *((result << 2) + &g_afa6e0) = entity_5;
                int32_t data_11 = result + 1;
                int32_t entity_6 = 0;
                g_afa7e0 = data_11;
                entity_6 = i[7];
                int32_t entity_7 = *((entity_6 << 2) + &g_a970e0);

                if (entity_7)
                {
                    entity_7(i);
                    data_11 = g_afa7e0;
                }

                i = *((data_11 << 2) + &g_afa6dc);
                result = data_11 - 1;
                g_afa7e0 = result;
            } while (i);
        }

        void* entity_8 = *(dest_val + 0xe8);

        if (entity_8 && !*(dest_val + 0x778))
        {
            int32_t* i_1 = *(entity_8 + 8);

            if (*i_1 && i_1)
            {
                do
                {
                    int32_t* source_3 = *i_1;
                    void* entity_12;

                    if (!source_3)
                        entity_12 = nullptr;
                    else
                    {
                        int32_t entity_9 = *source_3;
                        int32_t entity_10 = -(entity_9);
                        entity_12 = (entity_10 - entity_10) & source_3;
                    }

                    *((result << 2) + &g_afa6e0) = entity_12;
                    int32_t data_12 = result + 1;
                    int32_t entity_13 = 0;
                    g_afa7e0 = data_12;
                    entity_13 = i_1[7];
                    int32_t entity_14 = *((entity_13 << 2) + &g_a970e0);

                    if (entity_14)
                    {
                        entity_14(i_1);
                        data_12 = g_afa7e0;
                    }

                    i_1 = *((data_12 << 2) + &g_afa6dc);
                    result = data_12 - 1;
                    g_afa7e0 = result;
                } while (i_1);
            }
        }
    }

    return result;
}
