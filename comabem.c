#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
     float gasto,pago;

     scanf("%f",&gasto);

     pago = gasto + (gasto*0.1);

     printf("%.2f",pago);

	return 0;
}