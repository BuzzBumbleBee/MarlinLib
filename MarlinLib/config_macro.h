#define BLANK(M)       #M
#define INCLUDE_FILE(N,M)  BLANK(configurations/N/M/Configuration.h)
#include INCLUDE_FILE(TYPE,DEVICE)
