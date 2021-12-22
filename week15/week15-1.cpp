///т程そ计
#include <stdio.h>
int main()
{
	int a,b;
	scanf("%d %d", &a, &b);
	///璽计单タ计
	if(a<0)a=-a;
	if(b<0)b=-b;

	int ans=1;
	for(int i=1;i<=a;i++){
		if(a%i==0 && b%i==0) ans=i;
	}
	printf("%d", ans);
	return 0;
}
