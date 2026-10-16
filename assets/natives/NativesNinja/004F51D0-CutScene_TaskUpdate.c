#include "004F51D0-CutScene_TaskUpdate.h"
/* 0x004f51d0 CutScene_TaskUpdate full linked: callers=0 callees=17 */
int32_t* CutScene_TaskUpdate(int80_t a1 @ st0, void* a2)

// Sig: int CutScene_TaskUpdate(void* cutsceneTask)
// Note: Per-frame UPDATE of the running CutScene task. Alternative
// cutscene-kill point: force an immediate completion return here and any
// created cutscene ends on frame one. Verified: referenced as update cb inside
// CutScene_TaskCreate 0x4F4B00.
{
    int32_t* i = *(a2 + 8);

    if (*i && i)
    {
        int32_t edx = g_afa7e0;

        do
        {
            int32_t* edi_1 = *i;
            void* eax_4;

            if (!edi_1)
                eax_4 = nullptr;
            else
            {
                int32_t eax_1 = *edi_1;
                int32_t eax_2 = -(eax_1);
                eax_4 = (eax_2 - eax_2) & edi_1;
            }

            *((edx << 2) + &g_afa6e0) = eax_4;
            int32_t edx_1 = edx + 1;
            int32_t eax_5 = 0;
            g_afa7e0 = edx_1;
            eax_5 = i[7];
            int32_t eax_6 = *((eax_5 << 2) + &g_a970e0);

            if (eax_6)
            {
                eax_6(i);
                edx_1 = g_afa7e0;
            }

            i = *((edx_1 << 2) + &g_afa6dc);
            edx = edx_1 - 1;
            g_afa7e0 = edx;
        } while (i);
    }

    if (sub_4f16c0(a2 + 0x7c))
    {
        sub_4f16e0(a2 + 0x7c, a2);
        *(a2 + 0x60) = a1;
    }

    if (sub_4f16c0(a2 + 0xcc))
    {
        sub_4f16e0(a2 + 0xcc, a2);
🚫🚫🚫        char var_8_2 = /* char var_8_2 = (unimplemented  {fistp qword [esp+0x14], st0}).b */;
        /* unimplemented  {fistp qword [esp+0x14], st0} */

        if (var_8_2)
        {
            *(a2 + 0x64) = 0;
            *(a2 + 0x61) = 0;
        }
    }

    if (!*(a2 + 0x26d))
        goto label_4f52a8;

    int32_t* eax_12;

    if (*(a2 + 0x60))
    {
    label_4f52ae:
        *(a2 + 0x26c) = 0;
        sub_4f5400(a2);
        eax_12 = sub_4f16c0(a2 + 0x11c);

        if (!eax_12)
            *(a2 + 0x64) += 1;
        else
        {
            sub_4f16e0(a2 + 0x11c, a2);
🚫🚫            /* unimplemented  {fimul st0, dword [&g_a76c54]} */
            void* eax_13 = *(a2 + 0x64);
🚫🚫🚫            int32_t var_8_3 = /* int32_t var_8_3 =
                (unimplemented  {fistp qword [esp+0xc], st0}).d */;
            /* unimplemented  {fistp qword [esp+0xc], st0} */
            eax_12 = eax_13 + var_8_3;
            *(a2 + 0x64) = eax_12;

            if (eax_13 + var_8_3 < 0)
                *(a2 + 0x64) = 0;
        }
    }
    else
    {
        *(a2 + 0x270) = sub_4e75a0();
    label_4f52a8:

        if (*(a2 + 0x60))
            goto label_4f52ae;

        eax_12 = sub_4e75a0();

        if (*(a2 + 0x270) != eax_12)
        {
            int32_t* eax_14 = *(a2 + 0x260);

            if (eax_14)
            {
                QTask_FindType(eax_14);
                *(a2 + 0x260) = 0;
            }

            int32_t* eax_15 = *(a2 + 0x25c);

            if (eax_15)
            {
                QTask_FindType(eax_15);
                *(a2 + 0x25c) = 0;
            }

            int32_t* eax_16 = *(a2 + 0x264);

            if (eax_16)
            {
                QTask_FindType(eax_16);
                *(a2 + 0x264) = 0;
            }

            eax_12 = *(a2 + 0x268);

            if (eax_12)
            {
                eax_12 = QTask_FindType(eax_12);
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
            return eax_12;
        }

        int32_t* eax_17 = sub_4f16c0(a2 + 0x1bc);

        if (!eax_17)
        {
            *(a2 + 0x26d) = *(a2 + 0x60);
            return eax_17;
        }

        eax_12 = sub_4f16e0(a2 + 0x1bc, a2);
🚫🚫🚫        /* unimplemented  {fstp st0, st0} */
        /* unimplemented  {fstp st0, st0} */
    }
    else
    {
        if (*(a2 + 0x60))
        {
            eax_12 = sub_4f16c0(a2 + 0x16c);

            if (eax_12)
            {
                eax_12 = sub_4f16e0(a2 + 0x16c, a2);
🚫🚫🚫                /* unimplemented  {fstp st0, st0} */
                /* unimplemented  {fstp st0, st0} */
            }
        }

        if (*(a2 + 0x26d))
            goto label_4f539d;
    }

    eax_12 = *(a2 + 0x60);
    *(a2 + 0x26d) = eax_12;
    return eax_12;
}
