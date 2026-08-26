#include "Hook.hpp"
#include "../HookDetours.hpp"
using namespace IGI;
using namespace std;

#include <atomic>
extern std::atomic<bool> g_improved_map;
extern std::atomic<bool> g_improved_binoculars;

#include <ddraw.h>
#include "../Camera/Camera.hpp"
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>

typedef void(__cdecl* BinocularsDraw_t)(void*);
static BinocularsDraw_t oBinocularsDraw = nullptr;

// Retail Binoculars_Draw calls this detector/contact pass after rendering the
// optics.  When the enhanced target pass is enabled, letting the retail pass
// run as well produces the duplicate red boxes observed in the binocular view.
// Ghidra recovered 0x00471B60 as a one-argument cdecl function operating on
// the binocular context, so detour the verified entry point and retain the
// retail behavior whenever the enhancer is disabled.
typedef void(__cdecl* BinocularDetectorPass_t)(void*);
static BinocularDetectorPass_t oBinocularDetectorPass = nullptr;

static void __cdecl hkBinocularDetectorPass(void* binocularContext) {
    if (g_improved_binoculars) {
        static bool loggedSuppression = false;
        if (!loggedSuppression) {
            loggedSuppression = true;
            LOG_INFO("ENHANCER: suppressed retail binocular detector pass while enhanced ESP is active");
        }
        return;
    }

    if (oBinocularDetectorPass) oBinocularDetectorPass(binocularContext);
}

typedef void(__cdecl* WorldToScreen_t)(
    const float* pViewMatrix,
    float* pOutScreenXY,
    float* pOutDepth,
    const double* pWorldPos3D
);
static WorldToScreen_t fnWorldToScreen = (WorldToScreen_t)0x00470EC0;

// Ghidra/r2 recover this as a 15-word cdecl stack layout.  The first six
// words are two 2D endpoints plus their z values, the next six are the RGB
// values for the two endpoints, and the last three are alpha/render flags.
// The old DLL passed the colours as integer bit patterns and used the wrong
// argument count, which is why its experimental wireframe path was unsafe.
typedef void(__cdecl* DrawLine2D_t)(
    float x1, float y1, uint32_t z1,
    float x2, float y2, uint32_t z2,
    float red1, float green1, float blue1,
    float red2, float green2, float blue2,
    float alpha, uint32_t flags, uint32_t unused
);
static DrawLine2D_t fnDrawLine2D = (DrawLine2D_t)0x004B5730;

// The retail binocular renderer creates and owns this text object at
// Binoculars_Draw context +0x20.  Ghidra recovered 0x004B6E90 as the glyph
// buffer writer and 0x004B6F50 as the submitter.  Reusing that live object
// keeps the enhancer on the game's own font/texture path instead of calling
// the unrelated low-level glyph copier with a fabricated object.
typedef void(__cdecl* NativeTextWrite_t)(void* textObject, const char* text);
typedef void(__cdecl* NativeTextSubmit_t)(void* textObject);
static NativeTextWrite_t fnNativeTextWrite = (NativeTextWrite_t)0x004B6E90;
static NativeTextSubmit_t fnNativeTextSubmit = (NativeTextSubmit_t)0x004B6F50;

struct NativeTextObjectView {
    uint32_t glyphData;
    float x;
    float y;
    uint32_t lineWidths;
    float scale;
    float red;
    float green;
    float blue;
    uint32_t renderFlags;
    uint32_t alignmentFlags;
};

typedef int*(__cdecl* GetHumanEntities_t)();
static GetHumanEntities_t fnGetHumanEntities = (GetHumanEntities_t)0x00460C60;

typedef int*(__cdecl* GetVideoConfig_t)();
static GetVideoConfig_t fnGetVideoConfig = (GetVideoConfig_t)0x00491CF0;

static constexpr uint32_t kNativeOne = 0x3F800000;
static constexpr uint32_t kNativeLineFlags = 0x80000;

static inline bool NativeFinite(float value) {
    return std::isfinite(value);
}

static inline void DrawNativeLine(
    float x1, float y1, float x2, float y2,
    float red, float green, float blue, float alpha = 1.0f) {
    if (!NativeFinite(x1) || !NativeFinite(y1) ||
        !NativeFinite(x2) || !NativeFinite(y2)) {
        return;
    }

    fnDrawLine2D(
        x1, y1, kNativeOne,
        x2, y2, kNativeOne,
        red, green, blue,
        red, green, blue,
        alpha, kNativeLineFlags, 0);
}

static inline void DrawNativeCross(float x, float y, float radius,
                                   float red, float green, float blue) {
    DrawNativeLine(x - radius, y, x + radius, y, red, green, blue);
    DrawNativeLine(x, y - radius, x, y + radius, red, green, blue);
}

static inline void DrawNativeDiamond(float x, float y, float radius,
                                     float red, float green, float blue) {
    DrawNativeLine(x, y - radius, x + radius, y, red, green, blue);
    DrawNativeLine(x + radius, y, x, y + radius, red, green, blue);
    DrawNativeLine(x, y + radius, x - radius, y, red, green, blue);
    DrawNativeLine(x - radius, y, x, y - radius, red, green, blue);
}

static inline bool ProjectNativeWorld(const double* world, float* screen,
                                      float* depth) {
    if (!world || !screen || !depth) return false;
    fnWorldToScreen((const float*)0x00BCAAE0, screen, depth, world);
    return NativeFinite(screen[0]) && NativeFinite(screen[1]) &&
           NativeFinite(*depth) && *depth > 0.1f;
}

