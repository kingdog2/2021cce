///剝皮配合加總
#include <stdio.h>
int main()
{
    int N=1234567892;
    int sum=0;
    while(N>0){
        sum +=N%10;
        N=N/10;
    }
    printf("%d\n", sum);
}
