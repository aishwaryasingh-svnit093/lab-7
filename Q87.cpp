#include<stdio.h>
#include<string.h>

struct student {
	
	char name[100];
	int roll;
	int marks;
	
};

void info(struct student st[10]);

int main(){
	
	struct student st[10];
	for(int i=0;i<10;i++){
		
		printf("enter details of %d :\n" , i+1);
		
		printf("enter name: ");
		scanf("%s" , st[i].name);
		
		printf("enter roll:");
		scanf("%d" , &st[i].roll);
	
		printf("enter marks : ");
		scanf("%d" , &st[i].marks);
	}
	
	printf("\n\n\n");
	
	
	info(st);
	return 0;
}

void info(struct student st[10]){
	
for(int i=0;i<10;i++){

	if(st[i].marks >500){
		    printf("Name: %s\n", st[i].name);
            printf("Roll No: %d\n", st[i].roll);
            printf("Marks: %d\n", st[i].marks);
            printf("\n");
	}
}
	
}
