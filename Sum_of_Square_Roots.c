#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,r;
    float k,s=0;
    scanf("%d %d",&n,&r);
    for(i=n;i<=r;i++)
    {
        k=sqrt(i);
        s=s+k;
    }
    printf("%.2f",s);
}