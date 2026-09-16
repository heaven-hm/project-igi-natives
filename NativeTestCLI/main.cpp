#include <windows.h>
#include <tlhelp32.h>
#include <shlobj.h>
#include <shellapi.h>

#include <algorithm>
#include <chrono>
#include <cctype>
#include <filesystem>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <map>
#include <optional>
#include <sstream>
#include <stdexcept>
#include <string>
#include <thread>
#include <vector>

#include "../IGI_Natives/Libs/json.hpp"
#include "../IGI_Natives/Libs/GTLibc.hpp"

namespace fs = std::filesystem;
using json = nlohmann::json;

namespace {
constexpr wchar_t kGamePath[] = L"D:\\IGI1\\igi.exe";
constexpr DWORD kLaunchTimeoutMs = 45000;
constexpr DWORD kInjectDelayMs = 10000;
constexpr DWORD kMarkerTimeoutMs = 20000;

struct Handle {
  HANDLE value{};
  Handle() = default;
  explicit Handle(HANDLE h) : value(h) {}
  ~Handle() { if (value && value != INVALID_HANDLE_VALUE) CloseHandle(value); }
  Handle(const Handle&) = delete;
  Handle& operator=(const Handle&) = delete;
  Handle(Handle&& other) noexcept : value(other.value) { other.value = nullptr; }
  explicit operator bool() const { return value && value != INVALID_HANDLE_VALUE; }
};

struct ComScope {
  HRESULT hr{CoInitializeEx(nullptr, COINIT_APARTMENTTHREADED)};
  ~ComScope() { if (SUCCEEDED(hr)) CoUninitialize(); }
};

struct Options {
  std::optional<std::string> name;
  std::optional<uint32_t> address;
  int level{1};
  fs::path game{kGamePath};
  fs::path catalog{L"D:\\IGI1\\Assets\\IGINatives.json"};
  fs::path models{L"D:\\IGI1\\IGIModels.json"};
  fs::path dll;
  fs::path results{L"tools\\native_test_harness\\results"};
  std::vector<json> arguments;
  std::string configuration{"debug"};
  bool build{true};
  bool buildOnly{false};
  bool launch{true};
  bool inject{true};
  bool windowed{true};
  unsigned retries{2};
  DWORD injectDelayMs{kInjectDelayMs};
  fs::path repoRoot;
  size_t firstCount{};
  size_t lastCount{};
  bool all{};
  std::optional<std::pair<uint32_t,uint32_t>> addressRange;
  bool resume{true};
  bool confirmCdecl{};
};

struct SignatureBlocked : std::runtime_error { using std::runtime_error::runtime_error; };

std::string Narrow(const std::wstring& value) {
  if (value.empty()) return {};
  int size = WideCharToMultiByte(CP_UTF8, 0, value.data(), static_cast<int>(value.size()), nullptr, 0, nullptr, nullptr);
  std::string result(static_cast<size_t>(size), '\0');
  WideCharToMultiByte(CP_UTF8, 0, value.data(), static_cast<int>(value.size()), result.data(), size, nullptr, nullptr);
  return result;
}

std::wstring Widen(const std::string& value) {
  if (value.empty()) return {};
  int size = MultiByteToWideChar(CP_UTF8, MB_ERR_INVALID_CHARS, value.data(), static_cast<int>(value.size()), nullptr, 0);
  if (!size) throw std::runtime_error("invalid UTF-8 argument");
  std::wstring result(static_cast<size_t>(size), L'\0');
  MultiByteToWideChar(CP_UTF8, MB_ERR_INVALID_CHARS, value.data(), static_cast<int>(value.size()), result.data(), size);
  return result;
}

std::string Timestamp() {
  SYSTEMTIME st{}; GetLocalTime(&st);
  std::ostringstream out;
  out << std::setfill('0') << st.wYear << '-' << std::setw(2) << st.wMonth << '-'
      << std::setw(2) << st.wDay << 'T' << std::setw(2) << st.wHour << ':'
      << std::setw(2) << st.wMinute << ':' << std::setw(2) << st.wSecond;
  return out.str();
}

std::string WinError(const char* operation) {
  DWORD code = GetLastError();
  return std::string(operation) + " failed (Win32 " + std::to_string(code) + ")";
}

void AtomicWrite(const fs::path& path, const std::string& content) {
  fs::create_directories(path.parent_path());
  fs::path temporary = path; temporary += L".tmp";
  { std::ofstream stream(temporary, std::ios::binary | std::ios::trunc);
    if (!stream) throw std::runtime_error("cannot write " + Narrow(temporary.wstring()));
    stream.write(content.data(), static_cast<std::streamsize>(content.size()));
    stream.flush();
    if (!stream) throw std::runtime_error("write failed for " + Narrow(temporary.wstring())); }
  std::error_code ec; fs::remove(path, ec); ec.clear(); fs::rename(temporary, path, ec);
  if (ec) throw std::runtime_error("cannot publish " + Narrow(path.wstring()) + ": " + ec.message());
}

class Logger {
 public:
  explicit Logger(fs::path path) : path_(std::move(path)) { fs::create_directories(path_.parent_path()); }
  void Event(const std::string& event, json details = json::object()) noexcept {
    try { details["timestamp"] = Timestamp(); details["event"] = event;
      std::ofstream out(path_, std::ios::app); out << details.dump() << '\n'; out.flush();
      std::cout << '[' << details["timestamp"].get<std::string>() << "] " << event << '\n'; }
    catch (const std::exception& e) { std::cerr << "logging failure: " << e.what() << '\n'; }
  }
 private: fs::path path_;
};

uint32_t ParseAddress(const std::string& value) {
  size_t used{}; unsigned long parsed = std::stoul(value, &used, 0);
  if (used != value.size()) throw std::invalid_argument("invalid address: " + value);
  return static_cast<uint32_t>(parsed);
}

json ParseArgument(const std::string& text) {
  auto split = text.find(':');
  std::string kind = split == std::string::npos ? "int" : text.substr(0, split);
  std::string value = split == std::string::npos ? text : text.substr(split + 1);
  if (kind == "null" || kind == "human_player") return json{{"kind", kind}};
  if (kind == "int" || kind == "word") return json{{"kind", kind}, {"value", value}};
  if (kind == "float") return json{{"kind", kind}, {"value", std::stof(value)}};
  if (kind == "cstring") return json{{"kind", kind}, {"value", value}};
  if (kind == "buffer") return json{{"kind", kind}, {"size", std::stoul(value)}};
  throw std::invalid_argument("unsupported --arg kind: " + kind);
}

std::string Lower(std::string value);

Options ParseOptions(int argc, wchar_t** argv) {
  Options o;
  wchar_t module[MAX_PATH]{}; GetModuleFileNameW(nullptr, module, MAX_PATH);
  fs::path root = fs::path(module).parent_path().parent_path();
  o.repoRoot = root;
  const fs::path executableDirectory = fs::path(module).parent_path();
  bool dllExplicit = false;
  o.dll = executableDirectory / L"IGI-Natives-Debug.dll";
  o.results = root / L"tools" / L"native_test_harness" / L"results";
  for (int i = 1; i < argc; ++i) {
    std::wstring key = argv[i];
    auto value = [&]() -> std::wstring { if (++i >= argc) throw std::invalid_argument("missing value for " + Narrow(key)); return argv[i]; };
    if (key == L"--native" || key == L"--name") o.name = Narrow(value());
    else if (key == L"--address") o.address = ParseAddress(Narrow(value()));
    else if (key == L"--first") { auto count=std::stoull(value()); if(count>SIZE_MAX) throw std::invalid_argument("--first is too large"); o.firstCount=static_cast<size_t>(count); }
    else if (key == L"--last") { auto count=std::stoull(value()); if(count>SIZE_MAX) throw std::invalid_argument("--last is too large"); o.lastCount=static_cast<size_t>(count); }
    else if (key == L"--all") o.all = true;
    else if (key == L"--address-range") { uint32_t begin=ParseAddress(Narrow(value())); uint32_t end=ParseAddress(Narrow(value())); if(begin>end) throw std::invalid_argument("address range start exceeds end"); o.addressRange={{begin,end}}; }
    else if (key == L"--no-resume") o.resume = false;
    else if (key == L"--abi") { std::string abi=Lower(Narrow(value())); if(abi!="cdecl") throw std::invalid_argument("only --abi cdecl is supported"); o.confirmCdecl=true; }
    else if (key == L"--level") o.level = std::stoi(value());
    else if (key == L"--dll") { o.dll = value(); dllExplicit = true; }
    else if (key == L"--catalog") o.catalog = value();
    else if (key == L"--results") o.results = value();
    else if (key == L"--arg") o.arguments.push_back(ParseArgument(Narrow(value())));
    else if (key == L"--configuration") { o.configuration = Lower(Narrow(value())); o.build = o.configuration != "none"; }
    else if (key == L"--build-only") o.buildOnly = true;
    else if (key == L"--no-build") o.build = false;
    else if (key == L"--no-launch") o.launch = false;
    else if (key == L"--no-inject") o.inject = false;
    else if (key == L"--display") { std::string mode=Lower(Narrow(value())); if(mode!="window"&&mode!="fullscreen") throw std::invalid_argument("--display must be window or fullscreen"); o.windowed=mode=="window"; }
    else if (key == L"--retries") o.retries = std::stoul(value());
    else if (key == L"--inject-delay") o.injectDelayMs = std::stoul(value()) * 1000;
    else if (key == L"--help" || key == L"-h") {
      std::cout << "natives-verification-engine SELECTOR [options]\n\n"
                   "  --configuration debug|release|none   Build DLL before testing (default debug)\n"
                   "  --build-only                         Build and stop\n"
                   "  --level 1..14                        Level to launch\n"
                   "  --display window|fullscreen          Display mode (default window)\n"
                   "  --no-launch                          Attach to exactly one existing igi.exe\n"
                   "  --no-inject                          Launch/check only\n"
                   "  --inject-delay SECONDS               Wait before injection (default 10)\n"
                   "  --retries COUNT                      Retry infrastructure failures\n"
                   "  --arg int:1|float:1.0|cstring:text|buffer:4096|null|human_player\n"
                   "  --first N | --last N | --all          Select a catalog batch\n"
                   "  --address-range START END             Select inclusive address range\n"
                   "  --no-resume                           Re-run completed batch cases\n"
                   "  --abi cdecl                           Explicitly confirm the catalog ABI\n"
                   "  --catalog PATH --dll PATH --results PATH\n";
      ExitProcess(0);
    } else throw std::invalid_argument("unknown option: " + Narrow(key));
  }
  unsigned selectors = static_cast<unsigned>(o.name.has_value()) + static_cast<unsigned>(o.address.has_value()) +
      static_cast<unsigned>(o.firstCount>0) + static_cast<unsigned>(o.lastCount>0) + static_cast<unsigned>(o.all) + static_cast<unsigned>(o.addressRange.has_value());
  if (!o.buildOnly && selectors != 1) throw std::invalid_argument("provide exactly one selector: --native, --address, --first, --last, --all, or --address-range");
  if ((o.firstCount || o.lastCount || o.all || o.addressRange) && !o.arguments.empty()) throw std::invalid_argument("custom --arg values are only valid for a single native");
  if (o.configuration != "debug" && o.configuration != "release" && o.configuration != "none") throw std::invalid_argument("--configuration must be debug, release, or none");
  if (o.buildOnly && !o.build) throw std::invalid_argument("--build-only requires debug or release configuration");
  if (!dllExplicit) {
    const bool useRelease = o.configuration == "release" ||
        (o.configuration == "none" && _wcsicmp(executableDirectory.filename().c_str(), L"Release") == 0);
    o.dll = root / (useRelease ? L"Release" : L"Debug") /
        (useRelease ? L"IGI-Natives-Release.dll" : L"IGI-Natives-Debug.dll");
  }
  if (o.level < 1 || o.level > 14) throw std::invalid_argument("--level must be 1..14");
  if (fs::weakly_canonical(o.game) != fs::path(kGamePath)) throw std::invalid_argument("game path must be D:\\IGI1\\igi.exe");
  return o;
}

json LoadJson(const fs::path& path) {
  std::ifstream in(path); if (!in) throw std::runtime_error("required JSON unavailable: " + Narrow(path.wstring()));
  try { return json::parse(in); } catch (const std::exception& e) { throw std::runtime_error("invalid JSON " + Narrow(path.wstring()) + ": " + e.what()); }
}

std::string Lower(std::string value) { std::transform(value.begin(), value.end(), value.begin(), [](unsigned char c){ return static_cast<char>(std::tolower(c)); }); return value; }

std::vector<wchar_t> DeduplicatedEnvironment() {
  struct LessInsensitive { bool operator()(const std::wstring& a, const std::wstring& b) const { return _wcsicmp(a.c_str(), b.c_str()) < 0; } };
  std::map<std::wstring, std::wstring, LessInsensitive> values;
  LPWCH block = GetEnvironmentStringsW(); if (!block) throw std::runtime_error(WinError("GetEnvironmentStrings"));
  for (const wchar_t* entry=block; *entry; entry += wcslen(entry)+1) {
    std::wstring item(entry); auto separator=item.find(L'=', item[0]==L'='?1:0); if(separator!=std::wstring::npos) values[item.substr(0,separator)]=item.substr(separator+1);
  }
  FreeEnvironmentStringsW(block); std::vector<wchar_t> result;
  for(const auto& [key,value]:values){ std::wstring item=key+L"="+value; result.insert(result.end(),item.begin(),item.end()); result.push_back(L'\0'); }
  result.push_back(L'\0'); return result;
}

void BuildDll(const Options& options, Logger& log) {
  std::wstring configuration = options.configuration == "release" ? L"Release" : L"Debug";
  fs::path script=options.repoRoot/L"tools"/L"native_test_cli"/L"Build-NativeTestCli.ps1";
  if(!fs::is_regular_file(script)) throw std::runtime_error("shared build script is unavailable");
  fs::path buildLog = options.results / L"build.log";
  Handle output(CreateFileW(buildLog.c_str(), GENERIC_WRITE, FILE_SHARE_READ, nullptr, CREATE_ALWAYS, FILE_ATTRIBUTE_NORMAL, nullptr));
  if (!output) throw std::runtime_error(WinError("CreateFile(build.log)"));
  std::wstring command = L"powershell.exe -NoProfile -ExecutionPolicy Bypass -File \""+script.wstring()+L"\" -Configuration "+configuration+L" -DllOnly";
  std::vector<wchar_t> mutableCommand(command.begin(), command.end()); mutableCommand.push_back(L'\0');
  STARTUPINFOW startup{sizeof(startup)}; startup.dwFlags = STARTF_USESTDHANDLES; startup.hStdOutput=output.value; startup.hStdError=output.value; startup.hStdInput=GetStdHandle(STD_INPUT_HANDLE);
  PROCESS_INFORMATION process{};
  auto environment = DeduplicatedEnvironment();
  log.Event("build_started", {{"configuration", Narrow(configuration)}, {"log", Narrow(buildLog.wstring())}});
  if (!CreateProcessW(nullptr, mutableCommand.data(), nullptr, nullptr, TRUE, CREATE_NO_WINDOW | CREATE_UNICODE_ENVIRONMENT, environment.data(), options.repoRoot.c_str(), &startup, &process)) throw std::runtime_error(WinError("CreateProcess(build script)"));
  Handle processHandle(process.hProcess), threadHandle(process.hThread);
  WaitForSingleObject(processHandle.value, INFINITE); DWORD code{}; GetExitCodeProcess(processHandle.value, &code);
  log.Event("build_completed", {{"exitCode", code}}); if (code != 0) throw std::runtime_error("DLL build failed; see build.log");
}

json ResolveNative(const json& catalog, const Options& options) {
  for (const auto& wrapper : catalog.at("Natives")) {
    const auto& native = wrapper.at("Native");
    uint32_t address = native.at("address").get<uint32_t>();
    if ((options.address && address == *options.address) ||
        (options.name && Lower(native.at("name").get<std::string>()) == Lower(*options.name))) return native;
  }
  throw std::runtime_error("native was not found in catalog");
}

json DefaultArgument(const std::string& type) {
  std::string t = Lower(type);
  if (t.find("humanplayer") != std::string::npos) return {{"kind", "human_player"}};
  if (t.find("char") != std::string::npos && t.find('*') != std::string::npos) return {{"kind", "cstring"}, {"value", "LOCAL:"}};
  if (t.find('*') != std::string::npos) return {{"kind", "buffer"}, {"size", 4096}};
  if (t.find("float") != std::string::npos) return {{"kind", "float"}, {"value", 0.0}};
  return {{"kind", "int"}, {"value", 0}};
}

std::optional<std::string> EligibilityReason(const json& native, const Options& options) {
  if (!options.confirmCdecl) return "calling convention is not confirmed; pass --abi cdecl after verification";
  std::string signature=Lower(native.value("signature",""));
  if(signature.find("...")!=std::string::npos||signature.find("unknown")!=std::string::npos||signature.find("probable")!=std::string::npos) return "uncertain or variadic signature";
  const auto& parameters=native.at("parameters"); if(parameters.size()>7) return "more than seven x86 argument words";
  for(const auto& parameter:parameters){ std::string type=Lower(parameter.value("type","")); if(type.empty()||type.find("unknown")!=std::string::npos||type.find("...")!=std::string::npos||type.find("probable")!=std::string::npos) return "unsupported parameter type: "+type; }
  return std::nullopt;
}

std::string InvocationFingerprint(const Options& options, uint32_t address) {
  auto ticks=[](const fs::path& path){ return fs::last_write_time(path).time_since_epoch().count(); };
  std::ostringstream out; out<<std::hex<<address<<'|'<<options.level<<'|'<<options.windowed<<'|'<<options.inject<<'|'<<options.injectDelayMs<<'|'
      <<fs::file_size(options.catalog)<<'|'<<ticks(options.catalog)<<'|'<<fs::file_size(options.dll)<<'|'<<ticks(options.dll);
  return out.str();
}

bool Responsive(HWND hwnd) {
  DWORD_PTR result{}; return SendMessageTimeoutW(hwnd,WM_NULL,0,0,SMTO_ABORTIFHUNG,2000,&result)!=0;
}

void RequirePe32(const fs::path& path, const char* label) {
  std::ifstream in(path, std::ios::binary); if (!in) throw std::runtime_error(std::string(label) + " unavailable: " + Narrow(path.wstring()));
  IMAGE_DOS_HEADER dos{}; in.read(reinterpret_cast<char*>(&dos), sizeof(dos));
  if (!in || dos.e_magic != IMAGE_DOS_SIGNATURE) throw std::runtime_error(std::string(label) + " is not PE");
  in.seekg(dos.e_lfanew); DWORD signature{}; IMAGE_FILE_HEADER header{};
  in.read(reinterpret_cast<char*>(&signature), sizeof(signature)); in.read(reinterpret_cast<char*>(&header), sizeof(header));
  if (!in || signature != IMAGE_NT_SIGNATURE || header.Machine != IMAGE_FILE_MACHINE_I386) throw std::runtime_error(std::string(label) + " must be x86/PE32");
}

std::vector<DWORD> FindProcesses(const wchar_t* image) {
  std::vector<DWORD> result; Handle snapshot(CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0));
  if (!snapshot) throw std::runtime_error(WinError("CreateToolhelp32Snapshot(process)"));
  PROCESSENTRY32W entry{sizeof(entry)};
  if (Process32FirstW(snapshot.value, &entry)) do { if (_wcsicmp(entry.szExeFile, image) == 0) result.push_back(entry.th32ProcessID); } while (Process32NextW(snapshot.value, &entry));
  return result;
}

