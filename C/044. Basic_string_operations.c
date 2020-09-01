#include <stdio.h>
#include <string.h>

int main () {

   char str1[12] = "Hello";
   char str2[12] = "World";
   char str3[12];
   char *ch, *ch1; 
   int  len, diff, i ;

   /* copy str1 into str3 */
   strcpy(str3, str1);
   printf("strcpy( str3, str1) :  %s\n", str3 );
   
   /* compare string str1 and str2*/
   diff = strcmp(str1, str2);
   printf("strcmp(str1, str2) :  %d\n", diff );
   
   /* Pointer to the first occurence of char ch in string 1*/
   ch = strchr(str1, 'l');
   printf("strchr(str1, 'l') :  #%d\n", ch );
   printf("char at position #%d: %c\n", ch, *ch );

   /* concatenates str1 and str2 */
   strcat( str1, str2);
   printf("strcat( str1, str2):   %s\n", str1 );
   
   /*Returns a pointer to the first occurrence of string s2 in string s1*/
   ch1 = strstr( str1, str2);
   printf("strstr(str1, str2) :  #%d\n", ch1 );
   printf("string at position #%d: ", ch1);
   for (i = 0; i < strlen(str2); i++) {
	    printf("%c", *ch1 );
	    ch1++;
	}

   /* total lenghth of str1 after concatenation */
   len = strlen(str1);
   printf("\nstrlen(str1) :  %d\n", len );
  
   return 0;
}
