#include <stdio.h>

void printStar(int n)///發明函式
{
    for(int i=0;i<n;i++) printf("*");
}///因為void不回傳, 所以不用return 0
int main()///定義main()函式
{
   printStar(7);///呼叫call,前提是它有先定義好
}

