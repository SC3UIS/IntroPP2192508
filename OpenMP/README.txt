----------///----------///----------///---TALLER 1---///----------///----------///----------///
Esta carpeta llamada "OpenMP" contiene el archivo original trapezAreaSimple.C y el archivo paralelizado omp_trapezAreaSimple.C


El código paralelizado implementa el método del trapecio para aproximar la integral de una función en un intervalo dado. El programa solicita al usuario el número de subintervalos a utilizar, así como los límites inicial y final del intervalo de integración, el programa divide el trabajo en subintervalos y asigna cada subintervalo a un hilo diferente utilizando la directiva OpenMP #pragma omp parallel for. Cada hilo calcula la suma de la función evaluada en puntos específicos dentro de su subintervalo y la almacena en una variable local sum usando la cláusula reduction(+:sum) para garantizar que los resultados parciales se sumen correctamente. Finalmente, los resultados parciales se reducen para obtener el valor total de la integral, que se imprime en pantalla.


COMPLIACIÓN PARA LOS ARCHIVOS trapezAreaSimple.C y omp_trapezAreaSimple.C en GUANE-1

Para entrar a la carpeta OpenMP antes creada en Guane utilizamos el siguiente código:
cd "/home/class/2023_1/jdaclarog/OpenMP/"

Una vez dentro de esa carpeta ejecutamos el siguiente código:
gcc -fopenmp trapezAreaSimple.C -o trapecio -lm

Esta línea de comando compila el código fuente trapezAreaSimple.C con soporte para OpenMP, enlaza la biblioteca matemática estándar y genera un archivo ejecutable llamado trapecio que puede ser ejecutado para aproximar la integral de una función utilizando el método del trapecio con paralelismo mediante OpenMP.

A continuación, se ejecuta el siguiente comando:
./ trapecio

Este comando se utiliza para ejecutar el archivo ejecutable generado previamente a partir del código fuente compilado con la línea de comando "gcc -fopenmp trapezAreaSimple.C -o trapecio -lm".


Los comandos anteriormente mencionados se utilizan tanto para el archivo original como para el archivo paralelizado con OpenMP 

COMPLIACIÓN PARA LOS ARCHIVOS trapezAreaSimple.C y omp_trapezAreaSimple.C en MAQUINA PERSONAL

Para hacer esta compliación en mi maquina personal, descargué un compilador de archivos .C llamado Dev C++, ejecuté el archivo omp_trapezAreaSimple.C obteniendo los resultados mostrados en el archivo llamado "output_trapezAreaSimple.txt"