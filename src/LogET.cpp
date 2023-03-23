#include <iostream>
#include <LogET/LogET.h>

using namespace LogET;

LogLevel logger::getLogLevel()
{
    return nLevel;
}
