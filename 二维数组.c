#include<stdio.h>
int main()
{
	int i,j;
	int a[3][4]={{8,7,6,5},{1,2,3,4},{9,7,6,5}};
	int b[3][4]={{1,2,3},{4,5},{6}};
	printf("¾ØÕóA£º\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
			printf("%5d",a[i][j]);
		printf("\n");
	}
	printf("¾ØÕóB£º\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
			printf("%5d",b[i][j]);
		printf("\n");
	}
	printf("A-B\n");
		for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
			printf("%5d",a[i][j]-b[i][j]);
		printf("\n");
	}
}