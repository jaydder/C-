#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
   
   float altura , raio , volume, area , areaB, areaL;

   scanf("%f",&altura);
   scanf("%f",&raio);

   areaB = 3.14*pow(raio,2);
   areaL = 2*3.14*raio*altura;

   volume =areaB*altura;
   area = 2*areaB+areaL;

   
   printf("%.2f\n",volume);
   printf("%.2f\n",area);
  
    return 0;
}