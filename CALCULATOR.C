#include <stdio.h>

int main(void) {
              int n1,n2;
              char s;
              scanf("%d%c%d",&n1,&s,&n2);
              switch (s)
              {
              case '/':
                   printf("%d",n1/n2);
                   break;
              case '%':
                   printf("%d",n1%n2);
                   break;
              }
	// your code goes here
	return 0;
}
