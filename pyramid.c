# include <stdio.h>
int main(){
	int i,j,n;
	printf("Enter a number: ");
	scanf("%d",&n);
	// Outer loop for rows
	for(i=1; i<=n; i++){
		// Loop 1: Print spaces (decreasing order)
        // Logic: For row 'i', print 'n-i' spaces
		for(j=1; j<=n-i; j++){
	    	printf(" ");
	    }
	    // Loop 2: Print stars (increasing order)
        // Logic: For row 'i', print 'i' stars with a space
		for(j=1; j<=i; j++){	
			printf("* ");
	}
   
	printf("\n");// Move to the next line after each row
  }  
	return 0;
}
