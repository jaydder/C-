#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int idade, anosEmSegundos;

    scanf("%i",&idade);

    anosEmSegundos = idade*31536000;

    printf("%i", anosEmSegundos);

    return 0;
}