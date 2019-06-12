hello_world:	hello_world.f
	gcc -c cfuncs.c
	gfortran -o hello_world hello_world.f cfuncs.o

clean:
	rm -f *.o hello_world


