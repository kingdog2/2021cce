#include <stdio.h>
int main()
{   ///質數:只能被1和n本身整除!!!
    ///反話:只要有其他人可以整除,死掉了!!!
    int n;
    scanf("%d", &n);

    int bad=0; ///一開始,還沒有壞掉!
    for(int i=2;i<n;i++){ ///測 2....小於n
        if(n%i==0) bad=1; ///整除! 壞掉了!
    }   ///整除

    if(bad==0) printf("%d是質數",n);
    else printf("%d 壞掉了!!不是質數", n);
    ///把bad拿來用!!!
}
