#include "gi_memory.h"

#include <errno.h>
#include <stdatomic.h>
#include <stdio.h>
#include <time.h>

/* Zero-initialized native-host storage for the original PE .data address span. */
uint8_t gi_pe_data_image[GI_PE_DATA_SIZE];

#define GI_GUEST_HEAP_BASE 0x10000000u
#define GI_GUEST_HEAP_LIMIT 0x70000000u
#define GI_GUEST_HEAP_ALLOCATION_LIMIT 4096u

struct GiGuestHeapAllocation
{
    uint32_t guest_base_address;
    size_t allocation_size;
    uint8_t* host_storage;
};

struct GiNativeHeapAllocation
{
    void* raw_storage;
    void* aligned_storage;
    size_t allocation_size;
    struct GiNativeHeapAllocation* next_allocation;
};

static struct GiGuestHeapAllocation gi_guest_heap_allocations[GI_GUEST_HEAP_ALLOCATION_LIMIT];
static struct GiNativeHeapAllocation* gi_native_heap_allocations = NULL;
static uint32_t gi_next_guest_heap_address = GI_GUEST_HEAP_BASE;
static atomic_flag gi_guest_heap_lock = ATOMIC_FLAG_INIT;

static void gi_lock_guest_heap(void)
{
    while (atomic_flag_test_and_set_explicit(&gi_guest_heap_lock, memory_order_acquire))
    {
    }
}

static void gi_unlock_guest_heap(void)
{
    atomic_flag_clear_explicit(&gi_guest_heap_lock, memory_order_release);
}

static void gi_log_memory_error(const char* operation, uint32_t guest_address)
{
    struct timespec current_time;
    char time_text[32] = "unknown-time";
    if (timespec_get(&current_time, TIME_UTC) == TIME_UTC)
    {
        struct tm* utc_time = gmtime(&current_time.tv_sec);
        if (utc_time != NULL)
        {
            strftime(time_text, sizeof(time_text), "%Y-%m-%dT%H:%M:%S", utc_time);
        }
    }

    fprintf(stderr,
            "[%s UTC] ERROR [igi-guest-memory] %s failed for guest address 0x%08x.\n",
            time_text,
            operation,
            guest_address);
}

uint32_t gi_guest_heap_allocate(size_t allocation_size, size_t alignment)
{
    if (allocation_size == 0 || allocation_size > UINT32_MAX || alignment == 0 ||
        (alignment & (alignment - 1u)) != 0)
    {
        errno = EINVAL;
        gi_log_memory_error("guest allocation validation", 0);
        return 0;
    }

    uint8_t* host_storage = malloc(allocation_size);
    if (host_storage == NULL)
    {
        errno = ENOMEM;
        gi_log_memory_error("guest host allocation", 0);
        return 0;
    }

    gi_lock_guest_heap();
    size_t alignment_padding =
        (alignment - (gi_next_guest_heap_address & (alignment - 1u))) & (alignment - 1u);
    uint64_t aligned_guest_address = (uint64_t)gi_next_guest_heap_address + alignment_padding;
    uint64_t next_guest_address = aligned_guest_address + allocation_size;
    size_t allocation_index = 0;
    while (allocation_index < GI_GUEST_HEAP_ALLOCATION_LIMIT &&
           gi_guest_heap_allocations[allocation_index].host_storage != NULL)
    {
        allocation_index += 1u;
    }

    if (allocation_index == GI_GUEST_HEAP_ALLOCATION_LIMIT ||
        aligned_guest_address < GI_GUEST_HEAP_BASE || next_guest_address > GI_GUEST_HEAP_LIMIT)
    {
        gi_unlock_guest_heap();
        free(host_storage);
        errno = ENOMEM;
        gi_log_memory_error("guest address reservation", 0);
        return 0;
    }

    uint32_t guest_base_address = (uint32_t)aligned_guest_address;
    gi_guest_heap_allocations[allocation_index].guest_base_address = guest_base_address;
    gi_guest_heap_allocations[allocation_index].allocation_size = allocation_size;
    gi_guest_heap_allocations[allocation_index].host_storage = host_storage;
    gi_next_guest_heap_address = (uint32_t)next_guest_address;
    gi_unlock_guest_heap();

    return guest_base_address;
}

