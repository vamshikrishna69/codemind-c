#include<stdio.h>
int main()
{
    int n,p=1,s=0;
    scanf("%d",&n);
    while(n>0)
    {
        p=p*(n%10);
        s=s+n%10;
        n/=10;
    }
    if(s==p)
    printf("Spy Number");
    else
    printf("Not Spy Number");
}