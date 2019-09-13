#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
       float tempo_gasto_V, vm;
       float consumo;       
       printf("Digite o tempo gasto (em horas) e a velocidade media (em km/h):\n");
       scanf("%f",&tempo_gasto_V);
       scanf("%f",&vm);
       consumo = (tempo_gasto_V * vm )/ 12;

       printf("Quantidade de litros gastos na viagem: %f",consumo);
       
       return 0;
}