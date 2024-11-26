#include<stdio.h>

int fib(int n);

int main(){
	
	int n;
	printf("enter n:");
	scanf("%d" , &n);
	printf("the n fibonacci numbers \t");
	printf("\n0\n1\n");
	for(int i=2;i<=n;i++){
	 printf("%d \n" , fib(i));
	}
	
	
	
	return 0;
}

int fib(int n){
	 
	 if(n==0){
	 	return 0;
	 }
	if(n==1){
		return 1;
	}
	
	int fib1=fib(n-1);
	int fib2=fib(n-2);
	int fibn=fib1+fib2;
	
	return fibn;
	
	
}
