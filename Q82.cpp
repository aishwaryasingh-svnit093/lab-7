#include<stdio.h>
int printNCR(int n,int r);
int main()
{
    int p,q;
    printf("enter p");
    scanf("%d",&p);
    printf("enter q");
    scanf("%d",&q);
    printf("%dC%d=%d", p,q,printNCR(p,q));
    return 0;
}
int printNCR(int n,int r)
{
    //to print ncr
    //p=n!
    //q=r!
    //s=(n-r)!
    int p=1,q=1,s=1; 
    for(int i=1;i<=n;i++)
    {
        p=p*i;

    }
    for(int k=1;k<=r;k++)
    {
        q=k*q;
    }
    for(int t=1;t<=n-r;t++)
    {
        s=s*t;

    }
    return p/(s*q);

}
