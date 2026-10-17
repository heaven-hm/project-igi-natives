// IGI native provenance: Terrain_SampleHeightmap_10 - 0x0051B0B0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0051B0B0-Terrain_SampleHeightmap_10.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Terrain_SampleHeightmap_10.h"
void* Terrain_SampleHeightmap_10(void* context)

{
    void* result = Script_ExecuteLevelScript_4(*(context + 0x20));

    if (result)
    {
        int32_t entity_1 = *(result + 0x1f8);

        if (entity_1 >= 3)
        {
            long double fpu_val_7_1 = 0.0f;

            if (entity_1 - 1 > 0)
            {
                void** entity_2 = result + 0x68;
                int32_t i_2 = entity_1 - 1;
                int32_t i;

                do
                {
                    void* dest_1 = *entity_2;
                    entity_2 = &entity_2[1];
                    i = i_2;
                    i_2 -= 1;
                    fpu_val_7_1 = fpu_val_7_1 + *(dest_1 + 0x98);
                } while (i != 1);
            }

            long double fpu_val_7_2 = fpu_val_7_1 * *(context + 0x40);
            int32_t i_1 = 0;

            if (entity_1 - 1 > 0)
            {
                void** dest_2 = result + 0x68;

                do
                {
                    void* temp_1 = *dest_2;
                    long double f1_1 = *(temp_1 + 0x98);
                    fpu_val_7_2 - f1_1;
                    result = (fpu_val_7_2 < f1_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_7_2, f1_1) ? 1 : 0) << 0xa
                        | (fpu_val_7_2 == f1_1 ? 1 : 0) << 0xe | 0x3800;

                    if (*(&result + 1) & 0x41)
                    {
                        *(context + 0x28) = i_1;
                        *(context + 0x38) = fpu_val_7_2 / *(temp_1 + 0x98);
                        return result;
                    }

                    fpu_val_7_2 = fpu_val_7_2 - *(temp_1 + 0x98);
                    i_1 += 1;
                    dest_2 = &dest_2[1];
                } while (i_1 < entity_1 - 1);
            }
        }
    }

    return result;
}
