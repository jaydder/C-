#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    double a, b, c, area;
     
    scanf("%lf",&a);
    scanf("%lf",&b);
    scanf("%lf",&c);

    area = (a*c)/2.0;
    printf("\nTRIANGULO: %.3lf",area);

    area = 3.14159*pow(c,2);
    printf("\nCIRCULO: %.3lf",area);

    area = ((a + b)*c)/2.0;
    printf("\nTRAPEZIO: %.3lf",area );

    area = b*b;
    printf("\nQUADRADO: %.3lf",area );

    area = a*b;
    printf("\nRETANGULO: %.3lf",area);
    
    return 0;
}  