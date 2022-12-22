#include<stdio.h>
int main()
{
	int ti,k;
	scanf("%d",&ti);
	for(k=1;k<=ti;k++)
	{
	int i,n,rev=0,old;
	scanf("%d",&n);
	old=n;
	while(n>0)
	{
	i=n%10;
	rev=rev*10+i;
	n=n/10;
	}
	if(old==rev)
	printf("True
");
	else
	printf("False
");
    }
	
}