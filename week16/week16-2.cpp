///字串輸入輸出
#include <stdio.h>
char line[100];

int main()
{
    printf("Please input a line: ");
    scanf("%s", line);///只讀到空格為止

    printf("%s\n", line);
}
