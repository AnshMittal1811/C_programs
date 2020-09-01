#include <stdio.h>

#define LENGTH 0x1f   
#define WIDTH  0xb

int main() {
	
   const char NEWLINE = '\n';
   int area;  
  
   area = LENGTH * WIDTH;
   printf("value of area (in Decimal) \t: %d", area);   
   printf("\nvalue of area (in Octal) \t: %o", area);
   printf("\nvalue of area (in Hexadecimal) \t: %x", area);

   printf("%c", NEWLINE);

   return 0;
}

