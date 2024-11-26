#include<stdio.h>

//WRITE A FUNCTION EXCHANGE TO INTERCHANGE THE VALUE OF TWO VARIALBLE ,SAY X AND Y

int check(int a , int b);

int main(){
	
	int a,b;
	printf("enter a : ");
	scanf("%d", &a);
	printf("enter b: ");
	scanf("%d" , &b);
	check(a,b);
	
	return 0;
}

int check(int a , int b){
	int temp;
	temp=a;
	a=b;
	b=temp;
	printf("new a :%d \t new b: %d" , a,b);
	return a,b;
}







