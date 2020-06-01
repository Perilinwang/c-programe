#include<stdio.h>
//同构数，平方后出现在左边
int is(int x)
{
	int a,b,c;
	a=x*x;
	if(x<10)
	{
		b=a%10;
		if(b==x)
			return 1;
		else 
			return 0;
	}
	else
	{
		b=a%100;
		if(b==x)
			return 1;
		else
			return 0;
	}
}
int main()
{
	int a,b;
	printf("输入一个一百以内的正数：");
	scanf("%d",&a);
	b=is(a);
	if(b==1)
		printf("Yes\n");
	else
		printf("No\n");
	return 0;
}