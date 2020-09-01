#include <stdio.h>

#define  message_for(a, b)  \
   printf(#a " and " #b ": We love you!\n")
   
#if !defined (MESSAGE)
   #define MESSAGE "You wish!"
#endif

#define tokenpaster(n) printf ("\ntoken" #n " = %d", token##n)

int main(void) {
	
   int token34 = 40;
   
   printf("File :%s\n", __FILE__ );
   printf("Date :%s\n", __DATE__ );
   printf("Time :%s\n", __TIME__ );
   printf("Line :%d\n", __LINE__ );
   printf("ANSI :%d\n", __STDC__ );
   
   message_for(Carole, Debra);
   
   printf("Here is the message: %s\n", MESSAGE);
   
   tokenpaster(34);
   
   return 0;
}

