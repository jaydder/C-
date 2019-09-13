#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
 	float ladoA,ladoB , resultado;

 	scanf("%f",&ladoA);
 	scanf("%f",&ladoB);



 	resultado = sqrt(pow(ladoA , 2)+ pow(ladoB, 2));

 	printf("%.2f",resultado);
	return 0;
}