// IGI native provenance: DefineHumanPlayerGeneral - 0x00410070 - CFG score 97.2% (PASS; structural only); runtime behavior not verified.
// Evidence: 00410070-DefineHumanPlayerGeneral.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "DefineHumanPlayerGeneral.h"
int32_t DefineHumanPlayerGeneral(long double context , long double param_2 , long double param_3 , long double param_4 , long double param_5 , long double param_6 , long double param_7 , long double param_8 , int32_t param_9, float param_10 )

// Sig: unknown DefineHumanPlayerGeneral(unknown param1, unknown param2)
// Note: Registered at 0x41001B via registrar 0x4B8890 (push 0x410070 +
// 'DefineHumanPlayerGeneral'), argc bounds (0, -1). Config-style Define* parser
// (326 bytes), same family as cataloged Define* / *ParseConfigFile natives.
// Verified: r2 forced-analysis confirmed exact start (size 326); P3 byte-level
// name<->address binding at registrar callsite 0x41001B via 0x4B8890; P6
// SHA-256(first 32 code
// bytes)=cea3d514b310551a5dcdc448e743fdd14a408a521345a0e885cddac78040f965;
// re-agent reverser/checker loop ran on this native (C decompilation pending
// ARM64 native port).
{
    float item_30 = 0.0f;
    Profile_ValueSet(param_10, item_30);
    g_56e1e8 = context;
    Profile_ValueSet(param_10, 1.40129846e-45.0f);
    g_56e1ec = param_2 * 4096000.0f * 9.25925906e-06.0f;
    Profile_ValueSet(param_10, 2.80259693e-45.0f);
    g_56e1f0 = param_3 * 4096000.0f * 9.25925906e-06.0f;
    Profile_ValueSet(param_10, 4.20389539e-45.0f);
    g_56e1f4 = param_4 * 4096000.0f * 9.25925906e-06.0f;
    Profile_ValueSet(param_10, 5.60519386e-45.0f);
    g_56e1f8 = param_5 * 4096.0;
    Profile_ValueSet(param_10, 7.00649232e-45.0f);
    g_56e1fc = param_6 * 4096.0;
    Profile_ValueSet(param_10, 8.40779079e-45.0f);
    g_56e200 = param_7 * 30.0;
    Profile_ValueSet(param_10, 9.80908925e-45.0f);
    float dest_val = 1.26116862e-44.0f;
    g_56e204 = param_8;
    item_30 = 1.12103877e-44.0f;
    Profile_ValueSet(param_10, item_30);
    g_56e208 = context;
    int16_t idx = 9;
    float* context_val = &g_5389f8;

    do
    {
        float data_1 = dest_val;
        dest_val += 1;
        item_30 = data_1;
        Profile_ValueSet(param_10, item_30);
🚫🚫🚫        *context_val =
        /* unimplemented  {fstp dword [context_val], fp0} */
        idx += 1;
        context_val = &context_val[4];
    } while (dest_val - 9 < 0x11);

    for (float* i = &g_538b08; i < &g_538c18; i = &i[4])
    {
        float data_2 = dest_val;
        dest_val += 1;
        item_30 = data_2;
        Profile_ValueSet(param_10, item_30);
🚫🚫🚫        *i =
        /* unimplemented  {fstp dword [context_val], fp0} */
        idx += 1;
    }

    int32_t item_18 = 1;
    int32_t item_10 = 0;
    int32_t item_c = 0x3ff00000;
    char* item_8 = &g_567c74;
    memcpy(param_9, &item_18, 0x18);
    return param_9;
}
