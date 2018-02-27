#include <stdio.h>
int main(void) {
            int n,k;
            scanf("%d %d",&n,&k);
            n=n^k;
            k=n^k;
            n=n^k;
            printf("%d %d",n,k);
        
	return 0;
}
