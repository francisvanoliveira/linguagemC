#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(){
   
   float x = 3.7;
   int y = 2;
   int z = 4;

   x = ceil(x);
   y = pow(z, y);
   z = sqrt(z);

   printf("Ceil 3.7: %.2f\nPow 4,2: %d \nSqrt 4: %d \n", x, y, z);

   return 0;
}