///week08-4.cpp step03-1
#include <stdio.h>
int main()
{///�T����
    printf("1: *\n");///1��,1���P
    printf("2: **\n");///2��,2���P
    printf("3: ***\n");///3��,3���P
    printf("4: ****\n");///4��,4���P
    printf("5: *****\n");///5��,5���P
    printf("6: ******\n");///6��,6���P
    ///���׶V���A�{���V�h...

    int n=6;
    for(int i=1; i<=n; i++){///���إߥX�Ӽh
        printf("%d: ",i);
        for(int k=1; k<=i; k++) printf("*");///��i��,��i���P
        printf("\n");
    }
}
