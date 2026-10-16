#pragma once
/* Shared host types and platform services for translated retail routines. */
#include <stdint.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <math.h>

#define nullptr NULL
#define __location(x)
#define __convention(x)
#define __stdcall
#define __fastcall
#define WINAPI
#define LPSTR char*
#define LPCSTR const char*
#define HWND void*
#define HDC void*
#define FCMP_UO(a, b) __builtin_isnan((a) - (b))

typedef uint32_t DWORD;
typedef int32_t LONG;
typedef void* LPVOID;
typedef void* HANDLE;
typedef void* HINSTANCE;
typedef void* HIC;
typedef void* HMIXEROBJ;
typedef void* LPDDENUMCALLBACKEXA;
typedef int32_t HRESULT;
typedef int32_t LRESULT;
typedef void* HMODULE;
typedef char* PSTR;
typedef int32_t BOOL;
typedef uintptr_t WPARAM;
typedef uintptr_t LPARAM;
typedef long double int80_t;
typedef long double float80_t;
typedef uint16_t wchar16;
typedef struct { uint32_t Data1; uint16_t Data2; uint16_t Data3; uint8_t Data4[8]; } GUID;
typedef struct { uint32_t dwLowDateTime; uint32_t dwHighDateTime; } FILETIME;
typedef struct tagBITMAPINFOHEADER BITMAPINFOHEADER;
typedef struct _EXCEPTION_POINTERS EXCEPTION_POINTERS;
typedef struct _EXCEPTION_RECORD EXCEPTION_RECORD;


struct frames_ctx { uint32_t pad_00[512]; };
struct status_msg { 
    void* head; 
    void* sprite; 
    uint32_t pad_00[64]; 
    uint32_t style; 
    uint32_t unk34; 
    uint32_t unk38; 
    uint32_t pad_40; 
    uint32_t pad_45; 
    uint32_t dirty; 
    char* text; 
    uint32_t limit; 
    uint32_t unk50; 
    uint32_t tick_base; 
};
struct _EXCEPTION_REGISTRATION_RECORD { struct _EXCEPTION_REGISTRATION_RECORD* prev; void* handler; };
struct IUnknown { void* lpVtbl; };
struct IAVIFile { void* lpVtbl; };
struct IAVIStream { void* lpVtbl; };
typedef struct AVIFILEINFOA { uint32_t dwMaxBytesPerSec; uint32_t dwFlags; uint32_t dwCaps; uint32_t dwStreams; uint32_t dwSuggestedBufferSize; uint32_t dwWidth; uint32_t dwHeight; uint32_t dwScale; uint32_t dwRate; uint32_t dwLength; uint32_t dwEditCount; char szFileType[64]; } AVIFILEINFOA;
typedef struct AVISTREAMINFOA { uint32_t fccType; uint32_t fccHandler; uint32_t dwFlags; uint32_t dwCaps; uint16_t wPriority; uint16_t wLanguage; uint32_t dwScale; uint32_t dwRate; uint32_t dwStart; uint32_t dwLength; uint32_t dwInitialFrames; uint32_t dwSuggestedBufferSize; uint32_t dwQuality; uint32_t dwSampleSize; struct { int32_t left, top, right, bottom; } rcFrame; uint32_t dwEditCount; uint32_t dwFormatChangeCount; char szName[64]; } AVISTREAMINFOA;

uint32_t gi_platform_get_tick_count(void);
#define GetTickCount() gi_platform_get_tick_count()


enum SET_FILE_POINTER_MOVE_METHOD { FILE_BEGIN = 0, FILE_CURRENT = 1, FILE_END = 2 };
enum WIN32_ERROR { ERROR_SUCCESS = 0 };

#include "gi_stubs.h"
