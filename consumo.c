#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
     int velocidade_percorrida;
     float combustivel, consumo;

     scanf("%i",&velocidade_percorrida);
     scanf("%f",&combustivel);
     
     consumo = combustivel/velocidade_percorrida;

     printf("%.3i km/l",consumo);
	return 0;
}