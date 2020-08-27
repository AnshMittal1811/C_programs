#include <stdio.h>

 
extern int count1;
 
void write_extern(void) {
   printf("The values given is due to a Extern storage class is %d\n", count1);
}

