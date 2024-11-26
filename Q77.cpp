#include<stdio.h>
void printpalindrome(int n);
int main()
{
int n;

printf("enter n");
scanf("%d",&n);

printpalindrome(n);
    return 0;
}

void printpalindrome(int n)
{
    int b,sum=0;
    int c=n;
    while(n!=0)
    {
        
        b=n%10;
        sum=sum*10+b;
        n=n/10;
    }
    printf("%d",sum);

    if(sum==c)
    {
        printf("no is palindrome");
    }
    else{
        printf("no  is not palindrome");
        }
   
    
}
