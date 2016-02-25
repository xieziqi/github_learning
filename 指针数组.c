#include<stdio.h>
int main()
{
	int q[4]={5,6,7,8};
	int i=1;
	int **w;
	int *p[4]={&q[0],&q[1],&q[2],&q[3]};
	for(i=0;i<4;i++)
		printf("%d  ",p[i]);
	printf("2level £º\n");
	for(w=p;w<p+4;w++)
		printf("%3d",**w);
}