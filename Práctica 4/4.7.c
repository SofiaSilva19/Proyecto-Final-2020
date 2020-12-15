/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
int a[4][4], b[4][4], c[4][4];
void generarArreglo()
{
    int i, j;
    for(i=0; i<4; i++)
    {  
        for(j=0; j<4; j++)
        {
          a[i][j]=rand() % 100;
          b[i][j]=rand() % 100;
        }
    }
}
void imprimirArreglo(int x[4][4], char letra){
    int i, j;
    printf("Hola, los valores del arreglo %c son:\n", letra);
    for(i=0; i<4; i++)
    {
       for(j=0; j<4; j++)
       {
         printf("%d, ", x[i][j]);
       }
       printf("\n");
    }
   
}
void sumarArreglos(){
    int i,j;
    for(i=0; i<4; i++)
    {
        for(j=0; j<4; j++)
        {
        c[i][j]=a[i][j]+b[i][j]; 
        }
    }
}
int main()
{
   generarArreglo(); 
   imprimirArreglo(a,'a');
   imprimirArreglo(b,'b');
   sumarArreglos();
   imprimirArreglo(c,'c');
   return 0;  
}
