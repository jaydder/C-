#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int altura,idade,cont=0;
    
    scanf("%d",&altura);
    scanf("%d",&idade);
    
    if(altura >= 150 && idade >= 12) {
        cont = + 1;
    }
    if(altura >= 140 && idade >= 14) {
        cont = cont + 1;
    }
    
    if(altura >= 170 || idade >= 16 ){
        cont = cont + 1 ;
    }
    
    printf("%d",cont);
    
	return 0;
}