#include <time.h>

char *PerMessage()
{
    time_t rawtime;
    time(&rawtime);
    return asctime(localtime(&rawtime));
}