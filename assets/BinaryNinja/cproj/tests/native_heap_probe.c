#include <stdint.h>
#include <stdio.h>
#include <string.h>

#include "gi_platform.h"

void* Mem_Alloc(int32_t allocation_size, int32_t alignment);
int32_t Mem_DeallocAll(void);

int main(void)
{
    const size_t first_allocation_size = 65u;
    const size_t second_allocation_size = 100u;
    uint8_t* first_allocation = Mem_Alloc((int32_t)first_allocation_size, 32);
    uint8_t* second_allocation = Mem_Alloc((int32_t)second_allocation_size, 64);
    if (first_allocation == NULL || second_allocation == NULL)
    {
        fprintf(stderr, "Mem_Alloc failed for a valid allocation request.\n");
        return 1;
    }

    if (((uintptr_t)first_allocation & 31u) != 0 ||
        ((uintptr_t)second_allocation & 63u) != 0 ||
        first_allocation == second_allocation)
    {
        fprintf(stderr, "Mem_Alloc did not honor alignment or unique storage.\n");
        return 1;
    }

    memset(first_allocation, 0x3c, first_allocation_size);
    memset(second_allocation, 0xc3, second_allocation_size);
    if (first_allocation[0] != 0x3c || first_allocation[first_allocation_size - 1u] != 0x3c ||
        second_allocation[0] != 0xc3 || second_allocation[second_allocation_size - 1u] != 0xc3)
    {
        fprintf(stderr, "Mem_Alloc returned unusable storage.\n");
        return 1;
    }

    if (Mem_DeallocAll() != 2 || g_942300 != 0)
    {
        fprintf(stderr, "Mem_DeallocAll did not release and reset both allocations.\n");
        return 1;
    }

    void* invalid_allocation = Mem_Alloc(-1, 8);
    if (invalid_allocation != NULL)
    {
        fprintf(stderr, "Mem_Alloc accepted a negative allocation size.\n");
        return 1;
    }

    puts("Native heap allocation, alignment, tracking, and cleanup passed.");
    return 0;
}
