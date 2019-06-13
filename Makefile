CC=g++
CFLAGS=-std=c++11

PCM_DIR=/home/peng8/Software/pcm_dst_intel/pcm
LIBS +=-L${PCM_DIR}/cpucounters.o ${PCM_DIR}/pci.o ${PCM_DIR}/msr.o ${PCM_DIR}/client_bw.o ${PCM_DIR}/cpucounters.o ${PCM_DIR}/mmio.o -lpthread -lstdc++

default: clean hello_world

hello_world: hello_world.f
	$(CC) $(CFLAGS) -c cfuncs.cpp -I$(PCM_DIR)
	gfortran -o hello_world hello_world.f cfuncs.o $(LIBS)

clean:
	rm -f *.o hello_world


