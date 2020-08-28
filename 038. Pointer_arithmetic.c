#include <stdio.h>
#include <stdlib.h>
const int MAX = 3;

int main () {

	
   /* local variable definition */
   int  var[] = {10, 100, 200};
   int  i, *ptr;
   int keyPressed;
   char choice;


   /* let us have array address in pointer */
   ptr = var;


   /* do loop execution */
   do {   		
   		printf("\n1. \tIncrementing a Pointer");
   		printf("\n2. \tDecrementing a Pointer");
   		printf("\n3. \tPointer Comparisons");   		
   		
   		printf("\n\n Please choose from the above choice options 1, 2, and 3\n");
   		scanf("%d", &keyPressed);

      	switch(keyPressed) {
	      	case 1 :
	         	for (i = 0; i < MAX; i++) {

				    printf("Address of var[%d] = %x\n", i, ptr );
				    printf("Value of var[%d] = %d\n", i, *ptr );
				
				    /* move to the next location */
				    ptr++;
				}

	         	break;
	      	case 2 :
	    	 	ptr = &var[MAX-1];
				for ( i = MAX; i > 0; i--) {
			
			      	printf("Address of var[%d] = %x\n", i-1, ptr );
			      	printf("Value of var[%d] = %d\n", i-1, *ptr );
			      	/* move to the previous location */
			      	ptr--;
			    }

	         	break;
	      	case 3 :
			  	while ( ptr <= &var[MAX - 1] ) {
				  	printf("Address of var[%d] = %x\n", i, ptr );
				  	printf("Value of var[%d] = %d\n", i, *ptr );
					/* point to the next location */
					ptr++;
					i++;
				}
	        	break;

	      	default :
	         	printf("\nInvalid key\n" );
	   }
	   
	   fflush(stdin);
	   printf("\n\nPress 'y' or 'Y' to continue operating..");
	   
	   scanf("%c", &choice);
   }
   while(choice == 'y' || choice == 'Y');
 
   return 0;
}
