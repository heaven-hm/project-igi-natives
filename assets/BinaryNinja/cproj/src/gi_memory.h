#pragma once

#include <stdint.h>
#include <stdlib.h>

/*
 * Backing store for writable PE globals on the native host. The original
 * image's .data section spans 0x00536000..0x00C33000; it cannot be dereferenced
 * at those addresses in a 64-bit macOS process. This store preserves guest
 * address offsets and aliasing without reserving low virtual addresses.
 * Initial PE data bytes and pointer fixups are not loaded yet; storage starts
 * zeroed and those initialization requirements remain an explicit port task.
 */
#define GI_PE_DATA_BASE 0x00536000u
#define GI_PE_DATA_END  0x00C33000u
#define GI_PE_DATA_SIZE (GI_PE_DATA_END - GI_PE_DATA_BASE)

extern uint8_t gi_pe_data_image[GI_PE_DATA_SIZE];

uint32_t gi_guest_heap_allocate(size_t allocation_size, size_t alignment);
void gi_guest_heap_deallocate(uint32_t guest_address);
void *gi_guest_memory_resolve(uint32_t guest_address, size_t access_size);
void *gi_native_heap_allocate(size_t allocation_size, size_t alignment);
size_t gi_native_heap_deallocate_all(void);

static inline void *gi_pe_data_ptr(uint32_t guest_address)
{
    if (guest_address < GI_PE_DATA_BASE || guest_address >= GI_PE_DATA_END)
        abort();
    return &gi_pe_data_image[guest_address - GI_PE_DATA_BASE];
}

#define GI_PE_DATA_PTR(address) gi_pe_data_ptr((uint32_t)(address))
#define GI_GUEST_MEMORY_PTR(address, size) \
    gi_guest_memory_resolve((uint32_t)(address), (size_t)(size))
