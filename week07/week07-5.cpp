///了解 for(迴圈)
#include <stdio.h>
int main()
{
    int i; ///1973年發明者寫法
    for(i = 0; i<=3; i++){
        printf("有幾次呢?\n");
    }///課本的寫法不好!!!

    ///1998年新版的寫法
    for(int i=0; i<3; i++){
        printf("老師推薦的寫法,有幾次?\n");
    }///會跑3次
}
