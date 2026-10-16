#pragma once
#include <stddef.h>
#include <stdint.h>

/* Candidate only: Ghidra xref + Radare2 forced function analysis. */
typedef struct weapon_type_context {
    uint32_t script_directory_ptr32; /* original PE pointer value at +0x00 */
    uint32_t unknown_04;
    uint8_t load_enabled;          /* observed byte read at +0x08 */
    uint8_t _padding_09[3];
} weapon_type_context_t;
_Static_assert(offsetof(weapon_type_context_t, load_enabled) == 8, "PE field offset");
_Static_assert(sizeof(weapon_type_context_t) == 12, "PE x86 context layout");

void WeaponType_Open(weapon_type_context_t *ctx);
