#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
     int i;

     for(i = 0 ; i < 10000000000; i++){
          printf("-%i-",i);
     }
     
     return 0; 
}