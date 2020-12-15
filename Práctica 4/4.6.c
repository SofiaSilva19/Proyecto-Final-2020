/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
int a[3][3];
void generarArreglo()
{
    int i, j;
    for(i=0; i<3; i++)
    {  
        for(j=0; j<3; j++)
        {
          a[i][j]=rand() % 100;
        }
    }
}
void imprimirArreglo(){
    int i, j;
    printf("Hola, los valores del arreglo son:\n");
    for(i=0; i<3; i++)
    {
       for(j=0; j<3; j++)
       {
         printf("%d, ", a[i][j]);
       }
       printf("\n");
    }
   
}
int main()
{
   generarArreglo(); 
   imprimirArreglo();

    return 0;
}
