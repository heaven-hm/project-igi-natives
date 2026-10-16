#include "gi_platform.h"
#include "gi_memory.h"

#include <assert.h>

int32_t Frames_Get(void);

int main(void)
{
    const uint32_t game_context_address = gi_guest_heap_allocate(0x40u, 4u);
    assert(game_context_address != 0u);

    uint32_t* frame_limit =
        (uint32_t*)GI_GUEST_MEMORY_PTR(game_context_address + 0x3cu, sizeof(*frame_limit));
    assert(frame_limit != NULL);
    *frame_limit = 60u;
    *(uint32_t*)GI_PE_DATA_PTR(0x00567c8cu) = game_context_address;

    assert(Frames_Get() == 60);

    *(uint32_t*)GI_PE_DATA_PTR(0x00567c8cu) = 0u;
    assert(Frames_Get() == 0);

    *(uint32_t*)GI_PE_DATA_PTR(0x00567c8cu) = game_context_address;
    gi_guest_heap_deallocate(game_context_address);
    assert(Frames_Get() == 0);

    return 0;
}
