#include<stdio.h>

struct book {
	
	char title[100];
	char author[100];
	float price;
	
};

void bookinfo(struct book info);

int main(){
	
	struct book info;
	printf("enter book details :\n");
	printf("name of book : ");
	scanf("%s" , &info.title);
	printf("author of book : ");
	scanf("%s" , &info.author);
	printf("price of book : ");
	scanf("%f" , &info.price);
	
	bookinfo(info);
}

void bookinfo(struct book info){
	
	printf("title of book : %s\n" , info.title);
	printf("author of book : %s\n" , info.author);
	printf("price of book : %f\n" , info.price);
	
}
