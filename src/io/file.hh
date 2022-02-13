#ifndef _FILE_HPP_
#define _FILE_HPP_

#include <fstream>
#include <filesystem>

namespace file{
    std::string read_file(const std::filesystem::path path);
} // namespace file

#endif
