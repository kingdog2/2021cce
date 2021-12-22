///Week15-5.cpp step03-3

///函式呼叫函式 (黑盒子)

#include <stdio.h>

///這個box會把答案算出來

int box(int a, int b)

{   ///  老大   老二

    int ans;

    if(a==0){

      ans=b;

      return ans;

    }

    if(b==0){

      ans=a;

      return ans;

    }

    ans = box( b, a%b );

    return ans;

} ///   再問 新老大 新老二

int main()

{

    int a=987654321, b=123456789;

    //scanf("%d %d", &a, &b);不要讀

    int ans = box(a,b);

    printf("%d", ans);

}
