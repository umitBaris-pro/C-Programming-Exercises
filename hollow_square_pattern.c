# include <stdio.h>
int main(){
	int i,j,n;
	// Get the size of the square from the user
	printf("Enter a number: ");
	scanf("%d",&n);
	// Outer loop for rows
	for(i=1; i<=n; i++){
		// Inner loop for columns
		for(j=1; j<=n; j++){
			// Logic to print stars only at borders:
            // i==1 (Top row), i==n (Bottom row)
            // j==1 (Left column), j==n (Right column)
			if(i==1 || i==n || j==1 || j==n){
			printf("* ");
	    	}
			else {
			printf("  ");// Print double space for the hollow part
	    	}
		}
		printf("\n");// Move to the next line after each row
	}
	
	
	return 0;
}
