#include<stdio.h>
int main()
{

    int n,s=0,p=1,d;
    scanf("%d",&n);
    while(n>0)
    {
        p=p*(n%10);
        s=s+n%10;
        n/=10;
    }
    printf("%d",p-s);
}