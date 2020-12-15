/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<math.h>
float DErivADelante(float h, float(xi));
float DErivaATras(float h, float(xi));
float DErivaCEntrada(float h, float(xi));
float xi,h,Error1,Error2,Error3;
int main()
{
    xi=0.6; h=0.01;
    Error1 = fabs((0.2489-DErivADelante(xi,h))/0.2489)*100;
    Error2 = fabs((0.2489-DErivaATras(xi,h))/0.2489)*100;
    Error3 = fabs((0.2489-DErivaCEntrada(xi,h))/0.2489)*100;
    printf("Hola, al calcular la derivada de f(x)=1-e^(-x/0.2) del punto xi=0.6\n\n");
    printf("El valor para h=%f hacia adelante es: %f, y su error realtivo de %f %% \n",h,DErivADelante(xi,h),Error1);
    printf("El valor para h=%f hacia atras es: %f, y su error relativo de %f %%\n",h,DErivaATras(xi,h),Error2);
    printf("El valor para h=%f Centrado es: %f, y su error relativo de %f %%",h,DErivaCEntrada(xi,h),Error3);
}
float DErivADelante(float h, float(xi)){
    float dfxi, fxi, fxip1, fxip2,Error1;
    xi=0.6; h=0.01;
    fxi = 1-exp(-xi/0.2);
    fxip1 = 1-exp(-(xi+h)/0.2);
    fxip2 = 1-exp(-(xi+(2*h))/0.2);
    dfxi = (-fxip2+4*fxip1-3*fxi)/(2*h);
    return dfxi;
}
float DErivaATras(float h, float(xi)){
    float dfxi, fxi, fxip1, fxip2,Error2;
    xi=0.6; h=0.01;
    fxi = 1-exp(-xi/0.2);
    fxip1 = 1-exp(-(xi-h)/0.2);
    fxip2 = 1-exp(-(xi-(2*h))/0.2);
    dfxi = (3*fxi-4*fxip1+fxip2)/(2*h);
    return dfxi;
}
float DErivaCEntrada(float h, float(xi)){
    float dfxi, fxi, fxip1, fxip2,fxip3,fxip4,Error3;
    xi=0.6; h=0.01;
    fxi = 1-exp(-xi/0.2);
    fxip1 = 1-exp(-(xi+h)/0.2);
    fxip2 = 1-exp(-(xi+(2*h))/0.2);
    fxip3 = 1-exp(-(xi-h)/0.2);
    fxip4 = 1-exp(-(xi-(2*h))/0.2);
    dfxi = (-fxip2+8*fxip1-8*fxip3+fxip4)/(12*h);
    return dfxi;
}