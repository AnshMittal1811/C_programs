#include <stdio.h>

#define MAX(x,y) ((x) > (y) ? (x) : (y))

int main(void) {
   printf("Max between 20 and 100 is %d\n", MAX(100, 20));  
   return 0;
}

