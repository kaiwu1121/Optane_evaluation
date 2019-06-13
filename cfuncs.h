#include <stdio.h>
#include "cpucounters.h"

extern "C" void startcounter_();
extern "C" void stopcounter_();
extern "C" void passparameters_(void* p);


static SystemCounterState before_sstate;
static SystemCounterState after_sstate;
