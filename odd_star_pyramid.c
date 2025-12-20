# include <stdio.h>
int main(){
	int i,j,n;
	printf("Enter a number: ");
	scanf("%d",&n);
	// Outer Loop: Controls the rows
	for(i=1; i<=n; i++){
		// Inner Loop 1: Print spaces
		for(j=1; j<=n-i; j++){
	    	printf("  ");
	    }
	    // Inner Loop 2: Print stars (Odd number of stars: 1, 3, 5...)
        // Logic: 2*i - 1 gives the sequence 1, 3, 5, 7...
		for(j=1; j<=2*i-1; j++){	
			printf("* ");
	}
	printf("\n");// Move to the next line 
  }  
	return 0;
}
