#pragma once

namespace LogET
{
    enum LogLevel
    {
        DEBUG = 0,
        WARN = 1,
        INFO = 2,
        ERROR = 3,
        FATAL = 4,
        OFF = 5
    };

    class logger
    {
    private:
        LogLevel nLevel = INFO;
    public:
        logger(){}
        logger(LogLevel level)
        {
            nLevel = level;
        }

        LogLevel getLogLevel();
    };
}