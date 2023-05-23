# Procesamiento Memoria Distribuída
Aquí en esta carpeta se encuentran los archivos necesarios para compilar y ejecutar el código MPI (MPI_trapezAreaSimple.C). Además, se incluyen otros archivos importantes como MPI_trapezAreaSimple.sbatch, output_trapezAreaSimple.txt (archivo de salida), trapezAreaSimple.C (código original) y el ejecutable correspondiente.

## TIEMPO EJECUCIÓN PARA LOS 3 ARCHIVOS
A continuación pdremos observar el tiempo de ejecución de cada uno de los archivos presentes `trapezAreaSimple.C`, `mpi_trapezAreaSimple.C` y `omp_trapezAreaSimple.C`

### `trapezAreaSimple.C`
![original](https://github.com/SC3UIS/IntroPP2192508/assets/102691357/2b23e8e1-21d8-4708-977e-5ca9592b6fb4)

### `mpi_trapezAreaSimple.C` 
![mpi](https://github.com/SC3UIS/IntroPP2192508/assets/102691357/4ed18673-eb37-40db-b290-c16a779c35dd)

###  `omp_trapezAreaSimple.C`
![omp](https://github.com/SC3UIS/IntroPP2192508/assets/102691357/b3111d7d-5133-4abe-88fa-8744ad377fca)


## Comparación

La implementación más veloz, con un tiempo de ejecución real de 3,659 segundos, es la versión OMP.

La implementación de MPI ocupa el segundo lugar en términos de velocidad, con un tiempo real de ejecución de 6,178segundos.

Por último, el código original se ubica en el tercer y último puesto, con un tiempo de ejecución real de 10,805 segundos.


----
