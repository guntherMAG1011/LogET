#pragma once

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
        logLevel mlevel;
    public:
        logLevel getLogLevel();

        virtual void debug(std::string message);
        virtual void warn(std::string message);
        virtual void info(std::string message);
        virtual void error(std::string message);
        virtual void fatal(std::string message);
};

class logConsole : public logger
{   
    public:

        logConsole(logLevel level)
        {
            mlevel = level;
        }

        void debug(std::string message) override;
        void warn(std::string message) override;
        void info(std::string message) override;
        void error(std::string message) override;
        void fatal(std::string message) override;
};

class logFile : public logger
{
    public:

        logFile(logLevel level)
        {
            mlevel = level;
        }

        void debug(std::string message) override;
        void warn(std::string message) override; 
        void info(std::string message) override; 
        void error(std::string message) override;
        void fatal(std::string message) override;
};