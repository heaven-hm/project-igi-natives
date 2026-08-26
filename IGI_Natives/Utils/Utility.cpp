#include "Utility.hpp" 
#include "../Libs/GTLibc.hpp"
#include "Logger.hpp"
#include <map>
#include <regex>
#include <sstream>
#include <fstream>

inline HMODULE g_Module;
inline HANDLE g_Handle;
using namespace IGI;

// Key press debouncing system
static std::map<int, bool> g_key_states;

const string Utility::GetExecutableFolder() {

	char file_name[MAX_PATH];
	GetModuleFileNameA(NULL, file_name, MAX_PATH);

	string current_path = file_name;
	return current_path.substr(0, current_path.find_last_of("\\"));
}

const string Utility::GetModuleFolder() {

	char file_name[MAX_PATH];
	GetModuleFileNameA(g_Module, file_name, MAX_PATH);

	string current_path = file_name;
	return current_path.substr(0, current_path.find_last_of("\\"));
}

void Utility::SetModuleHandle(const HMODULE module) {

	g_Module = module;
}

const HMODULE Utility::GetModuleHandle() {

	return g_Module;
}

void Utility::SetHandle(const HANDLE handle) {

	g_Handle = handle;
}

const HANDLE Utility::GetHandle() {

	return g_Handle;
}


//Returns the last Win32 error, in string format. Returns an empty string if there is no error. 
string Utility::GetLastErrorString()
{
	//Get the error message ID, if any. 
	DWORD error_message_i_d = ::GetLastError();
	if (error_message_i_d == 0) {
		return string(); //No error message has been recorded 
	}

	LPSTR message_buffer = nullptr;

	//Ask Win32 to give us the string version of that message ID. 
	//The parameters we pass in, tell Win32 to create the buffer that holds the message for us (because we don't yet know how long the message string will be). 
	size_t size = FormatMessageA(FORMAT_MESSAGE_ALLOCATE_BUFFER | FORMAT_MESSAGE_FROM_SYSTEM | FORMAT_MESSAGE_IGNORE_INSERTS,
		NULL, error_message_i_d, MAKELANGID(LANG_NEUTRAL, SUBLANG_DEFAULT), (LPSTR)&message_buffer, 0, NULL);

	//Copy the error message into a string. 
	string message(message_buffer, size);

	//Free the Win32's string's buffer. 
	LocalFree(message_buffer);

	return message;
}

string Utility::GetBaseFileName(string file_name)
{
	size_t pos = file_name.rfind(("."));
	if (pos == string::npos)  //No extension. 
		return file_name;

	if (pos == 0)    //. is at the front. Not an extension. 
		return file_name;

	return file_name.substr(0, pos);
}

const string Utility::GetModuleName(const HMODULE module) {

	char file_name[MAX_PATH];
	GetModuleFileNameA(module, file_name, MAX_PATH);

	string full_path = file_name;

	size_t lastIndex = full_path.find_last_of("\\") + 1;
	return full_path.substr(lastIndex, full_path.length() - lastIndex);
}

const string Utility::GetModuleNameExtension(const HMODULE module) {

	const string file_name = GetModuleName(module);

	size_t last_index = file_name.find_last_of(".");
	if (last_index == -1) {
		return file_name;
	}

	return file_name.substr(0, last_index);
}

std::tuple<std::vector<uint8_t>, string, string> Utility::ReadFile(string file_name, int file_type)
{
	std::ifstream in_stream(file_name, (file_type == ASCII_FILE) ? std::ios::in : (file_type == BINARY_FILE || file_type == HEX_FILE) ? std::ios::binary : std::ios::in);

	/*Buffers to store output data from file.*/
	string str_buf, hex_buf;
	std::vector<uint8_t> vec_buf;

	try {
		if (file_type == BINARY_FILE) {

			/*Open the stream in binary mode.*/

			if (in_stream.good()) {
				/*Read Binary data using streambuffer iterators.*/
				std::vector<uint8_t> v_buf((std::istreambuf_iterator<char>(in_stream)), (std::istreambuf_iterator<char>()));
				vec_buf = v_buf;
				in_stream.close();
			}

			else {
				throw std::exception();
			}

		}

		else if (file_type == ASCII_FILE) {

			/*Open the stream in default mode.*/
			string ascii_data;

			if (in_stream.good()) {
				/*Read ASCII data using getline*/
				while (getline(in_stream, ascii_data))
					str_buf += ascii_data + "\n";

				in_stream.close();
			}
			else {
				throw std::exception();
			}
		}

		else if (file_type == HEX_FILE) {

			/*Open the stream in default mode.*/

			if (in_stream.good()) {
				/*Read Hex data using streambuffer iterators.*/
				std::vector<char> h_buf((std::istreambuf_iterator<char>(in_stream)), (std::istreambuf_iterator<char>()));
				string hex_str_buf(h_buf.begin(), h_buf.end());
				hex_buf = hex_str_buf;

				in_stream.close();
			}
			else {
				throw std::exception();
			}
		}

	}

	catch (...) {
		string ex_str = "Error: " + file_name + ": No such file or directory";
		throw std::runtime_error(ex_str.c_str());
	}

	auto tuple_data = make_tuple(vec_buf, str_buf, hex_buf);
	return tuple_data;
}

