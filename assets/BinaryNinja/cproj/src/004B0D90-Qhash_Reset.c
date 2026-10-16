#include "gi_platform.h"
#include "004B0D90-Qhash_Reset.h"
#include "gi_memory.h"

#include <inttypes.h>
#include <stdio.h>
#include <time.h>

static int qhash_stack_entry_address(int32_t stack_depth, uint32_t* guest_address)
{
    const int64_t stack_address = (int64_t)0x009422e8u + stack_depth;
    if (guest_address == NULL || stack_address < GI_PE_DATA_BASE ||
        stack_address >= GI_PE_DATA_END)
    {
        struct timespec current_time;
        char timestamp[32] = "unknown-time";
        if (timespec_get(&current_time, TIME_UTC) == TIME_UTC)
        {
            struct tm* utc_time = gmtime(&current_time.tv_sec);
            if (utc_time != NULL)
            {
                strftime(timestamp, sizeof(timestamp), "%Y-%m-%dT%H:%M:%S", utc_time);
            }
        }
        fprintf(stderr,
                "[%s UTC] ERROR [igi-qhash] stack depth %" PRId32
                " points outside guest data memory.\n",
                timestamp,
                stack_depth);
        return 0;
    }

    *guest_address = (uint32_t)stack_address;
    return 1;
}

void Qhash_Reset(void)

// Sig: void Qhash_Reset(void)
// Note: Reset QTask type hash table.
{
    int32_t* stack_depth = GI_PE_DATA_PTR(0x00a960e0u);
    uint8_t* active_hash_value = GI_PE_DATA_PTR(0x009422fdu);
    const int32_t current_depth = *stack_depth;
    if (current_depth == INT32_MAX)
    {
        return;
    }

    uint32_t saved_hash_guest_address = 0;
    const int32_t next_depth = current_depth + 1;
    uint32_t next_stack_guest_address = 0;
    if (!qhash_stack_entry_address(current_depth, &saved_hash_guest_address) ||
        !qhash_stack_entry_address(next_depth, &next_stack_guest_address))
    {
        return;
    }

    *active_hash_value = *(uint8_t*)GI_PE_DATA_PTR(saved_hash_guest_address);
    *stack_depth = next_depth;
}
