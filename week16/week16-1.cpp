///字串
#include <stdio.h>
int a[100];///整數的陣列
char s[20];///字母的陣列，字串

int main()
{
    printf("請輸入你的名子:");
    scanf("%s", s);///沒有&
    ///Q: scanf("%d", &n);

    printf("你剛剛輸入:%s\n", s);
}