// Single accessor for both dimensions: one fnGetVideoConfig call, one
// validation, fallbacks matching the retail defaults.
static void ReadNativeScreenSize(int* outWidth, int* outHeight) {
    int width = 640;
    int height = 480;
    __try {
        int* video = fnGetVideoConfig();
        if (video && video[1] > 0 && video[2] > 0 &&
            video[1] < 16384 && video[2] < 16384) {
            width = video[1];
            height = video[2];
        }
    } __except (EXCEPTION_EXECUTE_HANDLER) {}
    if (outWidth) *outWidth = width;
    if (outHeight) *outHeight = height;
}

static void ShowRenderPathStatus(const char* text) {
    static DWORD lastBinocularStatus = 0;
    static DWORD lastMapStatus = 0;
    if (!text) return;

    // StatusMessageShow is game-thread-owned.  This helper is called only from
    // the verified render hooks, never from the enhancer worker thread.
    DWORD* last = strstr(text, "BINOCULAR") ? &lastBinocularStatus : &lastMapStatus;
    DWORD now = GetTickCount();
    if (*last != 0 && now - *last < 1000) return;
    *last = now;

    __try {
        // Call the trampoline (StatusMsgOut), not the hooked entry point
        // StatusMsg - after EnableHooks() the patched prologue redirects to
        // StatusMsgDetour, so calling StatusMsg here would re-enter our own
        // detour from inside other render hooks.
        const int status = *(int*)0x00A758AC;
        if (status && StatusMsgOut) {
            StatusMsgOut(status, text, GAME_STATUSSCREEN_NOTE,
                         // 0x00485970 copies this argument as a C string.  The
                         // retail callers pass the global byte-string storage,
                         // not the address of a one-byte stack local.
                         (const char*)0x00567C74);
        }
    } __except (EXCEPTION_EXECUTE_HANDLER) {}
}

static bool DrawNativeBinocularText(void* binocularContext, const char* text,
                                    float x, float y,
                                    float red, float green, float blue) {
    if (!binocularContext || !text || !*text) return false;

    __try {
        void* textObject = *(void**)((char*)binocularContext + 0x20);
        if (!textObject) return false;

        auto* view = reinterpret_cast<NativeTextObjectView*>(textObject);
        const NativeTextObjectView saved = *view;

        // Retail's text shader uses a 0..128 modulation range, not 0..255.
        view->x = x;
        view->y = y;
        view->red = red;
        view->green = green;
        view->blue = blue;
        view->scale = 1.0f;

        fnNativeTextWrite(textObject, text);
        fnNativeTextSubmit(textObject);

        *view = saved;
        return true;
    } __except (EXCEPTION_EXECUTE_HANDLER) {
        return false;
    }
}

static inline void Draw3DBoxEdge(const float* ptA, const float* ptB,
                                 float red = 128.0f,
                                 float green = 0.0f,
                                 float blue = 0.0f) {
    if (!ptA || !ptB) return;
    DrawNativeLine(ptA[0], ptA[1], ptB[0], ptB[1], red, green, blue, 1.0f);
}

static int RenderEnhancedBinocularTargets() {
    int targetCount = 0;
    __try {
        int* pEntityList = fnGetHumanEntities ? fnGetHumanEntities() : nullptr;
        if (!pEntityList || *pEntityList <= 0) return 0;

        int totalEntities = *pEntityList;
        if (totalEntities > 128) totalEntities = 128;
        int* pEntities = pEntityList + 2;
        const int currentHuman = READ_PTR(humanplayer_ptr);

        for (int i = 0; i < totalEntities; i++) {
            int entityAddr = pEntities[i];
            if (entityAddr == 0 || entityAddr == currentHuman) continue;

            char isAlive = *(char*)(entityAddr + 0xCF6);
            char isInvisible = *(char*)(entityAddr + 0xCF5);
            if (!isAlive || isInvisible) continue;

            double posX = *(double*)(entityAddr + 0x20);
            double posY = *(double*)(entityAddr + 0x28);
            double posZ = *(double*)(entityAddr + 0x30);

            // Human bounding extents in IGI world units (4096 units = 1 meter)
            // Width = 0.5m (2048 units), Depth = 0.5m (2048 units), Height = 1.85m (7577 units)
            double dx = 2048.0;
            double dy = 2048.0;
            double dz = 7577.0;

            double v[8][3] = {
                { posX - dx, posY - dy, posZ },
                { posX + dx, posY - dy, posZ },
                { posX + dx, posY + dy, posZ },
                { posX - dx, posY + dy, posZ },
                { posX - dx, posY - dy, posZ + dz },
                { posX + dx, posY - dy, posZ + dz },
                { posX + dx, posY + dy, posZ + dz },
                { posX - dx, posY + dy, posZ + dz }
            };

            float screenPts[8][2];
            bool valid[8];

            for (int k = 0; k < 8; k++) {
                float depth = 0.0f;
                valid[k] = ProjectNativeWorld(v[k], screenPts[k], &depth);
            }

            // The native detector uses 0x471f60/0x4b5860 for its compact
            // rectangles.  The enhancer adds a full body box using the same
            // WorldToScreen context, so it follows camera/FOV/zoom changes.
            if (valid[0] && valid[1]) Draw3DBoxEdge(screenPts[0], screenPts[1]);
            if (valid[1] && valid[2]) Draw3DBoxEdge(screenPts[1], screenPts[2]);
            if (valid[2] && valid[3]) Draw3DBoxEdge(screenPts[2], screenPts[3]);
            if (valid[3] && valid[0]) Draw3DBoxEdge(screenPts[3], screenPts[0]);
            if (valid[4] && valid[5]) Draw3DBoxEdge(screenPts[4], screenPts[5]);
            if (valid[5] && valid[6]) Draw3DBoxEdge(screenPts[5], screenPts[6]);
            if (valid[6] && valid[7]) Draw3DBoxEdge(screenPts[6], screenPts[7]);
            if (valid[7] && valid[4]) Draw3DBoxEdge(screenPts[7], screenPts[4]);
            if (valid[0] && valid[4]) Draw3DBoxEdge(screenPts[0], screenPts[4]);
            if (valid[1] && valid[5]) Draw3DBoxEdge(screenPts[1], screenPts[5]);
            if (valid[2] && valid[6]) Draw3DBoxEdge(screenPts[2], screenPts[6]);
            if (valid[3] && valid[7]) Draw3DBoxEdge(screenPts[3], screenPts[7]);

            ++targetCount;
        }
    } __except (EXCEPTION_EXECUTE_HANDLER) {
    }
    return targetCount;
}

