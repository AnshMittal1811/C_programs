#include <stdio.h>

struct packed_struct {
   unsigned int f1:1;
   unsigned int f2:1;
   unsigned int f3:1;
   unsigned int f4:1;
   unsigned int type:2;
   unsigned int my_int:2;
} pack;

int main(){

	printf("Size of bit field structure: %d\n", sizeof(pack));
}
