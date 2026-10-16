#include "igi/asset_io.hpp"
#include "igi/mission_assets.hpp"
#include "igi/qvm_initializer.hpp"
#include "iff_parser.h"
#include "dat_parser.h"
#include "mef_native.h"
#include "mtp_parser.h"
#include "qvm_parser.h"
#include "res_parser.h"
#include "tex_parser.h"

#include <chrono>
#include <fstream>
#include <iostream>
#include <stdexcept>

void require(bool condition, const char* message) {
    if (!condition) { throw std::runtime_error(message); }
}

template<class Operation>
void require_failure(Operation operation, const char* message) {
    bool failed = false;
    try { operation(); } catch (const std::exception&) { failed = true; }
    require(failed, message);
}

igi::assets::FileBytes qvm_fixture(const std::vector<std::uint8_t>& code) {
    igi::assets::FileBytes file(60);
    const auto integer = [&](std::size_t offset, std::uint32_t value) {
        for (std::size_t byte_index = 0; byte_index < 4; ++byte_index) {
            file[offset + byte_index] = static_cast<std::uint8_t>(value >> (byte_index * 8));
        }
    };
    file[0] = 'L'; file[1] = 'O'; file[2] = 'O'; file[3] = 'P';
    integer(4, 8); integer(8, 5);
    integer(16, 60); integer(24, 6);
    integer(32, 66); integer(40, 5);
    integer(44, 71); integer(48, static_cast<std::uint32_t>(code.size()));
    const std::vector<std::uint8_t> pools{'K', 'n', 'o', 'w', 'n', 0, 't', 'e', 's', 't', 0};
    file.insert(file.end(), pools.begin(), pools.end());
    file.insert(file.end(), code.begin(), code.end());
    return file;
}

int main() {
    std::filesystem::path fixture_directory;
    try {
        const std::vector<std::uint8_t> short_bytes{0, 1, 2};
        const igi::assets::BinaryView short_view(short_bytes);
        require_failure([&] { static_cast<void>(short_view.unsigned_integer(0)); }, "Truncated integer must fail");
        require_failure([&] { static_cast<void>(short_view.slice(2, 9)); }, "Truncated slice must fail");
        require_failure([&] { static_cast<void>(igi::assets::QvmInitializer(short_view)); }, "Truncated QVM initializer must fail");
        require_failure([&] { static_cast<void>(igi::assets::resolve_path(".", "../igi.exe")); }, "Asset traversal must fail");
        const auto valid_script = qvm_fixture({13, 0, 24, 1, 0, 0, 0, 16, 0, 0, 0, 20, 3, 0, 0, 0, 9, 0, 0, 18, 0});
        const igi::assets::QvmInitializer valid_initializer{igi::assets::BinaryView(valid_script)};
        require(valid_initializer.calls().size() == 1 && valid_initializer.calls()[0].function == "Known" &&
                valid_initializer.calls()[0].arguments[0].text == "test", "QVM must evaluate the argument block and skip inline code after CALL");
        const auto recursive_script = qvm_fixture({13, 0, 24, 1, 0, 0, 0, 0, 0, 0, 0});
        require_failure([&] { static_cast<void>(igi::assets::QvmInitializer{igi::assets::BinaryView(recursive_script)}); },
                        "Recursive QVM initializer must stop at the nesting limit");
        const auto unsupported_script = qvm_fixture({255});
        require_failure([&] { static_cast<void>(igi::assets::QvmInitializer{igi::assets::BinaryView(unsupported_script)}); },
                        "Unsupported QVM opcode must fail explicitly");

        TEXImage packed;
        packed.width = 4;
        packed.height = 1;
        packed.mode = 2;
        packed.pixels = {0x00, 0xfc, 0xe0, 0x83, 0x1f, 0x80, 0, 0};
        const auto decoded = igi::assets::decode_original_texture(packed);
        require(decoded.pixels[0] == 0xffff0000u && decoded.pixels[1] == 0xff00ff00u &&
                decoded.pixels[2] == 0xff0000ffu && decoded.pixels[3] == 0,
                "Retail mode-2 texture must use ARGB1555 including the transparency bit");
        packed.pixels.clear();
        require_failure([&] { static_cast<void>(igi::assets::decode_original_texture(packed)); }, "Truncated decoded texture must fail");

        fixture_directory = std::filesystem::temp_directory_path() / ("igi-malformed-assets-" +
            std::to_string(std::chrono::steady_clock::now().time_since_epoch().count()));
        std::filesystem::create_directories(fixture_directory);
        const auto bad_file = fixture_directory / "truncated.asset";
        { std::ofstream output(bad_file, std::ios::binary); output.write("BAD!", 4); }
        require(!TEX_Parse(bad_file.string()).valid, "TEX parser must reject truncated input");
        require(!MTP_Parse(bad_file.string()).valid, "MTP parser must reject truncated input");
        require(!QVM_Parse(bad_file.string()).valid, "QVM parser must reject truncated input");
        require(!DAT_Parse(bad_file.string()).valid, "DAT parser must reject invalid counts");
        require(!IFF_Parse(bad_file.string()).valid, "IFF parser must reject truncated input");
        std::string archive_error;
        require(!RES_ForEachEntry(bad_file.string(), [](const auto&, const auto*, std::size_t) {}, archive_error),
                "RES parser must reject truncated input");
        require_failure([&] { static_cast<void>(ParseMefFile(bad_file.string())); }, "MEF parser must reject truncated input");
        std::filesystem::remove_all(fixture_directory);
        std::cout << "Asset probe passed: bounds, traversal, QVM, texture channels and alpha, malformed TEX/MTP/QVM/IFF/RES/MEF\n";
        return 0;
    } catch (const std::exception& exception) {
        if (!fixture_directory.empty()) { std::filesystem::remove_all(fixture_directory); }
        std::cerr << "Asset probe failed: " << exception.what() << '\n';
        return 1;
    }
}
