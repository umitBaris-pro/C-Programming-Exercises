# include <stdio.h>
int main(){
	int i,j,N,isPrime;
	int sum=0;
	printf("Enter a positive integer N:");
	scanf("%d",&N);
	printf("Prime numbers between 2 and %d are:\n ", N);
	for(i=2; i<=N; i++){
		isPrime=1;
		for(j=2; j<=i/2; j++){
			if(i%j==0){
				isPrime=0;
				break;
			}
		}
			if(isPrime==1){
		printf("%d ",i);
		sum+=i;	
	    }
	}
	printf("\nSum of primes up to %d is: %ld\n", N, sum);
	return 0;
}
