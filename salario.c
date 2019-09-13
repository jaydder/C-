#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
     int numeroFuncionarios,horasTabalhada;
     float valorHoraExtra,salario;

     scanf("%i",&numeroFuncionarios);
     scanf("%i",&horasTabalhada);
     scanf("%f",&valorHoraExtra);

     salario = horasTabalhada*valorHoraExtra;

     printf("NUMBER = %i\n",numeroFuncionarios);
     printf("SALARY = R$ %.2f",salario);
    
     return 0;
}