#include "gi_platform.h"
#include "004B0C60-Mem_Alloc.h"
void* Mem_Alloc(int32_t allocation_size_bytes, int32_t requested_alignment)

// The retail allocator calls malloc, aligns the returned storage, and tracks
// blocks for Mem_DeallocAll. The native port keeps that lifecycle in host memory.
{
    if (allocation_size_bytes < 0 || requested_alignment < 0)
    {
        fprintf(stderr, "[ERROR] Mem_Alloc received a negative size or alignment.\n");
        return NULL;
    }

    size_t allocation_alignment = requested_alignment == 0
        ? sizeof(void*)
        : (size_t)requested_alignment;
    void* allocated_memory =
        gi_native_heap_allocate((size_t)allocation_size_bytes, allocation_alignment);
    if (allocated_memory == NULL)
    {
        return NULL;
    }

    g_942300 += 1;
    return allocated_memory;
}
