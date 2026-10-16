#include "gi_platform.h"
#include "004B0B00-Sys_FreeMemory_2.h"
int32_t Sys_FreeMemory_2(int32_t* allocation_record,
                         int32_t entry_size_bytes,
                         int32_t entry_count,
                         int32_t requested_alignment)

{
    if (allocation_record == NULL || entry_size_bytes < 0 || entry_count < 0)
    {
        fprintf(stderr, "[ERROR] Sys_FreeMemory_2 received invalid arguments.\n");
        return 0;
    }

    size_t allocation_alignment =
        requested_alignment < 4 ? 4u : (size_t)requested_alignment;
    if ((allocation_alignment & (allocation_alignment - 1u)) != 0)
    {
        fprintf(stderr, "[ERROR] Sys_FreeMemory_2 received a non-power-of-two alignment.\n");
        return 0;
    }

    size_t aligned_entry_stride =
        ((size_t)entry_size_bytes + allocation_alignment + 3u) & ~(allocation_alignment - 1u);
    size_t allocation_size = (aligned_entry_stride + 4u) * (size_t)entry_count;
    if (entry_count > 0 &&
        allocation_size / (size_t)entry_count != aligned_entry_stride + 4u)
    {
        fprintf(stderr, "[ERROR] Sys_FreeMemory_2 allocation size overflowed.\n");
        return 0;
    }

    uint32_t guest_allocation_address =
        gi_guest_heap_allocate(allocation_size, allocation_alignment);
    if (guest_allocation_address == 0)
    {
        return 0;
    }

    size_t guest_entry_array_offset = aligned_entry_stride * (size_t)entry_count;
    if (guest_entry_array_offset > UINT32_MAX - guest_allocation_address)
    {
        gi_guest_heap_deallocate(guest_allocation_address);
        fprintf(stderr, "[ERROR] Sys_FreeMemory_2 guest address range overflowed.\n");
        return 0;
    }

    uint32_t guest_entry_array_address = guest_allocation_address + (uint32_t)guest_entry_array_offset;
    int32_t* entry_array = GI_GUEST_MEMORY_PTR(
        guest_entry_array_address,
        (size_t)entry_count * sizeof(*entry_array));
    if (entry_array == NULL)
    {
        gi_guest_heap_deallocate(guest_allocation_address);
        return 0;
    }

    allocation_record[0] = (int32_t)guest_allocation_address;
    allocation_record[1] = (int32_t)guest_entry_array_address;
    allocation_record[2] = 0;
    allocation_record[3] = entry_count;
    allocation_record[4] = (int32_t)aligned_entry_stride;
    allocation_record[5] = entry_size_bytes;

    for (int32_t entry_index = 0; entry_index < entry_count; entry_index += 1)
    {
        entry_array[entry_index] = entry_index;
    }

    return entry_count;
}
