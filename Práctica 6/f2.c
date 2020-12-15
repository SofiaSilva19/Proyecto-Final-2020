/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>

float f(float x)
{
  float y;
  y= 2*x*x*x-11*x*x+17.7*x-5;
  return y;
}
float fprima(float x)
{
   float y;
   y=6*x*x-22*x+17.7;
   return y;

}

float newtonRaphson(float X0,int iter)
{
   int i=0;
   float xi, ximasuno,erp;
   xi=X0;
   printf("i \t Xi \t\t Xi+1 \t\t Err\n");
   do
   {
      ximasuno= xi - f(xi)/fprima(xi);
      erp= fabs((ximasuno-xi)/ximasuno)*100;
      printf("%i \t %.8f \t %.8f \t %.8f \n",i,xi,ximasuno,erp);
      i++;
      xi=ximasuno;
   }while(i<iter);
   return ximasuno;
}

int main ()
{
    float X0=0.3;
    int iter=5;
    float raiz;
    raiz=newtonRaphson(X0,iter);
    printf("\n\n");
	return 0;
}