bool Utility::WriteFile(string file_name, binary_t file_data, int file_type)
{
	bool write_status = false;
	try {
		std::fstream out_stream(file_name, (file_type == ASCII_FILE) ? std::ios::out : (file_type == BINARY_FILE || file_type == HEX_FILE) ? (std::ios::out | std::ios::binary) : std::ios::out);

		if (out_stream.is_open()) {
			if (file_type == ASCII_FILE) {
				out_stream << file_data.data();
				write_status = true;
			}

			else if (file_type == BINARY_FILE) {
				out_stream.write((char*)file_data.data(), file_data.capacity());
				write_status = true;
			}

			else if (file_type == HEX_FILE) {
				int bin_data;
				std::stringstream ss;
				ss << std::hex << file_data.data();

				while (ss >> bin_data)
					out_stream.write(reinterpret_cast<const char*>(&bin_data), sizeof(char));

				write_status = true;
			}
			out_stream.close();
		}
		else {
			string ex_str = "Error: couldn't open " + file_name + " for output";
			throw std::runtime_error(ex_str.c_str());
		}
	}
	catch (const std::exception& ex) {
		string ex_str = "Error: " + file_name + ": No such file or directory";
		LOG_ERROR("%s Exception: %s", FUNC_NAME, ex.what());
		GT_ShowError(ex.what());
	}
	return write_status;
}

bool Utility::RemoveFile(const string& file_name) {
	bool status = false;
	try {
		if (std::filesystem::remove(file_name))
			status = true;
	}
	catch (const std::filesystem::filesystem_error& err) {
		string err_msg = "Delete file exception: " + std::string(err.what());
		GT_ShowError(err_msg.c_str());
	}
	return status;
}

bool Utility::WriteMemory(LPVOID address,binary_t& v_bytes)
{
	if (address == NULL || v_bytes.size() == 0) {
		GT_ShowError("Error occurred while writing data to memory.");
		return false;
	}

	DWORD old_protection = NULL;
	const SIZE_T write_len = v_bytes.size() * sizeof(byte);

	VirtualProtect(address, write_len, PAGE_EXECUTE_READWRITE, &old_protection);
	std::memcpy(address, &v_bytes[0], write_len);
	VirtualProtect(address, write_len, old_protection, &old_protection);

	return true;
};

bool Utility::StrCaseCompare(const string& a, const string& b) {
	return std::equal(a.begin(), a.end(), b.begin(), b.end(), 
		[](char a, char b) {return tolower(a) == tolower(b); 
	});
}

size_t Utility::Find(string& data, string& search, size_t pos)
{
	std::transform(data.begin(), data.end(), data.begin(), ::tolower);
	std::transform(search.begin(), search.end(), search.begin(), ::tolower);
	return data.find(search, pos);
}

bool Utility::IsAsciiStr(const string& s)
{
    return std::all_of(s.begin(), s.end(), [](unsigned char c) { 
        return c >= 0x20 && c <= 0x7F; 
    });
}

void Utility::Tokenize(string& str_in, char delim, vector<string>& vec_out) {
	size_t start;
	size_t end = 0;

	while ((start = str_in.find_first_not_of(delim, end)) != string::npos)
	{
		end = str_in.find(delim, start);
		vec_out.push_back(str_in.substr(start, end - start));
	}
}

