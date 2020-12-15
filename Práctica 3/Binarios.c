/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int main ()
{
   int num, co,re, j;
   int vector[1000],i=0;
   printf("Hola, ingresa un numero");
   scanf("%d",&num);
   co=num;
   while (co>0)
   {
         vector[i]= co % 2;
         co /= 2;
         ++i;
   }
    for(j= i - 1; j>=0; --j)
      printf("\n%d",vector[j]);
      printf("\n");
}
