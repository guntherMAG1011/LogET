#pragma once

#include <iostream>
#include <string>

enum logLevel
{
    DEBUG = 0,
    WARN = 1,
    INFO = 2,
    ERROR = 3,
    FATAL = 4,
    OFF = 5
};

enum logType
{
    CONSOLE= 0,
    LOGFILE = 1
};

class logger
{
protected:
    logLevel mlevel = logLevel::INFO;
public:
    logger() {};
    virtual void debug(std::string message) = 0;
    virtual void warn(std::string message) = 0;
    virtual void info(std::string message) = 0;
    virtual void error(std::string message) = 0;
    virtual void fatal(std::string message) = 0;
};

class logConsole : public logger
{
public:
    logConsole(logLevel level)
    {
        mlevel = level;
    }
    void debug(std::string message) override
    {
        if (mlevel <= logLevel::DEBUG)
        {
            std::cout << "[DEBUG] - " << message << '\n';
        }
    }
    void warn(std::string message) override
    {
        if (mlevel <= logLevel::WARN)
        {
            std::cout << "[WARN] - " << message << '\n';
        }
    }
    void info(std::string message) override
    {
        if (mlevel <= logLevel::INFO)
        {
            std::cout << "[INFO] - " << message << '\n';
        }
    }
    void error(std::string message) override
    {
        if (mlevel <= logLevel::ERROR)
        {
            std::cout << "[ERROR] - " << message << '\n';
        }
    }
    void fatal(std::string message) override
    {
        if (mlevel <= logLevel::FATAL)
        {
            std::cout << "[FATAL] - " << message << '\n';
        }
    }
};


logger* getLogger(logType type, logLevel level)
{
    if (type == logType::CONSOLE)
    {
        return new logConsole(level);
    }
    else
    {
        return nullptr;
    }
}