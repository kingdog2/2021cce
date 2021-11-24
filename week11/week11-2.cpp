///列印前N個質數
#include <stdio.h>
int a[10000000];
int main()
{
    printf("請問你想要幾個質數? (最大的質數不超過10000000,請給小一點)");
	int Q;///你想要幾個?Q個
	scanf("%d", &Q);

	int ans=0;
	for(int i=2;ans<Q;i++){//質數從2開始數
		if(a[i]==0){//沒被殺，是質數
			ans++;
			for(int k=i+i;k<10000000;k+=i){//殺掉兄弟!!!
				a[k]=1;
			}
			printf("%d ", i);
		}
	}
		///printf("%d\n", ans);
}
