/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int main()
{
    int edad;
    printf("¿Cual es tu edad?\n");
    scanf("%d",&edad);
    printf("Tu edad es %d\n",edad);
    if (edad>=18)
    {
    printf("Eres mayor de edad");
    }
    else
    {
    printf("Eres menor de edad");
    }
    return 0;
}
