#include "NativeTestDispatcher.hpp"

#include "../Common.hpp"
#include "../Libs/json.hpp"
#include "../Natives/Natives.hpp"
#include "../Utils/Logger.hpp"
#include "../Utils/Utility.hpp"

namespace IGI::NativeTesting {
namespace {
constexpr int kProtocolVersion = 1;
constexpr size_t kMaximumArguments = 7;
constexpr char kCommandFile[] = "native-test-command.json";

struct Command {
  string case_id;
  string native_name;
  uint32_t address{};
  json arguments;
};

bool IsLogToken(const string &value) {
  if (value.empty() || value.size() > 160) return false;
  return std::all_of(value.begin(), value.end(), [](unsigned char value) {
    return std::isalnum(value) || value == '_' || value == '-' || value == '.';
  });
}

uint32_t ParseWord(const json &value) {
  if (value.is_number_unsigned() || value.is_number_integer())
    return value.get<uint32_t>();
  if (!value.is_string()) throw std::runtime_error("argument is not a uint32 or string");
  const string text = value.get<string>();
  size_t consumed = 0;
  const auto result = std::stoul(text, &consumed, 0);
  if (consumed != text.size() || result > UINT32_MAX)
    throw std::runtime_error("argument is outside uint32 range");
  return static_cast<uint32_t>(result);
}

Command ReadCommand() {
  const string path = g_Utility.GetModuleFolder() + "\\" + kCommandFile;
  std::ifstream input(path);
  if (!input.is_open()) throw std::runtime_error("command file is unavailable");
  const json document = json::parse(input);
  if (document.at("protocolVersion").get<int>() != kProtocolVersion)
    throw std::runtime_error("unsupported command protocol version");

  Command command;
  command.case_id = document.at("caseId").get<string>();
  command.native_name = document.at("nativeName").get<string>();
  command.address = ParseWord(document.at("address"));
  if (!IsLogToken(command.case_id) || !IsLogToken(command.native_name))
    throw std::runtime_error("caseId or nativeName contains unsafe characters");

  const auto &arguments = document.at("arguments");
  if (!arguments.is_array() || arguments.size() > kMaximumArguments)
    throw std::runtime_error("arguments must contain at most seven uint32 words");
  command.arguments = arguments;

  const uint32_t catalog_address = g_Natives->FindNativeAddress(command.native_name);
  if (!catalog_address || catalog_address != command.address)
    throw std::runtime_error("native name/address does not match deployed catalog");
  return command;
}

uintptr_t Invoke(const Command &command) {
  const uintptr_t address = static_cast<uintptr_t>(command.address);
  vector<string> strings;
  vector<vector<uint8_t>> buffers;
  vector<uint32_t> a;
  strings.reserve(command.arguments.size());
  buffers.reserve(command.arguments.size());
  a.reserve(command.arguments.size());
  for (const auto &argument : command.arguments) {
    if (!argument.is_object()) {
      a.push_back(ParseWord(argument));
      continue;
    }
    const string kind = argument.at("kind").get<string>();
    if (kind == "int" || kind == "word") {
      a.push_back(ParseWord(argument.at("value")));
    } else if (kind == "float") {
      const float value = argument.at("value").get<float>();
      uint32_t bits = 0;
      static_assert(sizeof(bits) == sizeof(value), "float must occupy one x86 word");
      std::memcpy(&bits, &value, sizeof(bits));
      a.push_back(bits);
    } else if (kind == "cstring") {
      strings.push_back(argument.at("value").get<string>());
      a.push_back(reinterpret_cast<uint32_t>(strings.back().data()));
    } else if (kind == "buffer") {
      const size_t size = argument.at("size").get<size_t>();
      if (!size || size > 1024 * 1024) throw std::runtime_error("buffer size is invalid");
      buffers.emplace_back(size, 0);
      a.push_back(reinterpret_cast<uint32_t>(buffers.back().data()));
    } else if (kind == "human_player") {
      a.push_back(static_cast<uint32_t>(READ_PTR(humanplayer_ptr)));
    } else if (kind == "null") {
      a.push_back(0);
    } else {
      throw std::runtime_error("unsupported argument fixture kind");
    }
  }
  switch (a.size()) {
  case 0: return reinterpret_cast<uintptr_t(__cdecl *)()>(address)();
  case 1: return reinterpret_cast<uintptr_t(__cdecl *)(uint32_t)>(address)(a[0]);
  case 2: return reinterpret_cast<uintptr_t(__cdecl *)(uint32_t, uint32_t)>(address)(a[0], a[1]);
  case 3: return reinterpret_cast<uintptr_t(__cdecl *)(uint32_t, uint32_t, uint32_t)>(address)(a[0], a[1], a[2]);
  case 4: return reinterpret_cast<uintptr_t(__cdecl *)(uint32_t, uint32_t, uint32_t, uint32_t)>(address)(a[0], a[1], a[2], a[3]);
  case 5: return reinterpret_cast<uintptr_t(__cdecl *)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t)>(address)(a[0], a[1], a[2], a[3], a[4]);
  case 6: return reinterpret_cast<uintptr_t(__cdecl *)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t)>(address)(a[0], a[1], a[2], a[3], a[4], a[5]);
  case 7: return reinterpret_cast<uintptr_t(__cdecl *)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t)>(address)(a[0], a[1], a[2], a[3], a[4], a[5], a[6]);
  default: throw std::runtime_error("unsupported argument count");
  }
}
} // namespace

bool QueueCommandFromFile() {
  try {
    const Command command = ReadCommand();
    LOG_FILE("NATIVE_TEST CASE_QUEUED id=%s native=%s address=0x%08X argc=%u",
             command.case_id.c_str(), command.native_name.c_str(), command.address,
             static_cast<unsigned int>(command.arguments.size()));
    for (size_t index = 0; index < command.arguments.size(); ++index) {
      string fixture = command.arguments[index].dump();
      std::replace(fixture.begin(), fixture.end(), '\n', ' ');
      std::replace(fixture.begin(), fixture.end(), '\r', ' ');
      if (fixture.size() > 256) fixture.resize(256);
      LOG_FILE("NATIVE_TEST CASE_ARG id=%s index=%u fixture=%s",
               command.case_id.c_str(), static_cast<unsigned int>(index),
               fixture.c_str());
    }
    LOG_FILE("NATIVE_TEST CASE_BEGIN id=%s native=%s address=0x%08X argc=%u",
             command.case_id.c_str(), command.native_name.c_str(), command.address,
             static_cast<unsigned int>(command.arguments.size()));
    const uintptr_t result = Invoke(command);
    LOG_FILE("NATIVE_TEST CASE_END id=%s native=%s result=0x%08X",
             command.case_id.c_str(), command.native_name.c_str(),
             static_cast<uint32_t>(result));
    return true;
  } catch (const std::exception &error) {
    LOG_ERROR("NATIVE_TEST COMMAND_REJECTED reason=%s", error.what());
    return false;
  }
}
} // namespace IGI::NativeTesting
