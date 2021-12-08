#include <stdio.h>///為了printf()
#include <stdlib.h>///為了system()作業系統
int main()///定義main()函式
{
    printf("下面會秀出 system()函式的結果");

    system("dir");///呼叫 system()函式

    printf("Hello World");///呼叫 printf()函式
    return 0;
}
