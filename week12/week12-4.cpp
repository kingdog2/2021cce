#include <stdio.h>
int a[100];///在外面，比較大，且會幫忙清為0
int main()
{ ///(1)Input
	for(int i=0;i<100;i++){
		scanf("%d", &a[i]);
	}
	///Selection Sort原則
	for(int i=0;i<100;i++){///左手i,小的留在i
		for(int j=i+1;j<100;j++){///右手j
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
