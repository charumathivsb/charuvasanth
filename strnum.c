#include <stdio.h>

int main() {
              int i;
              char str[40];
              scanf("%s",&str);
              for(int i=1;str[i]!='\0';i++)
              {
              	if(str[i]>='0'&&str[i]<='9')
                        printf("%c",str[i]);
           
              }
           
              
	return 0;
}
