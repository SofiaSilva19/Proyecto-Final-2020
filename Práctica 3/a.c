/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int main(){
	  long long int numero, i, x=0, y=1,z=1;
	printf("Ingrese numero de los elementos :");
	scanf("%lli",&numero);

	printf("1,");

	for (i=1;i<numero;i++) {
		 z=x+y;
		 x=y;
	 	 y=z;
		 printf ("%lli,",z);
	}
}
