#include "iff_parser.h"
#include <fstream>
#include <iostream>
#include <cstring>
#include <iterator>
#include <stdexcept>
#include <cmath>
#include <algorithm>

// IGI 2 stores animations in ILFF/MINA rather than IGI 1's FORM/BOBJ.
// TNVE records carry type, bone, record length in words, timestamp and flags.
static IffFile parseMina(std::ifstream& file, IffLogger logger) {
    IffFile out;
    const std::vector<uint8_t> bytes((std::istreambuf_iterator<char>(file)), {});
    auto range = [&](size_t p, size_t n) {
        if (p > bytes.size() || n > bytes.size() - p)
            throw std::runtime_error("Truncated MINA animation");
    };
    auto u32 = [&](size_t p) {
        range(p, 4);
        return uint32_t(bytes[p]) | uint32_t(bytes[p+1]) << 8 |
               uint32_t(bytes[p+2]) << 16 | uint32_t(bytes[p+3]) << 24;
    };
    auto real = [&](size_t p) {
        uint32_t word = u32(p); float value;
        std::memcpy(&value, &word, 4);
        if (!std::isfinite(value)) throw std::runtime_error("Non-finite MINA key");
        return value;
    };
    try {
        range(0, 20);
        if (std::memcmp(bytes.data()+16, "MINA", 4) || u32(4) != bytes.size() || u32(8) != 4)
            throw std::runtime_error("Invalid MINA header");
        size_t header = 0, hierarchy = 0, hierarchySize = 0, events = 0, eventsSize = 0;
        for (size_t p = 20; p < bytes.size();) {
            range(p, 16);
            const std::string tag(reinterpret_cast<const char*>(bytes.data()+p), 4);
            const size_t size = u32(p+4), skip = u32(p+12), data = p+16;
            range(data, size);
            if (u32(p+8) != 4) throw std::runtime_error("Invalid MINA chunk alignment");
            if (tag == "DHNA") { if (size < 52) throw std::runtime_error("Short MINA header"); header = data; }
            if (tag == "REIH") { hierarchy = data; hierarchySize = size; }
            if (tag == "TNVE") { events = data; eventsSize = size; }
            if (!skip) break;
            if (skip < 16 || skip > bytes.size()-p) throw std::runtime_error("Invalid MINA chunk link");
            p += skip;
        }
        if (!header || !hierarchy || !events) throw std::runtime_error("Missing MINA animation chunks");
        const size_t bones = u32(header+20);
        if (!bones || bones > 256 || hierarchySize/13 != bones || hierarchySize%13 > 1)
            throw std::runtime_error("Invalid MINA bone hierarchy");
        out.skeleton.bone_count = static_cast<int32_t>(bones);
        out.skeleton.parents.assign(bones, -1);
        const size_t offsets = hierarchy + hierarchySize - bones*12;
        size_t child = 1;
        for (size_t bone = 0; bone < bones; ++bone) {
            for (unsigned i = 0; i < bytes[hierarchy+bone]; ++i) {
                if (child >= bones || child <= bone) throw std::runtime_error("Invalid MINA parent ordering");
                out.skeleton.parents[child++] = static_cast<int32_t>(bone);
            }
            for (size_t axis = 0; axis < 3; ++axis)
                out.skeleton.translations.push_back(real(offsets+bone*12+axis*4));
        }
        if (child != bones) throw std::runtime_error("Incomplete MINA bone hierarchy");
        IffClip clip;
        clip.duration = static_cast<float>(u32(header+16));
        clip.flags = u32(header+12);
        clip.bone_rotations.resize(bones);
        for (size_t p = events; p < events+eventsSize;) {
            range(p, 4);
            const unsigned type = bytes[p], bone = bytes[p+1];
            const size_t length = (size_t(bytes[p+2]) | size_t(bytes[p+3]) << 8)*4;
            if (length < 12 || length > events+eventsSize-p)
                throw std::runtime_error("Invalid MINA event length");
            const float time = static_cast<float>(u32(p+4));
            if (type == 3 && bone == 0 && length == 24) {
                IffTranslationKey key{}; key.time = time;
                for (size_t axis = 0; axis < 3; ++axis) key.pos[axis] = real(p+12+axis*4);
                clip.root_translations.push_back(key);
            } else if (type == 4 && bone < bones && length == 72) {
                IffRotationKey key{}; key.time = time;
                for (size_t axis = 0; axis < 4; ++axis) {
                    key.rot[axis] = real(p+12+axis*4);
                    key.rot_b[axis] = real(p+32+axis*4);
                    key.rot_c[axis] = real(p+52+axis*4);
                }
                clip.bone_rotations[bone].push_back(key);
            } else if (type != 255) {
                throw std::runtime_error("Unsupported MINA event type/layout: " + std::to_string(type));
            }
            p += length;
        }
        for (auto& track : clip.bone_rotations)
            std::stable_sort(track.begin(), track.end(), [](const auto& a, const auto& b) { return a.time < b.time; });
        std::stable_sort(clip.root_translations.begin(), clip.root_translations.end(), [](const auto& a, const auto& b) { return a.time < b.time; });
        out.clips.push_back(std::move(clip));
        out.animation_capacity = 1;
        out.valid = true;
        if (logger) logger(1, "Parsed IGI 2 MINA animation: " + std::to_string(bones) + " bones.");
    } catch (const std::exception& error) {
        if (logger) logger(0, error.what());
    }
    return out;
}

