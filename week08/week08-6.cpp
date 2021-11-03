#include <stdio.h>

int main( void )
{
   int i,j;
   int n;

   printf("請輸入大小:");
   scanf("%d",&n);
   printf("\n");//補一個跳行

//your code
	for(int i=1; i<=n; i++){//step01:鷹架,樓層
		//printf("%d ",i);//鷹架,第i層

		//step03:解決空格的問題,1樓1空格,2樓2空格
   		for(int k=1; k<=i; k++) printf(" ");

   		//02:有n顆星星, 老師用1行,方便你思考!!!
   		for(int k=1; k<=n; k++) printf("*");

  		printf("\n");//鷹架
   }
   return 0;
}
