#include "00462BA0-Human_Separation.h"

#include "gi_human_candidates.h"

#include <math.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

enum {
    HUMAN_ACTIVE_FLAG_OFFSET = 0xCF6,
    HUMAN_EXCLUDED_FLAG_OFFSET = 0xCF5,
    HUMAN_POSITION_OFFSET = 0x20
};

/*
 * Retail routine 0x00462BA0. The first argument is used only by the retail
 * diagnostic path; the three position arguments and their ordering are
 * confirmed by the caller's four pushes and the callee's EBP-relative loads.
 */
static void write_human_separation_log(const char *severity, const char *reason)
{
    struct timespec current_time;
    struct tm utc_time;
    char timestamp[32] = "time-unavailable";

    if (timespec_get(&current_time, TIME_UTC) == TIME_UTC &&
        gmtime_r(&current_time.tv_sec, &utc_time) != NULL) {
        (void)strftime(timestamp, sizeof(timestamp), "%Y-%m-%dT%H:%M:%S", &utc_time);
        size_t timestamp_length = strlen(timestamp);
        (void)snprintf(timestamp + timestamp_length,
                       sizeof(timestamp) - timestamp_length,
                       ".%03ldZ",
                       current_time.tv_nsec / 1000000L);
    }

    (void)fprintf(stderr,
                  "%s [%s] [Physics/HumanSeparation] %s\n",
                  timestamp,
                  severity,
                  reason);
}

static int is_verbose_human_separation_logging_enabled(void)
{
    const char *verbose_setting = getenv("IGI_NATIVE_VERBOSE_LOGS");
    return verbose_setting != NULL && verbose_setting[0] != '\0' &&
           strcmp(verbose_setting, "0") != 0;
}

void Human_Separation(void *human_character,
                      const double start_position[3],
                      double destination_position[3],
                      float movement_delta[3])
{
    (void)human_character;

    if (start_position == NULL || destination_position == NULL || movement_delta == NULL) {
        write_human_separation_log(
            "ERROR", "received a null position or displacement pointer");
        return;
    }

    const GIHumanCandidateList *candidate_list = gi_get_human_candidates();
    if (candidate_list == NULL) {
        if (is_verbose_human_separation_logging_enabled()) {
            write_human_separation_log(
                "DEBUG", "no candidate provider is active");
        }
    } else if (candidate_list->candidate_count > 0 && candidate_list->candidates == NULL) {
        write_human_separation_log(
            "ERROR", "candidate count is nonzero but candidate storage is null");
    } else {
        for (size_t candidate_index = 0;
             candidate_index < candidate_list->candidate_count;
             ++candidate_index) {
            const unsigned char *candidate_human =
                (const unsigned char *)candidate_list->candidates[candidate_index];
            if (candidate_human == NULL ||
                candidate_human[HUMAN_ACTIVE_FLAG_OFFSET] == 0 ||
                candidate_human[HUMAN_EXCLUDED_FLAG_OFFSET] != 0) {
                continue;
            }

            double candidate_position[3];
            memcpy(candidate_position,
                   candidate_human + HUMAN_POSITION_OFFSET,
                   sizeof(candidate_position));

            const double vertical_separation =
                fabs(destination_position[2] - candidate_position[2]);
            if (vertical_separation >= 7372.8) {
                continue;
            }

            const double start_offset_x = start_position[0] - candidate_position[0];
            const double start_offset_y = start_position[1] - candidate_position[1];
            const double destination_offset_x =
                destination_position[0] - candidate_position[0];
            const double destination_offset_y =
                destination_position[1] - candidate_position[1];
            const double start_horizontal_distance =
                hypot(start_offset_x, start_offset_y);
            if (start_horizontal_distance >= 2252.8) {
                continue;
            }

            /* Retail compares start and destination horizontal distances. */
            const double destination_horizontal_distance =
                hypot(destination_offset_x, destination_offset_y);
            if (start_horizontal_distance > destination_horizontal_distance) {
                /* The original copies exactly 16 bytes: X and Y, not Z. */
                destination_position[0] = start_position[0];
                destination_position[1] = start_position[1];
            }
        }
    }

    movement_delta[0] = (float)(destination_position[0] - start_position[0]);
    movement_delta[1] = (float)(destination_position[1] - start_position[1]);
    movement_delta[2] = (float)(destination_position[2] - start_position[2]);
}
