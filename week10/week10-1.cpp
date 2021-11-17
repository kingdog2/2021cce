///计借计Τ碭
#include <stdio.h>
int main()
{
	int m;
	scanf("%d", &m);
	int ans=0;///ansΤ碭借计
	for(int n=2;n<m;n++){

		int bad=0;
		for(int i=2;i<n;i++){
			if(n%i==0)bad=1;
		}
		if(bad==0){///т借计
            ans++;
            printf("%d ",n);
        }
	}
	printf("\n Ans: %d \n",ans);
}
