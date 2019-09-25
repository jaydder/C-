#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
   
   float altura , raio , volume, area;

   scanf("%f",&altura);
   scanf("%f",&raio);

   volume = 3.14 * pow(raio,2.0) * altura;
   area = (2.0 * 3.14 * raio * altura) + (2 * 3.14 * pow(raio,2.0));

   
   printf("%.2f\n",volume);
   printf("%.2f\n",area);
  
    return 0;
}