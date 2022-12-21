#include<stdio.h>
#include<math.h>
int main()
{
    int n,d,i,k,max=-999;
    scanf("%d",&n);
    d=log10(n)+1;
    i=1;
    while(i<=d)
    {
        k=n%10;
        if(k>max)
        max=k;
        n/=10;
        i++;
    }
    printf("%d",max);
}