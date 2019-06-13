#include "cfuncs.h"

inline void pcm_start(){
  before_sstate = getSystemCounterState();
}
inline void pcm_stop(){
  after_sstate = getSystemCounterState();
  std::cout << "IPC: " << getIPC(before_sstate,after_sstate) << std::endl;
  std::cout << "Instructions: " << getInstructionsRetired(before_sstate,after_sstate) << std::endl;
  std::cout << "Bytes read from MC: " << getBytesReadFromMC(before_sstate,after_sstate)  << std::endl;
  std::cout << "Bytes read from PMM: " << getBytesReadFromPMM(before_sstate,after_sstate) << std::endl;
  std::cout << "Bytes written to MC: " << getBytesWrittenToMC(before_sstate,after_sstate)  << std::endl;
  std::cout << "Bytes written to PMM: " << getBytesWrittenToPMM(before_sstate,after_sstate) << std::endl;
  std::cout << "L2 Cache Misses: "<<getL2CacheMisses(before_sstate,after_sstate) << std::endl;
  std::cout << "L2 cache hit ratio: "<<getL2CacheHitRatio(before_sstate, after_sstate)<< std::endl;
  std::cout << "L3 Cache Misses: "<< getL3CacheMisses(before_sstate,after_sstate)<< std::endl;
  std::cout << "L3 cache hit ratio: " << getL3CacheHitRatio(before_sstate,after_sstate)<< std::endl;
  std::cout << "Consumed Energy: " << getConsumedEnergy(before_sstate,after_sstate)*0.000061047<< " J"<< std::endl;
  std::cout << "DRAM Consumed Energy: " << getDRAMConsumedEnergy(before_sstate,after_sstate)*0.00001530<< " J"<< std::endl;
}

void startcounter_(){
  pcm_start();
  printf("start counter!\n");
}

void stopcounter_(){
  printf("stop counter!\n");
  pcm_stop();
}


void passparameters_(void* p) {
  printf("value: %d\n", *(int*)p);
}
