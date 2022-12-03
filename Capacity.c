#include<stdio.h>
int main()
{
    int s,t,b,c,tc;
    scanf("%d%d%d",&s,&t,&b);
    c=2*s*t*b*512;
    tc=c/1024;
    printf("%dkb",tc);
}