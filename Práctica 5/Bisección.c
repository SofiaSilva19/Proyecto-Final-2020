/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>

float funcion1(float x)
{
    float y;
    y=2*x*cos(2*x)-(x+1)*(x+1);
	return y;
}
float funcion2(float x)
{
    float y;
    y=log(x)+x*x-4;
	return y;
}

float biseccion(float a, float b,int iter)
{
   float xi,xi_anterior=0.0,errorRP;
   int contador=1;
   printf("i \t a \t\t b \t\t xi \t\t Erp\n");
  do
  {
      xi=(a+b)/2;
      errorRP= ((xi-xi_anterior)/xi)*100.0;
      xi_anterior=xi;
      printf("%d \t %.6f \t %.6f \t %.6f \t %.6f\n",contador,a,b,xi,fabs(errorRP));


      if(funcion1(a)*funcion1(xi)<0)
      {
      	b=xi;
      }else{
      	a=xi;
      }
      
      contador++;

  }while (funcion1(a)*funcion1(xi)!= 0 && contador<=iter );

  return xi;
}


int main ()
{
    float a=-3, b=-2,iteraciones=5;
    float raiz;
    raiz=biseccion(a,b,iteraciones);
    printf("\nLa raiz aproximada es %.6f",raiz);
    printf("\n\n");
	return 0;
}
