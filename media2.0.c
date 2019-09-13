#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
     float notaA,notaB,notaC,media;

     scanf("%f",&notaA);
     scanf("%f",&notaB);
     scanf("%f",&notaC);

     media = ((notaA*2)+(notaB*3)+(notaC*5))/10;
     printf("MEDIA = %.1f",media);

     return 0;
}