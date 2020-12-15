/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    double phi=1.6;
    int i,n;
    printf("Ingrese el valor de n");
    scanf("%d",&n);
    
    for (i=1 ; i<=n; i++)
    {
        phi= 1 + 1/phi;
        printf("%.101f\n",phi);
    }
    return 0;
}
