#include <iostream>

#include <LogET/LogET.h>

int main()
{   
    logger* l = getLogger(logType::CONSOLE, logLevel::DEBUG);
    l->info("info message");
    l->fatal("fatal message");
    l->warn("warn message");
    return 0;
}