void Utility::Replace(string& str, const string& from, const string& to) {
	if (from.empty()) return;
	size_t start_pos = 0;
	while ((start_pos = str.find(from, start_pos)) != std::string::npos) {
		str.replace(start_pos, from.length(), to);
		start_pos += to.length();
	}
}

int Utility::ShellExec(string shell_cmd)
{
	if (shell_cmd.empty()) return EXIT_FAILURE;
	return system(shell_cmd.c_str());
}

std::string Utility::Trim(const std::string& str, const std::string& whitespace)
{
	const auto strBegin = str.find_first_not_of(whitespace);
	if (strBegin == std::string::npos)
		return ""; // no content

	const auto strEnd = str.find_last_not_of(whitespace);
	const auto strRange = strEnd - strBegin + 1;

	return str.substr(strBegin, strRange);
}

string Utility::GetAppdataPath() {
	char* appdata = getenv("APPDATA");
	return string(appdata);
}

// Function to detect single key press events for 30 FPS.
BOOL Utility::IsKeyPressed(CONST INT key) {
	SHORT key_state = GetAsyncKeyState(key);
	bool is_down = (key_state & 0x8000) != 0;
	bool &was_down = g_key_states[key]; // persistent state per key

	if (is_down && !was_down) {
		was_down = true; // mark as pressed
		return TRUE;     // fires once when going UP → DOWN
	}

	if (!is_down && was_down) {
		was_down = false; // reset when released
	}

	return FALSE; // held down or idle, no new press
}

// Function to log all hotkeys from provided file path
void Utility::LogAllHotkeys(const string& file_path) {
	LOG_INFO("=== IGI Natives Mod Hotkeys ===");
	
	// Log the file path being scanned
	LOG_INFO("Scanning file: %s", file_path.c_str());
	
	std::ifstream file(file_path);
	if (!file.is_open()) {
		LOG_INFO("Could not read file: %s", file_path.c_str());
		LOG_INFO("=== End Hotkeys List ===");
		return;
	}
		
	std::stringstream buffer;
	buffer << file.rdbuf();
	std::string source = buffer.str();
	file.close();
	
	// Extract filename for logging
	size_t lastSlash = file_path.find_last_of("\\");
	string filename = (lastSlash != string::npos) ? file_path.substr(lastSlash + 1) : file_path;
	
	LOG_CONSOLE("--- Hotkeys from %s ---", filename.c_str());
	
	// Regex to match LOG_INFO lines that contain hotkey descriptions
	std::regex hotkey_regex("LOG_INFO\\s*\\(\\s*\"([^\"]*(?:Ctrl\\+|Shift\\+|Alt\\+|F[0-9]+)[^\"]*?)\"");

	std::sregex_iterator begin(source.begin(), source.end(), hotkey_regex);
	std::sregex_iterator end;
	
	bool found_hotkeys = false;
	for (auto it = begin; it != end; ++it) {
		std::string hotkey_line = (*it)[1].str();
		// Skip header lines and exception messages
		if (hotkey_line.find("information:") == std::string::npos && 
			hotkey_line.find("Exception:") == std::string::npos &&
			hotkey_line.find("pressed,") == std::string::npos) {
				LOG_CONSOLE("  %s", hotkey_line.c_str());
			found_hotkeys = true;
		}
	}
	
	if (!found_hotkeys) {
		LOG_CONSOLE("  No hotkeys found in this file");
	}
	
	// Now read and display IGI Debug Keys from IGIDebug.md
	LOG_CONSOLE("--- IGI Built-in Debug Keys (LCtrl+LShift+KEY) ---");
	
	// Get the directory of the current file to locate IGIDebug.md
	size_t lastSlashPos = file_path.find_last_of("\\");
	string base_dir = (lastSlashPos != string::npos) ? file_path.substr(0, lastSlashPos) : "";
	string debug_file_path = base_dir + "\\IGIDebug.md";
	
	std::ifstream debug_file(debug_file_path);
	if (!debug_file.is_open()) {
		LOG_CONSOLE("  Could not read IGIDebug.md file at: %s", debug_file_path.c_str());
	} else {
		std::stringstream debug_buffer;
		debug_buffer << debug_file.rdbuf();
		std::string debug_content = debug_buffer.str();
		debug_file.close();
		
		// Parse the markdown table to extract IGI debug keys
		std::regex table_row_regex("\\|\\s*([^|]+)\\s*\\|\\s*([^|]+)\\s*\\|");
		std::sregex_iterator debug_begin(debug_content.begin(), debug_content.end(), table_row_regex);
		std::sregex_iterator debug_end;
		
		bool found_debug_keys = false;
		for (auto it = debug_begin; it != debug_end; ++it) {
			std::string key = (*it)[1].str();
			std::string function = (*it)[2].str();
			
			// Skip header row and separator row
			if (key.find("KEY") == std::string::npos && 
				key.find("---") == std::string::npos &&
				!key.empty() && !function.empty()) {
				
				// Trim whitespace
				key.erase(0, key.find_first_not_of(" \t"));
				key.erase(key.find_last_not_of(" \t") + 1);
				function.erase(0, function.find_first_not_of(" \t"));
				function.erase(function.find_last_not_of(" \t") + 1);
				
				LOG_CONSOLE(" KEY: %s: %s", key.c_str(), function.c_str());
				found_debug_keys = true;
			}
		}
		
		if (!found_debug_keys) {
			LOG_CONSOLE("  No IGI debug keys found in IGIDebug.md");
		}
	}
	
	LOG_CONSOLE("=== End Hotkeys List ===");
}

