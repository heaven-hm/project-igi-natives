#include "igi/qvm_initializer.hpp"

#include <exception>
#include <iostream>
#include <map>

int main(int argument_count, char** arguments) {
    try {
        if (argument_count != 2) {
            std::cerr << "Usage: igi_inspect_mission <OBJECTS.QVM>\n";
            return 2;
        }
        const auto file = igi::assets::read_file(arguments[1]);
        const igi::assets::QvmInitializer initializer{igi::assets::BinaryView(file)};
        std::map<std::string, std::size_t> task_counts;
        for (const auto& call : initializer.calls()) {
            if (call.function != "Task_New" || call.arguments.size() < 3) {
                continue;
            }
            const auto& task_type = call.arguments[1].text;
            ++task_counts[task_type];
            if (task_type == "HumanPlayer" && call.arguments.size() >= 9) {
                std::cout << "Player spawn: " << call.arguments[3].number << ", "
                          << call.arguments[4].number << ", " << call.arguments[5].number
                          << "; model: " << call.arguments[7].text << '\n';
            }
        }
        for (const auto& [task_type, task_count] : task_counts) {
            std::cout << task_type << ": " << task_count << '\n';
        }
        std::cout << "Initializer calls: " << initializer.calls().size() << '\n';
        return 0;
    } catch (const std::exception& exception) {
        std::cerr << "Mission inspection failed: " << exception.what() << '\n';
        return 1;
    }
}
