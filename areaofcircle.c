#include <stdio.h>
int main(void) {
   float pie = 3.14;
   int radius = 6;
   printf("The radius of the circle is %d \n" , radius);
   float area = (float)(pie* radius * radius);
   printf("The area of the given circle is %f", area);
   return 0;
}