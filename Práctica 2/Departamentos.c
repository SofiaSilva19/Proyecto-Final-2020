/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int main ()
{
    int cantidad_bolsas;
    float costo_producto,porcentaje_descuento,descuento,tarifa_final,costo_Bolsas;
    char departamento;
    printf("Los departamentos son:\n");
    printf("P) Perfumeria\n");
    printf("S) Salchichoneria\n");
    printf("C) Carniceria\n");
    printf("L) Limpieza\n");
    printf("¿De cual departamento es tu producto? opciones (P,S,C,L): ");
    scanf("%c",&departamento);
    printf("¿Cual es el costo de tu producto?: ");
    scanf("%f",&costo_producto);    
    printf("¿Cuantas bolsas llevaras?: ");
    scanf("%d",&cantidad_bolsas);
    switch (departamento)
    {
    	case 'P':
    	          porcentaje_descuento=0.20;
    	          break;
    	case 'S': 
    	          porcentaje_descuento=0.40;
    	          break;
    	case 'C':
    		      porcentaje_descuento=0.20;
    	          break;
    	case 'L':
    		      porcentaje_descuento=0.35;
    	          break;
	}
    descuento=costo_producto*porcentaje_descuento;
    costo_Bolsas= cantidad_bolsas*0.10;
    tarifa_final= costo_producto - descuento + costo_Bolsas;
    printf("\nCosto producto %.2f",costo_producto);
    printf("\nDescuento %.2f",descuento);
    printf("\nCosto de las bolsas %.2f",costo_Bolsas);
    printf("\nTarifa final: %.2f",tarifa_final);
	return 0;
}
