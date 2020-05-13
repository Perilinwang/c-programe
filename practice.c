#include<stdio.h>
#include<stdlib.h>
void swap(int x,int y)
{
	int swap;
	swap=x;
	x=y;
	y=swap;
}
int main()
{
  int a=1,b=11;
  printf("a=%d\nb=%d\n",a,b);
  printf("after swap:");
  swap(a,b);
  printf("  a=%d\nb=%d\n",a,b);
  return 0;

}