static uint32_t readBE32(std::ifstream& f) {
    uint8_t b[4];
    f.read((char*)b, 4);
    return (b[0] << 24) | (b[1] << 16) | (b[2] << 8) | b[3];
}

static uint32_t readLE32(std::ifstream& f) {
    uint32_t v;
    f.read((char*)&v, 4);
    return v;
}

static float readLEFloat(std::ifstream& f) {
    float v;
    f.read((char*)&v, 4);
    return v;
}

static std::string readTag(std::ifstream& f) {
    char b[5] = {0};
    f.read(b, 4);
    return std::string(b);
}

IffFile IFF_Parse(const std::string& filepath, IffLogger logger) {
    IffFile out;
    std::ifstream f(filepath, std::ios::binary);
    if(!f) {
        if(logger) logger(0, "Failed to open IFF file: " + filepath);
        return out;
    }

    if(logger) logger(2, "Opened IFF file: " + filepath);

    const std::string magic = readTag(f);
    f.clear(); f.seekg(0);
    if (magic == "ILFF") return parseMina(f, logger);
    if (magic != "FORM") return out;

    int32_t bone_count = 0;
    IffClip* current_clip = nullptr;

    while(f && f.peek() != EOF) {
        std::string tag = readTag(f);
        if(f.eof()) break;
        uint32_t size = readBE32(f);
        if(logger) logger(3, "Parsed chunk TAG: [" + tag + "] SIZE: " + std::to_string(size));

        // FORM chunks: size field is "broken" per the IFF format (BOBJ,
        // BOAL, BOBH, BOAN containers never report their true size).  The
        // parser walks into them by tag, so we must NOT apply the chunk
        // sanity check on FORM - a 600 kB IFF has a "size" that the
        // format itself treats as the inner-form size.  We will only
        // validate the size for plain chunks that we seek past.
        bool isForm = (tag == "FORM");
        if (!isForm && size > 100000000) {
            if(logger) logger(0, "Chunk size suspiciously large! Aborting to prevent crash.");
            return out;
        }

        std::streampos next_pos = f.tellg() + (std::streamoff)size;
        if(size % 2 != 0) next_pos += 1;

        if (isForm) {
            std::string ftype = readTag(f);
            if(logger) logger(3, "FORM Type: " + ftype);
            if (ftype == "BOBJ" || ftype == "BOAL") {
                // don't skip over children, size is broken
                continue;
            } else if (ftype == "BOBH") {
                continue;
            } else if (ftype == "BOAN") {
                out.clips.push_back(IffClip());
                current_clip = &out.clips.back();
                continue;
            } else {
                f.seekg(next_pos); // skip unknown form
            }
        } else if (tag == "BOSH") {
            out.skeleton.object_id = readLE32(f);
            out.skeleton.bone_count = readLE32(f);
            bone_count = out.skeleton.bone_count;
            if(logger) logger(2, "BOSH: Parsed bone count: " + std::to_string(bone_count));
            f.seekg(next_pos);
        } else if (tag == "PLST") {
            if(logger) logger(3, "PLST: Reading " + std::to_string(bone_count) + " parents");
            for(int i=0; i<bone_count; i++) {
                if(f.eof()) break;
                out.skeleton.parents.push_back(readLE32(f));
            }
            f.seekg(next_pos);
        } else if (tag == "TLST") {
            if(logger) logger(3, "TLST: Reading " + std::to_string(bone_count) + " translations");
            for(int i=0; i<bone_count; i++) {
                if(f.eof()) break;
                out.skeleton.translations.push_back(readLEFloat(f));
                out.skeleton.translations.push_back(readLEFloat(f));
                out.skeleton.translations.push_back(readLEFloat(f));
            }
            f.seekg(next_pos);
        } else if (tag == "BALH") {
            uint32_t anim_count = readLE32(f);
            out.animation_capacity = readLE32(f);
            if(logger) logger(2, "BALH: Capacity: " + std::to_string(out.animation_capacity));
            f.seekg(next_pos);
        } else if (tag == "BOAH" && current_clip) {
            current_clip->duration = readLEFloat(f);
            current_clip->flags = readLE32(f);
            current_clip->animation_id = readLE32(f);
            if(logger) logger(2, "BOAH: Clip Duration: " + std::to_string(current_clip->duration));
            f.seekg(next_pos);
        } else if (tag == "BOTH" && current_clip) {
            uint32_t count = readLE32(f);
            if(count > 10000) { if(logger) logger(0, "BOTH count suspiciously large."); break; }
            current_clip->root_translations.resize(count);
            f.seekg(next_pos);
        } else if (tag == "BOTD" && current_clip) {
            for(auto& k : current_clip->root_translations) {
                if(f.eof()) break;
                k.pos[0] = readLEFloat(f); k.pos[1] = readLEFloat(f); k.pos[2] = readLEFloat(f);
                k.time = readLEFloat(f);
                k.tangent_in[0] = readLEFloat(f); k.tangent_in[1] = readLEFloat(f); k.tangent_in[2] = readLEFloat(f);
                k.tangent_out[0] = readLEFloat(f); k.tangent_out[1] = readLEFloat(f); k.tangent_out[2] = readLEFloat(f);
            }
            f.seekg(next_pos);
        } else if (tag == "BORH" && current_clip) {
            uint32_t count = readLE32(f);
            if(count > 10000) { if(logger) logger(0, "BORH count suspiciously large."); break; }
            current_clip->bone_rotations.push_back(std::vector<IffRotationKey>(count));
            f.seekg(next_pos);
        } else if (tag == "BORD" && current_clip) {
            if (current_clip->bone_rotations.empty()) return out;
            auto& keys = current_clip->bone_rotations.back();
            for(auto& k : keys) {
                if(f.eof()) break;
                for(int i=0; i<4; i++) k.rot[i] = readLEFloat(f);
                k.time = readLEFloat(f);
                for(int i=0; i<4; i++) k.rot_b[i] = readLEFloat(f);
                for(int i=0; i<4; i++) k.rot_c[i] = readLEFloat(f);
            }
            f.seekg(next_pos);
        } else if (tag == "BOEH" && current_clip) {
            uint32_t count = readLE32(f);
            if(count > 10000) { if(logger) logger(0, "BOEH count suspiciously large."); break; }
            current_clip->events.resize(count);
            f.seekg(next_pos);
        } else if (tag == "BOED" && current_clip) {
            for (auto& e : current_clip->events) {
                if(f.eof()) break;
                e.event_id = readLE32(f);
                e.bone_id = (int32_t)readLE32(f);
                e.time = readLEFloat(f);
                e.pos[0] = readLEFloat(f); e.pos[1] = readLEFloat(f); e.pos[2] = readLEFloat(f);
            }
            f.seekg(next_pos);
        } else {
            if(logger) logger(3, "Skipping unknown tag: " + tag);
            f.seekg(next_pos);
        }
    }
    out.valid = true;
    if(logger) logger(1, "Successfully parsed IFF file.");
    return out;
}

void IFF_Dump(const std::string& filepath, const std::string& outfile, IffLogger logger) {
    IffFile iff = IFF_Parse(filepath, logger);
    if(!iff.valid) {
        std::cerr << "Failed to parse IFF\n";
        return;
    }
    std::ofstream out(outfile);
    out << "IFF File Dump: " << filepath << "\n";
    out << "Object ID: " << iff.skeleton.object_id << "\n";
    out << "Bone Count: " << iff.skeleton.bone_count << "\n";
    out << "Animation Capacity: " << iff.animation_capacity << "\n";
    out << "Clips: " << iff.clips.size() << "\n\n";

    for(size_t i=0; i<iff.clips.size(); i++) {
        const auto& c = iff.clips[i];
        out << "Clip [" << i << "] ID: " << c.animation_id << ", Duration: " << c.duration
            << ", Flags: " << c.flags << "\n";
        out << "  Events: " << c.events.size() << "\n";
        for(const auto& e : c.events) {
            out << "    Event " << e.event_id << " at time " << e.time << "\n";
        }
    }
}
