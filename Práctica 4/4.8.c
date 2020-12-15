/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int matrizA[21][21], matrizB[21][21], matrizC[21][21];
int filas_matrizA, col_matrizA, filas_matrizB, col_matrizB;

void generarArregloA ()
{
  int i, j;
  printf ("primer matriz\n");
  for (i=0; i<filas_matrizA; i++)
    {
      for (j=0; j<col_matrizA; j++)
    	{
	      printf ("Favor de ingresar los valores del arreglo a %d][%d]\n", i, j);
	      scanf ("%d", &matrizA[i][j]);
    	}
    }

}
void generarArregloB ()
{
  int i, j;
  printf ("segunda matriz\n");
  for (i=0; i<filas_matrizB; i++)
    {
      for (j=0; j<col_matrizB; j++)
    	{
	      printf ("Ahora ingresar los valores del arreglo b[%d][%d]\n", i, j);
	       scanf ("%d", &matrizB[i][j]);
    	}
    }

}

void imprimirArreglo (int x[21][21], char letra, int filas, int columnas)
{
  int i, j;
  printf ("Los valores del arreglo %c son:\n", letra);
  for (i=0;i<filas; i++)
    {
      for (j=0; j<columnas; j++)
	{
	  printf ("%d, ", x[i][j]);
	}
      printf ("\n");
    }

}

void multiplicacionArreglos ()
{
  int i, j, h, suma=0;
  for (i=0; i<col_matrizB; i++)
    {
      for (j=0; j<filas_matrizA; j++)
	   {
              suma=0;
	      for(h=0; h<col_matrizA; h++)
	      {
	      suma=suma+(matrizA[i][h]*matrizB[h][j]); 
	      }
             matrizC[i][j]= suma;
	  }
	
    }
}

int main (){
    printf("Cuantas filas de la matriz a?");
    scanf("%d",&filas_matrizA);
    printf("Cuantas columnas de la matriz a?");
    scanf("%d",&col_matrizA);
    printf("Cuantas filas de la matriz b?");
    scanf("%d",&filas_matrizB);
    printf("Cuantas columnas de la matriz  b?");
    scanf("%d",&col_matrizB);
    if(col_matrizA==filas_matrizB){
       generarArregloA();
       generarArregloB();
       imprimirArreglo (matrizA, 'a', filas_matrizA, col_matrizA);
       imprimirArreglo (matrizB, 'b', filas_matrizB, col_matrizB);
       multiplicacionArreglos();
       imprimirArreglo (matrizC, 'c', col_matrizB,filas_matrizA);
    }
    else 
    printf("Error no se pueden multiplicar\n");
  return 0;
}
