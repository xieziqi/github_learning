#include<stdio.h>
int main()
{
	int a=0,b=0,d=0,i=0,c[10]={48,62,35,77,55,14,35,98,22,40};
	int change=1;
	for(a;a<10&&change;a++)
	{
		change=0;
		for(b=0;b<10;b++)
			if(c[b]<c[b+1])
			{
				d=c[b];
				c[b]=c[b+1];
				c[b+1]=d;
				change=1;
			}
	}
	printf("The result is:\n ");
	for(i=0;i<10;i++)
		printf("%d\t",c[i]);
}