bool Alive(DWORD pid) { Handle p(OpenProcess(SYNCHRONIZE, FALSE, pid)); return p && WaitForSingleObject(p.value, 0) == WAIT_TIMEOUT; }

bool Elevated(DWORD pid) {
  Handle process(OpenProcess(PROCESS_QUERY_LIMITED_INFORMATION, FALSE, pid)); if (!process) throw std::runtime_error(WinError("OpenProcess(token)"));
  HANDLE raw{}; if (!OpenProcessToken(process.value, TOKEN_QUERY, &raw)) throw std::runtime_error(WinError("OpenProcessToken")); Handle token(raw);
  TOKEN_ELEVATION elevation{}; DWORD size{}; if (!GetTokenInformation(token.value, TokenElevation, &elevation, sizeof(elevation), &size)) throw std::runtime_error(WinError("GetTokenInformation"));
  return elevation.TokenIsElevated != 0;
}

BOOL CALLBACK WindowCallback(HWND hwnd, LPARAM data) {
  DWORD pid{}; GetWindowThreadProcessId(hwnd, &pid);
  auto wanted = reinterpret_cast<std::pair<DWORD, HWND*>*>(data);
  if (pid == wanted->first && IsWindowVisible(hwnd)) { *wanted->second = hwnd; return FALSE; }
  return TRUE;
}

