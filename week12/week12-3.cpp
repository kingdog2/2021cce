///Selection Sort ��ܱƧǪk
///�R�x�W�n�d�̤p��!!!!!!!
#include <stdio.h>
int a[10]={3,0,1,8,7,2,5,4,6,9};
int main()
{
    ///�C�X�}�C
    for(int i=0;i<10;i++)printf("%d ", a[i]);
    printf("\n");

    ///a[0]��a[1],a[2]...��X�p�洫�A�qa[1]�X�o��a[2],a[3]...��
    for(int i=0;i<10;i++){
        for(int j=i+1;j<10;j++){
            if(a[i]>a[j]){
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    ///�C�X�}�C
    for(int i=0;i<10;i++)printf("%d ", a[i]);
    printf("\n");
}
