#include <stdio.h>
#include "Extern_Storage_Classes.c"

/* function declaration */
void func(void);
extern void write_extern(); 

int count1;
static int count = 5; /* global variable */
 
main() {
   count1 = 6;
   
   
   auto int a = 5;
   register int miles;
   printf("Storage size for Auto storage class : %d bytes\n", sizeof(miles));
   printf("Storage size for Register storage class: %d bytes\n", sizeof(miles));
   printf("The values given below is due to a Static storage class\n");
   while(count--) {
      func();
   }
   
   write_extern();
   
   return 0;
}

/* function definition */
void func( void ) {

   static int i = 5; /* local static variable */
   i++;

   printf("i is %d and count is %d\n", i, count);
}

