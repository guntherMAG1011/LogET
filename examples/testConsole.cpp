#include <LogET/LogET.h>

int main()
{   
    logET factory = logET();
    logger l = factory.getLogger();
    l.info("info message");
    l.debug("debug message");
    l.fatal("fatal message");
    return 0;
}