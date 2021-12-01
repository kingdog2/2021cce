///Selection Sort 選擇排序法
///舞台上要留最小的!!!!!!!
#include <stdio.h>
int a[10]={3,0,1,8,7,2,5,4,6,9};
int main()
{
    ///列出陣列
    for(int i=0;i<10;i++)printf("%d ", a[i]);
    printf("\n");

    ///a[0]跟a[1],a[2]...比出小交換再從a[1]出發跟a[2],a[3]...比
    for(int i=0;i<10;i++){
        for(int j=i+1;j<10;j++){
            if(a[i]>a[j]){
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    ///列出陣列
    for(int i=0;i<10;i++)printf("%d ", a[i]);
    printf("\n");
}
