#pragma once
#include <string>
#include <vector>
#include <algorithm>
#include <cctype>
#include "parsers/mef_native.h"

struct HardcodedBoneRef {
    const char* name;
    int parent;
    float px, py, pz;
};

enum class BoneRigType {
    JonesCinematic = 0,    // Type 0: Jones & Key cinematic actors
    StandardSoldier = 1,   // Type 1: Default enemies and player model
    HeavySoldier = 6,      // Type 6: Heavy/special soldier models
    AdvancedFingerRig = 48 // Type 48: Character models with advanced hand rig
};

inline std::vector<BoneInfo> GetIgi1HardcodedBones(const std::string& modelName, uint32_t maxBoneIdx) {
    // Normalize modelName to lowercase
    std::string normName = modelName;
    std::transform(normName.begin(), normName.end(), normName.begin(), [](unsigned char c) {
        return std::tolower(c);
    });

    // Companion parts (e.g. "012_01_2") must inherit the archetype of their
    // main model ("012_01_1"). Strip the trailing part digit and replace with
    // "1" so that the match below sees the base model name.
    std::string baseName = normName;
    {
        size_t lastUnder = baseName.rfind('_');
        if (lastUnder != std::string::npos && lastUnder + 2 == baseName.size()
            && baseName.back() >= '2' && baseName.back() <= '9') {
            baseName = baseName.substr(0, lastUnder + 1) + "1";
        }
    }

    BoneRigType type = BoneRigType::StandardSoldier; // Default: StandardSoldier
    if (maxBoneIdx == static_cast<uint32_t>(BoneRigType::AdvancedFingerRig)) {
        type = BoneRigType::AdvancedFingerRig;
    } else {
        if (baseName == "000_01_1" || baseName == "009_02_1" || baseName == "008_01_1") {
            type = BoneRigType::JonesCinematic;
        } else if (baseName == "012_01_1" || baseName == "015_01_1" || baseName == "028_01_1") {
            type = BoneRigType::HeavySoldier;
        }
    }

    std::vector<HardcodedBoneRef> refs;

    if (type == BoneRigType::JonesCinematic) {
        refs = {
            {"center", -1, 0.0f, 0.0f, 3990.4f},
            {"lower body", 0, -5.13892293e-01f, 1.83352112e+02f, 553.558f},
            {"upper body", 1, 1.52358502e-01f, -3.77480377e+02f, 1280.4136f},
            {"shoulders", 2, 7.41089210e-02f, 9.60487366e+01f, 631.042f},
            {"head", 3, -3.96711912e-05f, 1.03258926e+02f, 352.9273f},
            {"head lower", 4, -1.01815081e+00f, 9.77469406e+01f, 891.61316f},
            {"head upper", 4, -1.13468617e-01f, 7.63609085e+01f, 121.43697f},
            {"head end", 6, 3.71010319e-05f, 4.54250488e+02f, -358.70023f},
            {"upper left arm", 3, -8.73770996e+02f, 1.80327621e+02f, -380.14197f},
            {"lower left arm", 8, -4.98601959e+02f, -2.20046127e+02f, -1074.86f},
            {"left hand", 9, -4.76041199e+02f, 2.13745651e+02f, -980.41034f},
            {"upper left finge", 10, -2.31919205e+02f, -2.96972692e-03f, -439.61548f},
            {"lower left finge", 11, -1.12167320e+01f, 1.05587096e-04f, -200.45413f},
            {"left fingers end", 12, -1.51359072e+01f, -5.44903160e-05f, -306.64743f},
            {"upper right arm", 3, 8.77789124e+02f, 1.80327209e+02f, -380.14032f},
            {"lower right arm", 14, 4.94149628e+02f, -2.20123535e+02f, -1074.8108f},
            {"right hand", 15, 4.68049896e+02f, 2.13821838e+02f, -985.94403f},
            {"upper right fing", 16, 2.32673676e+02f, -1.04437349e-04f, -433.71722f},
            {"lower right fing", 17, 1.36010542e+01f, 3.24469962e-04f, -200.1371f},
            {"right fingers en", 18, 2.63072968e+00f, -1.09073611e-04f, -307.542f},
            {"none00", 1, 5.44034815e+00f, 7.25950439e+02f, -228.98277f},
            {"none01", 20, 9.46663422e-05f, 2.10357861e+03f, 392.49387f},
            {"none02", 21, 8.08206314e-05f, 1.61433179e+03f, 1297.793f},
            {"upper left leg", 0, -4.30378998e+02f, 9.49665756e+01f, -44.375652f},
            {"lower left leg", 23, -8.46106589e-01f, 2.08386444e+02f, -1737.646f},
            {"left foot", 24, 7.99461365e+01f, -3.63005524e+02f, -1827.7457f},
            {"left toe", 25, -2.31287994e+01f, 3.90893158e+02f, -163.4263f},
            {"left toe end", 26, -3.08275185e+01f, 7.38062317e+02f, -258.84998f},
            {"upper right leg", 0, 4.35314667e+02f, 9.49653473e+01f, -44.375652f},
            {"lower right leg", 28, 3.45443940e+00f, 2.08386444e+02f, -1737.6501f},
            {"right foot", 29, -7.91121902e+01f, -3.63005524e+02f, -1827.7416f},
            {"right toe", 30, 1.66293087e+01f, 3.90893158e+02f, -163.4263f},
            {"right toe end", 31, 1.02110405e+01f, 7.38062317e+02f, -258.84998f}
        };
    } else if (type == BoneRigType::StandardSoldier) {
        refs = {
            {"center", -1, 0.0f, 0.0f, 3990.4f},
            {"lower body", 0, -5.13904631e-01f, 1.8335211e+02f, 553.558f},
            {"upper body", 1, 1.52365461e-01f, -3.6878210e+02f, 1027.4037f},
            {"shoulders", 2, 7.40687847e-02f, 9.6049149e+01f, 686.4855f},
            {"head", 3, 9.28120812e-07f, 8.1288391e+01f, 371.17868f},
            {"head lower", 4, -1.01816308e+00f, 9.7746941e+01f, 891.61316f},
            {"head upper", 4, -1.13495238e-01f, 7.6360909e+01f, 121.437386f},
            {"head end", 6, 1.59762021e-05f, 4.5425049e+02f, -358.6998f},
            {"upper left arm", 3, -8.52697083e+02f, 1.8032762e+02f, -389.19165f},
            {"lower left arm", 8, -5.05782257e+02f, -1.2448235e+02f, -947.757f},
            {"left hand", 9, -4.51174377e+02f, 3.6357815e+01f, -831.19714f},
            {"upper left finge", 10, -1.74661209e+02f, -3.1095438e-03f, -306.36646f},
            {"lower left finge", 11, -5.47590141e+01f, -2.6617035e-05f, -246.78154f},
            {"left fingers end", 12, -1.52120523e+01f, -3.5429046e-05f, -385.1272f},
            {"upper right arm", 3, 8.17057739e+02f, 1.8032721e+02f, -389.19003f},
            {"lower right arm", 14, 5.05384949e+02f, -1.2455936e+02f, -928.3666f},
            {"right hand", 15, 4.01260132e+02f, 3.6434246e+01f, -848.47f},
            {"upper right fing", 16, 1.70200256e+02f, 1.5114690e-04f, -307.54242f},
            {"lower right fing", 17, 5.92297974e+01f, 2.4149237e-04f, -237.6237f},
            {"right fingers en", 18, 8.28260326e+00f, -2.1982698e-05f, -377.2043f},
            {"none00", 1, 1.12996347e-01f, 7.2239508e+02f, -229.50092f},
            {"none01", 20, 8.60274668e-05f, 2.1035786e+03f, 392.49387f},
            {"none02", 21, 7.42084594e-05f, 1.6143318e+03f, 1297.793f},
            {"upper left leg", 0, -4.30378998e+02f, 9.4966164e+01f, -44.375244f},
            {"lower left leg", 23, -8.46045136e-01f, -4.2745033e+01f, -1789.1041f},
            {"left foot", 24, 7.99461365e+01f, -1.6188129e+02f, -1850.7448f},
            {"left toe", 25, -2.31287594e+01f, 3.9089316e+02f, -163.4263f},
            {"left toe end", 26, -3.08275604e+01f, 7.3806232e+02f, -258.84998f},
            {"upper right leg", 0, 4.35314667e+02f, 9.4965347e+01f, -44.375652f},
            {"lower right leg", 28, 3.45439839e+00f, -4.2745033e+01f, -1789.1082f},
            {"right foot", 29, -7.91121902e+01f, -1.6188129e+02f, -1850.7448f},
            {"right toe", 30, 1.66292667e+01f, 3.9089316e+02f, -163.4263f},
            {"right toe end", 31, 1.02110405e+01f, 7.3806232e+02f, -258.84998f}
        };
    } else if (type == BoneRigType::HeavySoldier) {
        refs = {
            {"center", -1, 0.0f, 0.0f, 3990.4f},
            {"lower body", 0, -5.13896406e-01f, 1.83352112e+02f, 489.6645f},
            {"upper body", 1, 1.52378157e-01f, -2.18227097e+02f, 1046.5403f},
            {"shoulders", 2, 7.40782022e-02f, 5.87649002e+01f, 513.7039f},
            {"head", 3, 3.28596684e-06f, 8.12888031e+01f, 371.17828f},
            {"head lower", 4, -1.01817131e+00f, 9.77469406e+01f, 891.61316f},
            {"head upper", 4, -1.13495238e-01f, 7.63609085e+01f, 121.4378f},
            {"head end", 6, 1.15636631e-05f, 4.54250488e+02f, -358.70023f},
            {"upper left arm", 3, -5.83679993e+02f, 5.83929825e+01f, -389.19165f},
            {"lower left arm", 8, -4.66862061e+02f, -2.15144844e+01f, -868.36017f},
            {"left hand", 9, -4.37157867e+02f, 3.63582230e+01f, -852.6479f},
            {"upper left finge", 10, -1.99647629e+02f, -3.04460176e-03f, -260.6461f},
            {"lower left finge", 11, -2.45681343e+01f, -9.16303816e-06f, -210.57986f},
            {"left fingers end", 12, 9.49948349e+01f, -4.26356710e-05f, -318.0638f},
            {"upper right arm", 3, 5.80255737e+02f, 5.83925743e+01f, -389.19003f},
            {"lower right arm", 14, 4.63294434e+02f, -2.15915298e+01f, -874.6844f},
            {"right hand", 15, 4.35507172e+02f, 3.64342461e+01f, -844.1979f},
            {"upper right fing", 16, 1.94484619e+02f, 4.95280110e-05f, -241.98267f},
            {"lower right fing", 17, 5.74742508e+01f, -5.37550841e-05f, -190.76791f},
            {"right fingers en", 18, -4.76352501e+01f, 5.51038975e-05f, -375.40042f},
            {"none00", 1, 1.12985700e-01f, 7.22395081e+02f, -229.50092f},
            {"none01", 20, 8.78370774e-05f, 2.10357861e+03f, 392.49344f},
            {"none02", 21, 4.90893290e-05f, 1.61433179e+03f, 1297.793f},
            {"upper left leg", 0, -3.28154297e+02f, 9.49665756e+01f, -44.375652f},
            {"lower left leg", 23, -8.46086085e-01f, -7.94472427e+01f, -1660.7231f},
            {"left foot", 24, 7.99461365e+01f, -1.13308464e+02f, -1689.0879f},
            {"left toe", 25, -2.31287594e+01f, 3.90893158e+02f, -342.1192f},
            {"left toe end", 26, -3.08275604e+01f, 7.38062317e+02f, -258.84998f},
            {"upper right leg", 0, 3.30613129e+02f, 9.49653473e+01f, -44.375652f},
            {"lower right leg", 28, 3.45442700e+00f, -7.94472427e+01f, -1660.7273f},
            {"right foot", 29, -7.91121902e+01f, -1.13308464e+02f, -1689.0879f},
            {"right toe", 30, 1.66293087e+01f, 3.90893158e+02f, -342.1192f},
            {"right toe end", 31, 1.02111225e+01f, 7.38062317e+02f, -258.84998f}
        };
    } else if (type == BoneRigType::AdvancedFingerRig) {
        refs = {
            {"center shoulders", -1, 0.0f, 0.0f, 0.0f},
            {"none11", 0, -1.1343995e-01f, 808.52167f, -384.8368f},
            {"none12", 1, 6.1222905e-05f, 1066.7172f, -1691.1564f},
            {"none13", 2, 5.0344344e-05f, 1576.28f, 1174.8434f},
            {"upper right arm", 0, 8.4967010e+02f, 180.32721f, 132.39622f},
            {"lower right arm", 4, 4.3388925e+02f, -149.5171f, -779.57935f},
            {"right hand", 5, -9.7083801e+01f, -978.6327f, 3.3235476f},
            {"upper right midd", 6, -3.1386255e+01f, -467.02182f, -19.283188f},
            {"lower right midd", 7, -2.8277719e+00f, -197.48618f, 17.174404f},
            {"right middle fin", 8, -3.0587697e+00f, -95.37372f, 13.356072f},
            {"none03", 9, 4.5676541e-05f, -172.4121f, 14.865039f},
            {"upper right litt", 6, 1.7049968e+02f, -422.55972f, -6.261186f},
            {"lower right litt", 11, 4.4212223e+01f, -121.56846f, 24.181145f},
            {"right little fin", 12, 2.2205603e+01f, -75.37213f, 2.3467457f},
            {"none05", 13, 3.6761887e+01f, -172.4121f, 14.86508f},
            {"upper right ring", 6, 7.1074196e+01f, -446.1445f, -21.541477f},
            {"lower right ring", 15, 2.8278374e+01f, -174.86356f, 17.174322f},
            {"right ring finge", 16, 1.6271030e+01f, -92.138695f, 13.121167f},
            {"none04", 17, 1.9012526e+01f, -182.83273f, 14.350663f},
            {"upper right fore", 6, -1.4618254e+02f, -462.87256f, -23.310581f},
            {"lower right fore", 19, -4.3129650e+01f, -145.90894f, 25.17295f},
            {"right forefinger", 20, -2.2678118e+01f, -89.71755f, 13.356154f},
            {"none02", 21, -3.9589764e+01f, -155.44524f, 14.865039f},
            {"upper right thum", 6, -9.8684921e+01f, -161.50813f, 45.1543f},
            {"lower right thum", 23, -7.9162163e+01f, 95.27623f, -83.39865f},
            {"right thumb tip", 24, -2.1998058e+01f, -120.164345f, 64.02785f},
            {"none01", 25, 1.5249572e+01f, -162.13974f, 53.904995f},
            {"upper left arm", 0, -8.5407739e+02f, 180.32721f, 132.39622f},
            {"lower left arm", 27, -4.3388925e+02f, 149.5171f, 779.57935f},
            {"left hand", 28, 9.7083801e+01f, 978.6327f, -3.3235393f},
            {"upper left ring ", 29, -7.1074608e+01f, 446.4312f, 12.079514f},
            {"lower left ring ", 30, -2.8278456e+01f, 172.79057f, -13.583974f},
            {"left ring finger", 31, -1.6120094e+01f, 90.7436f, -12.373688f},
            {"none08", 32, -1.9012402e+01f, 182.83273f, -14.350581f},
            {"upper left middl", 29, 3.1386295e+01f, 467.30853f, 9.821224f},
            {"lower left middl", 34, 2.8277595e+00f, 198.48232f, -8.268759f},
            {"left middle fing", 35, 2.8405800e+00f, 93.8242f, -12.595568f},
            {"none06", 36, -3.3972385e-05f, 172.4121f, -14.864957f},
            {"upper left littl", 29, -1.7049968e+02f, 419.45905f, 3.8814964f},
            {"lower left littl", 38, -4.4212223e+01f, 128.28795f, -17.394156f},
            {"left little fing", 39, -2.2205521e+01f, 76.166756f, -9.846415f},
            {"none07", 40, -3.6761887e+01f, 172.4121f, -14.864998f},
            {"upper left foref", 29, 1.4618254e+02f, 463.15927f, 13.848699f},
            {"lower left foref", 42, 4.3129650e+01f, 147.39537f, -11.426856f},
            {"left forefinger ", 43, 2.4544132e+01f, 92.61793f, -10.2587185f},
            {"none09", 44, 3.9589642e+01f, 155.44524f, -14.865121f},
            {"upper left thumb", 29, 9.8684921e+01f, 161.50813f, -45.1543f},
            {"lower left thumb", 46, 8.9203506e+01f, -95.27623f, 84.01346f},
            {"left thumb tip", 47, 2.1998140e+01f, 121.58238f, -60.84649f},
            {"none10", 48, -1.5249531e+01f, 154.34587f, -60.435658f},
            {"none20", 0, -1.1341291e-01f, 808.52167f, 156.95953f},
            {"none21", 50, 7.7520075e-05f, 1992.581f, -165.84662f},
            {"none22", 51, 6.6365435e-05f, 1962.6721f, -113.23023f},
            {"none30", 0, -1.1346616e-01f, 808.52167f, 730.6076f},
            {"none31", 53, 1.3104209e-04f, 1875.9844f, 691.7939f},
            {"none32", 54, -4.8148479e-05f, 1831.6246f, -714.1867f}
        };
    }

    std::vector<BoneInfo> bones(refs.size());
    for (size_t i = 0; i < refs.size(); ++i) {
        bones[i].name = refs[i].name;
        bones[i].parent = refs[i].parent;
        bones[i].pivot = glm::vec3(refs[i].px, refs[i].py, refs[i].pz);
        bones[i].numChild = 0; // Will compute below or is not needed
    }

    // Reconstruct numChild
    for (const auto& b : bones) {
        if (b.parent >= 0 && b.parent < static_cast<int>(bones.size())) {
            bones[b.parent].numChild++;
        }
    }

    return bones;
}
