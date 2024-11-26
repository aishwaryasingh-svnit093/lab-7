#include<stdio.h>

//WRITE A FUNCTION TO CHECK WHETHER A NUMBER IS EVEN OR ODD

int check(int n);

int main(){
	
	int n;
	printf("enter a number: ");
	scanf("%d" , &n);
 check(n);
	
	return 0;
}

int check(int n){
	if (n%2==0){
		printf("it is even number");
	}
	else{
			printf("it is odd number");
		}
		
	}

