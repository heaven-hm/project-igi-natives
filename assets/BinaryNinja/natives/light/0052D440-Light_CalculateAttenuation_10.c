#include "Light_CalculateAttenuation_10.h"
uint32_t* Light_CalculateAttenuation_10(uint32_t* a1)

{
    SYSTEMTIME systemTime;
    GetLocalTime(&systemTime);
    WORD wYear = systemTime.wYear;
    *(&wYear + 2) = systemTime.wMonth;
    WORD wMonth = systemTime.wMonth;
    *(&wMonth + 2) = systemTime.wDayOfWeek;
    *a1 = wYear;
    WORD wDay = systemTime.wDay;
    *(&wDay + 2) = systemTime.wHour;
    a1[1] = wMonth;
    WORD wHour = systemTime.wHour;
    *(&wHour + 2) = systemTime.wMinute;
    a1[2] = wDay;
    WORD wMinute = systemTime.wMinute;
    *(&wMinute + 2) = systemTime.wSecond;
    a1[3] = wHour;
    WORD wSecond = systemTime.wSecond;
    *(&wSecond + 2) = systemTime.wMilliseconds;
    a1[4] = wMinute;
    uint32_t objC4 = *(&systemTime + 0xe);
    a1[5] = wSecond;
    a1[6] = objC4;
    return a1;
}
