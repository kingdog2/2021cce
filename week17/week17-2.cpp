///��֪k �t�X while(�j��)
#include <stdio.h>
int main()
{
    int N=20030101;
    while(N>0){///�P�_�٦���? �~����
        printf("%d => %d %d\n", N, N/10, N%10);
        N = N / 10;
    }
}
