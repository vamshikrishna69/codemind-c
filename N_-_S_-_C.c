#include<stdio.h>
int main()
{
    int a,b,n,n2,n3,i;
    scanf("%d %d",&a,&b);
    for(i=a+1;i<b;i++)
    {
        printf("%d %d %d
",i,i*i,i*i*i);
    }
}