static int RenderEnhancedComputerMapOnce();

typedef void(__cdecl* MeshSkinBones_t)(void* param_1);
static MeshSkinBones_t oMeshSkinBones = nullptr;

static void __cdecl hkMeshSkinBones(void* param_1) {
    // Mesh_SkinBones runs once per SKINNED MESH, not once per frame - it
    // cannot provide a frame boundary, so the enhanced-map overlay must NOT
    // render here (it would redraw several times per frame and alpha-blend
    // over itself).  The once-per-frame path lives in hkBinocularsDraw.
    if (oMeshSkinBones) oMeshSkinBones(param_1);
}

static void __cdecl hkBinocularsDraw(void* pContext) {
    if (oBinocularsDraw) oBinocularsDraw(pContext);

    static bool loggedBinocularPath = false;
    if (!loggedBinocularPath) {
        loggedBinocularPath = true;
        LOG_INFO("ENHANCER: verified Binoculars_Draw game-thread path reached");
    }

    // Per-frame enhanced zoom. The retail engine rebuilds the projection
    // from HumanPlayer+0x1E4/+0x1E8 every frame (and its own zoom stepper
    // fcn.004739D0 rewrites those tangents), so the enhancer zoom must be
    // re-applied here on the game thread, after the retail view update and
    // while the binoculars are actually open. Guarded inside.
    ENHANCER::APPLY_BINOCULARS_FRAME(g_improved_binoculars);

    // Some retail missions leave HumanPlayerInput's map-expression empty,
    // so the ComputerMap task is registered but never entered.  The
    // binocular/HUD routine is a verified game-thread presentation boundary;
    // use it as the guarded fallback for the enhancer map toggle.
    if (g_improved_map) {
        static bool loggedMapFallback = false;
        if (!loggedMapFallback) {
            loggedMapFallback = true;
            LOG_INFO("ENHANCER: enhanced tactical-map overlay using verified HUD frame path");
        }
        RenderEnhancedComputerMapOnce();
    }

    if (!g_improved_binoculars) return;

    __try {
        const int targetCount = RenderEnhancedBinocularTargets();
        // The native routine already owns the range text and compass.  This
        // status line is the safe game-native text channel for the enhancer;
        // unlike the old worker-thread call, it runs while the retail HUD is
        // being rendered and its strings are copied by 0x00485970.
        char status[96]{};
        sprintf_s(status, "ENHANCED BINOCULARS  //  CONTACTS %02d", targetCount);
        ShowRenderPathStatus(status);

        const float green = 96.0f;
        int width = 640;
        int height = 480;
        ReadNativeScreenSize(&width, &height);
        const float inset = (float)(std::max)(12, width / 32);
        const float arm = (float)(std::max)(18, width / 64);

        // Thin vector corner rails match the OpenIGI optics chrome while the
        // retail authored binocular mask remains underneath.
        DrawNativeLine(inset, inset, inset + arm, inset, 0, green, 0, 1.0f);
        DrawNativeLine(inset, inset, inset, inset + arm, 0, green, 0, 1.0f);
        DrawNativeLine(width - inset, inset, width - inset - arm, inset, 0, green, 0, 1.0f);
        DrawNativeLine(width - inset, inset, width - inset, inset + arm, 0, green, 0, 1.0f);
        DrawNativeLine(inset, height - inset, inset + arm, height - inset, 0, green, 0, 1.0f);
        DrawNativeLine(inset, height - inset, inset, height - inset - arm, 0, green, 0, 1.0f);
        DrawNativeLine(width - inset, height - inset, width - inset - arm, height - inset, 0, green, 0, 1.0f);
        DrawNativeLine(width - inset, height - inset, width - inset, height - inset - arm, 0, green, 0, 1.0f);

        char contactText[48]{};
        sprintf_s(contactText, "CONTACTS  %02d", targetCount);
        const bool drewTitle = DrawNativeBinocularText(
            pContext, "OPTICS  //  ENHANCED", inset + 6.0f,
            (float)height - inset - 34.0f, 96.0f, 128.0f, 96.0f);
        const bool drewContacts = DrawNativeBinocularText(
            pContext, contactText, inset + 6.0f,
            (float)height - inset - 16.0f, 128.0f, 128.0f, 128.0f);
        static bool loggedNativeTextPath = false;
        if ((drewTitle || drewContacts) && !loggedNativeTextPath) {
            loggedNativeTextPath = true;
            LOG_INFO("ENHANCER: verified native binocular text path active");
        }
    } __except (EXCEPTION_EXECUTE_HANDLER) {
        LOG_WARNING("ENHANCER: enhanced binocular render failed safely");
    }
}