HWND FindWindowFor(DWORD pid) { HWND hwnd{}; std::pair<DWORD, HWND*> context{pid, &hwnd}; EnumWindows(WindowCallback, reinterpret_cast<LPARAM>(&context)); return hwnd; }

fs::path CreateLauncher(const fs::path& deploy, const Options& options) {
  ComScope com; if (FAILED(com.hr)) throw std::runtime_error("COM initialization failed");
  IShellLinkW* raw{}; HRESULT hr = CoCreateInstance(CLSID_ShellLink, nullptr, CLSCTX_INPROC_SERVER, IID_IShellLinkW, reinterpret_cast<void**>(&raw));
  if (FAILED(hr)) throw std::runtime_error("cannot create ShellLink");
  struct LinkGuard { IShellLinkW* p; ~LinkGuard(){ p->Release(); } } guard{raw};
  std::wstring args = (options.windowed ? L"window level" : L"level") + std::to_wstring(options.level);
  raw->SetPath(options.game.c_str()); raw->SetArguments(args.c_str()); raw->SetWorkingDirectory(options.game.parent_path().c_str()); raw->SetShowCmd(SW_SHOWNORMAL);
  IPersistFile* persist{}; hr = raw->QueryInterface(IID_IPersistFile, reinterpret_cast<void**>(&persist)); if (FAILED(hr)) throw std::runtime_error("cannot persist ShellLink");
  fs::path shortcut = deploy / (L"igi_window_level" + std::to_wstring(options.level) + L".lnk");
  hr = persist->Save(shortcut.c_str(), TRUE); persist->Release(); if (FAILED(hr)) throw std::runtime_error("cannot save level shortcut");
  return shortcut;
}

