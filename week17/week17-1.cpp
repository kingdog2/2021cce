#include <stdio.h>
int main()
{
    int N=20030101;
    ///餘數 %10 得到個位數
    ///除法 /10 得到2003010
    printf("%d => %d %d\n", N, N/10, N%10);

    N = N/10;///變小
    printf("%d => %d %d\n", N, N/10, N%10);

    N = N/10;///變小
    printf("%d => %d %d\n", N, N/10, N%10);

    N = N/10;///變小
    printf("%d => %d %d\n", N, N/10, N%10);

    N = N/10;///變小
    printf("%d => %d %d\n", N, N/10, N%10);
}
