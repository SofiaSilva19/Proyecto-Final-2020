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
float xi,h,error1,error2,error3;
int main()
{
    xi=0.6; h=0.5;
    error1 = fabs((0.2489-DErivADelante(xi,h))/0.2489)*100;
    error2 = fabs((0.2489-DErivaATras(xi,h))/0.2489)*100;
    error3 = fabs((0.2489-DErivaCEntrada(xi,h))/0.2489)*100;
    printf("Hola, buen dia, al calcular la derivada de f(x)=1-e^(-x/0.2) del punto xi=0.6\n\n");
    printf("El valor para h=%f hacia adelante es: %f, y su error realtivo de %f %% \n",h,DErivADelante(xi,h),error1);
    printf("El valor para h=%f hacia atras es: %f, y su error relativo de %f %%\n",h,DErivaATras(xi,h),error2);
    printf("El valor para h=%f centrada es: %f, y su error relativo de %f %%",h,DErivaCEntrada(xi,h),error3);
}
float DErivADelante(float h, float(xi)){
    float dfxi, fxi, fxip1, fxip2,error1;
    xi=0.6; h=0.5;
    fxi = 1-exp(-xi/0.2);
    fxip1 = 1-exp(-(xi+h)/0.2);
    fxip2 = 1-exp(-(xi+(2*h))/0.2);
    dfxi = (-fxip2+4*fxip1-3*fxi)/(2*h);
    return dfxi;
}
float DErivaATras(float h, float(xi)){
    float dfxi, fxi, fxip1, fxip2,error2;
    xi=0.6; h=0.5;
    fxi = 1-exp(-xi/0.2);
    fxip1 = 1-exp(-(xi-h)/0.2);
    fxip2 = 1-exp(-(xi-(2*h))/0.2);
    dfxi = (3*fxi-4*fxip1+fxip2)/(2*h);
    return dfxi;
}
float DErivaCEntrada(float h, float(xi)){
    float dfxi, fxi, fxip1, fxip2,fxip3,fxip4,error3;
    xi=0.6; h=0.5;
    fxi = 1-exp(-xi/0.2);
    fxip1 = 1-exp(-(xi+h)/0.2);
    fxip2 = 1-exp(-(xi+(2*h))/0.2);
    fxip3 = 1-exp(-(xi-h)/0.2);
    fxip4 = 1-exp(-(xi-(2*h))/0.2);
    dfxi = (-fxip2+8*fxip1-8*fxip3+fxip4)/(12*h);
    return dfxi;
}
