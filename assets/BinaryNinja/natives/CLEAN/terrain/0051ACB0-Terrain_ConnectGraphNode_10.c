// IGI native provenance: Terrain_ConnectGraphNode_10 - 0x0051ACB0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0051ACB0-Terrain_ConnectGraphNode_10.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Terrain_ConnectGraphNode_10.h"
int32_t Terrain_ConnectGraphNode_10(void* context)

{
    void* dest_val = context;
    int32_t i_1 = 0;
    int32_t i = *(dest_val + 0x1f8);

    if (i > 0)
    {
        int32_t* source_1 = dest_val + 0x68;
        int32_t* item_10_1 = source_1;

        do
        {
            Terrain_CalculateNormals_9(*source_1);
            void* entity_1 = *source_1;
🚫🚫            /* unimplemented  {fld fp0, dword [entity_val+0x58]} */
🚫🚫            /* unimplemented  {fadd dword [entity_val+0x48]} */
🚫🚫            /* unimplemented  {fadd dword [entity_val+0x38]} */
🚫🚫🚫🚫🚫            long double f0_1 = 0.0f;
            /* unimplemented  {fcom fp0, dword [&g_5333ec]} f- f0_1 */ - f0_1;
            bool c0_1 = /* bool c0_1 =
                unimplemented  {fcom fp0, dword [&g_5333ec]} f< f0_1 */ < f0_1;
            bool c2_1 = FCMP_UO(/* bool c2_1 =
                is_unordered.t(unimplemented  {fcom fp0, dword [&g_5333ec]}, f0_1) */,
                f0_1);
            bool c3_1 = /* bool c3_1 =
                unimplemented  {fcom fp0, dword [&g_5333ec]} f== f0_1 */ == f0_1;
            int16_t idx;

            if (*(&((c0_1 ? 1 : 0) << 8 | (c2_1 ? 1 : 0) << 0xa | (c3_1 ? 1 : 0) << 0xe
                | ((idx - 2) & 7) << 0xb) + 1) & 0x41)
            {
🚫🚫🚫                /* unimplemented  {fstp fp0, fp0} */
                /* unimplemented  {fstp fp0, fp0} */
🚫🚫                /* unimplemented  {fld fp0, dword [entity_val+0x48]} */
⋯                long double f1_1 = *(entity_1 + 0x38);
                /* unimplemented  {fcomp fp0, dword [entity_val+0x38]} f- f1_1 */ - f1_1;
                bool c0_2 = /* bool c0_2 =
                    unimplemented  {fcomp fp0, dword [entity_val+0x38]} f< f1_1 */ < f1_1;
                bool c2_2 = FCMP_UO(/* bool c2_2 =
                    is_unordered.t(unimplemented  {fcomp fp0, dword [entity_val+0x38]}, f1_1) */,
                    f1_1);
                bool c3_2 = /* bool c3_2 =
                    unimplemented  {fcomp fp0, dword [entity_val+0x38]} f== f1_1 */ == f1_1;
                /* unimplemented  {fcomp fp0, dword [entity_val+0x38]} */
                int32_t temp_1 = 0;
                int32_t item_c = 1;
                int32_t item_8_1 = 2;
                int32_t item_4_1 = 0;

                if (!(*(&((c0_2 ? 1 : 0) << 8 | (c2_2 ? 1 : 0) << 0xa | (c3_2 ? 1 : 0) << 0xe
                        | ((idx - 1) & 7) << 0xb) + 1) & 0x41))
                    temp_1 = 1;

🚫🚫                /* unimplemented  {fld fp0, dword [entity_val+0x58]} */
⋯                long double f2_1 = *((temp_1 << 4) + entity_1 + 0x38);
                /* unimplemented  {fcomp fp0, dword [data_val+entity_val+0x38]} f- f2_1 */ - f2_1;
                bool c0_3 = /* bool c0_3 =
                    unimplemented  {fcomp fp0, dword [data_val+entity_val+0x38]} f< f2_1 */ < f2_1;
                bool c2_3 = FCMP_UO(/* bool c2_3 =
                    is_unordered.t(unimplemented  {fcomp fp0, dword [data_val+entity_val+0x38]}, f2_1) */,
                    f2_1);
                bool c3_3 = /* bool c3_3 =
                    unimplemented  {fcomp fp0, dword [data_val+entity_val+0x38]} f== f2_1 */ == f2_1;
                /* unimplemented  {fcomp fp0, dword [data_val+entity_val+0x38]} */

                if (!(*(&((c0_3 ? 1 : 0) << 8 | (c2_3 ? 1 : 0) << 0xa | (c3_3 ? 1 : 0) << 0xe
                        | ((idx - 1) & 7) << 0xb) + 1) & 0x41))
                    temp_1 = 2;

                int32_t dest_1 = (&item_c)[temp_1];
                int32_t source_2 = (&item_c)[dest_1];
🚫🚫                /* unimplemented  {fld fp0, dword [data_val+entity_val+0x38]} */
🚫🚫                /* unimplemented  {fsub fp0, dword [context_val+entity_val+0x38]} */
🚫🚫                /* unimplemented  {fsub fp0, dword [data_val+entity_val+0x38]} */
🚫🚫                /* unimplemented  {fadd dword [&g_5333e0]} */
🚫🚫                /* unimplemented  {fsqrt } */
🚫🚫                /* unimplemented  {fld fp0, fp0} */
🚫🚫                /* unimplemented  {fmul fp0, dword [&g_533504]} */
🚫🚫🚫                *(entity_1 + (temp_1 << 2) + 0x60) = /* *(entity_1 + (temp_1 << 2) + 0x60) =
                    unimplemented  {fstp dword [entity_val+temp_val*4+0x60], fp0} */;
                /* unimplemented  {fstp dword [entity_val+temp_val*4+0x60], fp0} */
🚫🚫🚫🚫🚫                long double f3_1 = 0.0f;
                /* unimplemented  {fcom fp0, dword [&g_5333ec]} f- f3_1 */ - f3_1;
                bool c0_4 = /* bool c0_4 =
                    unimplemented  {fcom fp0, dword [&g_5333ec]} f< f3_1 */ < f3_1;
                bool c2_4 = FCMP_UO(/* bool c2_4 =
                    is_unordered.t(unimplemented  {fcom fp0, dword [&g_5333ec]}, f3_1) */,
                    f3_1);
                bool c3_4 = /* bool c3_4 =
                    unimplemented  {fcom fp0, dword [&g_5333ec]} f== f3_1 */ == f3_1;

                if (!(*(&((c0_4 ? 1 : 0) << 8 | (c2_4 ? 1 : 0) << 0xa | (c3_4 ? 1 : 0) << 0xe
                        | ((idx - 2) & 7) << 0xb) + 1) & 0x40))
🚫🚫                    /* unimplemented  {fdivr fp0, dword [&g_533504]} */

🚫🚫                /* unimplemented  {fld fp0, dword [entity_val+context_val*4+0x38]} */
🚫🚫                /* unimplemented  {fadd dword [entity_val+flagP*4+0x38]} */
🚫🚫                /* unimplemented  {fmul fp0, fp1} */
🚫🚫🚫                *(entity_1 + (dest_1 << 2) + 0x60) = /* *(entity_1 + (dest_1 << 2) + 0x60) =
                    unimplemented  {fstp dword [entity_val+dest_val*4+0x60], fp0} */;
                /* unimplemented  {fstp dword [entity_val+dest_val*4+0x60], fp0} */
🚫🚫                /* unimplemented  {fld fp0, dword [entity_val+temp_val*4+0x38]} */
🚫🚫                /* unimplemented  {fadd dword [entity_val+data_val*4+0x38]} */
🚫🚫                /* unimplemented  {fmul fp0, fp1} */
                dest_val = context;
🚫🚫🚫                *(entity_1 + (source_2 << 2) + 0x60) = /* *(entity_1 + (source_2 << 2) + 0x60) =
                    unimplemented  {fstp dword [entity_val+source_val*4+0x60], fp0} */;
                /* unimplemented  {fstp dword [entity_val+source_val*4+0x60], fp0} */
🚫🚫                /* unimplemented  {fld fp0, dword [entity_val+data_val*4+0x38]} */
🚫🚫                /* unimplemented  {fsub fp0, dword [entity_val+context_val*4+0x38]} */
                source_1 = item_10_1;
🚫🚫                /* unimplemented  {fmul fp0, fp1} */
🚫🚫                /* unimplemented  {fchs } */
🚫🚫🚫                *(entity_1 + 0x6c) = /* *(entity_1 + 0x6c) =
                    unimplemented  {fstp dword [entity_val+0x6c], fp0} */;
                /* unimplemented  {fstp dword [entity_val+0x6c], fp0} */
🚫🚫🚫                /* unimplemented  {fstp fp0, fp0} */
                /* unimplemented  {fstp fp0, fp0} */
                idx -= 1;
            }
            else
            {
🚫🚫                /* unimplemented  {fadd dword [&g_5333e0]} */
🚫🚫                /* unimplemented  {fsqrt } */
🚫🚫                /* unimplemented  {fld fp0, fp0} */
🚫🚫                /* unimplemented  {fmul fp0, dword [&g_533504]} */
🚫🚫🚫                *(entity_1 + 0x6c) = /* *(entity_1 + 0x6c) =
                    unimplemented  {fstp dword [entity_val+0x6c], fp0} */;
                /* unimplemented  {fstp dword [entity_val+0x6c], fp0} */
🚫🚫                /* unimplemented  {fdivr fp0, dword [&g_533504]} */
🚫🚫                /* unimplemented  {fld fp0, dword [data_val+0x4c]} */
🚫🚫                /* unimplemented  {fsub fp0, dword [data_val+0x54]} */
🚫🚫                /* unimplemented  {fmul fp0, fp1} */
🚫🚫                /* unimplemented  {fchs } */
🚫🚫🚫                *(*source_1 + 0x60) = /* *(*source_1 + 0x60) =
                    unimplemented  {fstp dword [data_val+0x60], fp0} */;
                /* unimplemented  {fstp dword [data_val+0x60], fp0} */
🚫🚫                /* unimplemented  {fld fp0, dword [data_val+0x50]} */
🚫🚫                /* unimplemented  {fsub fp0, dword [data_val+0x40]} */
🚫🚫                /* unimplemented  {fmul fp0, fp1} */
🚫🚫                /* unimplemented  {fchs } */
🚫🚫🚫                *(*source_1 + 0x64) = /* *(*source_1 + 0x64) =
                    unimplemented  {fstp dword [data_val+0x64], fp0} */;
                /* unimplemented  {fstp dword [data_val+0x64], fp0} */
🚫🚫                /* unimplemented  {fld fp0, dword [data_val+0x3c]} */
🚫🚫                /* unimplemented  {fsub fp0, dword [data_val+0x44]} */
🚫🚫                /* unimplemented  {fmul fp0, fp1} */
🚫🚫                /* unimplemented  {fchs } */
🚫🚫🚫                *(*source_1 + 0x68) = /* *(*source_1 + 0x68) =
                    unimplemented  {fstp dword [data_val+0x68], fp0} */;
                /* unimplemented  {fstp dword [data_val+0x68], fp0} */
🚫🚫🚫                /* unimplemented  {fstp fp0, fp0} */
                /* unimplemented  {fstp fp0, fp0} */
                idx -= 1;
            }

            void* data_11 = *source_1;
            source_1 = &source_1[1];
            item_10_1 = source_1;
            *(data_11 + 0x70) = *(data_11 + 0x5c);
            i = i_1 + 1;
            i_1 = i;
        } while (i < *(dest_val + 0x1f8));
    }

    return i;
}
