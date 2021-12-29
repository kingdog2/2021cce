///迴文
#include <stdio.h>
#include <string.h>///字串要用strlen()
char line[3000];
int main()
{
	scanf("%s", line);
	int n= strlen(line);///字串長度
	int bad =0;
	for(int i=0;i<n;i++){
		if(line[i]!=line[n-1-i])bad=1;
	}
	if(bad==0)printf("YES");
	else printf("NO");
}
