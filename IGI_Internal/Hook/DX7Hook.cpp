#include "DX7Hook.hpp"
#include "../Utils/Logger.hpp"
#include "MinHook.hpp"
#include <iostream>

using namespace IGI;

#pragma comment(lib, "ddraw.lib")
#pragma comment(lib, "dxguid.lib")

typedef HRESULT(WINAPI* EndScene_t)(IDirect3DDevice7*);
static EndScene_t oEndScene = nullptr;

static HRESULT WINAPI hkEndScene(IDirect3DDevice7* pDevice) {
    static bool once = false;
    if (!once) {
        once = true;
        LOG_INFO("DX7HOOK: EndScene successfully intercepted! We can now inject post-processing shaders like HDR/Bloom here.");
    }
    return oEndScene(pDevice);
}

typedef HRESULT(WINAPI* DirectDrawCreateEx_t)(GUID*, LPVOID*, REFIID, IUnknown*);

bool InitializeDX7Hook() {
    LOG_INFO("DX7HOOK: Attempting to create dummy Direct3DDevice7 to get vtable...");
    
    HMODULE hDDraw = LoadLibraryA("ddraw.dll");
    if (!hDDraw) {
        LOG_ERROR("DX7HOOK: Failed to load ddraw.dll");
        return false;
    }

    DirectDrawCreateEx_t pDirectDrawCreateEx = (DirectDrawCreateEx_t)GetProcAddress(hDDraw, "DirectDrawCreateEx");
    if (!pDirectDrawCreateEx) {
        LOG_ERROR("DX7HOOK: Failed to get DirectDrawCreateEx");
        return false;
    }

    HWND hWnd = CreateWindowA("STATIC", "Dummy", WS_OVERLAPPEDWINDOW, 0, 0, 100, 100, NULL, NULL, NULL, NULL);
    if (!hWnd) {
        LOG_ERROR("DX7HOOK: Failed to create dummy window");
        return false;
    }

    IDirectDraw7* pDD = nullptr;
    if (FAILED(pDirectDrawCreateEx(NULL, (void**)&pDD, IID_IDirectDraw7, NULL))) {
        LOG_ERROR("DX7HOOK: DirectDrawCreateEx failed");
        DestroyWindow(hWnd);
        return false;
    }

    pDD->SetCooperativeLevel(hWnd, DDSCL_NORMAL);

    IDirect3D7* pD3D = nullptr;
    if (FAILED(pDD->QueryInterface(IID_IDirect3D7, (void**)&pD3D))) {
        LOG_ERROR("DX7HOOK: QueryInterface for IDirect3D7 failed");
        pDD->Release();
        DestroyWindow(hWnd);
        return false;
    }

    // Direct3D7 requires a surface to create a device
    DDSURFACEDESC2 ddsd;
    ZeroMemory(&ddsd, sizeof(ddsd));
    ddsd.dwSize = sizeof(ddsd);
    ddsd.dwFlags = DDSD_CAPS;
    ddsd.ddsCaps.dwCaps = DDSCAPS_PRIMARYSURFACE;

    IDirectDrawSurface7* pSurface = nullptr;
    if (FAILED(pDD->CreateSurface(&ddsd, &pSurface, NULL))) {
        LOG_ERROR("DX7HOOK: CreateSurface failed");
        pD3D->Release();
        pDD->Release();
        DestroyWindow(hWnd);
        return false;
    }

    IDirect3DDevice7* pDevice = nullptr;
    // Try creating HAL device
    if (FAILED(pD3D->CreateDevice(IID_IDirect3DHALDevice, pSurface, &pDevice))) {
        // Fallback to RGB device if HAL fails
        if (FAILED(pD3D->CreateDevice(IID_IDirect3DRGBDevice, pSurface, &pDevice))) {
            LOG_ERROR("DX7HOOK: CreateDevice failed");
            pSurface->Release();
            pD3D->Release();
            pDD->Release();
            DestroyWindow(hWnd);
            return false;
        }
    }

    // VTable for IDirect3DDevice7: EndScene is at index 6
    void** pVTable = *(void***)pDevice;
    void* pEndScene = pVTable[6];
    
    LOG_INFO("DX7HOOK: Found IDirect3DDevice7::EndScene at 0x%p", pEndScene);

    if (MH_CreateHook(pEndScene, &hkEndScene, (LPVOID*)&oEndScene) == MH_OK) {
        MH_EnableHook(pEndScene);
        LOG_INFO("DX7HOOK: EndScene hooked successfully!");
    } else {
        LOG_ERROR("DX7HOOK: Failed to hook EndScene!");
    }

    // Cleanup dummy objects
    pDevice->Release();
    pSurface->Release();
    pD3D->Release();
    pDD->Release();
    DestroyWindow(hWnd);

    return true;
}

void ShutdownDX7Hook() {
    if (oEndScene) {
        MH_DisableHook(MH_ALL_HOOKS);
    }
}
