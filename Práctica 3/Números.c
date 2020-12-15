/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int
main ()
{
  long long int numero, i, x = 0, y = 1, z = 1, segundo, j, a = 0, b = 1, c =
    1;
  float fibonacci;
  printf ("Agrega un numero de la primera serie:");
  scanf ("%lli", &numero);
  printf ("1,");
  for (i = 1; i < numero; i++)
    {
      z = x + y;
      x = y;
      y = z;
      printf ("%lli,", z);
    }
  printf
    ("\nAhora agrega el numero anterior al que ingresaste, para calcular la aproximidad al numero aureo :");
  scanf ("%lli", &segundo);
  printf ("1,");
  for (j = 1; j < segundo; j++)
    {
      c = a + b;
      a = b;
      b = c;
      printf ("%lli,", c);
    }
  printf ("\nEl numero aureo sera:");
  fibonacci = ((float) z) / c;
  printf ("%f", fibonacci);
}
