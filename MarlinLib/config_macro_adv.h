#define BLANK(M)       #M
#define INCLUDE_FILE_ADV(N,M)  BLANK(configurations/N/M/Configuration_adv.h)
#include INCLUDE_FILE_ADV(TYPE,DEVICE)
