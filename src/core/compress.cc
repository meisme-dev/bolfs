#include <compress.hpp>

namespace core {
    std::string compress_data(const std::string data) {
        int position = 0;
        std::string compressed;
        position = core.get_letter_position(data.front());
        return compressed;
    }

    int get_letter_position(char letter) {
        return letter - 'a' + 1;
    }
}  // namespace core
