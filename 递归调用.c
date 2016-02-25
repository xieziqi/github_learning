#include<stdio.h>
long int fac(int n); 
int main()
{	

	int n;
	printf("Input a number");
	scanf("%d",&n);
	printf("%d",fac(n));
}
long int fac(int n)
{
	long int f;
	if(n==0)
	return 1;
	f=fac(n-1)*n;
	return(f);
}//if n=4  ;fac(4)=fac(3)*4=fac(2)*4*3=fac(1)*4*3*2=fac(0)*4*3*2*1=1*4*3*2*1;