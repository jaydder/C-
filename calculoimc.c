#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
       float peso , altura , imc;
       scanf("%f",&peso);
       scanf("%f",&altura);
       imc = peso/pow(altura,2);

       printf("%.2f",imc);
       return 0;
}