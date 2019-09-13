#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
       float raio, area,volume;
       scanf("%f", &raio);
       area = 4*3.1416*(pow(raio,2));
       volume = (4*3.1416*pow(raio,3))/3;

       printf("%.2f\n",area);
       printf("%.2f",volume);
	return 0;
}