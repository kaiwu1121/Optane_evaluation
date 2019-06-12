#include "cfuncs.h"

void startcounter_(){

	printf("start counter!\n");
}

void stopcounter_(){

	printf("stop counter!\n");
}


void passparameters_(void* p) {
	printf("value: %d\n", *(int*)p);

}
