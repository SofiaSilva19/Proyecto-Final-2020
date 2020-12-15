/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int num; 
int main() {
  printf("Ingresa un numero entero y positivo\n");
  scanf("%d",&num);
  if (num%2==0) {
    printf("El numero es par\n");
  }
  else {
    printf("El numero es impar\n");
  }
  return 0;
}
