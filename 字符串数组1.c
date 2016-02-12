#include<stdio.h>
#include <string.h>
int main()
{
	int i=0,j=0;
	//独立字符初始化。
	char c[10]={'a','b','c','\0'};								//定义字符串数组的时候若加上数组大小则最后自动加上\0
	char d[]={'a','b','c','\0'};								//可以不确定数组大小最后不加\0
																//将字符串常量放在初始化的花括号里。
	char a[30]={"hello world!"};
	char b[]={"hello world!"};
	char f[3][8]={"str1","str2","string3"};
	char e[25],e1[25],e2[25],e3[30];								//用格式符整体输入字符串。自动添加\0	若用%c逐个输入，则需要逐个输出，或者结尾加\0，用%s整体输出。
	scanf("%s%s%s",e,e1,e2);								//如果有空格，需要分开用几个数组分别存入组份。或者用gets(e);
	scanf("%s",e3);
	gets(e3);
	printf("strlen c=%d sizeof c=%d\n",strlen(c),sizeof(c));//strlen() 函数计算的是字符串的实际长度，遇到第一个'\0'结束。
															//而sizeof返回的是变量声明后所占的内存数，不是实际长度，此外sizeof不是函数，仅仅是一个操作符，strlen()是函数。
	printf("strlen d=%d sizeof d=%d\n",strlen(d),sizeof(d));//如果不声明所占内存数，则sizeof是数值正确的。
															//如果你只定义没有给它赋初值，这个结果是不定的，它会从首地址一直找下去，直到遇到'\0'停止。
	printf("strlen a=%d sizeof a=%d\n",strlen(a),sizeof(a));
	printf("strlen b=%d sizeof b=%d\n",strlen(b),sizeof(b));
	printf("e=%s %s %s\n",e,e1,e2);
	puts(e3);												//等同归printf（“%d”，e3）；
	for(i=0;i<3;i++)
	{
		for(j=0;j<8;j++)
		printf("%c",f[i][j]);
		printf("\n");
	}									
	printf("%d %d\n",strcmp(c,d),strcmp("dfe","dfw"));		//字符串比较函数strcmp(str1,str2);从左到右逐个比较字符的ASCII码，不等或遇到\0停止，相等返回0,str1较大返回正整数，str2较大返回负整数。
}