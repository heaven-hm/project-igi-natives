// Original IGI.EXE function: GunCABarrel_OnEvent (VA 0x00472930; static CFG gate PASS, CFG score 1.000).
#include "GunCABarrel_OnEvent.h"
void* GunCABarrel_OnEvent(double* context, void* param_2)

{
    if (*(param_2 + 8) == 5)
    {
        for (int32_t i = 0; i < 6; i += 1)
        {
            double item_20;
            WeaponType_UpdateAnim(&item_20, context, i);
            float temp_1 = context[0x10];
            float data_1 = *(context + 0x8c);
            item_20 = item_20 + context[4];
            double item_18 = item_18 + context[5];
            double item_10 = item_10 + context[6];
            float item_28_2 = -(temp_1);
            float item_24_2 = -(data_1);
            float item_2c = -(*(context + 0x74)) * 113.0f;
            float item_28_3 = item_28_2 * 113.0f;
            float item_24_3 = item_24_2 * 113.0f;
            Weapon_EjectMagazine_5(Script_FormatString(), &item_20, &item_2c, &context[0xe], "113_01_1");
        }

        DynObj_CreateMagicObject_5(context, DynObj_Missing("101_02_1"));
    }

    if (*(param_2 + 8) != 6)
        return param_2;

    void* data_4 = DynObj_Missing("101_05_1");

    if (data_4)
        return DynObj_CreateMagicObject_5(context, data_4);

    Error_Show("VirModel is null");

    while (true)
        /* nop */
}
