#include<stdio.h>
changeF(int a1,int a2)
{
	int a;
	a=a1;
	a1=a2;
	a2=a;//a1,a2½»»»
}
changeT(int *p1,int *p2)
{
	int a;
	a=*p1;
	*p1=*p2;
	*p2=a;
}
int main()
{
	int m,n;
	printf("input m.n\n");
	scanf("%d%d",&m,&n);
	changeF(m,n);
	printf("%d %d ",m,n);
	changeT(&m,&n);
	printf("%d %d ",m,n);
}