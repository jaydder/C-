#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	int  horaEstra;
       float salario, resultado;

       scanf("%f", &salario);
       scanf("%i", &horaEstra);

       resultado = salario + ((salario * horaEstra)*0.05);

       printf("%.2f",resultado);

	return 0;
}