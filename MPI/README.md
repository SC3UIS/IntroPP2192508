A continuación pdremos observar el tiempo de ejecución de cada uno de los archivos presentes `trapezAreaSimple.C`, `mpi_trapezAreaSimple.C` y `omp_trapezAreaSimple.C`


# TIEMPO EJECUCIÓN PARA LOS 3 ARCHIVOS

## `trapezAreaSimple.C`
[jdaclarog@guane MPI]$ time ./trapecio

Enter the no. of sub-intervals: 6

Enter the initial limit: 3

Enter the final limit: 4

The integral is: 12.337963


real    0m3.109s
user    0m0.000s
sys     0m0.002s


## `mpi_trapezAreaSimple.C` 
[jdaclarog@guane MPI]$ time mpirun -np 12 ./mpi_trapecio

Enter the no. of sub-intervals: 6

Enter the initial limit: 3

Enter the final limit: 4

The integral is: 12.337963


real    0m3.548s
user    0m36.078s
sys     0m2.306s



##  `omp_trapezAreaSimple.C`
[jdaclarog@guane OpenMP]$ time ./omp_trapecio

Enter the no. of sub-intervals: 6

Enter the initial limit: 3

Enter the final limit: 4

The integral is: 12.337963

real    0m5.420s
user    0m0.005s
sys     0m0.003s



----
