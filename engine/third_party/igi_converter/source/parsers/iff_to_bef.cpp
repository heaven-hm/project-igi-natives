#include "iff_to_bef.h"
#include "iff_parser.h"
#include <fstream>
#include <iostream>
#include <filesystem>
#include <iomanip>

namespace fs = std::filesystem;

bool ConvertIffToBef(const std::string& iffFile, const std::string& outDir) {
    IffFile iff = IFF_Parse(iffFile);
    if (!iff.valid) {
        std::cerr << "Failed to parse IFF file: " << iffFile << "\n";
        return false;
    }

    fs::create_directories(outDir);

    std::string baseName = fs::path(iffFile).stem().string();

    // Also write Anims.qsc for engine compilation
    std::string qscFile = outDir + "/Anims.qsc";
    std::ofstream qscOut(qscFile);
    if (qscOut.is_open()) {
        qscOut << "// Script for converting common models //////////////////////////////////////\n\n";
        qscOut << "// Script directories ///////////////////////////////////////////////////////\n\n";
        qscOut << "SetAnimDirectory(\"anims\");\nSetModelDirectory(\"models\");\nSetTextureDirectory(\"textures\");\nSetPaletteDirectory(\"palettes\");\nSetTempDirectory(\"temp\");\n\n";
        qscOut << "// Model settings /////////////////////////////////////////////////////////\n\n";
        qscOut << "SetScale(40.96);\n";
        qscOut << "SetTargetPlatform(\"PC\");\n\n";
        qscOut << "// Texture settings /////////////////////////////////////////////////////////\n\n";
        qscOut << "StartTexScript(\"commontex\");\n\n";
        qscOut << "SetLightmapResolution(1);\n\n";
    }

    for (size_t c = 0; c < iff.clips.size(); ++c) {
        const auto& clip = iff.clips[c];

        char clipName[32];
        int animId = clip.animation_id;
        if (animId < 10) snprintf(clipName, sizeof(clipName), "_anim_00%d", animId);
        else if (animId < 100) snprintf(clipName, sizeof(clipName), "_anim_0%d", animId);
        else snprintf(clipName, sizeof(clipName), "_anim_%d", animId);

        if (qscOut.is_open()) {
            qscOut << "CreateAnim(\"anims_" << baseName << "\\\\" << baseName << clipName << "\");\n";
        }

        std::string outFile = outDir + "/" + baseName + clipName + ".BEF";
        std::ofstream out(outFile);
        if (!out.is_open()) continue;

        int duration = (int)clip.duration;
        int tp = (clip.flags != 0) ? 1 : 0;

        out << "AnimInit(\"" << baseName << clipName << "\",0," << duration << "," << tp << ");\n";
        out << "BreakScript();\n";

        float Sc = 40.96f;

        for (int i = 0; i < iff.skeleton.bone_count; ++i) {
            char bname[32];
            snprintf(bname, sizeof(bname), "Bone_%02d", i);
            int parent = iff.skeleton.parents[i];
            float px = iff.skeleton.translations[i * 3 + 0] / Sc;
            float py = iff.skeleton.translations[i * 3 + 1] / Sc;
            float pz = iff.skeleton.translations[i * 3 + 2] / Sc;
            out << "Bone(" << i << ",\"" << bname << "\"," << parent << ","
                << px << "," << py << "," << pz << ");\n";
        }
        out << "BuildHierarchy();\n";
        out << "BreakScript();\n";

        for (const auto& trans : clip.root_translations) {
            out << "TranslationKeyFrameData(0,0," << (int)trans.time << ","
                << (trans.pos[0] / Sc) << "," << (trans.pos[1] / Sc) << "," << (trans.pos[2] / Sc) << ");\n";
        }

        for (int i = 0; i < iff.skeleton.bone_count; ++i) {
            if (i >= (int)clip.bone_rotations.size()) continue;
            for (const auto& rot : clip.bone_rotations[i]) {
                out << std::setprecision(8) << "RotationKeyFrameData(" << i << ",0," << (int)rot.time << ","
                    << rot.rot[0] << "," << rot.rot[1] << "," << rot.rot[2] << "," << rot.rot[3] << ","
                    << rot.rot_b[0] << "," << rot.rot_b[1] << "," << rot.rot_b[2] << "," << rot.rot_b[3] << ","
                    << rot.rot_c[0] << "," << rot.rot_c[1] << "," << rot.rot_c[2] << "," << rot.rot_c[3] << ");\n";
            }
        }

        for (size_t i = 0; i < clip.events.size(); ++i) {
            const auto& ev = clip.events[i];
            out << "TriggerData(" << i << "," << ev.event_id << "," << (int)ev.time << ","
                << (int)ev.bone_id << "," << (ev.pos[0] / Sc) << "," << (ev.pos[1] / Sc) << "," << (ev.pos[2] / Sc) << ");\n";
        }

        out.close();
        std::cout << " -> " << baseName << clipName << ".BEF\n";
    }

    if (qscOut.is_open()) {
        qscOut << "\n// End script ///////////////////////////////////////////////////////////////\n\n";
        qscOut << "EndTexScript();\n\n";
        qscOut << "BuildStatic(\"level\");\n";
        qscOut.close();
    }

    return true;
}
