/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>

int main()
{
    int a,b,c,d;
    float x1, x2, ra;
    printf("Hola, dame tu valor de a\n");
    scanf("%d",&a);
    printf("Ahora dame tu valor de b\n");
    scanf("%d",&b);
    printf("Ahora dame tu valor de c\n");
    scanf("%d",&c);
    d=((b*b)-4*a*c);
    ra=(sqrt(d));
    if(d<0)
    {
        printf("Error:las soluciones no son reales.");
    }
    else
    {
 
    x1=((-b+ra)/2*a);
    x2=((-b-ra)/2*a);
    printf("Los resultados son: %1.2f, %1.2f", x1,x2);
    }
    
    return 0;
}
