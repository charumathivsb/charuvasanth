#include<stdio.h>
int main()
{
	int a,mul=1,s;
	scanf("%d",&a);
	while(a>0)
	{
		s=a%10;
		mul=mul*s;
		a=a/10;
	}
	printf("%d",mul);
	
	return 0;
}
