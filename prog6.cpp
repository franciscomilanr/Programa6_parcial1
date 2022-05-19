/* 
Autor: Franciscomilan
Escuela: Universidad uvm
Profesor: Armando Cruz
Materia: Programacion estructurada
Ciclo: 01/2022
Realizado: 10/02/2022
Descripcion: Sexto programa en C que simula una tienda de Arduinos, en dicha tienda existen promociones, si se llevan minimo 5 arduinos, se les hace el 15% de descuento, 
si se lleva menos de 5 es de .05%,  cada Arduino tiene un costo de $350.00
El programa pedira la cantidad de arduinos y calculara el total a pagar para la materia programacion estructurada
*/

//Librerias
#include<stdio.h>

//Principal
int main() {
	 //Variables
	 int arduinos;
	 float total, descuento=0;
	 //Entrada de datos
	 printf("Introduce la cantidad de arduinos: ");
	 scanf("%d",&arduinos);
	 //Procesamiento
	 total=arduinos*350.0;
	 if (arduinos>=5) {
		descuento=total*0.15;
	 }
	 else {
		descuento=total*0.05;
	 }
	 //Salida
	 printf(" Subtotal:   $%10.2f\n",total);
	 printf(" Descuento: -$%10.2f\n", descuento);
	 printf("-----------------------------\n");
	 printf(" Total:      $%10.2f", total-descuento);
	 //Retorno
	 return 0;
}
