#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

     int n;

     scanf("%i",&n);

     if (n < 0   && n/2 == 1) {
          print("NEGATIVO IMPAR");
     } else if (n > 0 && n/2 == 1 ) {
          printf("POSITIVO IMPAR");
     } else if (n < 0 && n/2 == 0 ) {
          printf("NEGATIVO PAR");
     } else if (n > 0 && n/2 == 0 ) {
          printf("POSITIVO PAR");
     } else { 
          printf("NULO");
     }

	return 0;
}