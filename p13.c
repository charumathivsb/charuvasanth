#include <stdio.h>

int main(void) {
	int a,c,rem=0;
	scanf("%d",&a);
	while(a>0)
	{
		c=a%10;
		rem=rem+(c*c);
		a=a/10;
	}
	printf("%d",rem);
	return 0;
}