static DWORD g_lastMapOverlayTick = 0;

static int RenderEnhancedComputerMap() {
    int contacts = 0;
    __try {
        int width = 640;
        int height = 480;
        ReadNativeScreenSize(&width, &height);
        const float green = 64.0f;
        const float red = 128.0f;
        const float cyan = 96.0f;

        // Full-screen vector chrome: the retail map remains the live terrain
        // underneath, while these lines provide the remaster's map grid and
        // edge rails at the actual back-buffer resolution.
        const float inset = (float)(std::max)(8, width / 80);
        DrawNativeLine(inset, inset, width - inset, inset, green, green, green, 0.7f);
        DrawNativeLine(width - inset, inset, width - inset, height - inset, green, green, green, 0.7f);
        DrawNativeLine(width - inset, height - inset, inset, height - inset, green, green, green, 0.7f);
        DrawNativeLine(inset, height - inset, inset, inset, green, green, green, 0.7f);

        for (int i = 1; i < 8; ++i) {
            const float x = width * (float)i / 8.0f;
            const float y = height * (float)i / 8.0f;
            DrawNativeLine(x, inset, x, height - inset, green, green, green, 0.35f);
            DrawNativeLine(inset, y, width - inset, y, green, green, green, 0.35f);
        }

        int* entityList = fnGetHumanEntities ? fnGetHumanEntities() : nullptr;
        if (!entityList || *entityList <= 0) return 0;
        int totalEntities = (std::min)(*entityList, 128);
        int* entities = entityList + 2;
        const int player = READ_PTR(humanplayer_ptr);

        double playerX = 0.0;
        double playerY = 0.0;
        if (player) {
            playerX = *(double*)(player + 0x20);
            playerY = *(double*)(player + 0x28);
        }

        // OpenIGI's tactical computer is a top-down world view, not the
        // gameplay camera projected onto a HUD.  Use the verified human
        // position fields directly and keep a bounded tactical radius so the
        // map remains useful even when the retail map task is absent.
        const double mapWorldRadius = 600000.0;
        const double mapScale = (double)(std::min)(width, height) * 0.42 / mapWorldRadius;

        for (int i = 0; i < totalEntities; ++i) {
            const int entity = entities[i];
            if (!entity) continue;
            const bool isPlayer = entity == player;
            if (!isPlayer && (!*(char*)(entity + 0xCF6) || *(char*)(entity + 0xCF5))) continue;

            const double worldX = *(double*)(entity + 0x20);
            const double worldY = *(double*)(entity + 0x28);
            float screen[2] = {
                (float)((double)width * 0.5 + (worldX - playerX) * mapScale),
                (float)((double)height * 0.5 - (worldY - playerY) * mapScale)
            };
            if (!NativeFinite(screen[0]) || !NativeFinite(screen[1])) continue;
            if (screen[0] < inset || screen[0] > width - inset ||
                screen[1] < inset || screen[1] > height - inset) continue;

            if (isPlayer) {
                DrawNativeCross(screen[0], screen[1], 9.0f, cyan, cyan, cyan);
                DrawNativeDiamond(screen[0], screen[1], 13.0f, cyan, cyan, cyan);
            } else {
                DrawNativeDiamond(screen[0], screen[1], 8.0f, red, 0.0f, 0.0f);
                ++contacts;
            }
        }

        // Do not call the retail status-message allocator from this high
        // frequency text-print detour.  The retail status object is owned by
        // the current task/UI state and is not valid for every map frame;
        // invoking it here can dereference a null/expired UI object.  The
        // native vector overlay is independent of that optional notification.
    } __except (EXCEPTION_EXECUTE_HANDLER) {
        LOG_WARNING("ENHANCER: enhanced computer-map render failed safely");
    }
    return contacts;
}

static int RenderEnhancedComputerMapOnce() {
    const DWORD now = GetTickCount();
    if (g_lastMapOverlayTick == now) return -1;
    g_lastMapOverlayTick = now;
    return RenderEnhancedComputerMap();
}

// VERIFIED ADDRESS NOTE (no hook installed): MapComputer_Render entry is
// 0x0046A330 (registered as a detour in earlier builds; removed because the
// detour only re-entered the retail routine and logged once).  The enhanced
// tactical-map overlay renders from hkBinocularsDraw instead, which is a
// true once-per-frame game-thread boundary.

Hook::Hook() {
	g_Hook = this;
	Hook::Initialize();
}

Hook::Hook(bool createOnInit) {
	g_Hook = this;
	Hook::Initialize();
	if (createOnInit) {
		if (hook_status == MH_OK) {
			hook_status = CreateHooks();
			if (hook_status == MH_OK) {
				hook_status = EnableHooks();
			}
			else
				LOG_ERROR("Error occurred while creating hooks.");
		}
	}
}

Hook::~Hook() {
	g_Hook = nullptr;
	DisableHooks();
}

bool Hook::Initialize() {
	MH_STATUS mh_status = hook_status = MH_Initialize();
	if (mh_status != MH_OK)
	{
		LOG_ERROR("Minhook Init Error : %s", MH_StatusToString(mh_status));
		return false;
	}
	LOG_INFO("Minhook init success");
	return true;
}

