#include <iostream>
#include <LogET/LogET.h>
#include <LogET/logfun.h>


logger logET::getLogger(logLevel level, logType type)
{
    if (type == CONSOLE)
    {
        return logConsole(level);
    }
    else
    {
        return logFile(level);
    }
}

logLevel logger::getLogLevel()
{
    return mlevel;
}

void logConsole::debug(std::string message)
{
    if (mlevel <= DEBUG)
    {
        std::cout << "[DEBUG] - " << message << '\n';
    }
}

void logConsole::warn(std::string message)
{
    if (mlevel <= WARN)
    {
        std::cout << "[WARN] - " << message << '\n';
    }
}

void logConsole::info(std::string message)
{
    if (mlevel <= INFO)
    {
        std::cout << "[INFO] - " << message << '\n';
    }
}

void logConsole::error(std::string message)
{
    if (mlevel <= ERROR)
    {
        std::cout << "[ERROR] - " << message << '\n';
    }
}

void logConsole::fatal(std::string message)
{
    if (mlevel <= FATAL)
    {
        std::cout << "[FATAL] - " << message << '\n';
    }
}

void logFile::debug(std::string message)
{
    
}

void logFile::warn(std::string message)
{

}

void logFile::info(std::string message)
{

}

void logFile::error(std::string message)
{

}

void logFile::fatal(std::string message)
{

}