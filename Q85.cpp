#include<stdio.h>
char printchar(char c);
int main()
{
    char c;
    printf("enter c");
    scanf("%c",&c);
    printchar(c);
    return 0;

}
char printchar(char c)
{
    if(c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
    {
        printf("%c is vowel",c);
    }
    else{
         printf("%c is not vowel",c);
        
    }
}
