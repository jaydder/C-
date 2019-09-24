#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

     int a , b, c ;
     char tipo;

     scanf("%f",&a);
     scanf("%f",&b);
     scanf("%f",&c);

     if(a == b == c) {
          printf("equilatero",tipo);
     }else if (a == b || a == c || b == c) {
          printf("isoceles");
     } else {
          printf("escaleno");
     }
     
	return 0;
}