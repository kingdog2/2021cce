#include <stdio.h>
int a[100];///�b�~���A����j�A�B�|�����M��0
int main()
{ ///(1)Input
	for(int i=0;i<100;i++){
		scanf("%d", &a[i]);
	}
	///Selection Sort��h
	for(int i=0;i<100;i++){///����i,�p���d�bi
		for(int j=i+1;j<100;j++){///�k��j
			if(a[i]>a[j]){
				int temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
  ///(2)Output
  for(int i=0;i<100;i++){
  	printf("%d\n", a[i]);
  }
}
