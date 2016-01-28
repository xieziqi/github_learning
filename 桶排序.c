#include<stdio.h>
int main()
{
	int a[11],b,t,u;
	for(b=0;b<11;b++)
		a[b]=0;
	for(b=0;b<5;b++)
	{
		scanf("%d",&t);
		a[t]++;
	}
	for(b=1;b<11;b++)
	{
		for(u=0;u<a[b];u++)
			printf("%d",b);

	}
}
