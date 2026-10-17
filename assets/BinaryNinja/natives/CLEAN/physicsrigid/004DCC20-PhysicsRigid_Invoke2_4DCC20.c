// IGI native provenance: PhysicsRigid_Invoke2_4DCC20 - 0x004DCC20 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004DCC20-PhysicsRigid_Invoke2_4DCC20.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "PhysicsRigid_Invoke2_4DCC20.h"

int32_t PhysicsRigid_Invoke2_4DCC20(int32_t* arg1, int32_t* arg2)

{
    void* result_val = *arg2;

    if (result_val)
        Sys_ExecuteBytecode_2(result_val);

    int32_t* context_val = arg1[2];
    int32_t eax_1 = *context_val;
    int32_t eax_2 = -(eax_1);
    Render_DrawLightmapMesh_14((eax_2 - eax_2) & context_val);
    int32_t result = arg1[0x1b];

    if (result)
    {
        int32_t* i = arg1;

        if (arg1)
        {
            do
            {
                void* ecx_1 = i[0x3a];
                i[0x37] = 0;
                int32_t* ecx_2 = *(ecx_1 + 8);
                int32_t eax_5 = *ecx_2;
                int32_t eax_6 = -(eax_5);
                result = Render_DrawSplineMesh_14((eax_6 - eax_6) & ecx_2);

                if (i != arg1)
                {
                    i = *i;

                    if (!i)
                        break;

                    if (!*i)
                        break;
                }
                else
                {
                    void* esi_1 = i[0x52];

                    if (!esi_1)
                        break;

                    i = *(esi_1 + 8);

                    if (!*i)
                        break;
                }
            } while (i);
        }
    }

    return result;
}
