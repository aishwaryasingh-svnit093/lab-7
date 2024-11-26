#include<stdio.h>
#include<string.h>
int printline(char c[]);
int main()
{
    char b[100];
    printf("enter word: ");
    gets(b);
    printf("%d",printline(b));
    return 0;
}
int printline(char c[])
{
    int x;
    x=strlen(c);
    return x;
    

}
