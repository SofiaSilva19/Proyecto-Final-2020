/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int main()
{
    int ingresos;
    char estadoCivil;
    float impuesto;
    float tarifaImpuestos;
    printf("\n¿Cual es tu estado civl?: s=Soltero o c=Casado?");
    scanf("%c",&estadoCivil);
    printf("\n¿Cuanto es tu ingreso?:");
    scanf("%d",&ingresos);
    if (estadoCivil=='c')
    {
        if ( ingresos<64000)
        {
         impuesto=0.10; 
        }
        else
        {
         impuesto=0.25;
        }
    } 
    if (estadoCivil=='S')
    {
        if (ingresos>32000)
        {
           impuesto=0.25;
        }
        else
        {
           impuesto=0.10;
        }
   }
   tarifaImpuestos= ingresos*impuesto;
   printf("\nTu estado civil es %c", estadoCivil);
   printf("\nEl ingreso es %d", ingresos);
   printf("\nEl porcentaje de impuesto es %.2f",impuesto);
   printf("\nEl impuesto es de %.2f",tarifaImpuestos);
           return 0;
 }

