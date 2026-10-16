#include <stdint.h>
#include <stdio.h>

#include "gi_memory.h"

void Qhash_Init(char hash_value);
void Qhash_Reset(void);

static int verify_nested_hash_lifecycle(void)
{
    int32_t* stack_depth = GI_PE_DATA_PTR(0x00a960e0u);
    uint8_t* active_hash_value = GI_PE_DATA_PTR(0x009422fdu);
    uint8_t* stack_storage = GI_PE_DATA_PTR(0x009422e5u);
    *stack_depth = 0;
    *active_hash_value = 0x39u;
    stack_storage[0] = 0xa5u;
    stack_storage[1] = 0x6bu;
    stack_storage[2] = 0x5au;

    Qhash_Init(1);
    if (*stack_depth != -1 || *active_hash_value != 1u || stack_storage[2] != 0x39u)
    {
        fprintf(stderr, "First Qhash_Init did not push the previous hash state.\n");
        return 0;
    }

    Qhash_Init(0);
    if (*stack_depth != -2 || *active_hash_value != 0u || stack_storage[1] != 1u)
    {
        fprintf(stderr, "Nested Qhash_Init did not preserve stack ordering.\n");
        return 0;
    }

    Qhash_Reset();
    if (*stack_depth != -1 || *active_hash_value != 1u)
    {
        fprintf(stderr, "First Qhash_Reset did not restore the nested hash state.\n");
        return 0;
    }

    Qhash_Reset();
    if (*stack_depth != 0 || *active_hash_value != 0x39u || stack_storage[0] != 0xa5u)
    {
        fprintf(stderr, "Final Qhash_Reset did not restore the initial hash state.\n");
        return 0;
    }

    return 1;
}

static int verify_invalid_depth_is_rejected(void)
{
    int32_t* stack_depth = GI_PE_DATA_PTR(0x00a960e0u);
    uint8_t* active_hash_value = GI_PE_DATA_PTR(0x009422fdu);
    *stack_depth = INT32_MIN;
    *active_hash_value = 0x72u;

    Qhash_Init(1);
    if (*stack_depth != INT32_MIN || *active_hash_value != 0x72u)
    {
        fprintf(stderr, "Invalid Qhash_Init depth changed guest state.\n");
        return 0;
    }

    *stack_depth = INT32_MAX;
    Qhash_Reset();
    if (*stack_depth != INT32_MAX || *active_hash_value != 0x72u)
    {
        fprintf(stderr, "Invalid Qhash_Reset depth changed guest state.\n");
        return 0;
    }

    return 1;
}

int main(void)
{
    if (!verify_nested_hash_lifecycle() || !verify_invalid_depth_is_rejected())
    {
        return 1;
    }

    puts("Qhash push/pop matches the verified guest stack offsets.");
    return 0;
}
