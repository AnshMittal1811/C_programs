#include <stdio.h>

int g;

int main () {
  /* local variable declaration */
  int a, b;
  int c;
 
  /* actual initialization */
  a = 10;
  b = 20;
  c = a + b; 
  g = c + a + b;
  printf ("value of a = %d, b = %d, c = %d, and global variable g = %d\n", a, b, c, g);
 
  return 0;
}