DWORD LaunchGame(const fs::path& shortcut, const std::vector<DWORD>& before) {
  SHELLEXECUTEINFOW info{sizeof(info)}; info.fMask = SEE_MASK_NOCLOSEPROCESS; info.lpFile = shortcut.c_str(); info.nShow = SW_SHOWNORMAL;
  if (!ShellExecuteExW(&info)) throw std::runtime_error(WinError("ShellExecuteEx(level shortcut)"));
  if (info.hProcess) CloseHandle(info.hProcess);
  auto deadline = GetTickCount64() + kLaunchTimeoutMs;
  while (GetTickCount64() < deadline) { for (DWORD pid : FindProcesses(L"igi.exe")) if (std::find(before.begin(), before.end(), pid) == before.end() && FindWindowFor(pid)) return pid; Sleep(250); }
  throw std::runtime_error("visible IGI window was not found before launch timeout");
}

void StopOwned(DWORD pid) noexcept {
  if (!pid || !Alive(pid)) return; HWND hwnd = FindWindowFor(pid); if (hwnd) PostMessageW(hwnd, WM_CLOSE, 0, 0);
  for (int i = 0; i < 30 && Alive(pid); ++i) Sleep(100);
  if (Alive(pid)) { Handle p(OpenProcess(PROCESS_TERMINATE | SYNCHRONIZE, FALSE, pid)); if (p) { TerminateProcess(p.value, 1); WaitForSingleObject(p.value, 3000); } }
}

