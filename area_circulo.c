#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

	double raio,area;

	scanf("%lf",&raio);

	area = 3.14159*pow(raio,2);
	area = area/10000;
	
	
	printf("Area = %.4f", area);

	return 0;
}