// IGI native provenance: DisplayRender_ProcessCouldntsetcooper - 0x00493B30 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00493B30-DisplayRender_ProcessCouldntsetcooper.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "DisplayRender_ProcessCouldntsetcooper.h"

int32_t* DisplayRender_ProcessCouldntsetcooper()

{
    int32_t* 5ca114_4 = g_5ca114;

    if (5ca114_4)
    {
        (*(*5ca114_4 + 0x18))(5ca114_4);
        int32_t* 5ca100_1 = g_5ca100;

        if ((*(*5ca100_1 + 0x34))(5ca100_1, 0) == 0x8876021c)
        {
            int32_t i;

            do
            {
                int32_t* 5ca100_2 = g_5ca100;
                i = (*(*5ca100_2 + 0x34))(5ca100_2, 0);
            } while (i == 0x8876021c);
        }
    }

    Display_ClearSurfaces_6();
    Display_CloseDevice_4(g_5ca11c);
    int32_t* 5ca114_1 = g_5ca114;
    (*(*5ca114_1 + 0x8c))(5ca114_1, 0, 0);
    int32_t* 5ca114_2 = g_5ca114;
    (*(*5ca114_2 + 0x8c))(5ca114_2, 1, 0);
    int32_t* 5ca114_3 = g_5ca114;

    if (5ca114_3)
    {
        (*(*5ca114_3 + 8))(5ca114_3);
        g_5ca114 = 0;
    }

    int32_t 5ca104_2 = g_5ca104;

    if (5ca104_2)
    {
        int32_t* 5ca100_3 = g_5ca100;
        (*(*5ca100_3 + 0x20))(5ca100_3, 0, 5ca104_2);
        int32_t* 5ca104_1 = g_5ca104;
        (*(*5ca104_1 + 8))(5ca104_1);
        g_5ca104 = 0;
    }

    int32_t* 5ca100_4 = g_5ca100;

    if (5ca100_4)
    {
        (*(*5ca100_4 + 8))(5ca100_4);
        g_5ca100 = 0;
    }

    int32_t* 5ca0fc_1 = g_5ca0fc;

    if (5ca0fc_1)
    {
        (*(*5ca0fc_1 + 8))(5ca0fc_1);
        g_5ca0fc = 0;
    }

    int32_t* 5ca110_1 = g_5ca110;

    if (5ca110_1)
    {
        (*(*5ca110_1 + 8))(5ca110_1);
        g_5ca110 = 0;
    }

    int32_t* 5ca10c_3 = g_5ca10c;

    if (5ca10c_3)
    {
        int32_t dest_ptr;
        int32_t var_408_9 = dest_ptr;
        int32_t edi_1 = *5ca10c_3;
        int32_t eax_1 = FX_ExplosionSpawn_22();
        int32_t eax_3 = (*(edi_1 + 0x50))(g_5ca10c, eax_1, 0x1008);

        if (!eax_3)
        {
            int32_t* 5ca10c_1 = g_5ca10c;
            (*(*5ca10c_1 + 0x4c))(5ca10c_1);
            int32_t* 5ca10c_2 = g_5ca10c;
            5ca10c_3 = (*(*5ca10c_2 + 8))(5ca10c_2);
            g_5ca10c = 0;
        }
        else
        {
            void var_3fc;
            Game_DataSymbolLoad(&var_3fc, "Couldn't set cooperative level");
            int32_t var_414_2 = DDERR_GENERIC(eax_3);
            void* var_418 = &var_3fc;
            Error_Show("%s\n\nDirectX error message: %s");

            while (true)
                /* nop */
        }
    }

    return 5ca10c_3;
}
