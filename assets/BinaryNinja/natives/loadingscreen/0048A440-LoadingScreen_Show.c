#include "LoadingScreen_Show.h"
int32_t* LoadingScreen_Show(int32_t a1)

// Sig: void LoadingScreen_Show(int picVariant)
// Note: Shows the LOADING SCREEN: allocates a 0x1C-byte screen object, queries
// the active display mode (0x491CF0), and loads
// "LOCAL:menusystem/loadingscreen.res" with picture
// "LOCAL:menusystem/loading.pic" - or "loading_us.pic" for USA country builds.
// Param: picVariant = loading-screen type selector. Call before long loads so
// the player sees feedback.
{
    int32_t v_4c = 4;
    void* v_50 = 0x1c;
    int32_t* result = Mem_Alloc(v_50, v_4c);
    result[1] = 0;
    *result = a1;
    int32_t valA3;
    int32_t tmpD;
    tmpD = HIGHD(g_c28b44 - 0x280);
    valA3 = LOWD(g_c28b44 - 0x280);
    result[2] = ((valA3 - tmpD) >> 1) + 0x28;
    int32_t valA9;
    int32_t tmpD1;
    tmpD1 = HIGHD(g_c28b48 - 0x1e0);
    valA9 = LOWD(g_c28b48 - 0x1e0);
    result[3] = ((valA9 - tmpD1) >> 1) + 0x1b8;
    Display_SetDisplayMode_16(&result[4], 0x230, 0xa);
    int32_t objC1;
    int32_t dstD1;
    dstD1 = __memfill_u32(result[6], 0x7f00, 0x15e0);
    int32_t v_34;
    Display_SetDisplayMode_16(&v_34, g_c28b44, g_c28b48);
    Sys_ExecuteBytecode_3(Display_CloseDevice_16());
    int32_t* valA15;
    void* objC2;
    int32_t tmpD3;
    valA15 = Display_SwapBuffers_16(&v_34);
    char* v_78 = "LOCAL:menusystem/loadingscreen.res";
    int32_t* valA16 = Resource_Load(valA15, tmpD3, objC2, nullptr);
    char* v_4c_1;

    if (FX_SmokeEmit_26())
        v_4c_1 = "LOCAL:menusystem/loading_us.pic";
    else
        v_4c_1 = "LOCAL:menusystem/loading.pic";

    int32_t* valA18 = Sys_ResolveSymbol_17(v_4c_1);
    valA18[8] = 0xffffffff;
    int32_t valA21;
    int32_t tmpD4;
    tmpD4 = HIGHD(g_c28b44 - 0x280);
    valA21 = LOWD(g_c28b44 - 0x280);
    valA18[1] = (valA21 - tmpD4) >> 1;
    int32_t valA26;
    int32_t tmpD5;
    tmpD5 = HIGHD(g_c28b48 - 0x1e0);
    valA26 = LOWD(g_c28b48 - 0x1e0);
    valA18[2] = (valA26 - tmpD5) >> 1;
    Sys_AllocateMemory_18(valA18);
    Sys_CloseFileStream_3();
    void v_28;
    __builtin_memset(&v_28, 0, 0x28);
    int32_t v_24 = Display_CreateSurface_4();
    int32_t v_2c;
    int32_t v_8 = v_2c;
    int32_t valA31 = v_34;
    int32_t v_10 = valA31;
    int32_t v_18 = 0;
    v_50 = &v_28;
    int32_t v_1c = valA31 << 2;
    int32_t v_14 = 0;
    int32_t v_30;
    int32_t v_c = v_30;
    int32_t v_4 = 1;
    Display_RestoreDevice_4(v_50);
    Display_SyncVSync_16(&v_34);
    Sys_CheckHeap_17(valA18);
    Resource_Flush(valA16);
    FX_FragmentSimulate_16(result, 0);
    return result;
}
