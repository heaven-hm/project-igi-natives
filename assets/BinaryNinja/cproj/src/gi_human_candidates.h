#pragma once

#include <stddef.h>

/* Host-side view used to bridge the retail AI list into native pointer space. */
typedef struct GIHumanCandidateList {
    const void *const *candidates;
    size_t candidate_count;
} GIHumanCandidateList;

/* Engine integration supplies a strong definition once guest state is mapped. */
const GIHumanCandidateList *gi_get_human_candidates(void);
