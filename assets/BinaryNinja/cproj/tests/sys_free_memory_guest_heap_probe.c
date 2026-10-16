#include <stdint.h>
#include <stdio.h>
#include <string.h>

#include "gi_memory.h"

int32_t Sys_FreeMemory_2(int32_t* allocation_record,
                         int32_t entry_size,
                         int32_t entry_count,
                         int32_t alignment);

int main(void)
{
    int32_t allocation_record[6] = {0};
    const int32_t entry_count = 12;
    const int32_t result = Sys_FreeMemory_2(allocation_record, 4, entry_count, 0);
    if (result != entry_count)
    {
        fprintf(stderr, "Sys_FreeMemory_2 returned %d instead of %d.\n", result, entry_count);
        return 1;
    }

    const uint32_t guest_allocation_address = (uint32_t)allocation_record[0];
    const uint32_t guest_entry_array_address = (uint32_t)allocation_record[1];
    if (guest_allocation_address == 0 || guest_allocation_address >= 0x80000000u ||
        guest_entry_array_address != guest_allocation_address + 96u ||
        allocation_record[2] != 0 || allocation_record[3] != entry_count ||
        allocation_record[4] != 8 || allocation_record[5] != 4)
    {
        fprintf(stderr, "Sys_FreeMemory_2 produced an invalid guest allocation record.\n");
        return 1;
    }

    int32_t* guest_entries = GI_GUEST_MEMORY_PTR(
        guest_entry_array_address,
        (size_t)entry_count * sizeof(*guest_entries));
    if (guest_entries == NULL)
    {
        fprintf(stderr, "The guest entry array could not be resolved.\n");
        return 1;
    }

    for (int32_t entry_index = 0; entry_index < entry_count; entry_index += 1)
    {
        if (guest_entries[entry_index] != entry_index)
        {
            fprintf(stderr,
                    "Guest entry %d contains %d instead of %d.\n",
                    entry_index,
                    guest_entries[entry_index],
                    entry_index);
            return 1;
        }
    }

    gi_guest_heap_deallocate(guest_allocation_address);
    if (GI_GUEST_MEMORY_PTR(guest_entry_array_address, sizeof(*guest_entries)) != NULL)
    {
        fprintf(stderr, "A deallocated guest address still resolves.\n");
        return 1;
    }

    puts("Sys_FreeMemory_2 preserves x86 guest pointers and initializes its entry array.");
    return 0;
}
