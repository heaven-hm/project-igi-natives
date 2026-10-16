#include "Train_Update.h"
uint32_t Train_Update(int80_t a1 @ fp0, void* a2)

{
    void* dstD = a2;
    uint32_t result = Frames_GetUpdateCounter();

    if (*(dstD + 0x888) != result)
    {
        *(dstD + 0x888) = Frames_GetUpdateCounter();
        char valA1 = Script_FormatString_6(dstD + 0x890);
        int16_t idx;

        if (valA1)
        {
            Script_SpawnNewTask_7(dstD + 0x890, dstD);
            idx = 1;
        }

        if (valA1 && !a1)
        {
            int32_t* valA7 = *(dstD + 0x88c);

            if (valA7)
            {
                QTask_FindType(valA7);
                *(dstD + 0x88c) = 0;
            }
        }
        else if (!*(dstD + 0x88c))
        {
            char* valA5 = "train_loop_1";

            if (!*(dstD + 0x778))
                valA5 = "train_loop_2";

            struct status_msg* valA6 = SoundSys_SetMasterVolume_7(dstD, valA5);

            if (valA6)
                *(dstD + 0x88c) = valA6;
        }

        void* objC1 = *(dstD + 0x884);

        if (objC1)
        {
            void* valA8 = *(dstD + 0x14);
            int16_t top_1;

            if (*(valA8 + 0x1c) != g_57bcb8)
            {
🚫🚫                top_1 = idx - 1;
                /* unimplemented  {fld fp0, dword [dstD+0x720]} */
🚫🚫                /* unimplemented  {fmul fp0, dword [&g_5336d0]} */
                a2 = *(dstD + 0x720);
            }
            else
            {
🚫🚫                top_1 = idx - 1;
                /* unimplemented  {fld fp0, dword [valA+0x720]} */
🚫🚫                /* unimplemented  {fmul fp0, dword [&g_5336d0]} */
                a2 = *(valA8 + 0x720);
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

🚫🚫🚫            *(objC1 + 4) =
            /* unimplemented  {fstp dword [objC+0x4], fp0} */
🚫🚫            /* unimplemented  {fld fp0, dword [esp+0x14]} */
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
            a2 = 1;

            if (*(&((c0_3 ? 1 : 0) << 8 | (c2_3 ? 1 : 0) << 0xa | (c3_3 ? 1 : 0) << 0xe
                    | ((top_5 + 1) & 7) << 0xb) + 1) & 0x41)
                a2 = nullptr;

🚫🚫            /* unimplemented  {fild fp0, dword [esp+0x14]} */
🚫🚫🚫            *(*(dstD + 0x884) + 8) = /* *(*(dstD + 0x884) + 8) =
                unimplemented  {fstp dword [valA+0x8], fp0} */;
            /* unimplemented  {fstp dword [valA+0x8], fp0} */
        }

        int32_t* i = *(dstD + 8);

        if (!*i || !i)
            result = g_afa7e0;
        else
        {
            result = g_afa7e0;

            do
            {
                int32_t* srcS2 = *i;
                void* objC5;

                if (!srcS2)
                    objC5 = nullptr;
                else
                {
                    int32_t objC2 = *srcS2;
                    int32_t objC3 = -(objC2);
                    objC5 = (objC3 - objC3) & srcS2;
                }

                *((result << 2) + &g_afa6e0) = objC5;
                int32_t valA11 = result + 1;
                int32_t objC6 = 0;
                g_afa7e0 = valA11;
                objC6 = i[7];
                int32_t objC7 = *((objC6 << 2) + &g_a970e0);

                if (objC7)
                {
                    objC7(i);
                    valA11 = g_afa7e0;
                }

                i = *((valA11 << 2) + &g_afa6dc);
                result = valA11 - 1;
                g_afa7e0 = result;
            } while (i);
        }

        void* objC8 = *(dstD + 0xe8);

        if (objC8 && !*(dstD + 0x778))
        {
            int32_t* i_1 = *(objC8 + 8);

            if (*i_1 && i_1)
            {
                do
                {
                    int32_t* srcS3 = *i_1;
                    void* objC12;

                    if (!srcS3)
                        objC12 = nullptr;
                    else
                    {
                        int32_t objC9 = *srcS3;
                        int32_t objC10 = -(objC9);
                        objC12 = (objC10 - objC10) & srcS3;
                    }

                    *((result << 2) + &g_afa6e0) = objC12;
                    int32_t valA12 = result + 1;
                    int32_t objC13 = 0;
                    g_afa7e0 = valA12;
                    objC13 = i_1[7];
                    int32_t objC14 = *((objC13 << 2) + &g_a970e0);

                    if (objC14)
                    {
                        objC14(i_1);
                        valA12 = g_afa7e0;
                    }

                    i_1 = *((valA12 << 2) + &g_afa6dc);
                    result = valA12 - 1;
                    g_afa7e0 = result;
                } while (i_1);
            }
        }
    }

    return result;
}
