#include <stdio.h>
int main()
{
    int d[3]={100,200,300};
    ///以上是陣列的宣告，有給值
    ///以下是陣列的使用，把值拿出來
    ///printf("d[0]:%d\n", d[0]);
    ///printf("d[1]:%d\n", d[1]);
    ///printf("d[2]:%d\n", d[2]);
    ///電腦從0開始
    for(int i=0; i<3; i++){
        //printf("d[]:%d\n", d[i]);
        printf("d[%d]:%d\n", i, d[i]);
    }
}