MH_STATUS Hook::Uninitialize() {
	// DisableHooks() must run before this method and all detour frames must
	// already be drained before MinHook releases its hook state.
	extern std::atomic<bool> g_minHookCleaned;
	if (g_minHookCleaned.load(std::memory_order_acquire)) return MH_OK;

	MH_STATUS status = MH_Uninitialize();
	if (status == MH_OK) {
		g_minHookCleaned.store(true, std::memory_order_release);
		LOG_INFO("Minhook uninitialized");
	}
	else {
		LOG_ERROR("Minhook uninitialize error : %s", MH_StatusToString(status));
	}
	return status;
}

MH_STATUS Hook::CreateHooks() {

	if (hook_status != MH_OK) return MH_ERROR_NOT_INITIALIZED;
	MH_STATUS mh_status;
	MH_STATUS first_error = MH_OK;

	// Ghidra/r2 verify both entry points as one-argument cdecl game-thread
	// render paths.  The detours call retail first and add only verified native
	// primitives afterward, so no worker-thread game-state access is needed.
	mh_status = CreateHook((LPVOID)0x00471480, &hkBinocularsDraw, &oBinocularsDraw);
	if (mh_status != MH_OK) LOG_ERROR("BinocularsDraw hook error : %s", MH_StatusToString(mh_status));

	mh_status = CreateHook((LPVOID)0x00471B60, &hkBinocularDetectorPass, &oBinocularDetectorPass);
	if (mh_status != MH_OK) LOG_ERROR("BinocularDetectorPass hook error : %s", MH_StatusToString(mh_status));

	mh_status = CreateHook((LPVOID)0x0049F700, &hkMeshSkinBones, &oMeshSkinBones);
	if (mh_status != MH_OK) LOG_ERROR("MeshSkinBones hook error : %s", MH_StatusToString(mh_status));

	// Do not detour 0x0046A2D0.  Ghidra shows that it owns a transient retail
	// map/render object; drawing the enhancer overlay from that callback can
	// dereference the object's stale +0x20 render pointer (igi.exe+0x10DF41).
	// The stable Mesh_SkinBones/HUD paths above remain the only overlay paths.

	mh_status = MH_OK;//CreateHook(CameraUpdate, &CameraUpdateDetour, &CameraUpdateOut);
	if (mh_status != MH_OK && first_error == MH_OK) first_error = mh_status;
	if (mh_status != MH_OK)LOG_ERROR("CameraUpdate Hooking error : %s", MH_StatusToString(mh_status));

	mh_status = MH_OK;//CreateHook(QTaskListCheck, &QTaskListChecktDetour, &QTaskListCheckOut);
	if (mh_status != MH_OK && first_error == MH_OK) first_error = mh_status;
	if (mh_status != MH_OK)LOG_ERROR("QTaskListCheck Hooking error : %s", MH_StatusToString(mh_status));

	mh_status = MH_OK;// CreateHook(ParseConfig, &ParseConfigDetour, &ParseConfigOut);
	if (mh_status != MH_OK && first_error == MH_OK) first_error = mh_status;
	if (mh_status != MH_OK)LOG_ERROR("ParseConfig Hooking error : %s", MH_StatusToString(mh_status));

	mh_status = MH_OK;//CreateHook(CreateConfig, &CreateConfigDetour, &CreateConfigOut);
	if (mh_status != MH_OK && first_error == MH_OK) first_error = mh_status;
	if (mh_status != MH_OK)LOG_ERROR("CreateConfig Hooking error : %s", MH_StatusToString(mh_status));

	mh_status = CreateHook(StatusMsg, &StatusMsgDetour, &StatusMsgOut);
	if (mh_status != MH_OK && first_error == MH_OK) first_error = mh_status;
	if (mh_status != MH_OK)LOG_ERROR("StatusMsg Hooking error : %s", MH_StatusToString(mh_status));

	mh_status = MH_OK;//CreateHook(GenericPickup, &GenericPickupDetour, &GenericPickupOut);
	if (mh_status != MH_OK && first_error == MH_OK) first_error = mh_status;
	if (mh_status != MH_OK)LOG_ERROR("GenericPickup Hooking error : %s", MH_StatusToString(mh_status));

	mh_status = MH_OK;//CreateHook(WeaponDrop, &WeaponDropDetour, &WeaponDropOut);
	if (mh_status != MH_OK && first_error == MH_OK) first_error = mh_status;
	if (mh_status != MH_OK)LOG_ERROR("WeaponDrop Hooking error : %s", MH_StatusToString(mh_status));

	mh_status = MH_OK;//CreateHook(DebugPlayerData, &DebugPlayerDataDetour, &DebugPlayerDataOut);
	if (mh_status != MH_OK && first_error == MH_OK) first_error = mh_status;
	if (mh_status != MH_OK)LOG_ERROR("DebugPlayerData Hooking error : %s", MH_StatusToString(mh_status));

	mh_status = MH_OK;//CreateHook(DebugSoldierData, &DebugSoldierDataDetour, &DebugSoldierDataOut);
	if (mh_status != MH_OK && first_error == MH_OK) first_error = mh_status;
	if (mh_status != MH_OK)LOG_ERROR("DebugSoldierData Hooking error : %s", MH_StatusToString(mh_status));

	mh_status = MH_OK;//CreateHook(GunPickup, &GunPickupDetour, &GunPickupOut);
	if (mh_status != MH_OK && first_error == MH_OK) first_error = mh_status;
	if (mh_status != MH_OK)LOG_ERROR("GunPickup Hooking error : %s", MH_StatusToString(mh_status));

	mh_status = MH_OK;//CreateHook(AmmoPickup, &AmmoPickupDetour, &AmmoPickupOut);
	if (mh_status != MH_OK && first_error == MH_OK) first_error = mh_status;
	if (mh_status != MH_OK)LOG_ERROR("AmmoPickup Hooking error : %s", MH_StatusToString(mh_status));

	mh_status = CreateHook(ShowError, &ShowErrorDetour, &ShowErrorOut);
	if (mh_status != MH_OK && first_error == MH_OK) first_error = mh_status;
	if (mh_status != MH_OK)LOG_ERROR("ShowError Hooking error : %s", MH_StatusToString(mh_status));

	mh_status = CreateHook(ShowWarning, &ShowWarningDetour, &ShowWarningOut);
	if (mh_status != MH_OK && first_error == MH_OK) first_error = mh_status;
	if (mh_status != MH_OK) LOG_ERROR("ShowWarning Hooking error : %s", MH_StatusToString(mh_status));

	mh_status = MH_OK;//CreateHook(GetPlayerXPHit, &GetPlayerXPHitDetour, &GetPlayerXPHitOut);
	if (mh_status != MH_OK && first_error == MH_OK) first_error = mh_status;
	if (mh_status != MH_OK)LOG_ERROR("GetPlayerXPHit Hooking error : %s", MH_StatusToString(mh_status));

	mh_status = MH_OK;//CreateHook(SoldierViewCam, &SoldierViewCamDetour, &SoldierViewCamOut);
	if (mh_status != MH_OK && first_error == MH_OK) first_error = mh_status;
	if (mh_status != MH_OK)LOG_ERROR("HumanViewCam Hooking error : %s", MH_StatusToString(mh_status));

	mh_status = MH_OK;//CreateHook(SoldierDead, &SoldierDeadDetour, &SoldierDeadOut);
	if (mh_status != MH_OK && first_error == MH_OK) first_error = mh_status;
	if (mh_status != MH_OK)LOG_ERROR("SoldierDead Hooking error : %s", MH_StatusToString(mh_status));

	mh_status = MH_OK;//CreateHook(SoldierHit, &SoldierHitDetour, &SoldierHitOut);
	if (mh_status != MH_OK && first_error == MH_OK) first_error = mh_status;
	if (mh_status != MH_OK)LOG_ERROR("HumanSoldierHit Hooking error : %s", MH_StatusToString(mh_status));

	mh_status = MH_OK;//CreateHook(HumanSoldierDead, &HumanSoldierDeadDetour, &HumanSoldierDeadOut);
	if (mh_status != MH_OK && first_error == MH_OK) first_error = mh_status;
	if (mh_status != MH_OK)LOG_ERROR("HumanXPDead Hooking error : %s", MH_StatusToString(mh_status));

	mh_status = MH_OK;//CreateHook(StatusMessageShow, &StatusMessageShowDetour, &StatusMessageShowOut);
	if (mh_status != MH_OK && first_error == MH_OK) first_error = mh_status;
	if (mh_status != MH_OK)LOG_ERROR("StatusMessageShow Hooking error : %s", MH_StatusToString(mh_status));

	mh_status = MH_OK;//CreateHook(SetGameDataSymbol, &SetGameDataSymbolDetour, &SetGameDataSymbolOut);
	if (mh_status != MH_OK && first_error == MH_OK) first_error = mh_status;
	if (mh_status != MH_OK)LOG_ERROR("SetGameDataSymbol Hooking error : %s", MH_StatusToString(mh_status));

	mh_status = CreateHook(TextPrint, &TextPrintDetour, &TextPrintOut);
	if (mh_status != MH_OK && first_error == MH_OK) first_error = mh_status;
	if (mh_status != MH_OK)LOG_ERROR("TextPrint Hooking error : %s", MH_StatusToString(mh_status));

	mh_status = MH_OK;//CreateHook(GameTextPrint, &GamePrintTextDetour, &GameTextPrintOut);
	if (mh_status != MH_OK && first_error == MH_OK) first_error = mh_status;
	if (mh_status != MH_OK)LOG_ERROR("GameTextPrint Hooking error : %s", MH_StatusToString(mh_status));

	mh_status = MH_OK;//CreateHook(ParseWeaponConfig, &ParseWeaponConfigDetour, &ParseWeaponConfigOut); 
	if (mh_status != MH_OK && first_error == MH_OK) first_error = mh_status;
	if (mh_status != MH_OK) LOG_ERROR("ParseWeaponConfig Hooking error : %s", MH_StatusToString(mh_status));

	mh_status = MH_OK;//CreateHook(StartLevel, &StartLevelDetour, &StartLevelOut);
	if (mh_status != MH_OK && first_error == MH_OK) first_error = mh_status;
	if (mh_status != MH_OK)LOG_ERROR("StartLevel Createhook error : %s", MH_StatusToString(mh_status));

	mh_status = MH_OK;//CreateHook(QuitLvl, &QuitLvlDetour, &QuitLvlOut); 
	if (mh_status != MH_OK && first_error == MH_OK) first_error = mh_status;
	if (mh_status != MH_OK)LOG_ERROR("QuitLvl Createhook error : %s", MH_StatusToString(mh_status));

	mh_status = CreateHook(LoadResourceFile, &LoadResourceDetour, &LoadResourceOut);
	if (mh_status != MH_OK && first_error == MH_OK) first_error = mh_status;
	if (mh_status != MH_OK)LOG_ERROR("LoadResourceFile Createhook error : %s", MH_StatusToString(mh_status));

	mh_status = CreateHook(ResourceUnpack, &ResourceUnpackDetour, &ResourceUnpackOut);
	if (mh_status != MH_OK && first_error == MH_OK) first_error = mh_status;
	if (mh_status != MH_OK)LOG_ERROR("ResourceUnpack Createhook error : %s", MH_StatusToString(mh_status));

	mh_status = MH_OK;//CreateHook(IsResourceLoaded, &IsResourceLoadedDetour, &IsResourceLoadedOut);
	if (mh_status != MH_OK && first_error == MH_OK) first_error = mh_status;
	if (mh_status != MH_OK)LOG_ERROR("IsResourcePacked Createhook error : %s", MH_StatusToString(mh_status));

	mh_status = MH_OK;//CreateHook(ResourceUnload, &ResourceUnloadDetour, &ResourceUnloadOut);
	if (mh_status != MH_OK && first_error == MH_OK) first_error = mh_status;
	if (mh_status != MH_OK)LOG_ERROR("ResourceUnload Createhook error : %s", MH_StatusToString(mh_status));

	mh_status = MH_OK;//CreateHook(ResourceFlush, &ResourceFlushDetour, &ResourceFlushOut);
	if (mh_status != MH_OK && first_error == MH_OK) first_error = mh_status;
	if (mh_status != MH_OK)LOG_ERROR("ResourceFlush Createhook error : %s", MH_StatusToString(mh_status));

	mh_status = MH_OK;//CreateHook(LoadGameData, &LoadGameDataDetour, &LoadGameDataOut);
	if (mh_status != MH_OK && first_error == MH_OK) first_error = mh_status;
	if (mh_status != MH_OK)LOG_ERROR("LoadGameData Createhook error : %s", MH_StatusToString(mh_status));

	mh_status = MH_OK;//CreateHook(LevelLoad, &LevelLoadDetour, &LevelLoadOut);
	if (mh_status != MH_OK && first_error == MH_OK) first_error = mh_status;
	if (mh_status != MH_OK)LOG_ERROR("LevelLoad Createhook error : %s", MH_StatusToString(mh_status));

	mh_status = MH_OK;//CreateHook(GameOpenFile, &GameOpenFileDetour, &GameOpenFileOut);
	if (mh_status != MH_OK && first_error == MH_OK) first_error = mh_status;
	if (mh_status != MH_OK)LOG_ERROR("GameOpenFile Createhook error : %s", MH_StatusToString(mh_status));

	mh_status = MH_OK;//CreateHook(GameOpenQFile, &GameOpenQFileDetour, &GameOpenQFileOut);
	if (mh_status != MH_OK && first_error == MH_OK) first_error = mh_status;
	if (mh_status != MH_OK)LOG_ERROR("GameOpenQFile Createhook error : %s", MH_StatusToString(mh_status));

	mh_status = MH_OK;//CreateHook(LoadQVM, &LoadQVMDetour, &LoadQVMOut);
	if (mh_status != MH_OK && first_error == MH_OK) first_error = mh_status;
	if (mh_status != MH_OK)LOG_ERROR("LoadQVM Createhook error : %s", MH_StatusToString(mh_status));

	mh_status = MH_OK;//CreateHook(CompileQVM, &CompileQVMDetour, &CompileQVMOut); 
	if (mh_status != MH_OK && first_error == MH_OK) first_error = mh_status;
	if (mh_status != MH_OK) LOG_ERROR("CompileQVM Createhook error : %s", MH_StatusToString(mh_status));

	mh_status = MH_OK;//CreateHook(AssembleQVM, &AssembleQVMDetour, &AssembleQVMOut);
	if (mh_status != MH_OK && first_error == MH_OK) first_error = mh_status;
	if (mh_status != MH_OK)LOG_ERROR("AssembleQAS Createhook error : %s", MH_StatusToString(mh_status));

	mh_status = MH_OK;//CreateHook(ParseQVM, &ParseQVMDetour, &ParseQVMOut);
	if (mh_status != MH_OK && first_error == MH_OK) first_error = mh_status;
	if (mh_status != MH_OK)LOG_ERROR("ParseQVM Createhook error : %s", MH_StatusToString(mh_status));

	mh_status = MH_OK;//CreateHook(CleanupQVM, &CleanupQVMDetour, &CleanupQVMOut);
	if (mh_status != MH_OK && first_error == MH_OK) first_error = mh_status;
	if (mh_status != MH_OK)LOG_ERROR("CleanupQVM Createhook error : %s", MH_StatusToString(mh_status));

	mh_status = MH_OK;//CreateHook(SFXItems, &SFXItemsDetour, &SFXItemsOut);
	if (mh_status != MH_OK && first_error == MH_OK) first_error = mh_status;
	if (mh_status != MH_OK)LOG_ERROR("SFXItems Createhook error : %s", MH_StatusToString(mh_status));

	/**
	** A.I Graph Hooks methods section.
	**/
	//mh_status = CreateHook(GraphOpen, &GraphOpenDetour, &GraphOpenOut);
	//if (mh_status != MH_OK)LOG_ERROR("GraphOpen Createhook error : %s", MH_StatusToString(mh_status));

	//mh_status = CreateHook(GraphNodePosition, &GraphNodePositionDetour, &GraphNodePositionOut);
	//if (mh_status != MH_OK)LOG_ERROR("GraphNodePosition Createhook error : %s", MH_StatusToString(mh_status));

	//mh_status = CreateHook(GraphMaxNodes, &GraphMaxNodesDetour, &GraphMaxNodesOut);
	//if (mh_status != MH_OK)LOG_ERROR("GraphMaxNodes Createhook error : %s", MH_StatusToString(mh_status));

	//mh_status = CreateHook(GraphNodesId, &GraphNodeIdDetour, &GraphNodeIdOut);
	//if (mh_status != MH_OK)LOG_ERROR("GraphNodesId Createhook error : %s", MH_StatusToString(mh_status));

	//mh_status = CreateHook(GraphNodeMaterial, &GraphNodeMaterialDetour, &GraphNodeMaterialOut);
	//if (mh_status != MH_OK)LOG_ERROR("GraphNodeMaterial Createhook error : %s", MH_StatusToString(mh_status));

	//mh_status = CreateHook(GraphNodeCriteria, &GraphNodeCriteriaDetour, &GraphNodeCriteriaOut);
	//if (mh_status != MH_OK)LOG_ERROR("GraphNodeCriteria Createhook error : %s", MH_StatusToString(mh_status));

	//mh_status = CreateHook(GraphNodeGamma, &GraphNodeGammaDetour, &GraphNodeGammaOut);
	//if (mh_status != MH_OK)LOG_ERROR("GraphNodeGamma Createhook error : %s", MH_StatusToString(mh_status));

	//mh_status = CreateHook(GraphNodeRadius, &GraphNodeRadiusDetour, &GraphNodeRadiusOut);
	//if (mh_status != MH_OK)LOG_ERROR("GraphNodeRadius Createhook error : %s", MH_StatusToString(mh_status));

	//mh_status = CreateHook(GraphNodeLink1, &GraphNodeLink1Detour, &GraphNodeLink1Out);
	//if (mh_status != MH_OK)LOG_ERROR("GraphNodeLink1 Createhook error : %s", MH_StatusToString(mh_status));

	//mh_status = CreateHook(GraphNodeLink2, &GraphNodeLink2Detour, &GraphNodeLink2Out);
	//if (mh_status != MH_OK)LOG_ERROR("GraphNodeLink2 Createhook error : %s", MH_StatusToString(mh_status));

	//mh_status = CreateHook(GraphNodeLinkType, &GraphNodeLinkTypeDetour, &GraphNodeLinkTypeOut);
	//if (mh_status != MH_OK)LOG_ERROR("GraphNodeLinkType Createhook error : %s", MH_StatusToString(mh_status));

	//mh_status = CreateHook(GraphAiRouteTable, &GraphAiRouteTableDetour, &GraphAiRouteTableOut);
	//if (mh_status != MH_OK)LOG_ERROR("GraphAiRouteTable Createhook error : %s", MH_StatusToString(mh_status));
	/**
	** A.I Graph Hooks methods section.
	**/

	mh_status = MH_OK;//CreateHook(AmmoTypeOpen, &AmmoTypeOpenDetour, &AmmoTypeOpenOut);
	if (mh_status != MH_OK && first_error == MH_OK) first_error = mh_status;
	if (mh_status != MH_OK)LOG_ERROR("AmmoTypeOpen Createhook error : %s", MH_StatusToString(mh_status));

	mh_status = MH_OK;//CreateHook(WeaponTypeOpen, &WeaponTypeOpenDetour, &WeaponTypeOpenOut);
	if (mh_status != MH_OK && first_error == MH_OK) first_error = mh_status;
	if (mh_status != MH_OK)LOG_ERROR("WeaponTypeOpen Createhook error : %s", MH_StatusToString(mh_status));

	mh_status = CreateHook(GameMainLoop, &GameMainLoopDetour, &GameMainLoopOut);
	if (mh_status != MH_OK && first_error == MH_OK) first_error = mh_status;
	if (mh_status != MH_OK) LOG_ERROR("GameMainLoop Createhook error : %s", MH_StatusToString(mh_status));

	return first_error;
}

