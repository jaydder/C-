#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    char nome;
    float salario , salarioTotal, vendas;
    
    scanf("%s", &nome);
    scanf("%f", &salario);
    scanf("%f", &vendas);

    salarioTotal = salario + (vendas*0.15);
   
    printf("TOTAL = R$ %.2f ", salarioTotal);
    
    return 0;
}