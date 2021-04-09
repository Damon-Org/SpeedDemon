#pragma once
#include <cstring>
#include <iostream>

namespace speed_demon::logger
{
    static const char* blue = "\x1b[34m";
    static const char* green = "\x1b[32m";
    static const char* yellow = "\x1b[33m";
    static const char* red = "\x1b[31m";
    static const char* reset = "\x1b[0m";

    enum Level {
        VERBOSE,
        INFO,
        WARNING,
        ERROR,
        CRITICAL
    };

    inline void _log(Level log_level, const char* service, const char* message) 
    {
        char color[10];
        char level_string[10];

        switch (log_level)
        {
        case VERBOSE:
            strcpy(color, blue);
            strcpy(level_string, "VERBOSE");

            break;
        case INFO:
            strcpy(color, green);
            strcpy(level_string, "INFO");

            break;
        case WARNING:
            strcpy(color, yellow);
            strcpy(level_string, "WARNING");

            break;
        case ERROR:
            strcpy(color, red);
            strcpy(level_string, "ERROR");

            break;
        case CRITICAL:
            strcpy(color, red);
            strcpy(level_string, "CRITITCAL");

            break;
        }

        std::cout << color << "[" << level_string << "/" << service << "] " << reset << message << std::endl;
    }

    inline void critical(const char* service, const char* message)
    {
        _log(CRITICAL, service, message);
    }

    inline void error(const char* service, const char* message)
    {
        _log(ERROR, service, message);
    }

    inline void info(const char* service, const char* message)
    {
        _log(INFO, service, message);
    }

    inline void verbose(const char* service, const char* message)
    {
        _log(VERBOSE, service, message);
    }

    inline void warning(const char* service, const char* message)
    {
        _log(WARNING, service, message);
    }
}
