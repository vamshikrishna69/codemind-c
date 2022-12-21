#include<stdio.h>
int main()
{
    int n,p,s=0;
    scanf("%d",&n);
    p=n;
    while(n>0)
    {
        s=s*10+n%10;
        n/=10;
    }
    if(p==s)
    printf("True");
    else
    printf("False");
}