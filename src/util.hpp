#pragma once
#include <fstream>

namespace util
{
    inline bool does_file_exist(const std::string path)
    {
        struct stat buffer;   
        return (stat (path.c_str(), &buffer) == 0);
    }

    inline nlohmann::json read_file(const std::string path)
    {
        std::ifstream file(path);

        std::stringstream str_stream;
        str_stream << file.rdbuf();
        std::string str = str_stream.str();

        return nlohmann::json::parse(str);
    }
}
