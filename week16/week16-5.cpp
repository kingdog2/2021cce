///���R�r��A�̭����X��0�X��1
#include <stdio.h>
char line[300]="100101010100100111011101111010111001010111111100011101111";
int main()
{
    int ans=0;
    ///int i=0;
    for(int i=0;line[i]!='\0';i++){
    ///while(line[i]!='\0'){
        if(line[i]=='1')ans++;

    ///    i++;
    }
    printf("��%d��1\n", ans);
}