void Inject(DWORD pid, const fs::path& dll) {
  std::string path = Narrow(fs::absolute(dll).wstring());
  HANDLE process = GT_FindGameProcess("igi");
  if (!process || GT_GetProcessID() != pid) throw std::runtime_error("GTLibCpp resolved a different or unavailable IGI process");
  if (!GT_InjectDLL(path.c_str(), "igi")) throw std::runtime_error("GTLibCpp GT_InjectDLL failed");
}

bool ModuleLoaded(DWORD pid, const std::wstring& wanted) {
  Handle snapshot(CreateToolhelp32Snapshot(TH32CS_SNAPMODULE | TH32CS_SNAPMODULE32, pid)); if (!snapshot) return false;
  MODULEENTRY32W entry{sizeof(entry)}; if (!Module32FirstW(snapshot.value, &entry)) return false;
  do { if (_wcsicmp(entry.szModule, wanted.c_str()) == 0) return true; } while (Module32NextW(snapshot.value, &entry)); return false;
}

void SendHotkey(HWND hwnd) {
  ShowWindow(hwnd, SW_RESTORE); GT_SetGameFocus();
  INPUT down[3]{}; INPUT up[3]{}; WORD keys[3]{VK_CONTROL, VK_SHIFT, VK_F12};
  for (int i=0;i<3;++i){ down[i].type=INPUT_KEYBOARD; down[i].ki.wVk=keys[i]; up[i].type=INPUT_KEYBOARD; up[i].ki.wVk=keys[2-i]; up[i].ki.dwFlags=KEYEVENTF_KEYUP; }
  if (SendInput(3, down, sizeof(INPUT)) != 3) throw std::runtime_error(WinError("SendInput(key down)"));
  Sleep(150);
  if (SendInput(3, up, sizeof(INPUT)) != 3) throw std::runtime_error(WinError("SendInput(key up)"));
}

