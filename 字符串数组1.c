#include<stdio.h>
#include <string.h>
int main()
{
	int i=0,j=0;
	//�����ַ���ʼ����
	char c[10]={'a','b','c','\0'};								//�����ַ��������ʱ�������������С������Զ�����\0
	char d[]={'a','b','c','\0'};								//���Բ�ȷ�������С��󲻼�\0
																//���ַ����������ڳ�ʼ���Ļ������
	char a[30]={"hello world!"};
	char b[]={"hello world!"};
	char f[3][8]={"str1","str2","string3"};
	char e[25],e1[25],e2[25],e3[30];								//�ø�ʽ�����������ַ������Զ����\0	����%c������룬����Ҫ�����������߽�β��\0����%s���������
	scanf("%s%s%s",e,e1,e2);								//����пո���Ҫ�ֿ��ü�������ֱ������ݡ�������gets(e);
	scanf("%s",e3);
	gets(e3);
	printf("strlen c=%d sizeof c=%d\n",strlen(c),sizeof(c));//strlen() ������������ַ�����ʵ�ʳ��ȣ�������һ��'\0'������
															//��sizeof���ص��Ǳ�����������ռ���ڴ���������ʵ�ʳ��ȣ�����sizeof���Ǻ�����������һ����������strlen()�Ǻ�����
	printf("strlen d=%d sizeof d=%d\n",strlen(d),sizeof(d));//�����������ռ�ڴ�������sizeof����ֵ��ȷ�ġ�
															//�����ֻ����û�и�������ֵ���������ǲ����ģ�������׵�ַһֱ����ȥ��ֱ������'\0'ֹͣ��
	printf("strlen a=%d sizeof a=%d\n",strlen(a),sizeof(a));
	printf("strlen b=%d sizeof b=%d\n",strlen(b),sizeof(b));
	printf("e=%s %s %s\n",e,e1,e2);
	puts(e3);												//��ͬ��printf����%d����e3����
	for(i=0;i<3;i++)
	{
		for(j=0;j<8;j++)
		printf("%c",f[i][j]);
		printf("\n");
	}									
	printf("%d %d\n",strcmp(c,d),strcmp("dfe","dfw"));		//�ַ����ȽϺ���strcmp(str1,str2);����������Ƚ��ַ���ASCII�룬���Ȼ�����\0ֹͣ����ȷ���0,str1�ϴ󷵻���������str2�ϴ󷵻ظ�������
}