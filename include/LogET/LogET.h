#pragma once

#include <LogET/logfun.h>

class logET    // Factory Class
{
    public:
        logger getLogger(logLevel level = INFO, logType type = CONSOLE);
};