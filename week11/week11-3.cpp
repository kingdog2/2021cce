///�w�w�ƧǪk
///int a[10]={4,5,6, 1,2,3, 7,8,9, 0};///(1)�}�C
///int a[10]={0, 3, 2, 1, 4, 5, 6, 7, 8, 9};///�Z�Ʀn��
int a[10]={9, 8, 7, 6, 5, 4, 3, 2, 1, 0};///�̮t�����p
#include <stdio.h>
int main()
{
    for(int i=0; i<10; i++)printf("%d ", a[i]);
    printf("\n");///��{�b���}�C�C�X���[��

    for(int k=0;k<9;k++){
        for(int i=0;i<10-1;i++){///�j���f�]
            if( a[i] > a[i+1]){///(2)�L�ӷQ,���j,�k�p,�N�洫
                int temp=a[i];///(3)�洫
                a[i]=a[i+1];
                a[i+1]=temp;
            }
        }
        for(int i=0; i<10; i++)printf("%d ", a[i]);
        printf("\n");///��{�b���}�C�C�X���[��
    }
}