std::string ReadText(const fs::path& path) { std::ifstream in(path, std::ios::binary); if (!in) return {}; return {std::istreambuf_iterator<char>(in), {}}; }

enum class MarkerResult { Found, ProcessExited, Timeout };
MarkerResult WaitMarker(const fs::path& log, const std::string& marker, DWORD pid, std::string& text) {
  auto deadline = GetTickCount64() + kMarkerTimeoutMs;
  while (GetTickCount64() < deadline) { text = ReadText(log); if (text.find(marker) != std::string::npos) return MarkerResult::Found; if (!Alive(pid)) return MarkerResult::ProcessExited; Sleep(250); }
  text = ReadText(log); return text.find(marker) != std::string::npos ? MarkerResult::Found : MarkerResult::Timeout;
}

int Run(const Options& options) {
  fs::create_directories(options.results); Logger log(options.results / L"controller-cpp.jsonl");
  json report{{"timestamp", Timestamp()}, {"status", "controller_error"}, {"level", options.level}};
  DWORD ownedPid{};
  bool ownsProcess{false};
  bool controllerError{false};
  try {
    if (options.build) BuildDll(options, log);
    if (options.buildOnly) { report["status"]="BUILT"; log.Event("build_only_completed", report); AtomicWrite(options.results/L"last-result.json", report.dump(2)+"\n"); return 0; }
    RequirePe32(options.game, "game"); RequirePe32(options.dll, "DLL");
    if (!fs::exists(options.models)) throw std::runtime_error("required IGIModels.json is unavailable");
    auto existing = FindProcesses(L"igi.exe");
    if (!existing.empty() && !GT_FindGameProcess("igi")) throw std::runtime_error("GTLibCpp could not open the detected igi.exe process");
    if (options.launch && !existing.empty()) throw std::runtime_error("refusing to launch while igi.exe already exists; use --no-launch explicitly");
    if (!options.launch && existing.size() != 1) throw std::runtime_error("--no-launch requires exactly one existing igi.exe");
    json catalog = LoadJson(options.catalog); json native = ResolveNative(catalog, options);
    std::ostringstream hash; hash << std::uppercase << std::hex << std::setw(8) << std::setfill('0') << native.at("address").get<uint32_t>();
    report.update({{"native",native.at("name")},{"address","0x"+hash.str()},{"signature",native.at("signature")},
                   {"invocationFingerprint",InvocationFingerprint(options,native.at("address").get<uint32_t>())}});
    if(auto reason=EligibilityReason(native,options)) throw SignatureBlocked(*reason);
    json arguments = options.arguments; if (arguments.empty()) for (const auto& parameter : native.at("parameters")) arguments.push_back(DefaultArgument(parameter.at("type")));
    if (arguments.size() != native.at("parameters").size()) throw std::runtime_error("argument count does not match native signature");
    fs::path deploy = fs::absolute(options.results / L"deploy"); fs::create_directories(deploy / L"assets");
    fs::path deployedDll = deploy / options.dll.filename(); fs::copy_file(options.dll, deployedDll, fs::copy_options::overwrite_existing);
    fs::copy_file(options.catalog, deploy / L"assets" / L"IGINatives.json", fs::copy_options::overwrite_existing);
    fs::copy_file(options.models, deploy / L"IGIModels.txt", fs::copy_options::overwrite_existing);
    std::string caseId = hash.str() + "-manual";
    json command{{"protocolVersion",1},{"callingConvention","cdecl"},{"caseId",caseId},{"nativeName",native.at("name")},{"address","0x"+hash.str()},{"arguments",arguments}};
    AtomicWrite(deploy / L"native-test-command.json", command.dump(2) + "\n");
    fs::path dllLog = deploy / L"IGI-Natives.log"; std::error_code ec; fs::remove(dllLog, ec);
    fs::path launcher;
    if (options.launch) launcher = CreateLauncher(deploy, options);
    log.Event("preflight_passed", {{"game","x86"},{"dll","x86"},{"native",native.at("name")},{"address","0x"+hash.str()},{"launch",options.launch},{"inject",options.inject}});
    DWORD pid = options.launch ? LaunchGame(launcher, existing) : existing.front();
    ownsProcess = options.launch; ownedPid = ownsProcess ? pid : 0; HWND hwnd = FindWindowFor(pid);
    if (!hwnd) throw std::runtime_error("IGI process has no visible window");
    bool controllerAdmin = Elevated(GetCurrentProcessId()), gameAdmin = Elevated(pid);
    log.Event("privilege_checked", {{"pid",pid},{"controllerElevated",controllerAdmin},{"gameElevated",gameAdmin}});
    if (controllerAdmin != gameAdmin) throw std::runtime_error("controller and game elevation differ");
    if (!options.inject) {
      report.update({{"status","GAME_READY"},{"pid",pid},{"native",native.at("name")},{"address","0x"+hash.str()}});
      log.Event("injection_skipped", report);
    } else {
    log.Event("injection_wait_started", {{"milliseconds",options.injectDelayMs}}); Sleep(options.injectDelayMs);
    if (!Alive(pid)) throw std::runtime_error("game exited before injection");
    Inject(pid, deployedDll);
    if (!ModuleLoaded(pid, deployedDll.filename().wstring())) throw std::runtime_error("DLL injection could not be verified in module list");
    log.Event("injection_verified", {{"pid",pid},{"module",Narrow(deployedDll.filename().wstring())}});
    GT_SetGameFocus(); GT_DoKeyPress(VK_ESCAPE);
    log.Event("cutscene_skip_sent", {{"key","Escape"},{"settleMilliseconds",5000}});
    Sleep(5000);
    SendHotkey(hwnd); log.Event("hotkey_sent", {{"keys","Ctrl+Shift+F12"}});
    std::string text; std::string begin="NATIVE_TEST CASE_BEGIN id="+caseId, end="NATIVE_TEST CASE_END id="+caseId;
    MarkerResult began = WaitMarker(dllLog, begin, pid, text);
    if (began != MarkerResult::Found) { report["status"] = began == MarkerResult::ProcessExited ? "CRASHED" : "TIMED_OUT"; report["reason"]="CASE_BEGIN marker was not observed"; }
    else { MarkerResult ended = WaitMarker(dllLog, end, pid, text); if(ended==MarkerResult::Found){ Sleep(2000); report["status"]=Alive(pid)&&Responsive(hwnd)?"PASSED":"CRASHED"; if(report["status"]!="PASSED") report["reason"]="process exited or became unresponsive after CASE_END"; } else report["status"] = ended == MarkerResult::ProcessExited ? "CRASHED" : "TIMED_OUT"; }
    report.update({{"native",native.at("name")},{"address","0x"+hash.str()},{"signature",native.at("signature")},{"pid",pid},{"moduleVerified",true},{"logTail",text.substr(text.size()>4000?text.size()-4000:0)}});
    log.Event("case_completed", report);
    }
  } catch (const SignatureBlocked& e) { report["status"]="signature_blocked"; report["reason"]=e.what(); log.Event("signature_blocked",report); }
    catch (const std::exception& e) { controllerError=true; report["error"] = e.what(); log.Event("case_exception", {{"error",e.what()}}); }
  if (ownsProcess) StopOwned(ownedPid);
  AtomicWrite(options.results / L"last-result.json", report.dump(2) + "\n");
  std::ostringstream md; md << "# IGI native test result\n\n- Time: `" << report.value("timestamp",Timestamp()) << "`\n- Status: **" << report.value("status","controller_error") << "**\n- Level: `" << options.level << "`\n";
  if (report.contains("native")) { md << "- Native: `" << report.value("native","") << "`\n- Address: `" << report.value("address","") << "`\n"; if(report.contains("signature")&&!report["signature"].is_null()) md<<"- Signature: `"<<report.value("signature","")<<"`\n"; }
  if (report.contains("error")) md << "- Error: " << report["error"].get<std::string>() << "\n";
  AtomicWrite(options.results / L"report.md", md.str());
  std::cout << "natives-verification-engine result: " << report.value("status","controller_error") << "\nReport: " << Narrow(fs::absolute(options.results/L"report.md").wstring()) << '\n';
  if (controllerError) return 3;
  return report.value("status", "controller_error") == "PASSED" || report.value("status", "") == "GAME_READY" ? 0 : 2;
}

