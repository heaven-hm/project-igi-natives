#include "gi_platform.h"
#include "004B0BE0-Mem_DeallocAll.h"
int32_t Mem_DeallocAll()

// Release host allocations created by Mem_Alloc and reset the allocator counters.
{
    size_t deallocated_count = gi_native_heap_deallocate_all();
    g_9422fc = 0;
    Sys_DispatchOpcode_2();
    g_942300 = 0;
    return deallocated_count > INT32_MAX ? INT32_MAX : (int32_t)deallocated_count;
}
