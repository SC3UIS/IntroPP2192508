A continuación pdremos observar el tiempo de ejecución de cada uno de los archivos presentes `trapezAreaSimple.C`, `omp_trapezAreaSimple.C` y `mpi_trapezAreaSimple.C`


--------- TINMPO PARA EL ARCHIVO ORIGINAL ------
[jdaclarog@guane MPI]$ time ./trapecio

Enter the no. of sub-intervals: 6

Enter the initial limit: 3

Enter the final limit: 4

The integral is: 12.337963

real    0m3.109s
user    0m0.000s
sys     0m0.002s



--------- TIEMPO PARA EL MODIFICADO CON MPI ------
[jdaclarog@guane MPI]$ time mpirun -np 12 ./mpi_trapecio

Enter the no. of sub-intervals: 6

Enter the initial limit: 3

Enter the final limit: 4

The integral is: 12.337963

real    0m3.548s
user    0m36.078s
sys     0m2.306s


--------- TIEMPO PARA EL MODIFICADO CON OMP ------
[jdaclarog@guane OpenMP]$ time ./omp_trapecio

Enter the no. of sub-intervals: 6

Enter the initial limit: 3

Enter the final limit: 4

The integral is: 12.337963

real    0m5.420s
user    0m0.005s
sys     0m0.003s



----