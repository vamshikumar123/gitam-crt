#include<stdio.h>
int main()
{
	int a,b,c,sum;
	scanf("%d%d%d,&a,&b,&c");
	sum=a+b+c;
	if(sum==180)
	printf("they are the angles of the triangle\n");
	else
	printf("they are not the angles of the triangle\n");
	return 0;
}
