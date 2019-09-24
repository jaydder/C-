#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

     int a , b, c ;

     scanf("%i",&a);
     scanf("%i",&b);
     scanf("%i",&c);

     if(a == b && b  == c) {
          printf("1");
     }else if (a != b && b != c ){
          printf("2");
     }else{
          printf("3");
     }
     

     
	return 0;
}