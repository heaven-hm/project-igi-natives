// IGI native provenance: DisplayRender_ProcessCouldntgetdevice - 0x004927B0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004927B0-DisplayRender_ProcessCouldntgetdevice.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "DisplayRender_ProcessCouldntgetdevice.h"

int32_t DisplayRender_ProcessCouldntgetdevice(char* arg1)

{
    void* const base_val = &g_5349e0;

    if (!g_bcad74)
        base_val = &g_534a00;

    *(arg1 + 0x2710) = 0xabcd1234;
    int32_t* 5ca114_1 = g_5ca114;
    void var_7e4;
    int32_t result_val = (*(*5ca114_1 + 0xc))(5ca114_1, &var_7e4);
    void var_400;

    if (result_val)
    {
        Game_DataSymbolLoad(&var_400, "Couldn't get device caps");
        int32_t var_808 = DDERR_GENERIC(result_val);
        void* var_80c = &var_400;
        Error_Show("%s\n\nDirectX error message: %s");

        while (true)
            /* nop */

        return;
    }

    int32_t var_6f8 = 0x17c;
    int32_t var_57c = 0x17c;
    int32_t* 5ca10c_1 = g_5ca10c;
    int32_t eax_2 = (*(*5ca10c_1 + 0x2c))(5ca10c_1, &var_6f8, &var_57c);

    if (!eax_2)
    {
        Game_DataSymbolLoad(arg1, "Direct3D hardware caps\n----------------------\n\n");
        char* var_804_3 = arg1;
        Game_DataSymbolLoad(arg1, "%sRasterization caps\n");
        char* var_810 = arg1;
        Game_DataSymbolLoad(arg1, "%s  ZBuffer formats:\n");
        int32_t* 5ca110_1 = g_5ca110;
        (*(*5ca110_1 + 0x18))(5ca110_1, base_val, Display_GetDDErrStr, arg1);
        void* eax_4 = &data_53b688;
        int32_t var_7a0;

        if (!(var_7a0 & 0x40000))
            eax_4 = &data_53b684;

        void* var_7fc_3 = eax_4;
        char* var_800_5 = arg1;
        Game_DataSymbolLoad(arg1, "%s  WBuffer                %s\n");
        void* eax_6 = &data_53b688;

        if (!(*(&var_7a0 + 1) & 0x40))
            eax_6 = &data_53b684;

        void* var_7fc_4 = eax_6;
        char* var_800_6 = arg1;
        Game_DataSymbolLoad(arg1, "%s  Depth bias             %s\n");
        void* eax_8 = &data_53b688;

        if (!(var_7a0 & 0x200000))
            eax_8 = &data_53b684;

        void* var_7fc_5 = eax_8;
        char* var_800_7 = arg1;
        Game_DataSymbolLoad(arg1, "%s  ZFog                   %s\n");
        void* eax_10 = &data_53b688;

        if (!(var_7a0 & 0x100000))
            eax_10 = &data_53b684;

        void* var_7fc_6 = eax_10;
        char* var_800_8 = arg1;
        Game_DataSymbolLoad(arg1, "%s  WFog                   %s\n");
        void* eax_12 = &data_53b688;

        if (!(var_7a0 & 0x10000))
            eax_12 = &data_53b684;

        void* var_7fc_7 = eax_12;
        char* var_800_9 = arg1;
        Game_DataSymbolLoad(arg1, "%s  Range fog              %s\n");
        void* eax_14 = &data_53b688;

        if (!(0x100 & var_7a0))
            eax_14 = &data_53b684;

        void* var_7fc_8 = eax_14;
        char* var_800_10 = arg1;
        Game_DataSymbolLoad(arg1, "%s  Per-pixel fog          %s\n");
        void* eax_17 = &data_53b688;

        if (!(var_7a0 & 0x80))
            eax_17 = &data_53b684;

        void* var_7fc_9 = eax_17;
        char* var_800_11 = arg1;
        Game_DataSymbolLoad(arg1, "%s  Per-vertex fog         %s\n");
        void* eax_19 = &data_53b688;

        if (!(*(&var_7a0 + 1) & 0x80))
            eax_19 = &data_53b684;

        void* var_7fc_10 = eax_19;
        char* var_800_12 = arg1;
        Game_DataSymbolLoad(arg1, "%s  Scene capture          %s\n");
        void* eax_21 = &data_53b688;

        if (!(var_7a0 & 0x80000))
            eax_21 = &data_53b684;

        void* var_7fc_11 = eax_21;
        char* var_800_13 = arg1;
        Game_DataSymbolLoad(arg1, "%s  Transp. sorting        %s\n");
        void* eax_23 = &data_53b688;

        if (!(*(&var_7a0 + 1) & 8))
            eax_23 = &data_53b684;

        void* var_7fc_12 = eax_23;
        char* var_800_14 = arg1;
        Game_DataSymbolLoad(arg1, "%s  Antialiasing           %s\n");
        void* eax_25 = &data_53b688;

        if (!(var_7a0 & 0x20000))
            eax_25 = &data_53b684;

        void* var_7fc_13 = eax_25;
        char* var_800_15 = arg1;
        Game_DataSymbolLoad(arg1, "%s  Anisotropic filtering  %s\n");
        void* eax_27 = &data_53b688;

        if (!(*(&var_7a0 + 1) & 0x20))
            eax_27 = &data_53b684;

        void* var_7fc_14 = eax_27;
        char* var_800_16 = arg1;
        Game_DataSymbolLoad(arg1, "%s  Mipmap lod bias        %s\n");
        void* eax_30 = &data_53b688;

        if (!(var_7a0 & 0x20))
            eax_30 = &data_53b684;

        void* var_7fc_15 = eax_30;
        char* var_800_17 = arg1;
        Game_DataSymbolLoad(arg1, "%s  Subpixel rasterizing   %s\n\n");
        char* var_80c_3 = arg1;
        Game_DataSymbolLoad(arg1, "%sTexture caps\n");
        void* eax_33 = &data_53b688;
        char var_788;

        if (!(var_788 & 2))
            eax_33 = &data_53b684;

        void* var_7fc_16 = eax_33;
        char* var_800_18 = arg1;
        Game_DataSymbolLoad(arg1, "%s  Must have size 2^x     %s\n");
        void* eax_35 = &data_53b688;

        if (!(0x100 & var_788))
            eax_35 = &data_53b684;

        void* var_7fc_17 = eax_35;
        char* var_800_19 = arg1;
        Game_DataSymbolLoad(arg1, "%s  Can have size not 2^x  %s\n\n");
        char* var_80c_4 = arg1;
        Game_DataSymbolLoad(arg1, "%sResources in use\n");
        int32_t 5ca124_1 = g_5ca124;
        char* var_81c = arg1;
        Game_DataSymbolLoad(arg1, "%s  Textures created       %d\n");
        var_800_19 = g_5ca128 * 9.53674316fe-07f;
        char* var_804_5 = arg1;
        Game_DataSymbolLoad(arg1, "%s  Texture footprint      %.2f mb\n");
        int32_t var_7e8 = 0;
        int32_t var_6bc;
        int32_t var_6b8;
        var_800_19 = (var_6bc - var_6b8) * 9.53674316fe-07f;
        char* var_804_6 = arg1;
        return Game_DataSymbolLoad(arg1, "%s  VRAM usage             %.2f mb\n");
    }

    Game_DataSymbolLoad(&var_400, "Couldn't get driver caps");
    int32_t var_808_1 = DDERR_GENERIC(eax_2);
    void* var_80c_1 = &var_400;
    Error_Show("%s\n\nDirectX error message: %s");

    while (true)
        /* nop */
}
