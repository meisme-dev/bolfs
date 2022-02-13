#include <iostream>
#include <file.hh>

namespace file{
    std::string read_file(const std::filesystem::path path) {
        std::ifstream file(path);
        if (!file.is_open()) {
            std::cerr << "Could not open file: " << path << std::endl;
            return "";
        }

        std::string line;
        std::stringstream data;
        while (std::getline(file, line)) {
            data << line << std::endl;
        }

        file.close();
        return data.str();
    }
}  // namespace file
