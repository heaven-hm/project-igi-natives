#pragma once
#include <stdint.h>
/* 004AF7A6 Camera_ApplyLineFilter_32 | gate FAIL | openigi False */
HRESULT __stdcall Camera_ApplyLineFilter_32(struct IAVIStream pavi, int lStart, int lSamples, void * lpBuffer, int cbBuffer, int* plBytes, int* plSamples);
