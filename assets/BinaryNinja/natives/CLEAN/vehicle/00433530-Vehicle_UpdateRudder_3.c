// IGI native provenance: Vehicle_UpdateRudder_3 - 0x00433530 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00433530-Vehicle_UpdateRudder_3.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Vehicle_UpdateRudder_3.h"
float Vehicle_UpdateRudder_3(float context) {
    float result = context;
    int32_t temp_val = *(result + 0x1b4);
    *(result + 0x82c) = *(result + 0x830);
    char entity_val = *(result + 0x831);
    *(result + 0x82d) = entity_val;
    *(result + 0x832) = entity_val;
    *(result + 0x833) = entity_val;
    *(result + 0x744) = 0;
    *(result + 0x82e) = 0;
    *(result + 0x82f) = 0;

    if (temp_val)
        result = Vehicle_DeployGear_3(result);

    return result;
}