void gi_guest_heap_deallocate(uint32_t guest_address)
{
    uint8_t* host_storage = NULL;

    gi_lock_guest_heap();
    for (size_t allocation_index = 0;
         allocation_index < GI_GUEST_HEAP_ALLOCATION_LIMIT;
         allocation_index += 1u)
    {
        struct GiGuestHeapAllocation* allocation = &gi_guest_heap_allocations[allocation_index];
        if (allocation->guest_base_address == guest_address && allocation->host_storage != NULL)
        {
            host_storage = allocation->host_storage;
            allocation->host_storage = NULL;
            allocation->allocation_size = 0;
            break;
        }
    }
    gi_unlock_guest_heap();

    if (host_storage == NULL)
    {
        errno = EINVAL;
        gi_log_memory_error("guest deallocation", guest_address);
        return;
    }

    free(host_storage);
}

void *gi_guest_memory_resolve(uint32_t guest_address, size_t access_size)
{
    if (guest_address >= GI_PE_DATA_BASE && guest_address < GI_PE_DATA_END &&
        access_size <= GI_PE_DATA_END - guest_address)
    {
        return gi_pe_data_ptr(guest_address);
    }

    gi_lock_guest_heap();
    for (size_t allocation_index = 0;
         allocation_index < GI_GUEST_HEAP_ALLOCATION_LIMIT;
         allocation_index += 1u)
    {
        const struct GiGuestHeapAllocation* allocation = &gi_guest_heap_allocations[allocation_index];
        if (allocation->host_storage == NULL || guest_address < allocation->guest_base_address)
        {
            continue;
        }

        size_t allocation_offset = (size_t)(guest_address - allocation->guest_base_address);
        if (allocation_offset <= allocation->allocation_size &&
            access_size <= allocation->allocation_size - allocation_offset)
        {
            void* host_address = allocation->host_storage + allocation_offset;
            gi_unlock_guest_heap();
            return host_address;
        }
    }
    gi_unlock_guest_heap();

    errno = EFAULT;
    gi_log_memory_error("guest address resolution", guest_address);
    return NULL;
}

void *gi_native_heap_allocate(size_t allocation_size, size_t alignment)
{
    if (alignment == 0)
    {
        alignment = sizeof(void*);
    }
    if (alignment < sizeof(void*))
    {
        alignment = sizeof(void*);
    }
    if ((alignment & (alignment - 1u)) != 0 || allocation_size > SIZE_MAX - alignment - sizeof(void*))
    {
        errno = EINVAL;
        gi_log_memory_error("native allocation validation", 0);
        return NULL;
    }

    size_t host_allocation_size = allocation_size + alignment + sizeof(void*);
    void* raw_storage = malloc(host_allocation_size == 0 ? 1u : host_allocation_size);
    if (raw_storage == NULL)
    {
        errno = ENOMEM;
        gi_log_memory_error("native host allocation", 0);
        return NULL;
    }

    struct GiNativeHeapAllocation* allocation_record = malloc(sizeof(*allocation_record));
    if (allocation_record == NULL)
    {
        free(raw_storage);
        errno = ENOMEM;
        gi_log_memory_error("native allocation tracking", 0);
        return NULL;
    }

    uintptr_t minimum_aligned_address = (uintptr_t)raw_storage + sizeof(void*);
    uintptr_t aligned_address =
        (minimum_aligned_address + alignment - 1u) & ~(uintptr_t)(alignment - 1u);
    void* aligned_storage = (void*)aligned_address;

    allocation_record->raw_storage = raw_storage;
    allocation_record->aligned_storage = aligned_storage;
    allocation_record->allocation_size = allocation_size;

    gi_lock_guest_heap();
    allocation_record->next_allocation = gi_native_heap_allocations;
    gi_native_heap_allocations = allocation_record;
    gi_unlock_guest_heap();

    return aligned_storage;
}

size_t gi_native_heap_deallocate_all(void)
{
    gi_lock_guest_heap();
    struct GiNativeHeapAllocation* allocation_records = gi_native_heap_allocations;
    gi_native_heap_allocations = NULL;
    gi_unlock_guest_heap();

    size_t deallocated_count = 0;
    while (allocation_records != NULL)
    {
        struct GiNativeHeapAllocation* next_allocation = allocation_records->next_allocation;
        free(allocation_records->raw_storage);
        free(allocation_records);
        allocation_records = next_allocation;
        deallocated_count += 1u;
    }

    return deallocated_count;
}
