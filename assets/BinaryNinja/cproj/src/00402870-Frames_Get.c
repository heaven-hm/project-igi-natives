#include "gi_platform.h"
#include "00402870-Frames_Get.h"
#include "gi_memory.h"

#include <limits.h>
#include <time.h>

int32_t Frames_Get()

// Sig: int Frames_Get(void)
// Note: Returns the configured game frame limit from the global context field
// +0x3C written by Frames_Set. Menu_Manager stores this value as its frame-rate
// limit.
{
    const uint32_t game_context_address =
        *(const uint32_t*)GI_PE_DATA_PTR(0x00567c8cu);
    if (game_context_address == 0u || game_context_address > UINT32_MAX - 0x3cu)
    {
        time_t current_time = time(NULL);
        struct tm* utc_time = gmtime(&current_time);
        char time_text[32] = "unknown time";

        if (utc_time != NULL)
        {
            strftime(time_text, sizeof(time_text), "%Y-%m-%d %H:%M:%S UTC", utc_time);
        }

        fprintf(stderr,
                "[%s] ERROR [Frames_Get] Game context pointer is invalid: 0x%08x.\n",
                time_text,
                (unsigned int)game_context_address);
        return 0;
    }

    const uint32_t frame_limit_address = game_context_address + 0x3cu;
    const uint32_t* frame_limit =
        (const uint32_t*)GI_GUEST_MEMORY_PTR(frame_limit_address, sizeof(*frame_limit));
    if (frame_limit == NULL)
    {
        time_t current_time = time(NULL);
        struct tm* utc_time = gmtime(&current_time);
        char time_text[32] = "unknown time";

        if (utc_time != NULL)
        {
            strftime(time_text, sizeof(time_text), "%Y-%m-%d %H:%M:%S UTC", utc_time);
        }

        fprintf(stderr,
                "[%s] ERROR [Frames_Get] Game context field 0x%08x is unavailable.\n",
                time_text,
                (unsigned int)frame_limit_address);
        return 0;
    }

    return (int32_t)*frame_limit;
}
