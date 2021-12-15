///¯x°}­¼ªk
#include <stdio.h>
int a[10][10],b[10][10],c[10][10];
int main()
{
	int n;
	scanf("%d", &n);
	//Åª¤Ja
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			scanf("%d", &a[i][j]);
		}
	}
	//Åª¤Jb
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			scanf("%d", &b[i][j]);
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			c[i][j]=0;
			for(int k=0;k<n;k++){
                c[i][j] +=a[i][k]*b[k][j];
			}
			printf("%3d ", c[i][j]);
		}
		printf("\n");
	}
}
