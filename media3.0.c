#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {


     float nota1,nota2,nota3, media;

     scanf("%f",&nota1);
     scanf("%f",%nota2);
     scanf("%f",&nota3);

     media = (nota1 + nota2 + nota3) / 3;

     if (media >= 7) {
          printf("aprovado");
     } else if (media < 3) {
          printf("reprovado");
     }else if (3 <= media < 7) {
          printf("prova final");
     }

	return 0;
}