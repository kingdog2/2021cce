///泡泡排序法(1)比大小,不對就交換 a[i] vs. a[i+1] 左右
//(2)拍照的攝影師,從左到右巡  for(int i=0;i<100-1;i++)
//(3)重複做很多次  for(int k=0;k<100-1;k++)

#include <stdio.h>
int a[100];
int main()
{
	//Input: 100個數字
    for(int i=0; i<100; i++){
    	scanf("%d", & a[i]);
    }

    for(int k=0;k<100-1;k++){ // (3)
        for(int i=0;i<100-1;i++){ //(2)
            if( a[i] > a[i+1]){ //(1)//比大小,不對就交換
                int temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }//a[i] vs. a[i+1] 左右
        }
    }
    for(int i=0; i<100; i++){//最後,Output印答案
        	printf("%d\n", a[i]);
    }
}
