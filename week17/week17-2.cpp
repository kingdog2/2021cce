///剝皮法 配合 while(迴圈)
#include <stdio.h>
int main()
{
    int N=20030101;
    while(N>0){///判斷還有皮? 繼續剝皮
        printf("%d => %d %d\n", N, N/10, N%10);
        N = N / 10;
    }
}
