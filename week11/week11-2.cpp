///�C�L�eN�ӽ��
#include <stdio.h>
int a[10000000];
int main()
{
    printf("�аݧA�Q�n�X�ӽ��? (�̤j����Ƥ��W�L10000000,�е��p�@�I)");
	int Q;///�A�Q�n�X��?Q��
	scanf("%d", &Q);

	int ans=0;
	for(int i=2;ans<Q;i++){//��Ʊq2�}�l��
		if(a[i]==0){//�S�Q���A�O���
			ans++;
			for(int k=i+i;k<10000000;k+=i){//�����S��!!!
				a[k]=1;
			}
			printf("%d ", i);
		}
	}
		///printf("%d\n", ans);
}
