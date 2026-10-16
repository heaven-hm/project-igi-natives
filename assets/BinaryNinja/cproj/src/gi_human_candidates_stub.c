#include "gi_human_candidates.h"

/* The current shim has no initialized AI list or guest-pointer fixups. */
__attribute__((weak)) const GIHumanCandidateList *gi_get_human_candidates(void)
{
    return 0;
}
