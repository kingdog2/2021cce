///讀入
#include <stdio.h>
char line[300];
int main()
{
    printf("請照著打: -256 0.0000 10010101010010011101\n");
    int n;
    float f;
    scanf("%d %f %s", &n, &f, line);

    printf("我們讀到了整數:%d\n", n);
    printf("我們讀到了浮點數:%f\n", f);
    printf("很長很長的字串:%s\n", line);
}
