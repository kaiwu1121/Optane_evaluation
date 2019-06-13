git clone https://github.com/BoxLib-Codes/BoxLib.git

mkdir BoxLib/build

cd BoxLib/build

cmake ..

make

cd FHD_ReactDiff-master/exec

make

mpirun -np 24 ./main.Linux.gfortran.exe inputs_chemical_wave_3d
