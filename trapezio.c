#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

	float ladoMenor , ladoMaior,altura,area;

	scanf("%f",&ladoMenor);
	scanf("%f",&ladoMaior);
	scanf("%f",&altura);

	area = ((ladoMaior + ladoMenor)*altura)/2;

	printf("%f",area);


	return 0;
}