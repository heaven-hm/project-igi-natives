#include "0045C440-Soldier_Execute.h"
/* 0x0045c440 Soldier_Execute full linked: callers=0 callees=15 */
void* Soldier_Execute(void* a1, int32_t* a2)

// Sig: void Soldier_Execute(void* context, Soldier* soldierPtr)
// Note: Executes/initializes a SOLDIER AI entity in the level. Params: context
// = task/context object (2nd arg is the soldier ptr - verified: esi=[esp+0x1C]
// after prologue). The function reads soldier-struct fields +0x800 (ptr),
// +0x4C4 and +0x254 (sub-object bases passed to spawner 0x4F2060), +0xD1C, then
// installs a per-soldier callback (0x45C700) into the created object at +0x14
// and routes through 0x48A330. Referenced via soldier-task VTABLE at .data
// 0x53EC90 (not called directly). SOLDIER STRUCT LAYOUT (recovered from the
// 0x45C190-0x45CA50 vtable family): +0x68 name/string area; +0x254
// patrol/waypoint sub-struct (field +0x94 used); +0x2EC param ptr slot; +0x33D
// flag byte; +0x4C4 object ref; +0x696 active/enable flag (0=off, 1=on); +0x800
// ptr; +0xD0C id (0xFFFFFFFF = unset); +0xD14 dword; +0xD1C ptr. Sibling vtable
// methods: 0x45C190, 0x45C1C0, 0x45C2E0, 0x45C330, 0x45C5A0, 0x45C650,
// 0x45C750, 0x45C8B0, 0x45CA50 (same struct, enable/disable/reset semantics).
{
    void* esi = a2;
    void* ebp = *(esi + 0x800);
    int32_t var_8 = 0x17;
    int32_t var_4 = 0x16;
    a2 = 0xffffffff;
    void* eax = Table_GetAt(esi + 0x4c4, 0);

    if (eax)
    {
        sub_4f2390(eax);
        sub_4f2070(esi + 0x4c4, nullptr, nullptr);
    }

    sub_4f2290(esi);
    *(esi + 0x33d) = 0;
    *(esi + 0x696) = 1;
    int32_t ebx_1 = *(esi + 0x2e8);
    int32_t eax_1 = sub_489e10(esi + 0x254, ebx_1);

    if (!ebp)
    {
    label_45c4da:
        uint32_t eax_3 = sub_4b47c0(Level_SetMission_5(), 2);
        int32_t ecx_1 = *(esi + 0xd1c);

        if (ecx_1 >= 0)
        {
            if (ecx_1 <= 1)
            {
                long double x87_r0;
                int32_t eax_5 = sub_45daa0(x87_r0, esi, esi + 0xd20);
                char temp0_1 = eax_5;
                eax_5 = -(eax_5);
                void* eax_6 = eax_5 - eax_5;
                eax_6 &= 0xd5;
                a2 = eax_6 + 0x47;
            }
            else if (ecx_1 == 2)
            {
                if (ebx_1 == 0xf || ebx_1 == 0x10)
                    a2 = *(eax_1 + (eax_3 << 2) + 8);
                else
                    a2 = (&var_8)[eax_3];
            }
        }
    }
    else
    {
        int32_t* ebp_1 = *(ebp + 0x3ad0);

        if (ebp_1 == 0xffffffff)
            goto label_45c4da;

        a2 = ebp_1;

        if (ebp_1 == 0xffffffff)
            goto label_45c4da;
    }

    sub_4d61d0(esi + 0x68, 0, a2, 0, 0f);
    sub_45d5b0(esi + 0xd38, esi, *(esi + 0xcf8), a2);
    Human_ViewCam(esi, 3);
    sub_464700(*(esi + 0x4ec));
    sub_4635f0(esi);
    sub_4638a0(esi, "ai_death_", 4);
    void* result = sub_48a330(esi);
    *(a1 + 0x14) = sub_45c700;
    return result;
}
