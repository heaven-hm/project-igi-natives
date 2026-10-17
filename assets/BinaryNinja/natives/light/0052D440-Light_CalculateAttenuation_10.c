// Original IGI.EXE function: Light_CalculateAttenuation_10 (VA 0x0052D440; static CFG gate PASS, CFG score 1.000).
#include "Light_CalculateAttenuation_10.h"
uint32_t* Light_CalculateAttenuation_10(uint32_t* context)

{
    SYSTEMTIME systemTime;
    GetLocalTime(&systemTime);
    WORD wYear = systemTime.wYear;
    *(&wYear + 2) = systemTime.wMonth;
    WORD wMonth = systemTime.wMonth;
    *(&wMonth + 2) = systemTime.wDayOfWeek;
    *context = wYear;
    WORD wDay = systemTime.wDay;
    *(&wDay + 2) = systemTime.wHour;
    context[1] = wMonth;
    WORD wHour = systemTime.wHour;
    *(&wHour + 2) = systemTime.wMinute;
    context[2] = wDay;
    WORD wMinute = systemTime.wMinute;
    *(&wMinute + 2) = systemTime.wSecond;
    context[3] = wHour;
    WORD wSecond = systemTime.wSecond;
    *(&wSecond + 2) = systemTime.wMilliseconds;
    context[4] = wMinute;
    uint32_t entity_4 = *(&systemTime + 0xe);
    context[5] = wSecond;
    context[6] = entity_4;
    return context;
}
