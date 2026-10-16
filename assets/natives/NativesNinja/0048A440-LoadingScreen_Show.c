#include "0048A440-LoadingScreen_Show.h"
/* 0x0048a440 LoadingScreen_Show full linked: callers=3 callees=19 */
int32_t* LoadingScreen_Show(int32_t a1)

// Sig: void LoadingScreen_Show(int picVariant)
// Note: Shows the LOADING SCREEN: allocates a 0x1C-byte screen object, queries
// the active display mode (0x491CF0), and loads
// "LOCAL:menusystem/loadingscreen.res" with picture
// "LOCAL:menusystem/loading.pic" - or "loading_us.pic" for USA country builds.
// Param: picVariant = loading-screen type selector. Call before long loads so
// the player sees feedback.
{
    int32_t var_4c = 4;
    void* var_50 = 0x1c;
    int32_t* result = Mem_Alloc(var_50, var_4c);
    result[1] = 0;
    *result = a1;
    int32_t eax_3;
    int32_t edx;
    edx = HIGHD(g_c28b44 - 0x280);
    eax_3 = LOWD(g_c28b44 - 0x280);
    result[2] = ((eax_3 - edx) >> 1) + 0x28;
    int32_t eax_9;
    int32_t edx_1;
    edx_1 = HIGHD(g_c28b48 - 0x1e0);
    eax_9 = LOWD(g_c28b48 - 0x1e0);
    result[3] = ((eax_9 - edx_1) >> 1) + 0x1b8;
    sub_498380(&result[4], 0x230, 0xa);
    int32_t ecx_1;
    int32_t edi_1;
    edi_1 = __memfill_u32(result[6], 0x7f00, 0x15e0);
    int32_t var_34;
    sub_498380(&var_34, g_c28b44, g_c28b48);
    sub_4b0fd0(sub_498370());
    int32_t* eax_15;
    void* ecx_2;
    int32_t edx_3;
    eax_15 = sub_498410(&var_34);
    char* var_78 = "LOCAL:menusystem/loadingscreen.res";
    int32_t* eax_16 = Resource_Load(eax_15, edx_3, ecx_2, nullptr);
    char* var_4c_1;

    if (sub_48f2d0())
        var_4c_1 = "LOCAL:menusystem/loading_us.pic";
    else
        var_4c_1 = "LOCAL:menusystem/loading.pic";

    int32_t* eax_18 = sub_4b6db0(var_4c_1);
    eax_18[8] = 0xffffffff;
    int32_t eax_21;
    int32_t edx_4;
    edx_4 = HIGHD(g_c28b44 - 0x280);
    eax_21 = LOWD(g_c28b44 - 0x280);
    eax_18[1] = (eax_21 - edx_4) >> 1;
    int32_t eax_26;
    int32_t edx_5;
    edx_5 = HIGHD(g_c28b48 - 0x1e0);
    eax_26 = LOWD(g_c28b48 - 0x1e0);
    eax_18[2] = (eax_26 - edx_5) >> 1;
    sub_4b6e60(eax_18);
    sub_4b0f90();
    void var_28;
    __builtin_memset(&var_28, 0, 0x28);
    int32_t var_24 = sub_491dc0();
    int32_t var_2c;
    int32_t var_8 = var_2c;
    int32_t eax_31 = var_34;
    int32_t var_10 = eax_31;
    int32_t var_18 = 0;
    var_50 = &var_28;
    int32_t var_1c = eax_31 << 2;
    int32_t var_14 = 0;
    int32_t var_30;
    int32_t var_c = var_30;
    int32_t var_4 = 1;
    sub_491d70(var_50);
    sub_4983d0(&var_34);
    sub_4b6e30(eax_18);
    Resource_Flush(eax_16);
    sub_48a620(result, 0);
    return result;
}
