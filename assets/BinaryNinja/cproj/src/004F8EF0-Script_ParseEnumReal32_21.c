#include "gi_platform.h"
#include "004F8EF0-Script_ParseEnumReal32_21.h"
int32_t Script_ParseEnumReal32_21(int32_t a1)

{
    int32_t result = (*(int32_t*)(uintptr_t)(a1 + 0xd8)) * 0x30;
    *(result + 0xba80c8) = (*(int32_t*)(uintptr_t)(a1 + 0x108));
    *(result + 0xba80b0) = 0x3f800000;
    int32_t objC1 = 0x17 - (*(int32_t*)(uintptr_t)(a1 + 0xb8));
    *(result + 0xba80a4) = objC1;
    *(result + 0xba80b0) = 1.0f / (1 << (objC1 & 0x1f)) * *(result + 0xba80b0);
    *(result + 0xba80b4) = 256.0f / (*(int32_t*)(uintptr_t)(a1 + 0xd4)) * 0.5.0f;
    *(result + 0xba80b8) = (*(int32_t*)(uintptr_t)(a1 + 0x20)) - (0x40000000 >> ((*(int32_t*)(uintptr_t)(a1 + 0xb8)) & 0x1f));
    *(result + 0xba80c0) = (*(int32_t*)(uintptr_t)(a1 + 0x28)) - (0x40000000 >> ((*(int32_t*)(uintptr_t)(a1 + 0xb8)) & 0x1f));
    return result;
}
