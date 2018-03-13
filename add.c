#include<stdio.h>
int main()
{
	int a[5],i,sum=0;
	scanf("%d",&a);
	for(i=1;i<5;i++)
	scanf("\n%d",&a[i]);
	for(i=1;i<5;i++)
	{
		sum=sum+a[i];
	}
	printf("%d",sum);
	
	return 0;
}
