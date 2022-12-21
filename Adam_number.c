#include<stdio.h>
int main()
{
    int n,s=0,sq1,sq2,s2=0;
    scanf("%d",&n);
    sq1=n*n;
    while(n!=0)
    {
        s=s*10+n%10;
        n/=10;
    }
    sq2=s*s;
    while(sq2!=0)
    {
        s2=s2*10+sq2%10;
        sq2/=10;
    }
    if(s2==sq1)
    printf("True");
    else
    printf("False");
}