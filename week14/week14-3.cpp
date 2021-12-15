///向量乘法
#include <stdio.h>
int a[3]={10,20,30};
int b[3]={40,50,60};
int c[3];
int main()
{
    for(int i=0;i<3;i++){
        c[i]=a[i]*b[i];
    }

    int ans=0;///把他們全部加起來
    for(int i=0;i<3;i++){
        ans+=c[i];
    }
    printf("ans:%d\n", ans);
}
