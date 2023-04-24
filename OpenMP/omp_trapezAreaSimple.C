/*
  Purpose:

   trapezAreaSimple is an example that implements the trapezoidal rule to approximate the integral of a function over a user-defined interval,
   using a user-specified number of subintervals. This code has been modified for use in an introductory level Parallel Programming student context.

   The changes that are made are made based on parallelizing the original code with OpenMP
    
   Example:
   
   31 May 2001 09:45:54 AM

  Licensing:

   This code is distributed under the GNU LGPL license.

  Modified:

    24 September 2003

  Author:
  Manas Sharma 
  OpenMP Modification:
  22 april 2023 by Juan Claro, Universidad Industrial de Santander juan2192508@correo.uis.edu.co                   
  This OpenMP Modification makes a parallelization of the original Code...  
*/

#include <stdio.h>
#include <math.h>
#include <omp.h>

/* Define the function to be integrated here: */
double f(double x){
  return x*x;
}

/*Program begins*/
int main(){
  int n,i;
  double a,b,h,x,sum=0,integral;

  /*Ask the user for necessary input */
  printf("\nEnter the no. of sub-intervals: ");
  scanf("%d",&n);
  printf("\nEnter the initial limit: ");
  scanf("%lf",&a);
  printf("\nEnter the final limit: ");
  scanf("%lf",&b);

  /*Begin Trapezoidal Method: */

  // Splits work into subintervals and assigns them to different threads
  h=fabs(b-a)/n;
  #pragma omp parallel for private(x) reduction(+:sum)
  for(i=1;i<n;i++){
    x=a+i*h;
    sum=sum+f(x);
  }

  // Reduce the partial results to obtain the total integral
  integral=(h/2)*(f(a)+f(b)+2*sum);

  /*Print the answer */
  printf("\nThe integral is: %lf\n",integral);
} 