// Function to detect key combination press events (modifier + key)
BOOL Utility::IsKeyCombinationPressed(CONST INT modifier, CONST INT key) {
	// Check if modifier is currently held down
	SHORT modifier_state = GetAsyncKeyState(modifier);
	bool modifier_down = (modifier_state & 0x8000) != 0;
	
	if (!modifier_down) {
		return FALSE; // Modifier not held, no combination possible
	}
	
	// Use the single key press detection for the main key while modifier is held
	SHORT key_state = GetAsyncKeyState(key);
	bool is_down = (key_state & 0x8000) != 0;
	
	// Create a unique combination key for debouncing
	int combo_key = (modifier << 16) | key;
	bool &was_down = g_key_states[combo_key];

	if (is_down && !was_down) {
		was_down = true; // mark as pressed
		return TRUE;     // fires once when going UP → DOWN
	}

	if (!is_down && was_down) {
		was_down = false; // reset when released
	}

	return FALSE; // held down or idle, no new press
}

void Utility::DoKeyCombo(const std::vector<DWORD>& keys)
{
    if (keys.empty()) return;

    std::vector<INPUT> inputs;
    inputs.reserve(keys.size() * 2);

    // Press all keys (no fix needed for key-down)
    for (size_t i = 0; i < keys.size(); ++i) {
        INPUT in = {};
        in.type = INPUT_KEYBOARD;
        in.ki.wVk = keys[i];
        in.ki.wScan = 0;
        in.ki.dwFlags = 0;
        inputs.push_back(in);
    }

    // Release all keys (FIX: add KEYEVENTF_SCANCODE for key-up)
    for (size_t i = keys.size(); i-- > 0;) {
        INPUT in = {};
        in.type = INPUT_KEYBOARD;
        in.ki.wVk = keys[i];
        in.ki.wScan = 0;
        in.ki.dwFlags = KEYEVENTF_KEYUP | KEYEVENTF_SCANCODE; // CRITICAL FIX
        inputs.push_back(in);
    }

    SendInput((UINT)inputs.size(), inputs.data(), sizeof(INPUT));
}



#pragma region Native Helper Methods
string Utility::InternalDataRead() {
  string data;
  try {
    string internal_data_file =
        GetModuleFolder() + "\\" + PROJECT_NAME + "-data.txt";
    
    // Use centralized ReadFile method
    auto file_data = ReadFile(internal_data_file, ASCII_FILE);
    string full_content = std::get<1>(file_data); // Get string content
    
    // Extract only the first line (original behavior)
    if (!full_content.empty()) {
      size_t first_newline = full_content.find('\n');
      data = (first_newline != string::npos) ? 
             full_content.substr(0, first_newline) : 
             full_content;
    }
  } catch (const std::exception &ex) {
    LOG_INFO("Exception: %s", ex.what());
  }
  return data;
}

bool Utility::InternalDataWrite(string data) {
  string internal_data_file =
      GetModuleFolder() + "\\" + PROJECT_NAME + "-data.txt";
  bool status = WriteFileType(internal_data_file,
                              binary_t(data.begin(), data.end()), BINARY_FILE);
  return status;
}