bool IsBatch(const Options& options) {
  return options.firstCount || options.lastCount || options.all || options.addressRange.has_value();
}

std::vector<json> SelectBatch(const json& catalog, const Options& options) {
  std::vector<json> natives;
  for (const auto& wrapper : catalog.at("Natives")) natives.push_back(wrapper.at("Native"));
  if (options.firstCount) natives.resize((std::min)(options.firstCount, natives.size()));
  else if (options.lastCount) {
    size_t count=(std::min)(options.lastCount,natives.size()); natives.erase(natives.begin(),natives.end()-static_cast<std::ptrdiff_t>(count));
  } else if (options.addressRange) {
    const auto [begin,end]=*options.addressRange;
    natives.erase(std::remove_if(natives.begin(),natives.end(),[&](const json& n){ uint32_t a=n.at("address").get<uint32_t>(); return a<begin||a>end; }),natives.end());
  }
  if (natives.empty()) throw std::runtime_error("batch selector matched no natives");
  return natives;
}

int RunCampaign(Options options) {
  fs::path campaignRoot=options.results; fs::create_directories(campaignRoot);
  Logger logger(campaignRoot/L"campaign.jsonl");
  if (options.build) BuildDll(options,logger);
  options.build=false; options.buildOnly=false;
  auto natives=SelectBatch(LoadJson(options.catalog),options);
  json campaign{{"engine","natives-verification-engine"},{"startedAt",Timestamp()},{"selected",natives.size()},{"results",json::array()}};
  size_t failures{};
  for(size_t index=0;index<natives.size();++index){
    const auto& native=natives[index]; uint32_t address=native.at("address").get<uint32_t>();
    std::ostringstream hash; hash<<std::uppercase<<std::hex<<std::setw(8)<<std::setfill('0')<<address;
    fs::path caseRoot=campaignRoot/L"cases"/(std::to_string(index+1)+"-"+hash.str()); fs::path resultPath=caseRoot/L"last-result.json";
    Options single=options; single.name.reset(); single.address=address; single.firstCount=single.lastCount=0; single.all=false; single.addressRange.reset(); single.results=caseRoot;
    json result;
    if(options.resume && fs::is_regular_file(resultPath)){
      json prior=LoadJson(resultPath); std::string status=prior.value("status","");
      bool terminal=status=="PASSED"||status=="CRASHED"||status=="TIMED_OUT"||status=="signature_blocked"||status=="GAME_READY";
      if(terminal&&prior.value("invocationFingerprint","")==InvocationFingerprint(single,address)){
        result=std::move(prior); logger.Event("case_resumed",{{"index",index+1},{"address","0x"+hash.str()},{"status",result.value("status","unknown")}});
      }
    }
    if(result.is_null()){
      int code=3;
      for(unsigned attempt=0;attempt<=options.retries;++attempt){ code=Run(single); if(code!=3) break; logger.Event("case_retry",{{"index",index+1},{"attempt",attempt+1},{"address","0x"+hash.str()}}); }
      result=fs::is_regular_file(resultPath)?LoadJson(resultPath):json{{"status","controller_error"},{"error","case produced no result"}};
    }
    result["selectionIndex"]=index+1; campaign["results"].push_back(result);
    std::string status=result.value("status","controller_error"); if(status!="PASSED"&&status!="GAME_READY"&&status!="signature_blocked") ++failures;
    campaign["completed"]=index+1; campaign["updatedAt"]=Timestamp(); AtomicWrite(campaignRoot/L"campaign.json",campaign.dump(2)+"\n");
    logger.Event("case_recorded",{{"index",index+1},{"total",natives.size()},{"address","0x"+hash.str()},{"status",status}});
  }
  std::ostringstream report; report<<"# Natives verification campaign\n\n- Selected: **"<<natives.size()<<"**\n- Completed: **"<<campaign.value("completed",0)<<"**\n- Non-passing: **"<<failures<<"**\n\n| # | Address | Native | Status |\n|---:|---|---|---|\n";
  for(const auto& result:campaign["results"]) report<<"| "<<result.value("selectionIndex",0)<<" | `"<<result.value("address","")<<"` | `"<<result.value("native","")<<"` | **"<<result.value("status","unknown")<<"** |\n";
  AtomicWrite(campaignRoot/L"report.md",report.str()); return failures?2:0;
}
} // namespace

int wmain(int argc, wchar_t** argv) {
  try { GT_EnableLogs(); Options options=ParseOptions(argc, argv); if(IsBatch(options)) return RunCampaign(options); int code=3; for(unsigned attempt=0; attempt<=options.retries; ++attempt){ code=Run(options); if(code!=3) break; if(attempt<options.retries){ std::cerr << "infrastructure failure; retry " << (attempt+1) << '/' << options.retries << "\n"; Sleep(1000); } } return code; }
  catch (const std::exception& e) { std::cerr << "fatal: " << e.what() << '\n'; return 1; }
  catch (...) { std::cerr << "fatal: unknown error\n"; return 1; }
}
