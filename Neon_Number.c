#include<stdio.h>
int main()
{
   int n,sq,d,s=0;
   scanf("%d",&n);
   sq=n*n;
   while(sq>0)
   {
       d=sq%10;
       s=s+d;
       sq=sq/10;
   }
   if(s==n)
   printf("Neon Number");
   else
   printf("Not Neon Number");
}