MH_STATUS Hook::EnableHook(LPVOID p_target) {
	if (hook_status != MH_OK) return MH_ERROR_NOT_INITIALIZED;

	MH_STATUS mh_status = MH_EnableHook(p_target);
	if (mh_status == MH_OK)
		LOG_INFO("Hook enabled.");
	else
		LOG_ERROR("Error enabling Hook Reason: %s", MH_StatusToString(mh_status));
	return mh_status;
}

MH_STATUS Hook::DisableHook(LPVOID p_target) {
	auto mh_status = MH_DisableHook(p_target);
	if (mh_status != MH_OK)
		LOG_ERROR("Error disabling hook.");
	else
		LOG_INFO("Hook disabled.");
	return mh_status;
}

MH_STATUS Hook::EnableHooks() {
	if (hook_status != MH_OK) return MH_ERROR_NOT_INITIALIZED;

	MH_STATUS mh_status = MH_EnableHook(MH_ALL_HOOKS);
	if (mh_status == MH_OK)
		LOG_INFO("All hooks enabled.");
	else
		LOG_ERROR("Error enabling hooks reason: %s", MH_StatusToString(mh_status));
	return mh_status;
}

MH_STATUS Hook::DisableHooks() {
	// Check if MinHook has already been cleaned up
	extern std::atomic<bool> g_minHookCleaned;
	if (g_minHookCleaned) {
		LOG_INFO("MinHook already cleaned up, skipping hook disable");
		return MH_OK;
	}
	
	MH_STATUS status = MH_DisableHook(MH_ALL_HOOKS);
	if (status != MH_OK)
		LOG_ERROR("Error disabling hooks.");
	else
		LOG_INFO("All hooks disabled successfully.");

	return status;
}
