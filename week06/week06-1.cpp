#include <stdio.h>
int main(){
    int a=999;///髒
    int b=100;///白開水

    printf("a:%d b:%d\n", a, b);

    b = a; ///把a的水,倒到b裡面

    printf("a: %d b:%d\n", a, b);
}
